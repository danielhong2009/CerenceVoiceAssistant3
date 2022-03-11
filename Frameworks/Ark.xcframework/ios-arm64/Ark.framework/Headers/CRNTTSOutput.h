#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CRNArkAssistantSpec;

/// Methods for helping our dialog engine to play TTS(Text-to-Speech) audio data.
NS_SWIFT_NAME(TTSOutput)
@protocol CRNTTSOutput <NSObject>

/// Asks the delegate to play audio data.
///
/// @param assistant The dialog engine.
/// @param data The pointer pointing to the data in memory. Please note that
/// the audio format is 16 bit mono PCM, and sample rate is 22050.
/// @param size The size of the data.
- (void)assistant:(id <CRNArkAssistantSpec>)assistant playAudio:(const char *)data size:(unsigned int)size NS_SWIFT_NAME(assistant(_:playAudio:size:));

/// Called when the dialog engine stops audio data output.
- (void)assistantDidEndPlayingAudio:(id <CRNArkAssistantSpec>)engine NS_SWIFT_NAME(assistant(didEndPlayingAudio:));

/// Resets the output.
- (void)reset;

@end

NS_ASSUME_NONNULL_END
