#import <Foundation/Foundation.h>
#import <Ark/CRNArkAssistant.h>
#import <Ark/CRNDialogAsrResultUpdatedNotification.h>
#import <Ark/CRNDialogDynamicContentUpdatedNotification.h>
#import <Ark/CRNDialogEventNotification.h>
#import <Ark/CRNDialogNotification.h>
#import <Ark/CRNDialogSpeechInputTimeoutNotification.h>
#import <Ark/CRNDialogSpeechInputTimerBeginNotification.h>
#import <Ark/CRNDialogSpeechLevelUpdatedNotification.h>
#import <Ark/CRNDialogStateChangedNotification.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ArkNotificationFilterDelegate)
@protocol CRNNotificationFilterDelegate <NSObject>

/// Called when the assistant has updated ASR result.
/// @param notification The notification.
- (void)onAsrResultUpdated:(CRNDialogAsrResultUpdatedNotification *)notification NS_SWIFT_NAME(on(asrResultUpdated:));

/// Called when the assistant update its copy of a type of dynamic contents.
/// @param notification The notification.
- (void)onDynamicContentUpdated:(CRNDialogDynamicContentUpdatedNotification *)notification NS_SWIFT_NAME(on(dynamicContentUpdated:));

/// Called when the assistant receives an event.
/// @param notification The notification.
- (void)onEvent:(CRNDialogEventNotification *)notification NS_SWIFT_NAME(on(event:));

/// Called when the assistant starts a period to the let users to talk to it.
/// @param notification The notification.
- (void)onSpeechInputTimerBegin:(CRNDialogSpeechInputTimerBeginNotification *)notification NS_SWIFT_NAME(on(speechInputTimerBegin:));

/// Called when the assistant ends the period to let the users to talk to it.
/// @param notification The notification.
- (void)onSpeechInputTimeout:(CRNDialogSpeechInputTimeoutNotification *)notification NS_SWIFT_NAME(on(speechInputTimeout:));

/// Called when the assistant found the speech level changes.
/// @param notification The notification.
- (void)onSpeechLevelUpdated:(CRNDialogSpeechLevelUpdatedNotification *)notification NS_SWIFT_NAME(on(speechLevelUpdated:));

/// Called when the state of the assistant changes.
/// @param notification The notification.
- (void)onStateChanged:(CRNDialogStateChangedNotification *)notification NS_SWIFT_NAME(on(stateChanged:));

@end

/// A filter class helps to convert raw JSON into notification objects and emit to its delegate.
NS_SWIFT_NAME(ArkNotificationFilter)
@interface CRNNotificationFilter : NSObject
/// Process raw JSON data in dictionaries.
///
/// @param dictionary The raw JSON data.
/// @param msgID The ID of the message.
/// @param assistant The reference of the assistant.
- (void)process:(NSDictionary *)dictionary messageID:(NSUInteger)msgID assistant:(id <CRNArkAssistantSpec>)assistant;

/// The delegate.
@property (weak, nonatomic) id <CRNNotificationFilterDelegate> delegate;
@end

NS_ASSUME_NONNULL_END
