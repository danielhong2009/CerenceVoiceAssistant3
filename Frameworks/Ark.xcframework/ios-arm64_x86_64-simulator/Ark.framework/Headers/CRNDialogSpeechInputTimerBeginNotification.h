#import <Foundation/Foundation.h>
#import <Ark/CRNDialogNotification.h>

NS_ASSUME_NONNULL_BEGIN

/// A notification that notifies the period to let the users to speak timeouts.
NS_SWIFT_NAME(ArkNotification.SpeechInputTimerBegin)
@interface CRNDialogSpeechInputTimerBeginNotification : CRNDialogNotification
/// How many seconds will the period last.
@property(readonly, assign, nonatomic) NSInteger lsTimeout;
@end

NS_ASSUME_NONNULL_END
