#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// The states of the TTS prompter.
typedef NS_ENUM(NSUInteger, CRNTTSPromptState)
{
    CRNTTSPromptStateInitial,
    CRNTTSPromptStateStarted,
    CRNTTSPromptStatePaused,
    CRNTTSPromptStateStopped,
    CRNTTSPromptStateInvalid,
} NS_SWIFT_NAME(TTSPromptState);

typedef void(^CRNTTSPromptStateChange)(CRNTTSPromptState);

typedef void(^CRNTTSPromptErrorCallback)(NSError *);

/// The interface that can control the prompter.
NS_SWIFT_NAME(AssistantPrompter)
@protocol CRNArkAssistantTTSPrompter<NSObject>

/// Play TTS.
/// @param inText The text to play.
/// @param inShouldInterrupt If True, the previous process will be stopped.
/// @param inVoiceID The voice to play TTS.
/// @param inDomainName The preferred domain to play TTS.
/// @param inError Returns, by-reference, a description of the error
- (BOOL)playWithText:(NSString *)inText shouldInterrupt:(BOOL)inShouldInterrupt voiceID:(NSString *)inVoiceID domainName:(NSString *)inDomainName error:(NSError **)inError NS_SWIFT_NAME(play(text:shouldInterrupt:voiceID:domainName:));

/// Play TTS.
/// @param inText The text to play.
/// @param inShouldInterrupt If True, the previous process will be stopped.
/// @param inVoiceID The voice to play TTS.
/// @param inDomainName The preferred domain to play TTS.
/// @param callback The prompter's state change callback.
/// @param inError Returns, by-reference, a description of the error
- (BOOL)playWithText:(NSString *)inText shouldInterrupt:(BOOL)inShouldInterrupt voiceID:(NSString *)inVoiceID domainName:(NSString *)inDomainName onStateChange:(nullable CRNTTSPromptStateChange)callback error:(NSError **)inError NS_SWIFT_NAME(play(text:shouldInterrupt:voiceID:domainName:onStateChange:));

/// Play TTS.
/// @param inText The text to play.
/// @param inShouldInterrupt If True, the previous process will be stopped.
/// @param inVoiceID The voice to play TTS.
/// @param inDomainName The preferred domain to play TTS.
/// @param callback The prompter's state change callback.
/// @param errorCallback The prompter's error  callback.
/// @param inError Returns, by-reference, a description of the error
- (BOOL)playWithText:(NSString *)inText shouldInterrupt:(BOOL)inShouldInterrupt voiceID:(NSString *)inVoiceID domainName:(NSString *)inDomainName onStateChange:(nullable CRNTTSPromptStateChange)callback onErrorCallback:(nullable CRNTTSPromptErrorCallback)errorCallback error:(NSError **)inError NS_SWIFT_NAME(play(text:shouldInterrupt:voiceID:domainName:onStateChange:onError:));

/// Pause the TTS.
/// @param inError Returns, by-reference, a description of the error
- (BOOL)pauseWithError:(NSError **)inError;

/// Resume the TTS.
/// @param inError Returns, by-reference, a description of the error
- (BOOL)resumeWithError:(NSError **)inError;

/// Stop the TTS.
/// @param inError Returns, by-reference, a description of the error
- (BOOL)stopWithError:(NSError **)inError;

/// Prompter name
@property(readonly, nonatomic) NSString *name;

/// Current state
@property(readonly, nonatomic) CRNTTSPromptState state;
@end
NS_ASSUME_NONNULL_END
