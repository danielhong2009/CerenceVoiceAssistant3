#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CRNArkAssistantSpec;

/// The delegate that handles the HMI messages and notifications sent from
/// `CRNArkAssistantSpec`.
NS_SWIFT_NAME(ArkAssistant.HmiDelegate)
@protocol CRNArkAssistantHmiDelegate <NSObject>

/// Called when the delegate receives a HMI message.
///
/// HMI messages are for the hosting app to update graphic user interface. For
/// example, the assistant may ask the hosting app to present a pick list to let
/// the users to pick a contact, POI, and so on. The related parameter are all
/// contained in the incoming dictionary.
///
/// @param assistant The engine.
/// @param msgID The ID of the request.
/// @param dictionary The body of the request.
- (void)assistant:(id <CRNArkAssistantSpec>)assistant didReceiveRequestWithMessageID:(NSUInteger)msgID dictionary:(NSDictionary *)dictionary callback:(void(^)(NSDictionary  * _Nullable))callback NS_SWIFT_NAME(assistant(_:didReceiveRequest:dictionary:callback:));

/// Called when the assistant receives notifications.
///
/// Notifications are sent when the state of the assistant changes. For example,
/// the assistant may be idling, awaking, procesing users' voice, etc. The
/// hosting app should respond to the changes to update the avatar representing
/// a voice assistant.
///
/// @param assistant The assistant.
/// @param dictionary The body of the mesaage.
- (void)assistant:(id <CRNArkAssistantSpec>)assistant didReceiveNotificationWithDictionary:(NSDictionary *)dictionary  NS_SWIFT_NAME(assistant(_:didReceiveNotification:));

/// Called when the assistant receives errors.
/// @param assistant The assistant.
/// @param error The error.
- (void)assistant:(id <CRNArkAssistantSpec>)assistant didReceiveError:(NSError *)error NS_SWIFT_NAME(assistant(_:didReceive:));
@end

NS_ASSUME_NONNULL_END
