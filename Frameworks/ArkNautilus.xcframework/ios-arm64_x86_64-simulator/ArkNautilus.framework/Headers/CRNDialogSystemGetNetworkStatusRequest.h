
#import <Ark/CRNDialogMessage.h>
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
NS_SWIFT_NAME(NautilusRequest.SystemGetNetworkStatus)
@interface CRNDialogSystemGetNetworkStatusRequest: CRNDialogRequest
@end

NS_SWIFT_NAME(NautilusResponse.SystemGetNetworkStatus)
@interface CRNDialogSystemGetNetworkStatusResponse: CRNDialogResponse

/// :nodoc:
@property(assign, nonatomic) bool isNetworkConnected;
@end

NS_ASSUME_NONNULL_END