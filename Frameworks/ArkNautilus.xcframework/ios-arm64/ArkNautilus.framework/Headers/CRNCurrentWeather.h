
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
NS_SWIFT_NAME(CurrentWeather)
@interface CRNCurrentWeather: NSObject

/// :nodoc:
@property(strong, nonatomic) NSString * city;

/// :nodoc:
@property(strong, nonatomic) NSString * date;

/// The temperature at this time
@property(strong, nonatomic) NSString * temperature;

/// Description of weather phenomena, e.g. sunny, rain
@property(strong, nonatomic) NSString * phenomena;

/// the number of weather code. see also: (WeatherCode_table)
@property(assign, nonatomic) NSInteger weatherCode;

/// The Wind speed at this time
@property(strong, nonatomic) NSString * windSpeed;

/// :nodoc:
@property(assign, nonatomic) NSInteger windStrengthCode;

/// :nodoc:
@property(assign, nonatomic) NSInteger windDirection;

/// :nodoc:
@property(assign, nonatomic) NSInteger windDirectionCode;

/// :nodoc:
@property(assign, nonatomic) NSInteger pm25;

/// :nodoc:
@property(assign, nonatomic) NSInteger aqi;

/// :nodoc:
@property(assign, nonatomic) NSInteger pm10;

/// index of ultraviolet
@property(assign, nonatomic) NSInteger uvIndex;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)buildDictionary;
@end

NS_ASSUME_NONNULL_END