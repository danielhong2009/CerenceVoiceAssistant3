#import <Foundation/Foundation.h>
#import <Ark/Ark.h>
#import <ArkNautilus/CRNDialogCommonControlCancelRequest.h>



NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(CommonControlDomainDelegate)
@protocol CRNCommonControlDomainDelegate <NSObject>
- (void)onCancel:(CRNDialogCommonControlCancelRequest *)command callback:(void(^)(CRNDialogCommonControlCancelResponse *))callback NS_SWIFT_NAME(on(cancel:callback:));

@end

NS_SWIFT_NAME(CommonControlDomain)
@interface CRNCommonControlDomain : NSObject <CRNDomain>
@property (weak, nonatomic) id <CRNCommonControlDomainDelegate> delegate;
@end


NS_ASSUME_NONNULL_END
