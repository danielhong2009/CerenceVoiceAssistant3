#import <Foundation/Foundation.h>
#import <Ark/CRNDialogEventInfo.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ArkNotification.PromptBeginInfo)
@interface CRNDialogPromptBeginInfo : CRNDialogEventInfo
@property(assign, readonly, nonatomic) NSInteger identifier;
@property(strong, readonly, nonatomic) NSString *text;
@property(strong, readonly, nonatomic) NSString *hints;
@property(strong, readonly, nonatomic) NSString *lq;

@end

NS_ASSUME_NONNULL_END
