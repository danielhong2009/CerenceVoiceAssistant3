
#import <Ark/CRNDialogMessage.h>
#import <ArkNautilus/CRNMediaType.h>


NS_ASSUME_NONNULL_BEGIN

/// get the foreground media, it is used to say fuzzy statement, such as previous, next.
NS_SWIFT_NAME(NautilusRequest.SystemGetForegroundMediaType)
@interface CRNDialogSystemGetForegroundMediaTypeRequest: CRNDialogRequest
@end

NS_SWIFT_NAME(NautilusResponse.SystemGetForegroundMediaType)
@interface CRNDialogSystemGetForegroundMediaTypeResponse: CRNDialogResponse

/// :nodoc:
@property(strong, nonatomic) CRNMediaType mediaType;
@end

NS_ASSUME_NONNULL_END