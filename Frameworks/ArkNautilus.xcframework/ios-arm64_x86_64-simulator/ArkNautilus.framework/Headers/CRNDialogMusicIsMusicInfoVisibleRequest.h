
#import <Ark/CRNDialogMessage.h>
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

/// check if the music info is visible
NS_SWIFT_NAME(NautilusRequest.MusicIsMusicInfoVisible)
@interface CRNDialogMusicIsMusicInfoVisibleRequest: CRNDialogRequest
@end

NS_SWIFT_NAME(NautilusResponse.MusicIsMusicInfoVisible)
@interface CRNDialogMusicIsMusicInfoVisibleResponse: CRNDialogResponse

/// :nodoc:
@property(assign, nonatomic) bool isVisible;
@end

NS_ASSUME_NONNULL_END