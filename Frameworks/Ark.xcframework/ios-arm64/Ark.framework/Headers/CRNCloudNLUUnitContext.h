//
//  CRNCloudNLUMeasurementContext.h
//  Ark
//
//  Created by Dada on 2021/8/24.
//

#import <Ark/CRNCloudNLUContext.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSString * const CRNTimeExpression NS_TYPED_ENUM NS_SWIFT_NAME(TimeExpression);
extern CRNTimeExpression CRNTimeExpression12Hour;
extern CRNTimeExpression CRNTimeExpression24Hour;

typedef NSString * const CRNDistanceExpression NS_TYPED_ENUM NS_SWIFT_NAME(DistanceExpression);
extern CRNDistanceExpression CRNDistanceExpressionMeter;
extern CRNDistanceExpression CRNDistanceExpressionFoot;
extern CRNDistanceExpression CRNDistanceExpressionYard;

typedef NSString * const CRNTemperatureExpression NS_TYPED_ENUM NS_SWIFT_NAME(TemperatureExpression);
extern CRNTemperatureExpression CRNTemperatureExpressionCelsius;
extern CRNTemperatureExpression CRNTemperatureExpressionFahrenheit;

typedef NSString * const CRNVolumeExpression NS_TYPED_ENUM NS_SWIFT_NAME(VolumeExpression);
extern CRNVolumeExpression CRNVolumeExpressionLiter;
extern CRNVolumeExpression CRNVolumeExpressionUSGallon;
extern CRNVolumeExpression CRNVolumeExpressionImperialGallon;

NS_SWIFT_NAME(CloudNLUUnitContext)
@interface CRNCloudNLUUnitContext : CRNCloudNLUContext
@property(strong, nonatomic, nullable) CRNTimeExpression timeExpression;
@property(strong, nonatomic, nullable) CRNDistanceExpression distanceExpression;
@property(strong, nonatomic, nullable) CRNTemperatureExpression temperatureExpression;
@property(strong, nonatomic, nullable) CRNVolumeExpression volumeExpression;
@end

NS_ASSUME_NONNULL_END
