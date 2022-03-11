
#import <Ark/CRNDialogMessage.h>
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
NS_SWIFT_NAME(NautilusRequest.FitnessGetRepsLimitation)
@interface CRNDialogFitnessGetRepsLimitationRequest: CRNDialogRequest
@end

NS_SWIFT_NAME(NautilusResponse.FitnessGetRepsLimitation)
@interface CRNDialogFitnessGetRepsLimitationResponse: CRNDialogResponse

/// :nodoc:
@property(assign, nonatomic) NSInteger maxReps;
@end

NS_ASSUME_NONNULL_END