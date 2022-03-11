#import <Foundation/Foundation.h>
#import <Ark/CRNDialogContact.h>
#import <Ark/CRNDialogMusicInfo.h>
#import <Ark/CRNDialogLocation.h>
#import <Ark/CRNArkAssistantSpec.h>

NS_ASSUME_NONNULL_BEGIN

/// The delegate that provides the contents for the assistant.
NS_SWIFT_NAME(DynamicContentProvidingDelegate)
@protocol CRNDynamicContentProvidingDelegate <NSObject>
/// Called when the assistant asks for the names of the contacts.
/// @param assistant The assistant.
- (NSArray <CRNDialogContact *> *)assistantDidRequestContacts:(id <CRNArkAssistantSpec>)assistant NS_SWIFT_NAME(assistant(didRequestContacts:));

/// Called when the assistant asks for the metadata of the tracks
/// in the local music archive.
/// @param assistant The assistant.
- (NSArray <CRNDialogMusicInfo *> *)assistantDidRequestMusicInfo:(id <CRNArkAssistantSpec>)assistant NS_SWIFT_NAME(assistant(didRequestMusicInfo:));

@end

NS_ASSUME_NONNULL_END
