#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ArkNotification.EventInfo)
@interface CRNDialogEventInfo : NSObject
- (instancetype)initWithDictionary:(NSDictionary *)dictionary NS_DESIGNATED_INITIALIZER;
@property (readonly, strong, nonatomic) NSDictionary *dictionary;
@end

NS_ASSUME_NONNULL_END
