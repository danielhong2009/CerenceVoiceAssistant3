#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(HmiScenarioResult)
@interface CRNHmiScenarioResult: NSObject
- (NSDictionary *)buildResult;
- (NSDictionary *)buildDictionary;
@end

NS_SWIFT_NAME(HmiScenario)
@interface CRNHmiScenario: NSObject
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (void)buildResult:(void(^)(CRNHmiScenarioResult *))callback;
@property (class, readonly, strong, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *parameters;
@end

NS_ASSUME_NONNULL_END


