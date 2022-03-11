import Foundation
import Ark

class HMIModel: ObservableObject {
    @Published var ortho: String = ""
    @Published var hints: String = ""
    @Published var visible: Bool = false
}
