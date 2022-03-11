
#import <Ark/CRNDialogMessage.h>
#import <ArkNautilus/CRNFavoriteControlType.h>


NS_ASSUME_NONNULL_BEGIN

/// add/remove the current music to/from the favorite list
NS_SWIFT_NAME(NautilusRequest.MusicFavoriteControl)
@interface CRNDialogMusicFavoriteControlRequest: CRNDialogRequest

/// :nodoc:
@property(strong, nonatomic) CRNFavoriteControlType controlType;
@end

NS_SWIFT_NAME(NautilusResponse.MusicFavoriteControl)
@interface CRNDialogMusicFavoriteControlResponse: CRNDialogResponse
@end

NS_ASSUME_NONNULL_END