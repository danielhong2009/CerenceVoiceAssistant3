
#import <Ark/CRNDialogMessage.h>
#import <ArkNautilus/CRNMusicInfo.h>
#import <ArkNautilus/CRNMediaSource.h>
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

/// Check if the specified music is available in the specified media source. If there is not any music information specified in the request, it is to check if there is any music available in the specified resource.
NS_SWIFT_NAME(NautilusRequest.MusicCheckMusicAvailability)
@interface CRNDialogMusicCheckMusicAvailabilityRequest: CRNDialogRequest

/// The music info to search. If there is not any music information specified, then any music in the specified media source is applicable.
@property(strong, nonatomic) CRNMusicInfo * musicInfo;

/// media source to search the music. If no media source specified, that means any source is applicable.
@property(strong, nonatomic) CRNMediaSource source;
@end

NS_SWIFT_NAME(NautilusResponse.MusicCheckMusicAvailability)
@interface CRNDialogMusicCheckMusicAvailabilityResponse: CRNDialogResponse

/// :nodoc:
@property(assign, nonatomic) bool isAvailable;
@end

NS_ASSUME_NONNULL_END