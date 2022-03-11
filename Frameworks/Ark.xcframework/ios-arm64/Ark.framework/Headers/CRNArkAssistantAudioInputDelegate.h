#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CRNArkAssistantSpec;

/// The delegate that handles the audio input events from Ark Assistant.
NS_SWIFT_NAME(ArkAssistant.AudioInputDelegate)
@protocol CRNArkAssistantAudioInputDelegate <NSObject>

/// Called when Ark assistant starts to record audio.
///
/// @param assistant The assistant.
- (void)assistantDidStartRecording:(id <CRNArkAssistantSpec>)assistant NS_SWIFT_NAME(assistant(didStartRecording:));

/// Called when Ark assistant stops to record audio.
///
/// @param assistant The assistant.
/// @param transient If the assistant just pauses for a while.
- (void)assistantDidStopRecording:(id <CRNArkAssistantSpec>)assistant transient:(BOOL)transient NS_SWIFT_NAME(assistant(didStopRecording:transient:));
@end

NS_ASSUME_NONNULL_END
