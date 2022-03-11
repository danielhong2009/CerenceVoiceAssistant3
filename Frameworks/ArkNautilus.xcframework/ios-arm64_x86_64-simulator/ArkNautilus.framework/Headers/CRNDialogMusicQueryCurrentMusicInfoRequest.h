
#import <Ark/CRNDialogMessage.h>
#import <ArkNautilus/CRNMusicInfo.h>
#import <ArkNautilus/CRNMediaSource.h>


NS_ASSUME_NONNULL_BEGIN

/// query the current music information
NS_SWIFT_NAME(NautilusRequest.MusicQueryCurrentMusicInfo)
@interface CRNDialogMusicQueryCurrentMusicInfoRequest: CRNDialogRequest
@end

NS_SWIFT_NAME(NautilusResponse.MusicQueryCurrentMusicInfo)
@interface CRNDialogMusicQueryCurrentMusicInfoResponse: CRNDialogResponse

/// :nodoc:
@property(strong, nonatomic) CRNMusicInfo * musicInfo;

/// :nodoc:
@property(strong, nonatomic) CRNMediaSource source;
@end

NS_ASSUME_NONNULL_END