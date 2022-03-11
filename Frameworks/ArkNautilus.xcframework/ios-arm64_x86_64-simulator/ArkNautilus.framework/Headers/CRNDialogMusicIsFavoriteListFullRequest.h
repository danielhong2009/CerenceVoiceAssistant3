
#import <Ark/CRNDialogMessage.h>
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

/// check if the favorite list is full
NS_SWIFT_NAME(NautilusRequest.MusicIsFavoriteListFull)
@interface CRNDialogMusicIsFavoriteListFullRequest: CRNDialogRequest
@end

NS_SWIFT_NAME(NautilusResponse.MusicIsFavoriteListFull)
@interface CRNDialogMusicIsFavoriteListFullResponse: CRNDialogResponse

/// :nodoc:
@property(assign, nonatomic) bool isFull;
@end

NS_ASSUME_NONNULL_END