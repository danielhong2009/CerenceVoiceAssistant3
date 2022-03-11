#import <Foundation/Foundation.h>
#import <Ark/CRNDialogNotification.h>
#import <Ark/CRNDialogStateEnum.h>

NS_ASSUME_NONNULL_BEGIN

/// A notification that notifies the hosting app about the current state of the
//assistant.
NS_SWIFT_NAME(ArkNotification.StateChanged)
@interface CRNDialogStateChangedNotification : CRNDialogNotification
/// The current state.
@property(strong, nonatomic, readonly) CRNDialogStateEnum state;
@end

NS_ASSUME_NONNULL_END
