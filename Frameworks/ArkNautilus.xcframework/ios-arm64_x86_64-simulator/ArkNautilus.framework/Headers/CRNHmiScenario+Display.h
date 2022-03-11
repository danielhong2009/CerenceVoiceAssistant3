#import <ArkNautilus/CRNHmiScenario.h>
#import <ArkNautilus/CRNDisplayFitnessUserResponseScenario.h>
#import <ArkNautilus/CRNDisplaySystemHelpScenario.h>
#import <ArkNautilus/CRNDisplaySystemHomePageScenario.h>
#import <ArkNautilus/CRNDisplayWeatherInformationScenario.h>
#import <ArkNautilus/CRNDisplayHintsUpdateScenario.h>

NS_ASSUME_NONNULL_BEGIN

@interface CRNHmiScenario(Display)
+ (NSArray<Class> *)displayScenarios;
@end


NS_ASSUME_NONNULL_END
