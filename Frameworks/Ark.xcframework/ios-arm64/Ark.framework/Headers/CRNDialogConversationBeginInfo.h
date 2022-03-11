#import <Foundation/Foundation.h>
#import <Ark/CRNDialogEventInfo.h>
#import <Ark/CRNReasonEnum.h>
#import <Ark/CRNPositionEnum.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ArkNotification.ConversationBeginInfo)
@interface CRNDialogConversationBeginInfo : CRNDialogEventInfo
@property(strong, readonly, nonatomic) CRNReasonEnum reason;
@property(strong, readonly, nonatomic) CRNPositionEnum position;
@end

NS_ASSUME_NONNULL_END
