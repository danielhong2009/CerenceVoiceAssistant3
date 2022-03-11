#import <Foundation/Foundation.h>
#import <Ark/CRNDialogNotification.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ArkNotification.SpeechLevelUpdated)
@interface CRNDialogSpeechLevelUpdatedNotification : CRNDialogNotification
/// The speech level.
@property(readonly, assign, nonatomic) NSInteger speechLevel;
@end

NS_ASSUME_NONNULL_END
