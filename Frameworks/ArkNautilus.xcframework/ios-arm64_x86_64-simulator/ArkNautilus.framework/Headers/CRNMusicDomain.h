#import <Foundation/Foundation.h>
#import <Ark/Ark.h>
#import <ArkNautilus/CRNDialogMusicFavoriteControlRequest.h>
#import <ArkNautilus/CRNDialogMusicPlayFavoriteMusicRequest.h>
#import <ArkNautilus/CRNDialogMusicPlayControlRequest.h>
#import <ArkNautilus/CRNDialogMusicIsFavoriteListFullRequest.h>
#import <ArkNautilus/CRNDialogMusicCheckMusicAvailabilityRequest.h>
#import <ArkNautilus/CRNDialogMusicGetSimilarArtistRequest.h>
#import <ArkNautilus/CRNDialogMusicPlayMusicRequest.h>
#import <ArkNautilus/CRNDialogMusicGetRecentPlayedSourceRequest.h>
#import <ArkNautilus/CRNDialogMusicQueryArtistByAlbumRequest.h>
#import <ArkNautilus/CRNDialogMusicQueryMusicInfoByTitleRequest.h>
#import <ArkNautilus/CRNDialogMusicCheckFavoriteMusicAvailabilityRequest.h>
#import <ArkNautilus/CRNDialogMusicIsMusicInfoVisibleRequest.h>
#import <ArkNautilus/CRNDialogMusicCheckSourceAvailabilityRequest.h>
#import <ArkNautilus/CRNDialogMusicQueryCurrentMusicInfoRequest.h>
#import <ArkNautilus/CRNDialogMusicSetPlayModeRequest.h>
#import <ArkNautilus/CRNDialogMusicOpenMusicPlayerRequest.h>
#import <ArkNautilus/CRNDialogMusicShowMusicPlayListRequest.h>



NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(MusicDomainDelegate)
@protocol CRNMusicDomainDelegate <NSObject>
- (void)onFavoriteControl:(CRNDialogMusicFavoriteControlRequest *)command callback:(void(^)(CRNDialogMusicFavoriteControlResponse *))callback NS_SWIFT_NAME(on(favoriteControl:callback:));
- (void)onPlayFavoriteMusic:(CRNDialogMusicPlayFavoriteMusicRequest *)command callback:(void(^)(CRNDialogMusicPlayFavoriteMusicResponse *))callback NS_SWIFT_NAME(on(playFavoriteMusic:callback:));
- (void)onPlayControl:(CRNDialogMusicPlayControlRequest *)command callback:(void(^)(CRNDialogMusicPlayControlResponse *))callback NS_SWIFT_NAME(on(playControl:callback:));
- (void)onIsFavoriteListFull:(CRNDialogMusicIsFavoriteListFullRequest *)command callback:(void(^)(CRNDialogMusicIsFavoriteListFullResponse *))callback NS_SWIFT_NAME(on(isFavoriteListFull:callback:));
- (void)onCheckMusicAvailability:(CRNDialogMusicCheckMusicAvailabilityRequest *)command callback:(void(^)(CRNDialogMusicCheckMusicAvailabilityResponse *))callback NS_SWIFT_NAME(on(checkMusicAvailability:callback:));
- (void)onGetSimilarArtist:(CRNDialogMusicGetSimilarArtistRequest *)command callback:(void(^)(CRNDialogMusicGetSimilarArtistResponse *))callback NS_SWIFT_NAME(on(getSimilarArtist:callback:));
- (void)onPlayMusic:(CRNDialogMusicPlayMusicRequest *)command callback:(void(^)(CRNDialogMusicPlayMusicResponse *))callback NS_SWIFT_NAME(on(playMusic:callback:));
- (void)onGetRecentPlayedSource:(CRNDialogMusicGetRecentPlayedSourceRequest *)command callback:(void(^)(CRNDialogMusicGetRecentPlayedSourceResponse *))callback NS_SWIFT_NAME(on(getRecentPlayedSource:callback:));
- (void)onQueryArtistByAlbum:(CRNDialogMusicQueryArtistByAlbumRequest *)command callback:(void(^)(CRNDialogMusicQueryArtistByAlbumResponse *))callback NS_SWIFT_NAME(on(queryArtistByAlbum:callback:));
- (void)onQueryMusicInfoByTitle:(CRNDialogMusicQueryMusicInfoByTitleRequest *)command callback:(void(^)(CRNDialogMusicQueryMusicInfoByTitleResponse *))callback NS_SWIFT_NAME(on(queryMusicInfoByTitle:callback:));
- (void)onCheckFavoriteMusicAvailability:(CRNDialogMusicCheckFavoriteMusicAvailabilityRequest *)command callback:(void(^)(CRNDialogMusicCheckFavoriteMusicAvailabilityResponse *))callback NS_SWIFT_NAME(on(checkFavoriteMusicAvailability:callback:));
- (void)onIsMusicInfoVisible:(CRNDialogMusicIsMusicInfoVisibleRequest *)command callback:(void(^)(CRNDialogMusicIsMusicInfoVisibleResponse *))callback NS_SWIFT_NAME(on(isMusicInfoVisible:callback:));
- (void)onCheckSourceAvailability:(CRNDialogMusicCheckSourceAvailabilityRequest *)command callback:(void(^)(CRNDialogMusicCheckSourceAvailabilityResponse *))callback NS_SWIFT_NAME(on(checkSourceAvailability:callback:));
- (void)onQueryCurrentMusicInfo:(CRNDialogMusicQueryCurrentMusicInfoRequest *)command callback:(void(^)(CRNDialogMusicQueryCurrentMusicInfoResponse *))callback NS_SWIFT_NAME(on(queryCurrentMusicInfo:callback:));
- (void)onSetPlayMode:(CRNDialogMusicSetPlayModeRequest *)command callback:(void(^)(CRNDialogMusicSetPlayModeResponse *))callback NS_SWIFT_NAME(on(setPlayMode:callback:));
- (void)onOpenMusicPlayer:(CRNDialogMusicOpenMusicPlayerRequest *)command callback:(void(^)(CRNDialogMusicOpenMusicPlayerResponse *))callback NS_SWIFT_NAME(on(openMusicPlayer:callback:));
- (void)onShowMusicPlayList:(CRNDialogMusicShowMusicPlayListRequest *)command callback:(void(^)(CRNDialogMusicShowMusicPlayListResponse *))callback NS_SWIFT_NAME(on(showMusicPlayList:callback:));

@end

NS_SWIFT_NAME(MusicDomain)
@interface CRNMusicDomain : NSObject <CRNDomain>
@property (weak, nonatomic) id <CRNMusicDomainDelegate> delegate;
@end


NS_ASSUME_NONNULL_END
