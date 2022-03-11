#import <Foundation/Foundation.h>
#import <Ark/CRNDialogNotification.h>
#import <Ark/CRNDialogEventEnum.h>
#import <Ark/CRNDialogEventInfo.h>
#import <Ark/CRNDialogConversationBeginInfo.h>
#import <Ark/CRNDialogSessionBeginInfo.h>
#import <Ark/CRNDialogPromptBeginInfo.h>

NS_ASSUME_NONNULL_BEGIN

/// A notification that notifies the hosting app that the assistant receives a
//new event.
NS_SWIFT_NAME(ArkNotification.Event)
@interface CRNDialogEventNotification : CRNDialogNotification
/// The type of the event.
@property(strong, nonatomic, readonly) CRNDialogEventEnum eventType;
/// Additional information.
@property(strong, nonatomic, readonly, nullable) CRNDialogEventInfo *extraInfo;
@end

NS_ASSUME_NONNULL_END
