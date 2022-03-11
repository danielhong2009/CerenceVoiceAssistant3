#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// The base class of all notifications.
NS_SWIFT_NAME(ArkNotification)
@interface CRNDialogNotification : NSObject

/// Creates a new instance.
/// @param dictionary The raw JSON data.
- (instancetype)initWithDictionary:(NSDictionary *)dictionary  NS_DESIGNATED_INITIALIZER;

/// Name of the notification.
@property (class, readonly, strong, nonatomic) NSString *name;

/// The raw JSON data.
@property (readonly, strong, nonatomic) NSDictionary *dictionary;

/// The parameters.
@property (readonly, strong, nonatomic, nullable) NSDictionary *parameters;
@end

NS_ASSUME_NONNULL_END
