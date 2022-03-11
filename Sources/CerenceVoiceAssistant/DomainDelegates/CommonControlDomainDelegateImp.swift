import Ark
import ArkNautilus

class CommonControlDomainDelegateImp: NSObject, CommonControlDomainDelegate {

    weak var commandList: CommandList?

    func on(cancel command: NautilusRequest.CommonControlCancel, callback: @escaping (NautilusResponse.CommonControlCancel) -> Void) {
        print(#function)
        commandList?.add(command.dictionary)
        let response = NautilusResponse.CommonControlCancel()
        callback(response)
    }
}
