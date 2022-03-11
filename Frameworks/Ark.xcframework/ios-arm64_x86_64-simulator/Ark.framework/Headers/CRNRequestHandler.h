#import <Ark/CRNDialogMessage.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^RequestHandleBlock)(NSDictionary* dictionary, NSUInteger msgID, void (^)(CRNDialogResponse*));
typedef BOOL (^RequestAbortBlock)(NSDictionary* dictionary, NSUInteger msgID);

/// CRNRequestHandler handles requests from Ark Assistant.
///
/// A request happens when Ark Assistant found a user intent from user's voice
/// and requires the app side to perform an action. For example, when a user
/// says "call Tom", a request containing the parameter "Tom" would be sent to a
/// request handler, the handler should then call the API to do phone calls.
/// Once the action is done, the handler should call the callback block to
/// notify Ark Assistant.
///
/// However, if the callback block is not called in time, Ark Assistant Would
/// sent an abort request to cancel current request. The request handler could
/// have a chance to cancel the previous system API calls and answer to Ark
/// Assistant about if the actions are completely cancelled.
NS_SWIFT_NAME(RequestHandler)
@interface CRNRequestHandler : NSObject

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/// Creates a new instance.
///
/// @param requestHandleBlock The block to handle requests.
/// @param requestAbortBlock The block to decide if we want to cancel previous
/// request when the app does not respond to Ark Assistant in time.
- (instancetype)initWithHandleRequestHandleBlock:(RequestHandleBlock)requestHandleBlock requestAbortBlock:(RequestAbortBlock)requestAbortBlock NS_DESIGNATED_INITIALIZER;

/// The block to handle requests.
@property (copy, nonatomic) RequestHandleBlock requestHandleBlock;

/// The block to decide if we want to cancel previous request when the app does
/// not respond to Ark Assistant in time.
@property (copy, nonatomic) RequestAbortBlock requestAbortBlock;
@end

NS_ASSUME_NONNULL_END
