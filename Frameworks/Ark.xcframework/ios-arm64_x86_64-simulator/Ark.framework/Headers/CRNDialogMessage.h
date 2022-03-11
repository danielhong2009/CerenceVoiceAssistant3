#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@class CRNDialogResponse;

/// Represents the requests passed from Ark Assistant.
///
/// See also -[CRNArkAssistantSpec sendResponseWithMessageID:response:error:]
NS_SWIFT_NAME(DialogMessage)
@interface CRNDialogMessage : NSObject

/// Creates an instance of the kind of command by a given dictionary.
- (instancetype)initWithDictionary:(NSDictionary *)dictionary  NS_DESIGNATED_INITIALIZER;

/// The identifier for the command in string.
@property (class, readonly, strong, nonatomic) NSString *name;
/// The domain of the command.
@property (readonly, assign, nonatomic) NSString *domain;
/// The dictionary representation of the command.
@property (readonly, strong, nonatomic) NSDictionary *dictionary;
/// The parameters contained in the command in dictionary representation.
@property (readonly, strong, nonatomic, nullable) NSDictionary *parameters;
@end

/// Represents the commands passed from Cerence's dialog engine library.
///
/// See also -[CRNArkAssistantSpec sendResponseWithMessageID:response:error:]
NS_SWIFT_NAME(ArkDialogRequest)
@interface CRNDialogRequest : CRNDialogMessage

/// Check if the response type is valid.
- (BOOL)isValidResponse:(CRNDialogResponse *)inResponse;

/// The class of the response for the command.
@property (class, readonly, strong, nonatomic) Class responseClass;
/// The class of the response for the command.
@property (readonly, strong, nonatomic) Class responseClass;
@end

NS_SWIFT_NAME(Result)
typedef NSString * const CRNResult NS_TYPED_ENUM;
extern CRNResult CRMResultError NS_SWIFT_NAME(error);
extern CRNResult CRMResultOK NS_SWIFT_NAME(ok);
extern CRNResult CRMResultUnsupported NS_SWIFT_NAME(unsupported);
extern CRNResult CRMResultAlreadyExpected NS_SWIFT_NAME(alreadyExpected);
extern CRNResult CRMResultAlreadyMax NS_SWIFT_NAME(alreadyMax);
extern CRNResult CRMResultAlreadyMin NS_SWIFT_NAME(alreadyMin);
extern CRNResult CRMResultOutOfRange NS_SWIFT_NAME(outOfRange);
extern CRNResult CRMResultTimeout NS_SWIFT_NAME(timeout);

/// Represents the responses.
///
/// See also -[CRNArkAssistantSpec sendResponseWithMessageID:response:error:]
NS_SWIFT_NAME(ArkDialogResponse)
@interface CRNDialogResponse : NSObject
/// Name of the response. A subclass should override the property.
@property (class, readonly, strong, nonatomic) NSString *name;

/// Result of the response. Required. `CRNResultOK` by default.
@property (strong, nonatomic) CRNResult dialogResult;

/// Error message contained in the response. Optional.
@property (strong, nonatomic, nullable) NSString *errorMessage;

/// Build dictionary representation of the "results" section of a response.
/// A subclass should not override the method in most cases.
- (NSDictionary *)buildResults;

/// Build JSON representation. NSArray or NSDictionary
- (id)buildJSONRepresentation;
@end

NS_ASSUME_NONNULL_END
