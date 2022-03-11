
#import <Ark/CRNDialogMessage.h>
#import <ArkNautilus/CRNHmiScenario.h>
#import <ArkNautilus/CRNHmiScenarioFactory.h>


NS_ASSUME_NONNULL_BEGIN
/// Display the content on the screen. Note that the params and results are determined by scenanrio
NS_SWIFT_NAME(NautilusRequest.HMIDisplay)
@interface CRNDialogHMIDisplayRequest: CRNDialogRequest
@property(strong, nonatomic) CRNHmiScenario * scenario;
@end

NS_SWIFT_NAME(NautilusResponse.HMIDisplay)
@interface CRNDialogHMIDisplayResponse: CRNDialogResponse
@property(strong, nonatomic) CRNHmiScenarioResult * hmiScenarioResult;
@end

NS_ASSUME_NONNULL_END