
#import <Ark/CRNDialogMessage.h>
#import <ArkNautilus/CRNMediaSource.h>


NS_ASSUME_NONNULL_BEGIN

/// Get the source that the user recently played
NS_SWIFT_NAME(NautilusRequest.MusicGetRecentPlayedSource)
@interface CRNDialogMusicGetRecentPlayedSourceRequest: CRNDialogRequest
@end

NS_SWIFT_NAME(NautilusResponse.MusicGetRecentPlayedSource)
@interface CRNDialogMusicGetRecentPlayedSourceResponse: CRNDialogResponse

/// :nodoc:
@property(strong, nonatomic) CRNMediaSource source;
@end

NS_ASSUME_NONNULL_END