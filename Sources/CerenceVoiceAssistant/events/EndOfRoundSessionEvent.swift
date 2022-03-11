//
//  EndOfRoundSessionEvent.swift
//  CerenceVoiceAssistant
//
//  Created by Cerence on 2022-02-28.
//

import Ark

/// [AppEvent] class for [AppEvents.END_OF_ROUND_SESSION] event
/// App events are calls to dialog for accomplishing some tasks.
/// - Parameter isSessionStart true if the event is to start end-of-round update state, false to indicate the progress to next round after the timeout.
/// - Parameter isFirstRound true if the event is for first end-of-round in the current workout, false for subsequent rounds.
public class EndOfRoundSessionEvent: Event {
    private var isSessionStart: Bool = false
    private var isFirstRound: Bool = false
    
    public init(isSessionStart: Bool = false, isFirstRound: Bool = false) {
        self.isSessionStart = isSessionStart
        self.isFirstRound = isFirstRound
        super.init()
    }
    
    public override func buildData() -> [AnyHashable : Any] {
        var params : [String:Any] = [String:Any]()
        var screenContext : [String:Any] = [String:Any]()
        
        screenContext["is_first_round"] = isFirstRound
        params["is_session_start"] = isSessionStart
        params["screen_context"] = screenContext
        print("Parameters:\(params)")
        return params
    }
    
    public override func buildDictionary() -> [AnyHashable : Any] {
        var representation : [String:Any] = [String:Any]()
        
        representation["name"] = AppEvents.END_OF_ROUND_SESSION.rawValue
        representation["interrupt_dialog"] = true
        representation["params"] = self.buildData()
        return representation
    }
}
