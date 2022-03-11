
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents the contact.
///
/// Ark Assistant requires the list of contacts to improve ASR to help users to
/// make phone calls to the contacts.
NS_SWIFT_NAME(AssistantContact)
@interface CRNDialogContact: NSObject
/// ID of the contact.
@property(assign, nonatomic) NSInteger contactId;
/// Name of the contact.
@property(strong, nonatomic) NSString * contactName;
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)buildDictionary;
@end


NS_ASSUME_NONNULL_END
