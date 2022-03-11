#import <Foundation/Foundation.h>
#import <Ark/CRNDialogEventInfo.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ArkNotification.SessionBeginInfo)
@interface CRNDialogSessionBeginInfo : CRNDialogEventInfo
@property(strong, readonly, nonatomic) NSString *domain;
@end

NS_ASSUME_NONNULL_END
