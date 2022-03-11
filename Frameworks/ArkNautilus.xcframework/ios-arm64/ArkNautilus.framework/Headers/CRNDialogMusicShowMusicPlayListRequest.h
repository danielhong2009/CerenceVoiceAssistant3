
#import <Ark/CRNDialogMessage.h>
#import <ArkNautilus/CRNPlayListType.h>


NS_ASSUME_NONNULL_BEGIN

/// Show music play list
NS_SWIFT_NAME(NautilusRequest.MusicShowMusicPlayList)
@interface CRNDialogMusicShowMusicPlayListRequest: CRNDialogRequest

/// :nodoc:
@property(strong, nonatomic) CRNPlayListType playListType;
@end

NS_SWIFT_NAME(NautilusResponse.MusicShowMusicPlayList)
@interface CRNDialogMusicShowMusicPlayListResponse: CRNDialogResponse
@end

NS_ASSUME_NONNULL_END