#import <Ark/CRNDomain.h>
#import <Ark/CRNDynamicContentProvidingDelegate.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// CRNHostController helps Ark Assistant to load domains.
///
/// Ark Assistant may use different dialog flows in various scenarios such as
/// automotive, 2 wheeler and so on. In a specific scenario, Ark Assistant may
/// support specifi domains but does not support domains in other scenarios.
///
/// When starting Ark Assistant, it asks you to pass a controller, and then call
/// `-[Controller loadDomains]` to load the map for dispatching requests to
/// request handlers. Developers could create objects that conform to the
/// `CRNHostController` protocol to load custom domains after customizing the dialog
/// flow.
NS_SWIFT_NAME(HostController)
@protocol CRNHostController <NSObject>

/// Helps to load domains into Ark Assistant.
///
/// @returns A dictionary using domain names as keys while the values are domain objects.
- (NSDictionary<NSString*, id <CRNDomain>>*)loadDomains;

/// Helps to load and specify a dynamic content provider for Ark Assistant. The
/// dynamic content provider would be called when calling `-[ArkAssistant
/// notifyContentChangedWithType:]`.
///
/// @returns An object conforming `CRNDynamicContentProvidingDelegate` protocol.
- (id<CRNDynamicContentProvidingDelegate>)loadDynamicContentProvider;
@end

NS_ASSUME_NONNULL_END
