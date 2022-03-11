import Ark
import ArkNautilus
import Combine

class NotificationFilterDelegateImp: NSObject, ArkNotificationFilterDelegate {
    weak var hmiModel: HMIModel?
    weak var stateList: NotificationList?
    weak var eventList: NotificationList?

    let stateSubject = PassthroughSubject<DialogNotification, Never>()
    let eventSubject = PassthroughSubject<DialogNotification, Never>()

    func statePublisher() -> AnyPublisher<DialogNotification, Never> {
        return stateSubject.eraseToAnyPublisher()
    }

    func eventPublisher() -> AnyPublisher<DialogNotification, Never> {
        return eventSubject.eraseToAnyPublisher()
    }

    func on(asrResultUpdated notification: ArkNotification.AsrResultUpdate) {
        print(#function)
        DispatchQueue.main.async {
            self.hmiModel?.ortho = notification.utterance
        }
    }

    func on(dynamicContentUpdated notification: ArkNotification.DynamicContentUpdated) {
        print(#function)
    }

    func on(event notification: ArkNotification.Event) {
        let event = DialogNotification(data:notification.dictionary)
        eventSubject.send(event)
            
        eventList?.add(notification.dictionary)
        print(#function)
        switch notification.eventType {
        case .conversationBegin:
            if let extraInfo = notification.extraInfo as? ArkNotification.ConversationBeginInfo {
                DispatchQueue.main.async {
                    self.hmiModel?.visible = true
                }
                print("\(extraInfo.position)")
                print("\(extraInfo.reason)")
            }
        case .conversationEnd:
            DispatchQueue.main.async {
                self.hmiModel?.visible = false
            }
        case .promptBegin:
            if let extraInfo = notification.extraInfo as? ArkNotification.PromptBeginInfo {
                print("==== Session Begin ===")
                print("\(extraInfo.identifier)")
                print("\(extraInfo.hints)")
                print("\(extraInfo.text)")
                print("\(extraInfo.lq)")
                DispatchQueue.main.async {
                    self.hmiModel?.hints = extraInfo.hints.isEmpty ? extraInfo.text : extraInfo.hints
                }
            }
        case .promptEnd:
            break
        case .snoozingBegin:
            break
        case .snoozingEnd:
            break
        case .sessionBegin:
            if let extraInfo = notification.extraInfo as? ArkNotification.SessionBeginInfo {
                print("\(extraInfo.domain)")
            }
        case .sessionEnd:
            break
        default:
            break
        }
    }

    func on(speechInputTimerBegin notification: ArkNotification.SpeechInputTimerBegin) {
        print(#function)
    }

    func on(speechInputTimeout notification: ArkNotification.SpeechInputTimeout) {
        print(#function)
    }

    func on(speechLevelUpdated notification: ArkNotification.SpeechLevelUpdated) {
        print(#function)
    }

    func on(stateChanged notification: ArkNotification.StateChanged) {
        let state = DialogNotification(data:notification.dictionary)
        stateSubject.send(state)
        
        stateList?.add(notification.dictionary)
        print(#function)
        switch notification.state {
        case .idle:
            break
        case .capturing:
            break
        case .listeningCommand:
            break
        case .listeningWuw:
            break
        case .processing:
            break
        default:
            break
        }
    }
}
