
#import <Ark/CRNDialogMessage.h>


NS_ASSUME_NONNULL_BEGIN

/// This interface is to inform that the user said the cancel command. It could be used to differentiate the reason that the dialog returns to Idle state, either by the cancel command or by silence (no voice detected for a duration). A typical use case is that the Helping GUI should be closed upon receiving the cancel command, but stay on if the dialog returns to Idle by silence.
NS_SWIFT_NAME(NautilusRequest.CommonControlCancel)
@interface CRNDialogCommonControlCancelRequest: CRNDialogRequest
@end

NS_SWIFT_NAME(NautilusResponse.CommonControlCancel)
@interface CRNDialogCommonControlCancelResponse: CRNDialogResponse
@end

NS_ASSUME_NONNULL_END