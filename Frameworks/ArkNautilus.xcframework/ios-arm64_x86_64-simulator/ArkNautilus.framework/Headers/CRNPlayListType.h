
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
NS_SWIFT_NAME(PlayListType)
typedef NSString *const CRNPlayListType NS_TYPED_ENUM;
extern CRNPlayListType CRNPlayListTypeFavorite;

/// If user not mentioned the playlist name, then default open the current playlist.
extern CRNPlayListType CRNPlayListTypeCurrent;
NS_ASSUME_NONNULL_END