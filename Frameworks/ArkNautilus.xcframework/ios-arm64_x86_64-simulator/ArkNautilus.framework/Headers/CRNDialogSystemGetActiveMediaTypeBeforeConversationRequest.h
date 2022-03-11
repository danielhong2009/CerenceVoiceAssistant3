
#import <Ark/CRNDialogMessage.h>
#import <ArkNautilus/CRNMediaType.h>


NS_ASSUME_NONNULL_BEGIN

/// get the active media before conversation, it is used to say fuzzy statement, such as previous, next.
NS_SWIFT_NAME(NautilusRequest.SystemGetActiveMediaTypeBeforeConversation)
@interface CRNDialogSystemGetActiveMediaTypeBeforeConversationRequest: CRNDialogRequest
@end

NS_SWIFT_NAME(NautilusResponse.SystemGetActiveMediaTypeBeforeConversation)
@interface CRNDialogSystemGetActiveMediaTypeBeforeConversationResponse: CRNDialogResponse

/// :nodoc:
@property(strong, nonatomic) CRNMediaType mediaType;
@end

NS_ASSUME_NONNULL_END