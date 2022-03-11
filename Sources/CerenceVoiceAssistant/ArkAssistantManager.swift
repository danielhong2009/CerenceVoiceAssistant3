import Ark
import ArkNautilus
import Combine

struct Language: Identifiable {
    var id = UUID()
    var name: String
}


/// It is implementing VoiceAssistant  to provide Voice assistant lifecycle methods with compltion handler.
/// Initilizer require an optional parameter ArkAssistant.Config. You are able to customer it.
/// You can change configuration of Voice assistant via setter methods of specific parameters.
public class ArkAssistantManager: NSObject, ObservableObject, VoiceAssistant {
    let config: ArkAssistant.Config

    @Published var voiceAssistantState = ArkAssistantState.uninitialized
    var hmiModel = HMIModel()
    var systemCallList = CommandList(commands: [])
    @Published var state: DialogState?
    @Published var event: DialogEvent?
    @Published var promptState: TTSPromptState?
    
    public var VAStatePublisher: Published<ArkAssistantState>.Publisher { $voiceAssistantState }
    public var statePublisher: Published<DialogState?>.Publisher { $state }
    public var eventPublisher: Published<DialogEvent?>.Publisher { $event }
    public var promptStatePublisher: Published<TTSPromptState?>.Publisher { $promptState }

    private let assistant = ArkAssistant()
    private let input = AudioQueueInput()
    private let output = AudioQueueTTSOutput()

    // MARK: - HMI Listener
    private var hmiDelegate = HmiDelegateImp()
    private var notificationFilterDelegateImp = NotificationFilterDelegateImp()
    private var hmiDataFilterDelegateImp = NautilusHMIDataFilterDelegateImp()

    // MARK: - Controller
    private var controller = CerenceController()
    
    private var prompter: AssistantPrompter? = nil
    private var selectedLanguageIndex = 0

    var cancellables = [AnyCancellable]()
    
    public var workoutEngineDelegate: WorkoutEngineDelegate? {
        willSet {
            controller.workoutEngineDelegate = newValue
        }
    }

    public init(config: ArkAssistant.Config = ArkConfiguration().config) {
        self.config = config
        super.init()
        // Setup HMI Delegate
        hmiDelegate.hmiDelegate = hmiDataFilterDelegateImp
        hmiDelegate.notificationDelegate = notificationFilterDelegateImp

        // Setup Assistant
        assistant
            .register(hmiDelegate: hmiDelegate)
            .register(ttsOutput: self.output)
            .register(audioInputDelegate: self)
            .register(speechAudioDelegate: self)

        // Observe State
        notificationFilterDelegateImp.hmiModel = hmiModel
        hmiDataFilterDelegateImp.commandList = systemCallList

        let statePublisher = notificationFilterDelegateImp.statePublisher()
        let eventPublisher = notificationFilterDelegateImp.eventPublisher()

        statePublisher
            .receive(on: DispatchQueue.main)
            .map { dialogNotification -> DialogState? in
                //print("dialogStateOutput:\(dialogNotification)")
                let dialogState = dialogNotification.params["current_state"] as? String ?? ""
                switch dialogState {
                case "LISTENING_WUW" :
                    return .listeningWakeUpWord
                case "PROCESSING" :
                    return .processing
                case "LISTENING_CMD" :
                    return .listeningCommand
                case "CAPTURING" :
                    return .capturing
                case "IDLE" :
                    return .idle
                default :
                    return nil
                }
            }
            .assign(to: \.state, on: self)
            .store(in: &cancellables)

        eventPublisher
            .receive(on: DispatchQueue.main)
            .map { dialogNotification -> DialogEvent? in
                //print("dialogEventOutput:\(dialogNotification)")
                let dialogState = dialogNotification.params["event"] as? String ?? ""
                switch dialogState {
                case "PROMPT_BEGIN" :
                    return .promptBegin
                case "PROMPT_END" :
                    return .promptEnd
                case "SNOOZING_BEGIN" :
                    return .snoozingBegin
                case "SNOOZING_END" :
                    return .snoozingEnd
                case "SESSION_BEGIN" :
                    return .sessionBegin
                case "SESSION_END" :
                    return .sessionEnd
                case "CONVERSATION_BEGIN" :
                    return .conversationBegin
                case "CONVERSATION_END" :
                    return .conversationEnd
                default :
                    return nil
                }
            }
            .assign(to: \.event, on: self)
            .store(in: &cancellables)
        
        // Setup Input and Output
        self.input.delegate = self
    }

    private var availableLanguages: [Language] {
        do {
            return try ArkAssistant.getAvailableTTSLanguages(dataPath: self.config.dataPath).compactMap {
                if $0 == "eng-USA" {
                    return Language(name: $0)
                }
                return nil
            }
        }
        catch {
            return [Language]()
        }
    }
    
    private var currentLanguage: Language? {
        guard selectedLanguageIndex < availableLanguages.count else {
            return nil
        }
        return availableLanguages[selectedLanguageIndex]
    }
    
    private var currentVoice: ArkAssistant.VoiceConfig? {
        guard let language = currentLanguage else {
            return nil
        }
        return try? ArkAssistant.getAvailableTTSVoices(dataPath: config.dataPath, language: language.name).first
    }
    
    func feed(audioData bytes: UnsafeMutableRawPointer, size: UInt32) {
        guard self.voiceAssistantState == .running else {
            return
        }
        do {
            try self.assistant.feed(audioData: bytes, size: size)
        } catch {
            NSLog("Failed to feed data.")
        }
    }

    public func initialize(completion: @escaping (Bool, Error?) -> Void) {
        if self.voiceAssistantState == .uninitialized {
            do {
                if let voice = self.currentVoice {
                    config.voice = voice
                }
                
                try assistant.initialize(config: config, controller: controller)
                DispatchQueue.main.async {
                    self.voiceAssistantState = .initialized
                    completion(true, nil)
                }
            } catch {
                NSLog(error.localizedDescription)
                completion(false, error)
            }
        }
    }

    public func shutDownVoiceAssistant(completion: @escaping (Bool, Error?) -> Void) {
        do {
            try assistant.tearDown()
            self.prompter = nil
            DispatchQueue.main.async {
                self.voiceAssistantState = .uninitialized
                completion(true, nil)
            }
            self.event = nil
            self.state = nil
            self.systemCallList.removeAll()
        } catch {
            NSLog(error.localizedDescription)
            completion(false, error)
        }
    }

    public func startVoiceAssistant(completion: @escaping (Bool, Error?) -> Void) {
        do {
            try assistant.startVoiceAssistant(wakeUpMode: .wuwListening, bargeInOn: false)
            DispatchQueue.main.async {
                self.voiceAssistantState = .running
                completion(true, nil)
            }
        } catch {
            NSLog(error.localizedDescription)
            completion(false, error)
        }
    }

    public func stopVoiceAssistant(completion: @escaping (Bool, Error?) -> Void) {
        do {
            try assistant.stopVoiceAssistant()
            self.prompter = nil
            DispatchQueue.main.async {
                self.voiceAssistantState = .initialized
                completion(true, nil)
            }
        } catch {
            NSLog(error.localizedDescription)
            completion(false, error)
        }
    }
    
    func onPromptStateChange(state: TTSPromptState) {
        promptState = state
        NSLog("onPromptStateChange: \(state.rawValue)")
    }
    
    func onPromptError(error: Error) {
        NSLog("onPromptError: \(error.localizedDescription)")
    }
    
    public func playTextToSpeech(ttsText: String, completion: @escaping (Bool, Error?) -> Void) {
        if let voice = self.currentVoice {
            do {
                if self.prompter == nil {
                    self.prompter = try assistant.createPrompter()
                }
                try self.prompter?.play(text: ttsText, shouldInterrupt: true, voiceID: voice.voiceId, domainName: voice.availableDomains.first ?? "", onStateChange: onPromptStateChange, onError: onPromptError)
            } catch {
                NSLog(error.localizedDescription)
                completion(false, error)
            }
            completion(true, nil)
         } else {
            completion(false, nil)
        }
    }
    
    public func sendAppEvent(event: Event, completion: @escaping (Bool, Error?) -> Void) {
        do {
            try assistant.send(appEvent: event)
            completion(true, nil)
        } catch {
            NSLog(error.localizedDescription)
            completion(false, nil)
        }
    }
}

extension ArkAssistantManager: ArkAssistant.AudioInputDelegate {
    public func assistant(didStartRecording assistant: ArkAssistantSpec) {
        if self.input.running {
            self.input.resume { _ in }
        } else {
            self.input.start { _ in }
        }
    }

    public func assistant(didStopRecording assistant: ArkAssistantSpec, transient: Bool) {
        self.input.pause { _ in }
    }
}

extension ArkAssistantManager: ArkAssistant.SpeechAudioDelegate {
    public func assistant(_ engine: ArkAssistantSpec, didReceiveCommand data: UnsafePointer<CChar>, size: UInt32, lastChunk isLastChunk: Bool) {
    }

    public func assistant(_ engine: ArkAssistantSpec, didReceiveWakeUp data: UnsafePointer<CChar>, size: UInt32, lastChunk isLastChunk: Bool) {
    }

    public func assistant(_ engine: ArkAssistantSpec, didReceiveGenericSentence data: UnsafePointer<CChar>, size: UInt32, lastChunk isLastChunk: Bool) {
    }
}

extension ArkAssistantManager: AudioInputDelegate {
    public func inputWillStart(_ input: AudioInput) -> Error? {
        do {
            try ArkAudioSessionManager.shared.activateAudioSession()
        } catch {
            return error
        }
        return nil
    }

    public func input(_ input: AudioInput, didReceive bytes: UnsafeMutableRawPointer, size: UInt32) {
        feed(audioData: bytes, size: size)
    }
}
