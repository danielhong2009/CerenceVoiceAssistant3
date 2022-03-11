
#import <Ark/CRNDialogMessage.h>
#import <ArkNautilus/CRNMediaPlayControlType.h>


NS_ASSUME_NONNULL_BEGIN

/// Control the music player, like play or pause
NS_SWIFT_NAME(NautilusRequest.MusicPlayControl)
@interface CRNDialogMusicPlayControlRequest: CRNDialogRequest

/// :nodoc:
@property(strong, nonatomic) CRNMediaPlayControlType controlType;
@end

NS_SWIFT_NAME(NautilusResponse.MusicPlayControl)
@interface CRNDialogMusicPlayControlResponse: CRNDialogResponse
@end

NS_ASSUME_NONNULL_END