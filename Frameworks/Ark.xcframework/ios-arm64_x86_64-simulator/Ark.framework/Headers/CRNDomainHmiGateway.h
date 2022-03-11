#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Domain-to-HMI gateway, or domain-to-HMI interface, is a gateway that lets a
/// domain to send request messages to an HMI delegate.
///
/// When a request handler under a domain processes a request, it is very
/// possible that the handler would ask the hosting app to update GUI or perform a
/// GUI specific action. Each domain has a reference to an instance of the class
/// and the requests can find it from the domain object send messages to it, and
/// it will pass the events to the HMI delegate.
NS_SWIFT_NAME(Dhi)
@protocol CRNDomainHmiGateway <NSObject>

/// Lets a domain to send request messages to an HMI delegate.
///
/// @param request The content of the request.
/// @param callback The callback block.
- (void)sendHmiRequest:(NSDictionary *)request callback:(void (^)(NSDictionary *))callback NS_SWIFT_NAME(send(HmiRequest:callback:));
@end

NS_ASSUME_NONNULL_END
