
#import <Ark/CRNDialogMessage.h>
#import <ArkNautilus/CRNPlayMode.h>


NS_ASSUME_NONNULL_BEGIN

/// Set play mode for player
NS_SWIFT_NAME(NautilusRequest.MusicSetPlayMode)
@interface CRNDialogMusicSetPlayModeRequest: CRNDialogRequest

/// :nodoc:
@property(strong, nonatomic) CRNPlayMode playMode;
@end

NS_SWIFT_NAME(NautilusResponse.MusicSetPlayMode)
@interface CRNDialogMusicSetPlayModeResponse: CRNDialogResponse
@end

NS_ASSUME_NONNULL_END