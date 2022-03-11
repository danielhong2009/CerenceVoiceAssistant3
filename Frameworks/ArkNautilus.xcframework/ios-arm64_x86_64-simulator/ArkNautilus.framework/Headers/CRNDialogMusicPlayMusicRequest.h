
#import <Ark/CRNDialogMessage.h>
#import <ArkNautilus/CRNMusicInfo.h>
#import <Foundation/Foundation.h>
#import <ArkNautilus/CRNMediaSource.h>


NS_ASSUME_NONNULL_BEGIN

/// Play music from the specified media source. 
NS_SWIFT_NAME(NautilusRequest.MusicPlayMusic)
@interface CRNDialogMusicPlayMusicRequest: CRNDialogRequest

/// The music info to play. If there is not any music info specified, then any music from the specified source is applicable.
@property(strong, nonatomic) CRNMusicInfo * musicInfo;

/// The asr result of the music search. It is optional.
@property(strong, nonatomic) NSString * searchPhrase;

/// media source to play. If no media source specified, any media source is applicable.
@property(strong, nonatomic) CRNMediaSource source;
@end

NS_SWIFT_NAME(NautilusResponse.MusicPlayMusic)
@interface CRNDialogMusicPlayMusicResponse: CRNDialogResponse
@end

NS_ASSUME_NONNULL_END