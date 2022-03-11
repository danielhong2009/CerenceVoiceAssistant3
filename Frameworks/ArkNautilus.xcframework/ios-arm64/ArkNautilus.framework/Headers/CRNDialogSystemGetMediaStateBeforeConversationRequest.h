
#import <Ark/CRNDialogMessage.h>
#import <ArkNautilus/CRNMediaType.h>
#import <ArkNautilus/CRNMediaState.h>


NS_ASSUME_NONNULL_BEGIN

/// get media state before conversation.
NS_SWIFT_NAME(NautilusRequest.SystemGetMediaStateBeforeConversation)
@interface CRNDialogSystemGetMediaStateBeforeConversationRequest: CRNDialogRequest

/// :nodoc:
@property(strong, nonatomic) CRNMediaType mediatype;
@end

NS_SWIFT_NAME(NautilusResponse.SystemGetMediaStateBeforeConversation)
@interface CRNDialogSystemGetMediaStateBeforeConversationResponse: CRNDialogResponse

/// :nodoc:
@property(strong, nonatomic) CRNMediaState mediaState;
@end

NS_ASSUME_NONNULL_END