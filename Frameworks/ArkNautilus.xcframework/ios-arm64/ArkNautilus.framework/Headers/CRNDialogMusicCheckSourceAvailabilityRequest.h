
#import <Ark/CRNDialogMessage.h>
#import <ArkNautilus/CRNMediaSource.h>
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

/// Check if the specified media source is available.
NS_SWIFT_NAME(NautilusRequest.MusicCheckSourceAvailability)
@interface CRNDialogMusicCheckSourceAvailabilityRequest: CRNDialogRequest

/// :nodoc:
@property(strong, nonatomic) CRNMediaSource source;
@end

NS_SWIFT_NAME(NautilusResponse.MusicCheckSourceAvailability)
@interface CRNDialogMusicCheckSourceAvailabilityResponse: CRNDialogResponse

/// :nodoc:
@property(assign, nonatomic) bool isAvailable;
@end

NS_ASSUME_NONNULL_END