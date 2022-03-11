
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
NS_SWIFT_NAME(MediaSource)
typedef NSString *const CRNMediaSource NS_TYPED_ENUM;
extern CRNMediaSource CRNMediaSourceBluetooth;
extern CRNMediaSource CRNMediaSourceUsb;
extern CRNMediaSource CRNMediaSourceSlacker;
extern CRNMediaSource CRNMediaSourceSpotify;
extern CRNMediaSource CRNMediaSourceAux;

/// Local music, including BLUETOOTH and USB
extern CRNMediaSource CRNMediaSourceLocal;

/// Online music, including SLACKER and SPOTIFY
extern CRNMediaSource CRNMediaSourceOnline;
extern CRNMediaSource CRNMediaSourceNone;
NS_ASSUME_NONNULL_END