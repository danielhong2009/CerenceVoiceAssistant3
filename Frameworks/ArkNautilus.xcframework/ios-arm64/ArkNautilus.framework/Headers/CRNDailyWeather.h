
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
NS_SWIFT_NAME(DailyWeather)
@interface CRNDailyWeather: NSObject

/// city
@property(strong, nonatomic) NSString * city;

/// date
@property(strong, nonatomic) NSString * date;

/// the day of the week, e.g. Monday
@property(strong, nonatomic) NSString * dayOfWeek;

/// Description of weather phenomena, e.g. sunny, rain
@property(strong, nonatomic) NSString * dayWeatherPhenomena;

/// the number of weather code. see also: (WeatherCode_table)
@property(assign, nonatomic) NSInteger dayWeatherCode;

/// Description of night phenomena, e.g. sunny, rain
@property(strong, nonatomic) NSString * nightWeatherPhenomena;

/// the number of weather code. see also: (WeatherCode_table)
@property(assign, nonatomic) NSInteger nightWeatherCode;

/// the highest temperature of the day
@property(strong, nonatomic) NSString * highTemperature;

/// the lowest temperature of the day
@property(strong, nonatomic) NSString * lowTemperature;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)buildDictionary;
@end

NS_ASSUME_NONNULL_END