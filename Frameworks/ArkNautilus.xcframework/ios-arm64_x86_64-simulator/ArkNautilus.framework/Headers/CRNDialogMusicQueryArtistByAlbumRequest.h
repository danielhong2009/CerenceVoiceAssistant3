
#import <Ark/CRNDialogMessage.h>
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

/// query the artist of the album
NS_SWIFT_NAME(NautilusRequest.MusicQueryArtistByAlbum)
@interface CRNDialogMusicQueryArtistByAlbumRequest: CRNDialogRequest

/// :nodoc:
@property(strong, nonatomic) NSString * album;
@end

NS_SWIFT_NAME(NautilusResponse.MusicQueryArtistByAlbum)
@interface CRNDialogMusicQueryArtistByAlbumResponse: CRNDialogResponse

/// :nodoc:
@property(strong, nonatomic) NSString * artist;
@end

NS_ASSUME_NONNULL_END