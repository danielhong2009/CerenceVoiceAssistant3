import Ark

class NautilusDynamicContentProviderDelegate: NSObject, DynamicContentProvidingDelegate {

    func assistant(didRequestContacts assistant: ArkAssistantSpec) -> [AssistantContact] {
        var contacts: [AssistantContact] = []
//        let group = DispatchGroup()
//        group.enter()
//        AddressBookManager.share.requestPermission { result in
//            if !result {
//                group.leave()
//                return
//            }
//            contacts = AddressBookManager.share.contactList.map { index, info in
//                let contact = AssistantContact()
//                contact.contactId = index
//                contact.contactName = info.name
//                NSLog("Dynamic Provider did provide contact. \(info.index), \(info.name)")
//                return contact
//            }
//            group.leave()
//        }
//        group.wait()
        return contacts
    }

    func assistant(didRequestMusicInfo assistant: ArkAssistantSpec) -> [AssistantMusicInfo] {
        []
    }
}
