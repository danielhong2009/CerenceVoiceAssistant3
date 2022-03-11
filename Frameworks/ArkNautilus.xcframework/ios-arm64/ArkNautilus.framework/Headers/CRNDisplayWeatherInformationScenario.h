
#import <ArkNautilus/CRNHmiScenario.h>
#import <Foundation/Foundation.h>
#import <ArkNautilus/CRNTemperatureUnit.h>
#import <ArkNautilus/CRNWeatherSearchCriteria.h>
#import <ArkNautilus/CRNWeatherFocusType.h>
#import <ArkNautilus/CRNCurrentWeather.h>
#import <ArkNautilus/CRNDailyWeather.h>
#import <ArkNautilus/CRNHourlyWeather.h>


NS_ASSUME_NONNULL_BEGIN
/// Display weather information
NS_SWIFT_NAME(HmiScenario.WeatherInformation)
@interface CRNDisplayWeatherInformationScenario: CRNHmiScenario

/// According to the focus_type in the day_list or hour_list array value
@property(assign, nonatomic) NSInteger startIndex;

/// According to the focus_type in the day_list or hour_list array value
@property(assign, nonatomic) NSInteger endIndex;

/// :nodoc:
@property(strong, nonatomic) CRNTemperatureUnit unitOfTemperature;

/// :nodoc:
@property(strong, nonatomic) CRNWeatherSearchCriteria * searchCriteria;

/// This type decision is the basis for current_info or day_list or hour_list
@property(strong, nonatomic) CRNWeatherFocusType focusType;

/// :nodoc:
@property(strong, nonatomic) CRNCurrentWeather * currentInfo;

/// :nodoc:
@property(strong, nonatomic) NSArray<CRNDailyWeather *> * dayList;

/// :nodoc:
@property(strong, nonatomic) NSArray<CRNHourlyWeather *> * hourList;
@end

NS_ASSUME_NONNULL_END