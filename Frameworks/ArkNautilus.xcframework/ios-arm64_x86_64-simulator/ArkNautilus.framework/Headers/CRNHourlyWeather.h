
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
NS_SWIFT_NAME(HourlyWeather)
@interface CRNHourlyWeather: NSObject

/// :nodoc:
@property(strong, nonatomic) NSString * date;

/// :nodoc:
@property(strong, nonatomic) NSString * dayOfWeek;

/// :nodoc:
@property(strong, nonatomic) NSString * phenomena;

/// :nodoc:
@property(strong, nonatomic) NSString * temperature;

/// the number of weather code. see also: (WeatherCode_table)
@property(assign, nonatomic) NSInteger weatherCode;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)buildDictionary;
@end

NS_ASSUME_NONNULL_END