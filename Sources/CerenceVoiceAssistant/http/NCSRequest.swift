//
//  NCSRequest.swift
//  VocieAssistant
//
//  Created by Cerence on 2022-01-24.
//

import Foundation

class NCSResult {
    var status: Bool
    var ttsText: String
    
    init(status: Bool, ttsText: String) {
        self.status = status
        self.ttsText = ttsText
    }
}

/// It is responsible for making HTTP request to the Cerence cloud/studio as well as parse the result of the response received from the cloud.
class NCSRequest {
    
    var utterance: String
    var transactionDataJson: [String:Any]
    private var dictParamContent: [String : Any] = [String:Any]()
    
    private let url = URL(string: "https://i2a.mtdmz.cerenceapi.com:443/NmspServlet/")
    
    private let requestDataContent = [
        "appKey": "c9858854369122132ad86bc8b8129190d23b3064143084ea393cebd77bea4dc930bee52e634f4f87c812e9d1f513d5db4894f932533cc69d4a2a1890bbd5e11f",
        "uId": "vh_cloud_uid",
        "language": "eng-USA",
        "appName": "NAUTILUS_FITNESS",
        "inCodec": "PCM_16_16K",
        "outCodec": "PCM_16_16K",
        "appVersion": "1",
        "cmdName": "DRAGON_NLU_APPSERVER_CMD",
        "cmdDict": [
            "audio_source": "SpeakerAndMicrophone",
            "locale": "USA",
            "phone_OS": "4.0",
            "ui_langugage": "en",
            "location": "<42.32119,-83.216575> +/- 150.0m",
            "organization_id": "NUANCE",
            "application_name": "NAUTILUS_FITNESS",
            "application": "NAUTILUS_FITNESS",
            "phone_submodel": "nmPhone2,1",
            "dictation_language": "eng-USA",
            "application_state_id": "45",
            "utterance_number": "5",
            "dictation_type": "ccpoi_nav",
            "phone_network": "wifi",
            "application_session_id": "1234567890",
            "tts_voice": "",
            "context_tag": "",
            "network_type": "wifi"
        ],
        "carrier": "ncstestclient_cicd",
        "appId": "CRNC_NAUTILUS_FITNESS_CLOUD",
        "deviceModel": "deviceModel"
    ] as [String : Any]
    
    struct Part {
        let name: String
        let paramName: String?
        let contentType: String
        let data: String
        func encode() -> String {
            if let paramName = self.paramName {
                return "Content-Disposition: form-data; name=\"\(name)\"; paramName=\"\(paramName)\"\r\nContent-Type: \(contentType)\r\n\r\n\(data)"
            }
            return "Content-Disposition: form-data; name=\"\(name)\"\r\nContent-Type: \(contentType)\r\n\r\n\(data)"
        }
    }
    
    struct HttpBody {
        var data = [Part]()
        func encode(boundary: UUID) -> String {
            var body: String = ""
            for part in data {
                body.append("--\(boundary)\r\n\(part.encode())\r\n")
            }
            body.append("--\(boundary)--\r\n")
            return body
        }
    }
    
    init(utterance: String, transactionDataJson: [String:Any]) {
        self.utterance = utterance
        self.transactionDataJson = transactionDataJson
        self.dictParamContent = getDictParamRequest()
    }
    
    func performNcsHttpRequest(completion: @escaping (NCSResult) -> Void) {
        let session = URLSession.shared
        
        var urlRequest = URLRequest(url: url!)
        urlRequest.httpMethod = "POST"
        // generate boundary string using a unique per-app string
        let boundary = UUID.init()
        
        urlRequest.setValue("multipart/form-data; boundary=\(boundary)", forHTTPHeaderField: "Content-Type")
        urlRequest.setValue("Keep-Alive", forHTTPHeaderField: "Connection")
        
        urlRequest.httpBody = createRequestBody(boundary: boundary).data(using: .utf8)
        
        var semaphore = DispatchSemaphore (value: 0)
        var ResultString = ""
        
        var ttsText = ""
        
        let task = session.dataTask(with: urlRequest, completionHandler: { responseData, response, error in
            if let responseString = String(data: responseData!, encoding: .utf8) {
                if let beginIndex = responseString.range(of: "{\"result_type\":") {
                    let beginString = responseString[beginIndex.lowerBound...]
                    if let endIndex = beginString.range(of: "\r\n") {
                        ResultString = String(beginString[..<endIndex.lowerBound])
                        
                        do {
                            let jsonObj = try JSONSerialization.jsonObject(with: ResultString.data(using: .utf8)!, options: .allowFragments) as? [String: Any]
                            if let appserverResults = jsonObj?["appserver_results"] as? [String: Any] {
                                if let payload = appserverResults["payload"] as? [String: Any] {
                                    if let dialog = payload["dialog"] as? [String: Any]{
                                        if let actions = dialog["actions"]  as? [[String: Any]]{
                                            if let facets = actions[0]["facets"] as? [String: Any]{
                                                if let tts = facets["tts"] as? [String: Any]{
                                                    if let value = tts["value"] as? String {
                                                        ttsText = value
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        catch {
                            print(error)
                        }
                    }
                }
            }
            
            semaphore.signal()
        })
        
        task.resume()
        semaphore.wait()
        
        var retStatus: Bool
        if ttsText.isEmpty {
            retStatus = false
        } else {
            retStatus = true
        }
        completion(NCSResult(status: retStatus, ttsText: ttsText))
    }
    
    private func createRequestBody(boundary: UUID) -> String {
        var requestDataJson: Data
        var dictParamJson: Data
        
        do{
            requestDataJson = try JSONSerialization.data(withJSONObject: requestDataContent, options: .prettyPrinted)
            dictParamJson = try JSONSerialization.data(withJSONObject: dictParamContent, options: .prettyPrinted)
            
            guard let requestDataJson =  String(data: requestDataJson, encoding: .utf8), let dictParamJson =  String(data: dictParamJson, encoding: .utf8)
            else {
                fatalError("requestDataJson or dictParamJson is nil")
            }
            
            let RequestPart = Part(name: "RequestData", paramName: nil, contentType: "application/json; charset=utf-8", data: requestDataJson)
            let DictPart = Part(name: "DictParameter", paramName: "REQUEST_INFO", contentType: "application/json; charset=utf-8", data: dictParamJson)
            
            var httpBody = HttpBody()
            httpBody.data.append(RequestPart)
            httpBody.data.append(DictPart)
            
            return httpBody.encode(boundary: boundary)
        } catch {
            print ("Transformation to Json failed")
        }
        
        return ""
    }
    
    private func getDictParamRequest() -> [String: Any]{
        
        let dictParam = [
            "start": 0,
            "intermediateResponseMode": "NoUtteranceDetectionWithPartialRecognition",
            "appserver_data": [
                "message": utterance
            ],
            "dialog": [
                "type": "dialog-1.0",
                "context": [
                    "transaction": transactionDataJson
                ]
            ],
            "end": 0
        ] as [String : Any]
        
        return dictParam
    }
}
