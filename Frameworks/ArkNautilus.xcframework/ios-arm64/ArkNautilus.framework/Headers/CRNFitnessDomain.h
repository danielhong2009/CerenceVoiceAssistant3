#import <Foundation/Foundation.h>
#import <Ark/Ark.h>
#import <ArkNautilus/CRNDialogFitnessGetPoundsLimitationRequest.h>
#import <ArkNautilus/CRNDialogFitnessGetRepsLimitationRequest.h>



NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(FitnessDomainDelegate)
@protocol CRNFitnessDomainDelegate <NSObject>
- (void)onGetPoundsLimitation:(CRNDialogFitnessGetPoundsLimitationRequest *)command callback:(void(^)(CRNDialogFitnessGetPoundsLimitationResponse *))callback NS_SWIFT_NAME(on(getPoundsLimitation:callback:));
- (void)onGetRepsLimitation:(CRNDialogFitnessGetRepsLimitationRequest *)command callback:(void(^)(CRNDialogFitnessGetRepsLimitationResponse *))callback NS_SWIFT_NAME(on(getRepsLimitation:callback:));

@end

NS_SWIFT_NAME(FitnessDomain)
@interface CRNFitnessDomain : NSObject <CRNDomain>
@property (weak, nonatomic) id <CRNFitnessDomainDelegate> delegate;
@end


NS_ASSUME_NONNULL_END
