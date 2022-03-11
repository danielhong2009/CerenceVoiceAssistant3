#import <Foundation/Foundation.h>
#import <Ark/CRNArkAssistantSpec.h>


NS_ASSUME_NONNULL_BEGIN

/// The domain for errors that Ark Assistant may encounter.
extern NSString *const CRNArkAssistantErrorDomain;

/// The implementation of the dialog engine. Please see `CRNArkAssistantSpec`
/// for further information.
NS_SWIFT_NAME(ArkAssistant)
@interface CRNArkAssistant : NSObject <CRNArkAssistantSpec>
@end

@interface CRNArkAssistant (DynamicContent)
@end

NS_ASSUME_NONNULL_END


