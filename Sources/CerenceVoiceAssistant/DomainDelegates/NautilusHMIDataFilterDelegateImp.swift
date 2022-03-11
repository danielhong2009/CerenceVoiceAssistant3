import Ark
import ArkNautilus

class NautilusHMIDataFilterDelegateImp: NSObject, NautilusHmiDataFilterDelegate {
    weak var commandList: CommandList?

    func on(display command: NautilusRequest.HMIDisplay, callback: @escaping (NautilusResponse.HMIDisplay) -> Void) {
        commandList?.add(command.dictionary)
        if let scenario = command.scenario as? HmiScenario.SystemHelp {
            print("\(#function)\(scenario)")
        } else if let scenario = command.scenario as? HmiScenario.SystemHomePage {
            print("\(#function)\(scenario)")
        } else if let scenario = command.scenario as? HmiScenario.WeatherInformation {
            print("\(#function)\(scenario)")
        } else if let scenario = command.scenario as? HmiScenario.HintsUpdate {
            print("\(#function)\(scenario)")
        } else if let scenario = command.scenario as? HmiScenario.FitnessUserResponse {
            print("\(#function)\(scenario)")
        }
        callback(NautilusResponse.HMIDisplay())
    }
}
