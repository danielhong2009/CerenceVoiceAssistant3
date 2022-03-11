
#import <ArkNautilus/CRNHmiScenario.h>
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
/// It is to update the hints on screen. Usually the hints is updated along with the prompt begin event. In case that the hints need to be updated without a prompt, this scenario will be used to update the hints.
NS_SWIFT_NAME(HmiScenario.HintsUpdate)
@interface CRNDisplayHintsUpdateScenario: CRNHmiScenario

/// :nodoc:
@property(strong, nonatomic) NSArray<NSString *> * hintsList;
@end

NS_ASSUME_NONNULL_END