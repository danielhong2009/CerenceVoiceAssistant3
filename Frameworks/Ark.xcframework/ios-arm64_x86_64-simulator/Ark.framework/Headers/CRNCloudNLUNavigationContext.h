//
//  CRNCloudNLUNavigationContext.h
//  Ark
//
//  Created by Dada on 2021/8/24.
//

#import <Ark/CRNCloudNLUContext.h>
#import <Ark/CRNCloudNLULocation.h>
#import <Ark/CRNCloudNLULocationSource.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(CloudNLUNavigationContext)
/// The context describing the navigation data
@interface CRNCloudNLUNavigationContext : CRNCloudNLUContext

/// Init context.
/// @param inCurrentLocation The user's current latitude and longitude location
/// @param inSource How the current location was reported.
- (instancetype)initWithCurrentLocation:(CRNCloudNLULocation *)inCurrentLocation locationSource:(CRNCloudNLULocationSource)inSource;

/// Init context.
/// @param inCurrentLocation The user's current latitude and longitude location.
/// @param inSource How the current location was reported.
/// @param inOriginLocation The origin point of the current navigation guidance session.
/// @param inDestinationLocation The coordinates of a focal point shown on screen.
/// @param inTargetLocation Specifies a location other than the destination location that may be factored in the multi-regional dynamic configuration of the speech recognition transaction. The default behavior is based on the destination location.
/// @param inRoute Route information. Indicates the route from the current point to the destination
/// @param inHeadingDegree Heading in positive degrees relative to true north, counted clockwise.
- (instancetype)initWithCurrentLocation:(CRNCloudNLULocation *)inCurrentLocation locationSource:(CRNCloudNLULocationSource)inSource originLocation:(CRNCloudNLULocation * _Nullable )inOriginLocation destinationLocation:(CRNCloudNLULocation * _Nullable)inDestinationLocation targetLocation:(CRNCloudNLULocation * _Nullable)inTargetLocation route:(NSArray<CRNCloudNLULocation *> * _Nullable)inRoute headingDegree:(int)inHeadingDegree;
@end

NS_ASSUME_NONNULL_END
