
#import <Ark/CRNDialogMessage.h>
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

/// get similar artist when requested artist does not have music or the requested artist is not found
NS_SWIFT_NAME(NautilusRequest.MusicGetSimilarArtist)
@interface CRNDialogMusicGetSimilarArtistRequest: CRNDialogRequest

/// :nodoc:
@property(strong, nonatomic) NSString * artist;
@end

NS_SWIFT_NAME(NautilusResponse.MusicGetSimilarArtist)
@interface CRNDialogMusicGetSimilarArtistResponse: CRNDialogResponse

/// :nodoc:
@property(strong, nonatomic) NSString * artist;
@end

NS_ASSUME_NONNULL_END