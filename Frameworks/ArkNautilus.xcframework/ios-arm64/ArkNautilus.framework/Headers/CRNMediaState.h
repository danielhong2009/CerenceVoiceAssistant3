
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
NS_SWIFT_NAME(MediaState)
typedef NSString *const CRNMediaState NS_TYPED_ENUM;
extern CRNMediaState CRNMediaStatePlaying;
extern CRNMediaState CRNMediaStatePaused;
extern CRNMediaState CRNMediaStateStopped;

/// Can not get the media state
extern CRNMediaState CRNMediaStateUnknown;
NS_ASSUME_NONNULL_END