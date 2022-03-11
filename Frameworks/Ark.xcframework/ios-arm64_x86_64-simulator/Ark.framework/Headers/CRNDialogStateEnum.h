#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(DialogStateEnum)

/// The state of the assistant.
typedef NSString *const CRNDialogStateEnum NS_TYPED_ENUM NS_SWIFT_NAME(ArkNotification.State);
/// The assistant is idling.
extern CRNDialogStateEnum CRNDialogStateEnumIdle;
/// The assistant is waken by a wake-up-word and listening.
extern CRNDialogStateEnum CRNDialogStateEnumListeningWuw;
/// The assistant is waken by a push-to-talk command and listening.
extern CRNDialogStateEnum CRNDialogStateEnumListeningCommand;
/// The assistant is listening to user's voice commands.
extern CRNDialogStateEnum CRNDialogStateEnumCapturing;
/// The assistant is processing users' voice.
extern CRNDialogStateEnum CRNDialogStateEnumProcessing;

NS_ASSUME_NONNULL_END
