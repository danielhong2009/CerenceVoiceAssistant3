#import <Foundation/Foundation.h>
#import <Ark/CRNAudioInput.h>
#import <Ark/CRNLogger.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const CRNAudioQueueInputErrorDomain;

/// An implementation for `CRNAudioInput` using
/// [Audio Queue](https://developer.apple.com/documentation/audiotoolbox/audio_queue_services) API.
///
/// Please note that Apple does not allow developers to record
/// audio in the background due to privacy concerns. Once your
/// app is in the background, `startWithCallback` and
/// `pauseWithCallback` won't work and return error 561145187 (!rec).
NS_SWIFT_NAME(AudioQueueInput)
@interface CRNAudioQueueInput : NSObject <CRNAudioInput>
/// The logger.
@property (strong, nonatomic) id <CRNLogger> logger;
@end

NS_ASSUME_NONNULL_END
