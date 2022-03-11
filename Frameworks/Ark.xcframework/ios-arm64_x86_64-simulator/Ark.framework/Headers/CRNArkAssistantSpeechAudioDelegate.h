#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CRNArkAssistantSpec;

/// The delegate that handles the speech audio from `CRNArkAssistantSpec`.

NS_SWIFT_NAME(ArkAssistant.SpeechAudioDelegate)
@protocol CRNArkAssistantSpeechAudioDelegate <NSObject>
- (void)assistant:(id <CRNArkAssistantSpec>)assistant didReceiveWakeUpWordWithAudio:(const char *)data size:(unsigned int)size isLastChunk:(BOOL)isLastChunk NS_SWIFT_NAME(assistant(_:didReceiveWakeUp:size:lastChunk:));
- (void)assistant:(id <CRNArkAssistantSpec>)assistant didReceiveCommandWithAudio:(const char *)data size:(unsigned int)size isLastChunk:(BOOL)isLastChunk NS_SWIFT_NAME(assistant(_:didReceiveCommand:size:lastChunk:));
- (void)assistant:(id <CRNArkAssistantSpec>)assistant didReceiveGenericSentenceWithAudio:(const char *)data size:(unsigned int)size isLastChunk:(BOOL)isLastChunk NS_SWIFT_NAME(assistant(_:didReceiveGenericSentence:size:lastChunk:));
@end
NS_ASSUME_NONNULL_END
