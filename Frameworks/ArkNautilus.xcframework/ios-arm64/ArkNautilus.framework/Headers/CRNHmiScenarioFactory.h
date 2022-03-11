
#import <ArkNautilus/CRNHmiScenario.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(HmiScenarioFactory)
@interface CRNHmiScenarioFactory: NSObject
+ (CRNHmiScenario *)displayScenarioFromName:(NSString *)name data:(NSDictionary *)dictionary;

@end


NS_ASSUME_NONNULL_END
