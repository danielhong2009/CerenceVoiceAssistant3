//
//  FitnessDomainDelegateImp.swift
//  Example
//
//  Created by Dada on 2021/9/17.
//  Copyright © 2021 Cerence Inc. All rights reserved.
//

import ArkNautilus

class FitnessDomainDelegateImp: NSObject, FitnessDomainDelegate {
    weak var commandList: CommandList?

    func on(getRepsLimitation command: NautilusRequest.FitnessGetRepsLimitation, callback: @escaping (NautilusResponse.FitnessGetRepsLimitation) -> Void) {
        print(#function)
        commandList?.add(command.dictionary)
        let response = NautilusResponse.FitnessGetRepsLimitation()
        response.maxReps = 5000
        callback(response)
    }

    func on(getPoundsLimitation command: NautilusRequest.FitnessGetPoundsLimitation, callback: @escaping (NautilusResponse.FitnessGetPoundsLimitation) -> Void) {
        print(#function)
        commandList?.add(command.dictionary)
        let response = NautilusResponse.FitnessGetPoundsLimitation()
        response.maxPounds = 5000
        callback(response)
    }

}
