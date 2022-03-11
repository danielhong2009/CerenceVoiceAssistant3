#import <Foundation/Foundation.h>
#import <Ark/CRNDialogNotification.h>
#import <Ark/CRNDynamicContentTypeEnum.h>

NS_ASSUME_NONNULL_BEGIN

/// A notification that notifies the hosting app that the assistant has updates
//a kind of dynamic content.
NS_SWIFT_NAME(ArkNotification.DynamicContentUpdated)
@interface CRNDialogDynamicContentUpdatedNotification : CRNDialogNotification
/// The type of the dynamic content.
@property(strong, readonly, nonatomic) CRNDynamicContentTypeEnum dynamicContentType;
@end

NS_ASSUME_NONNULL_END
