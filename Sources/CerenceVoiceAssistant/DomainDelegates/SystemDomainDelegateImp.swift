import UIKit
import Ark
import ArkNautilus
//import Alamofire
import Contacts

class SystemDomainDelegateImp: NSObject, SystemDomainDelegate {
    weak var commandList: CommandList?

    func on(getMediaStateBeforeConversation command: NautilusRequest.SystemGetMediaStateBeforeConversation, callback: @escaping (NautilusResponse.SystemGetMediaStateBeforeConversation) -> Void) {
        print(#function)
        commandList?.add(command.dictionary)
        let response = NautilusResponse.SystemGetMediaStateBeforeConversation()
        response.mediaState = .unknown
        callback(response)
    }

    func on(getActiveMediaTypeBeforeConversation command: NautilusRequest.SystemGetActiveMediaTypeBeforeConversation, callback: @escaping (NautilusResponse.SystemGetActiveMediaTypeBeforeConversation) -> Void) {
        print(#function)
        commandList?.add(command.dictionary)
        let response = NautilusResponse.SystemGetActiveMediaTypeBeforeConversation()
        response.mediaType = .none
        callback(response)
    }

    func on(getForegroundMediaType command: NautilusRequest.SystemGetForegroundMediaType, callback: @escaping (NautilusResponse.SystemGetForegroundMediaType) -> Void) {
        print(#function)
        commandList?.add(command.dictionary)
        let response = NautilusResponse.SystemGetForegroundMediaType()
        response.mediaType = .none
        callback(response)
    }

    func on(getNetworkStatus command: NautilusRequest.SystemGetNetworkStatus, callback:@escaping (NautilusResponse.SystemGetNetworkStatus) -> Void) {
        print(#function)
        commandList?.add(command.dictionary)
        let response = NautilusResponse.SystemGetNetworkStatus()
        
//        let reachabilityManager = NetworkReachabilityManager()
//
//        reachabilityManager?.startListening { [weak self] status in
//            let isReachable = status == .reachable(.ethernetOrWiFi) || status == .reachable(.cellular)
//
//            response.isNetworkConnected = isReachable
            callback(response)
//        }
    }

    // You can just ignore the delegate call on iOS.
    func on(requestAudioFocus command: NautilusRequest.SystemRequestAudioFocus, callback: @escaping (NautilusResponse.SystemRequestAudioFocus) -> Void) {
        print(#function)
        commandList?.add(command.dictionary)
        let response = NautilusResponse.SystemRequestAudioFocus()
        callback(response)
    }

    // You can just ignore the delegate call on iOS.
    func on(releaseAudioFocus command: NautilusRequest.SystemReleaseAudioFocus, callback: @escaping (NautilusResponse.SystemReleaseAudioFocus) -> Void) {
        print(#function)
        commandList?.add(command.dictionary)
        let response = NautilusResponse.SystemReleaseAudioFocus()
        callback(response)
    }

}
