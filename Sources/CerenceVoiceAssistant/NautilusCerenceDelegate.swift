//
//  NautilusCerenceDelegate.swift
//  CerenceVoiceAssistant
//
//  Created by Cerence on 2022-02-28.
//

/// It provides members and methods to provide implementation for JRNY app specific functions like pause workout, resume workout, skip interval etc.
public protocol WorkoutEngineDelegate {
    
    /// This method provides status of workout running or not.
    var workoutRunningState: Bool { get }
    
    /// This method provides status whether the workout session is IFA or not.
    var isIfa: Bool { get }
    
    /// This method is use to provide implementation for pausing the workout upon recognition of 'pauseWorkout' intent in the JRNY app.
    func pauseWorkout()
    
    /// This method is use to provide implementation for resuming the workout upon recognition of 'resumeWorkout' intent in the JRNY app.
    func resumeWorkout()
    
    /// This method is use to provide implementation for skipping interval during workout  upon recognition of 'skipInterval' intent in the JRNY app.
    func skipInterval()
    
    /// This method is use to provide implementation for setting rep count done for the workout upon recognition of 'repCount' intent in the JRNY app.
    /// - Parameter repCount: provides number of repetition user did recognized in the user utterance by Cerence cloud voice recognition
    func setRepCount(repCount: Int)
    
    /// This method is use to provide implementation for setting weights used in the workout upon recognition of 'revise weight' intent in the JRNY app.
    /// - Parameter weightInPounds: provides weight value in pound used during the workout which recognised in the user utterance by Cerence cloud voice recognition
    func setWeight(weightInPounds: Int)
    
    /// This method is used to return the [WorkoutLogsUpdateInterface] handler for calling the update workout logs API
    func getWorkoutLogsUpdateImpl() -> WorkoutLogsUpdateInterface
}
