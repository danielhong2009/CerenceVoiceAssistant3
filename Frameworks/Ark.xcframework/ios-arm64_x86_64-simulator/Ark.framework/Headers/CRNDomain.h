#import <Ark/CRNRequestHandler.h>
#import <Ark/CRNDomainHmiGateway.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// The CRNDomain class helps to dispatches requests to request handlers undder
/// a specific domain.
///
/// A `CRNHostController` loads domains to let Ark Assistant to dispatch requests to
/// q domain, and the domain continues to do dispatching. For example, when a
/// user wants to make a call, Ark Assistant would dispatch the request to the
/// phone domain at first, and then the phone domain dispatches the request to
/// the specific handler that could handle it.
///
/// A developer could create any object conforming to the CRNDomain protocol and
/// register it to a CRNHostController, to let Ark Assistant to be able to dispatch
/// desired requests to it, when he or she wants to customize dialog flow.
NS_SWIFT_NAME(Domain)
@protocol CRNDomain <NSObject>
/// Helps Ark Assistant to load request handlers.
- (NSDictionary<NSString*, CRNRequestHandler*>*)loadRequestHandlers;
@property (weak, nonatomic) id <CRNDomainHmiGateway> dhi;
@end

NS_ASSUME_NONNULL_END
