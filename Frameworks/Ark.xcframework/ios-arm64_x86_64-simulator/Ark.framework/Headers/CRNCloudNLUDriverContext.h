//
//  CRNCloudNLUDriverContext.h
//  Ark
//
//  Created by Dada on 2021/8/24.
//

#import <Ark/CRNCloudNLUContext.h>
#import <Ark/CRNCloudNLULocation.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(CloudNLUDriverContext)
/// The context describing the user characteristics
@interface CRNCloudNLUDriverContext : CRNCloudNLUContext
/// The latitude and longitude of the driver's work location
@property (strong, nonatomic, nullable) CRNCloudNLULocation *home;
/// The latitude and longitude of the driver's home location
@property (strong, nonatomic, nullable) CRNCloudNLULocation *work;
@end

NS_ASSUME_NONNULL_END
