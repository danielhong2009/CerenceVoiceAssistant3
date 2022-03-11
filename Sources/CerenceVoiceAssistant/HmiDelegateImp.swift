import Ark
import ArkNautilus

class HmiDelegateImp: NSObject, ArkAssistant.HmiDelegate {
    private var hmiFilter = NautilusHmiDataFilter()
    private var notificationFilter = ArkNotificationFilter()

    var hmiDelegate: NautilusHmiDataFilterDelegate? {
        get {
            hmiFilter.delegate
        }
        set {
            hmiFilter.delegate = newValue
        }
    }

    var notificationDelegate: ArkNotificationFilterDelegate? {
        get {
            notificationFilter.delegate
        }
        set {
            notificationFilter.delegate = newValue
        }
    }

func assistant(_ assistant: ArkAssistantSpec, didReceiveRequest msgID: UInt, dictionary: [AnyHashable: Any], callback: @escaping ([AnyHashable: Any]?) -> Void) {
        hmiFilter.process(dictionary, messageID: msgID, assistant: assistant)
    }

    func assistant(_ assistant: ArkAssistantSpec, didReceiveNotification dictionary: [AnyHashable: Any]) {
        notificationFilter.process(dictionary, messageID: 0, assistant: assistant)
    }

    func assistant(_ assistant: ArkAssistantSpec, didReceive error: Error) {
    }
}
