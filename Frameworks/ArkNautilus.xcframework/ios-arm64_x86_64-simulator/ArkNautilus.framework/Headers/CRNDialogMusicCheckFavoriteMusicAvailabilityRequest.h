
#import <Ark/CRNDialogMessage.h>
#import <ArkNautilus/CRNMediaSource.h>
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

/// Check if there is any favorite music available in the specified media source
NS_SWIFT_NAME(NautilusRequest.MusicCheckFavoriteMusicAvailability)
@interface CRNDialogMusicCheckFavoriteMusicAvailabilityRequest: CRNDialogRequest

/// :nodoc:
@property(strong, nonatomic) CRNMediaSource source;
@end

NS_SWIFT_NAME(NautilusResponse.MusicCheckFavoriteMusicAvailability)
@interface CRNDialogMusicCheckFavoriteMusicAvailabilityResponse: CRNDialogResponse

/// :nodoc:
@property(assign, nonatomic) bool isAvailable;
@end

NS_ASSUME_NONNULL_END