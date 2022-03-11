import UIKit
import Ark
import ArkNautilus

/// This method loads the custom domain such as Fitness Domain. You Can add more custom domain here.
class CerenceController: NSObject, HostController {
    var cerenceDynamicContentProvidingDelegate = CerenceDynamicContentProvidingDelegate()
    
    let commonControlDomain = CommonControlDomain()
    let commonControlDomainDelegateImp = CommonControlDomainDelegateImp()
    
    let cerenceSystemDomain = SystemDomain()
    let systemDomainDelegateImp = SystemDomainDelegateImp()
    
    let cerenceFitnessDomain = CerenceFitnessDomain()
    
    var workoutEngineDelegate: WorkoutEngineDelegate? {
        willSet {
            cerenceFitnessDomain.workoutEngineDelegate = newValue
        }
    }

    override init() {
        super.init()

        self.commonControlDomain.delegate = commonControlDomainDelegateImp
        self.cerenceSystemDomain.delegate = systemDomainDelegateImp
    }
    
    /// It is used to map the custom or system domain with their implementation class.
    func loadDomains() -> [String: Domain] {
        return ["CC": self.commonControlDomain,
                "System": self.cerenceSystemDomain,
                "Fitness": self.cerenceFitnessDomain];
    }

    func loadDynamicContentProvider() -> DynamicContentProvidingDelegate {
        return cerenceDynamicContentProvidingDelegate
    }
}

class CerenceResponse: ArkDialogResponse {
    var name = ""

    override func buildJSONRepresentation() -> Any {
        return ["type": "RESP", "name": name]
    }
}

class CerenceFitnessDomain: FitnessDomain {
    var workoutEngineDelegate: WorkoutEngineDelegate?
    
    override func loadRequestHandlers() -> [String: RequestHandler] {
        ["*": RequestHandler(handleRequestHandle: { dictionary, msgID, callback in
            print("CerenceFitnessDomain->loadRequestHandlers: \(dictionary["name"])")
            
            if (dictionary["name"] as! String == "pauseWorkout") {
                let request: PauseWorkoutRequest = PauseWorkoutRequest.init(dictionary: dictionary);
                let utterance = request.utterance()
                print("Result utterance:\(utterance)")
                var command : [String:Any] = [String:Any]()
                var commandResult : [String:Any] = [String:Any]()
                
                commandResult["isWorkoutRunning"] = self.workoutEngineDelegate?.workoutRunningState
                command["PAUSE_WORKOUT_RESULT"] = commandResult
                print("Customized Command:\(command)")
                let ncsRequest = NCSRequest.init(utterance: utterance!, transactionDataJson: command)
                
                ncsRequest.performNcsHttpRequest() {ttsResponse in
                    if ttsResponse.status {
                        self.workoutEngineDelegate?.pauseWorkout()
                    }
                    
                    let response = PauseWorkoutResponse()
                    response.ttsText = ttsResponse.ttsText
                    response.dialogResult = .ok
                    response.errorMessage = nil
                    print("Customized Response:\(response.ttsText)")
                    callback(response)
                    return
                }
            } else if (dictionary["name"] as! String == "resumeWorkout") {
                let request: ResumeWorkoutRequest = ResumeWorkoutRequest.init(dictionary: dictionary);
                let utterance = request.utterance()
                print("Result utterance:\(utterance)")
                var command : [String:Any] = [String:Any]()
                var commandResult : [String:Any] = [String:Any]()
                
                commandResult["isAllowed"] = !self.workoutEngineDelegate!.workoutRunningState
                command["RESUME_WORKOUT_RESULT"] = commandResult
                print("Customized Command:\(command)")
                let ncsRequest = NCSRequest.init(utterance: utterance!, transactionDataJson: command)
                
                ncsRequest.performNcsHttpRequest() {ttsResponse in
                    if ttsResponse.status {
                        self.workoutEngineDelegate?.resumeWorkout()
                    }

                    let response = ResumeWorkoutResponse()
                    response.ttsText = ttsResponse.ttsText
                    response.dialogResult = .ok
                    response.errorMessage = nil
                    print("Customized Response:\(response.ttsText)")
                    callback(response)
                    return
                }
            } else if (dictionary["name"] as! String == "skipInterval") {
                let request: SkipIntervalRequest = SkipIntervalRequest.init(dictionary: dictionary);
                let utterance = request.utterance()
                print("Result utterance:\(utterance)")
                var command : [String:Any] = [String:Any]()
                var commandResult : [String:Any] = [String:Any]()
                
                commandResult["isIntervalRunning"] = self.workoutEngineDelegate?.isIfa
                command["INTERVAL_STATUS"] = commandResult
                print("Customized Command:\(command)")
                let ncsRequest = NCSRequest.init(utterance: utterance!, transactionDataJson: command)
                
                ncsRequest.performNcsHttpRequest() {ttsResponse in
                    if ttsResponse.status {
                        self.workoutEngineDelegate?.skipInterval()
                    }
                    
                    let response = SkipIntervalResponse()
                    response.isSkipped = ttsResponse.status
                    response.dialogResult = .ok
                    response.errorMessage = nil
                    print("Customized Response:\(response.isSkipped)")
                    callback(response)
                    return
                }
                
                /// This is the RequestHandler for nextRound intent from dialog.
                /// The onHandle() method is called when the next round of exercise is requested by the user voice input or otherwise.
                /// It calls the nextRound() API to intimate the client to move to the next round.
            } else if (dictionary["name"] as! String == "nextRound") {
                let response = NextRoundResponse()
                if let hasNext = self.workoutEngineDelegate?.getWorkoutLogsUpdateImpl().nextRound() {
                    response.hasNext = hasNext
                }
                response.dialogResult = .ok
                response.errorMessage = nil
                print("Customized Response:\(response.hasNext)")
                callback(response)
                return
            }
        }, requestAbortBlock: { dictionary, msgID in
            return true
        })]
    }
}

class PauseWorkoutRequest: ArkDialogRequest {
    func utterance() -> String? {
        return self.parameters?["utterance"] as? String
    }
}

class PauseWorkoutResponse: ArkDialogResponse {
    let name = "pauseWorkout"
    var ttsText = ""
    
    override func buildJSONRepresentation() -> Any {
        return [
            "type": "RESP",
            "name": name,
            "results": [
                "data": [
                    "ttsText": ttsText,
                ]
            ]
        ];
    }
}

class ResumeWorkoutRequest: ArkDialogRequest {
    func utterance() -> String? {
        return self.parameters?["utterance"] as? String
    }
}

class ResumeWorkoutResponse: ArkDialogResponse {
    let name = "resumeWorkout"
    var ttsText = ""
    
    override func buildJSONRepresentation() -> Any {
        return [
            "type": "RESP",
            "name": name,
            "results": [
                "data": [
                    "ttsText": ttsText,
                ]
            ]
        ];
    }
}

class SkipIntervalRequest: ArkDialogRequest {
    func utterance() -> String? {
        return self.parameters?["utterance"] as? String
    }
}

class SkipIntervalResponse: ArkDialogResponse {
    let name = "skipInterval"
    var isSkipped = true
    
    override func buildJSONRepresentation() -> Any {
        return [
            "type": "RESP",
            "name": name,
            "results": [
                "data": [
                    "isSkipped": isSkipped,
                ]
            ]
        ];
    }
}

class NextRoundResponse: ArkDialogResponse {
    let name = "nextRound"
    var hasNext = true
    
    override func buildJSONRepresentation() -> Any {
        return [
            "type": "RESP",
            "name": name,
            "results": [
                "data": [
                    "hasNext": hasNext,
                ]
            ]
        ];
    }
}

class CerenceDynamicContentProvidingDelegate: NSObject, DynamicContentProvidingDelegate {
    func assistant(didRequestContacts assistant: ArkAssistantSpec) -> [AssistantContact] {
        return []
    }

    func assistant(didRequestMusicInfo assistant: ArkAssistantSpec) -> [AssistantMusicInfo] {
        return []
    }

    func assistant(didRequestLocation assistant: ArkAssistantSpec) -> CRNDialogLocation {
        // London (-0.118092, 51.509865)
        return CRNDialogLocation(longitude: -0.118092, latitude: 51.509865)
    }
}
