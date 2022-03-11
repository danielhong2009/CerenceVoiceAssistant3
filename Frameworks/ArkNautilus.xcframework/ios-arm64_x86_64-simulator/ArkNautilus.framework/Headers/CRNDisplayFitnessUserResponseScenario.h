
#import <ArkNautilus/CRNHmiScenario.h>
#import <Foundation/Foundation.h>
#import <ArkNautilus/CRNFitnessType.h>


NS_ASSUME_NONNULL_BEGIN
NS_SWIFT_NAME(HmiScenario.FitnessUserResponse)
@interface CRNDisplayFitnessUserResponseScenario: CRNHmiScenario

/// :nodoc:
@property(strong, nonatomic) NSString * value;

/// :nodoc:
@property(strong, nonatomic) CRNFitnessType type;
@end

NS_ASSUME_NONNULL_END