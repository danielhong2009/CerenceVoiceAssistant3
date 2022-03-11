
#import <Ark/CRNDialogMessage.h>
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
NS_SWIFT_NAME(NautilusRequest.FitnessGetPoundsLimitation)
@interface CRNDialogFitnessGetPoundsLimitationRequest: CRNDialogRequest
@end

NS_SWIFT_NAME(NautilusResponse.FitnessGetPoundsLimitation)
@interface CRNDialogFitnessGetPoundsLimitationResponse: CRNDialogResponse

/// :nodoc:
@property(assign, nonatomic) NSInteger maxPounds;
@end

NS_ASSUME_NONNULL_END