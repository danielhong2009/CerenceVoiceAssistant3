# Cerence-iOS
Cerence iOS interface

## Installation

CerenceVoiceAssistant is available through Swift package manager.
  - search the URL of this repo in project package dependencies
  - add the package 'CerenceVoiceAssistant' 


## VoiceAssistant
It provides lifecycle methods for Cerence's Voice assistant in the app with an completion handler.
  - func initialize(completion: @escaping (Bool, Error?) -> Void)
    - This method initializes the Cerence's Voice assistant.
  - func startVoiceAssistant(completion: @escaping (Bool, Error?) -> Void)
    - This method starts the Cerence's Voice assistant.
  - func stopVoiceAssistant(completion: @escaping (Bool, Error?) -> Void)
    - This method stops the Cerence's Voice assistant.
  - func shutDownVoiceAssistant(completion: @escaping (Bool, Error?) -> Void)
    - This method destroys the Cerence's Voice assistant.
  - func playTextToSpeech(ttsText: String, completion: @escaping (Bool, Error?) -> Void)
    - This method provides functionality to speak given non null textual string data via Cerence's Voice Assistant.

The publishers below are created to notify changes.
  - VAStatePublisher
    - It provides a publisher for notifying the state change of the Cerence's Voice Assistant.
  - statePublisher
    - It provides a publisher for notifying the state change for the dialog state.
  - eventPublisher
    - It provides a publisher for notifying the event change for the dialog state.

The **workoutEngineDelegate** is used with WorkoutEngineDelegate to customize workout actions.

## WorkoutEngineDelegate
WorkoutEngineDelegate provides members and methods to provide implementation for JRNY app specific functions like pause workout, resume workout, skip interval etc. 
  - func pauseWorkout()
    - This method is use to provide implementation for pausing the workout upon recognition of 'pauseWorkout' intent in the JRNY app.
  - func resumeWorkout()
    - This method is use to provide implementation for resuming the workout upon recognition of 'resumeWorkout' intent in the JRNY app.
  - func skipInterval()
    - This method is use to provide implementation for skipping interval during workout  upon recognition of 'skipInterval' intent in the JRNY app.
  - func setRepCount(repCount: Int)
    - This method is use to provide implementation for setting rep count done for the workout upon recognition of 'repCount' intent in the JRNY app.
  - func setWeight(weightInPounds: Int)
    - This method is use to provide implementation for setting weights used in the workout upon recognition of 'revise weight' intent in the JRNY app.
  
 **workoutRunningState** is used to check if the workout running is running.
 **isIfa** used to is to check whether the workout is IFA(initial fitness assessment) or not.
  
