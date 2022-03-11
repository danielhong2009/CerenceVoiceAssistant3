#import <Foundation/Foundation.h>
#import <Ark/CRNDomain.h>
#import <Ark/CRNDialogMessage.h>

NS_ASSUME_NONNULL_BEGIN

@class CRNPassThroughDomain;

/// A simple delegate that receives all requests in raw JSON format to its
/// delegate.
NS_SWIFT_NAME(PassThroughDomainDelegate)
@protocol CRNPassThroughDomainDelegate <NSObject>

/// Called when there is incoming request in raw JSON format.
/// @param domain An instance of CRNPassThroughDomain.
/// @param dictionary The raw JSON object as a dictionary.
/// @param msgID The ID of the message,
/// @param callback The callback block.
- (void)domain:(CRNPassThroughDomain *)domain didReceiveMessage:(NSDictionary *)dictionary messageID:(NSUInteger)msgID callback:(void (^ _Nonnull)(CRNDialogResponse * _Nonnull))callback;

/// Called when Ark Assistant would like to abort a request which does respond in time.
/// @param domain An instance of CRNPassThroughDomain.
/// @param dictionary The raw JSON object as a dictionary.
/// @param msgID The ID of the message,
- (BOOL)domain:(CRNPassThroughDomain *)domain shouldAbortWithMessage:(NSDictionary *)dictionary messageID:(NSUInteger)msgID;
@end

/// A simple domain that just pass all requests in raw JSON format to its
/// delegate.
NS_SWIFT_NAME(PassThroughDomain)
@interface CRNPassThroughDomain : NSObject <CRNDomain>
/// The delegate for `CRNPassThroughDomain`.
@property (weak, nonatomic) id <CRNPassThroughDomainDelegate> delegate;
@end

NS_ASSUME_NONNULL_END
