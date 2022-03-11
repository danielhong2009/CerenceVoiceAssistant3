#import <Foundation/Foundation.h>
#import <Ark/CRNTTSOutput.h>
#import <Ark/CRNLogger.h>
NS_ASSUME_NONNULL_BEGIN

/// An implementation for `CRNTTSOutput` using Audio Queue API.
NS_SWIFT_NAME(AudioQueueTTSOutput)
@interface CRNAudioQueueTTSOutput : NSObject <CRNTTSOutput>
/// The logger.
@property (strong, nonatomic) id <CRNLogger> logger;
@end

NS_ASSUME_NONNULL_END
