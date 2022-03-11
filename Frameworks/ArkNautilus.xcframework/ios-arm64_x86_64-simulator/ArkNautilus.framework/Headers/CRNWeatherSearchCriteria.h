
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
NS_SWIFT_NAME(WeatherSearchCriteria)
@interface CRNWeatherSearchCriteria: NSObject

/// :nodoc:
@property(strong, nonatomic) NSString * date;

/// :nodoc:
@property(strong, nonatomic) NSString * time;

/// :nodoc:
@property(strong, nonatomic) NSString * locality;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)buildDictionary;
@end

NS_ASSUME_NONNULL_END