
#import <Ark/CRNBaseEvent.h>
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
NS_SWIFT_NAME(NautilusEvent.Ptt)
@interface CRNPttEvent: CRNBaseEvent

/// :nodoc:
@property(assign, nonatomic) bool isLongPress;
@end

NS_ASSUME_NONNULL_END