
#import <Ark/CRNDialogMessage.h>
#import <ArkNautilus/CRNMediaSource.h>


NS_ASSUME_NONNULL_BEGIN

/// Play the favorite music from the specified media source
NS_SWIFT_NAME(NautilusRequest.MusicPlayFavoriteMusic)
@interface CRNDialogMusicPlayFavoriteMusicRequest: CRNDialogRequest

/// media source to play
@property(strong, nonatomic) CRNMediaSource source;
@end

NS_SWIFT_NAME(NautilusResponse.MusicPlayFavoriteMusic)
@interface CRNDialogMusicPlayFavoriteMusicResponse: CRNDialogResponse
@end

NS_ASSUME_NONNULL_END