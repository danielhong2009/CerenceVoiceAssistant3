#import <Foundation/Foundation.h>
#import <Ark/CRNDialogNotification.h>

NS_ASSUME_NONNULL_BEGIN

/// A notification that notifies the hosting app that the assistant gets updated
//ASR results.
NS_SWIFT_NAME(ArkNotification.AsrResultUpdate)
@interface CRNDialogAsrResultUpdatedNotification : CRNDialogNotification
/// The utterance recognized by the assistant.
@property(strong, readonly, nonatomic) NSString *utterance;
/// If it is the final result.
@property(assign, readonly, nonatomic) bool isFinal;
@end

NS_ASSUME_NONNULL_END
