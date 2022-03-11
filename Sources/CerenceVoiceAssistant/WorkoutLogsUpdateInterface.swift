//
//  WorkoutLogsUpdateInterface.swift
//  CerenceVoiceAssistant
//
//  Created by Cerence on 2022-02-28.
//

/// It provides methods to handle Workout logs update related functionality at the end of workout.
///  This needs to be implemented by the JRNY application.
public protocol WorkoutLogsUpdateInterface {
    /// Method to move to the next round of exercise.
    /// It can be called when a user asked to continue to the next round using voice.
    /// return true if progressed to the next round successfully, otherwise false.
    func nextRound() -> Bool
}
