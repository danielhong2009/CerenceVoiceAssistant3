//
//  CerenceVoiceAssistantInterface.swift
//  CerenceVoiceAssistant
//
//  Created by Cerence on 2022-02-28.
//

import Ark

public enum ArkAssistantState {
    case initialized, running, uninitialized
}

public enum DialogState {
    case idle, capturing, processing, listeningCommand, listeningWakeUpWord
}

public enum DialogEvent {
    case promptBegin, promptEnd, sessionBegin, sessionEnd, snoozingBegin, snoozingEnd, conversationBegin, conversationEnd
}

public protocol VoiceAssistant {
    /// It provides a publisher for notifying the state change of the Cerence's Voice Assistant.
    var VAStatePublisher: Published<ArkAssistantState>.Publisher { get }
    /// It provides a publisher for notifying the state change for the dialog state.
    var statePublisher: Published<DialogState?>.Publisher { get }
    /// It provides a publisher for notifying the event change for  the dialog event.
    var eventPublisher: Published<DialogEvent?>.Publisher { get }
    /// It provides a publisher to show propmt play state(such as STARTED, PAUSED, STOPPED) upon successful speech output.
    var promptStatePublisher: Published<TTSPromptState?>.Publisher { get }
    
    var workoutEngineDelegate: WorkoutEngineDelegate? { get set }
    
    /// This method initializes the Cerence's Voice assistant.
    /// - Parameter completion: return success or failure as well as Error in initializing the Cerence's Voice assistant.
    func initialize(completion: @escaping (Bool, Error?) -> Void)
    
    /// This method starts the Cerence's Voice assistant.
    /// - Parameter completion: return success or failure as well as Error in starting the Cerence's Voice assistant.
    func startVoiceAssistant(completion: @escaping (Bool, Error?) -> Void)
    
    /// This method stops the Cerence's Voice assistant.
    /// - Parameter completion: return success or failure as well as Error in stopping the Cerence's Voice assistant.
    func stopVoiceAssistant(completion: @escaping (Bool, Error?) -> Void)
    
    /// This method destroys the Cerence's Voice assistant.
    /// -  Parameter completion: return success or failure as well as Error in destroying the Cerence's Voice assistant.
    func shutDownVoiceAssistant(completion: @escaping (Bool, Error?) -> Void)
    
    /// This method provides functionality to speak given non null textual string data via Cerence's Voice Assistant.
    /// - Parameter ttsText: non-null text string which you want voice assistant to speak
    /// - Parameter completion: return success or failure
    func playTextToSpeech(ttsText: String, completion: @escaping (Bool, Error?) -> Void)
    
    /// This method provides notify dialog that event happened on application side (PTT, Incoming call, etc.)
    /// - Parameter event: AppEvent
    /// - Parameter completion: return success or failure as well as Error in send app event.
    func sendAppEvent(event: Event, completion: @escaping (Bool, Error?) -> Void)
}
