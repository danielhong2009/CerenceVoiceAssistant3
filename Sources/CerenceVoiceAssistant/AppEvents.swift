//
//  AppEvents.swift
//  CerenceVoiceAssistant
//
//  Created by Cerence on 2022-02-28.
//

/// Enum class with all the possible App event names allowed to be sent by the client app
public enum AppEvents: String {
    /// End of round event to switch to WUW listening state.
    /// User can trigger the voice assistant using WUW and then ask to update workout logs like weights, reps and duration.
    /// This event can also be used to indicate the timeout for the end-of-round WUW state.
    case END_OF_ROUND_SESSION
}
