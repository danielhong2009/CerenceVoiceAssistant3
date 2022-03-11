#import <Foundation/Foundation.h>
#import <Ark/CRNHostController.h>
#import <Ark/CRNPassThroughDomain.h>

NS_ASSUME_NONNULL_BEGIN

/// A simple controller that just pass all requests in raw JSON format to its
/// delegate.
NS_SWIFT_NAME(PassThroughController)
@interface CRNPassThroughController : NSObject <CRNHostController>
/// The delegate that receives raw JSON request data.
@property (weak, nonatomic) id <CRNPassThroughDomainDelegate> delegate;
/// The delegate that helps Ark Assistant to load data like contacts, current
/// location and so on.
@property (weak, nonatomic) id <CRNDynamicContentProvidingDelegate> contentProvidingDelegate;
@end

NS_ASSUME_NONNULL_END
