import UIKit
import AVFoundation

class ArkAudioSessionManager: NSObject {
    static let shared = ArkAudioSessionManager()

    override init() {
        super.init()
        NotificationCenter.default.addObserver(self, selector: #selector(handleDidChangeRoute(_:)), name: AVAudioSession.routeChangeNotification, object: nil)
    }

    private var isActivated = false
    private var shouldMixWithOthers = true
    private var options: AVAudioSession.CategoryOptions {
        get {
            if shouldMixWithOthers {
                return [.mixWithOthers, .allowBluetooth, .defaultToSpeaker]
            }
            return [.allowBluetooth, .defaultToSpeaker]
        }
    }

    func activateAudioSession(force: Bool = false) throws {
        // Avoid setting audio session duplicately. It might cause some side effect.
        guard isActivated == false || force else {
            return
        }
        let session = AVAudioSession.sharedInstance()
        try setAudioSessionCategory(force: true)
        try session.setActive(true, options: [])
        isActivated = true
    }

    func deactivateAudioSession() throws {
        let session = AVAudioSession.sharedInstance()
        try session.setActive(false, options: .notifyOthersOnDeactivation)
        isActivated = false
    }

    func setMixWithOthers(_ shouldMixWithOthers: Bool) {
        do {
            guard self.shouldMixWithOthers != shouldMixWithOthers else {
                return
            }
            self.shouldMixWithOthers = shouldMixWithOthers
            try self.deactivateAudioSession()
            try self.activateAudioSession(force: true)
        } catch {
            print(error.localizedDescription)
        }
    }

    func setAudioSessionCategory(force: Bool) throws {
        let session = AVAudioSession.sharedInstance()
        let currentInput = session.currentRoute.inputs.first
        let desiredMode: AVAudioSession.Mode = {
            if currentInput?.portType == AVAudioSession.Port.builtInMic {
                return AVAudioSession.Mode.videoRecording
            }
            return AVAudioSession.Mode.voiceChat
        }()

        if desiredMode == session.mode && !force {
            return
        }
        try session.setCategory(.playAndRecord, mode: desiredMode, options: self.options)
    }

    @objc func handleDidChangeRoute(_ notification: Notification) {
        guard let userInfo = notification.userInfo,
            let reasonValue = userInfo[AVAudioSessionRouteChangeReasonKey] as? UInt,
            let reason = AVAudioSession.RouteChangeReason(rawValue: reasonValue) else {
                return
        }
        switch reason {
        case .newDeviceAvailable, .oldDeviceUnavailable:
            DispatchQueue.main.async {
                do {
                    try self.setAudioSessionCategory(force: false)
                } catch {
                    print("handleDidChangeRoute setAudioSessionCategory failed: \(error.localizedDescription)")
                }
            }
        default:
            break
        }
    }
}
