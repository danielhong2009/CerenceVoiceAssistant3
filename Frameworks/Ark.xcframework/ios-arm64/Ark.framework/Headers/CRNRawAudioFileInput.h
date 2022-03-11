#import <Foundation/Foundation.h>
#import <Ark/CRNAudioInput.h>
#import <Ark/CRNLogger.h>

NS_ASSUME_NONNULL_BEGIN

/// An implementation for `CRNAudioInput` the uses audio files as the input.
@interface CRNRawAudioFileInput : NSObject <CRNAudioInput>
- (instancetype)initWithFileURL:(NSURL *)URL NS_DESIGNATED_INITIALIZER;
/// The logger.
@property (strong, nonatomic) id <CRNLogger> logger;
@end

NS_ASSUME_NONNULL_END
