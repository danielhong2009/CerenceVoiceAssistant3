//
//  ArkConfiguration.swift
//  ArkTest
//
//  Created by Vern Eastley on 12/10/21.
//

import UIKit
import Ark

/// It provides configuration parameters for Cerence's Voice assistant managers.
public class ArkConfiguration {

    private var selectedLanguageOption = "US English"

    private var availableASRLanguages: [String: String] {
        var map: [String: String] = [:]
        let asrLanguages = try? ArkAssistant.getAvailableASRLanguages(dataPath: dataPath)
        guard let languages = asrLanguages else {
            return map
        }
        for language in languages {
            if language == "eng-USA" {
                map["US English"] = language
            }
        }
        return map
    }

    private let dataPath: String = {
        let bundle = Bundle.main
        return "\(bundle.bundlePath)/Frameworks/CerenceVoiceAssistant.framework/data"
    }()

    private var writablePath: String {
        let documentPath = NSSearchPathForDirectoriesInDomains(.documentDirectory, .userDomainMask, true).first
        assert(documentPath != nil, "Cannot find Document path")
        let writablePath = "\(documentPath!)/dialog/data/"
        if !FileManager.default.fileExists(atPath: writablePath) {
            do {
                try FileManager.default.createDirectory(atPath: writablePath, withIntermediateDirectories: true, attributes: nil)
            } catch {
                print(error.localizedDescription)
            }
        }
        return writablePath
    }

    public var config: ArkAssistant.Config {
        let config = ArkAssistant.Config()
        config.userId = UIDevice.current.identifierForVendor?.uuidString ?? ""
        config.environment = .montreal
        config.language = ArkAssistant.Language(rawValue: availableASRLanguages[selectedLanguageOption] ?? "")
        config.dataPath = dataPath
        print("####### dataPath: \(config.dataPath)")
        config.writablePath = writablePath
        print("####### writablePath: \(config.writablePath)")
        config.isBargeInOn = false
        if let voice = try? ArkAssistant.getAvailableTTSVoices(dataPath: dataPath, language: ArkAssistant.Language.americanEnglish.rawValue).first {
            config.voice = voice
        }
        return config
    }
    
    public init() {
    }
}
