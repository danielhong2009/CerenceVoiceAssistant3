
#import <Ark/CRNDialogMessage.h>
#import <Foundation/Foundation.h>
#import <ArkNautilus/CRNMusicInfo.h>


NS_ASSUME_NONNULL_BEGIN

/// query the music info by title
NS_SWIFT_NAME(NautilusRequest.MusicQueryMusicInfoByTitle)
@interface CRNDialogMusicQueryMusicInfoByTitleRequest: CRNDialogRequest

/// :nodoc:
@property(strong, nonatomic) NSString * title;
@end

NS_SWIFT_NAME(NautilusResponse.MusicQueryMusicInfoByTitle)
@interface CRNDialogMusicQueryMusicInfoByTitleResponse: CRNDialogResponse

/// :nodoc:
@property(strong, nonatomic) CRNMusicInfo * musicInfo;
@end

NS_ASSUME_NONNULL_END