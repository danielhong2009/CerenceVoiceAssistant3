//
//  CRNCloudNLULocation.h
//  Ark
//
//  Created by Dada on 2021/8/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(CloudNLULocation)
@interface CRNCloudNLULocation : NSObject
- (instancetype)initWithLongitude:(double)inLongitude latitude:(double)inLatitude;
- (NSDictionary *)buildDictionary;
@property(readonly, nonatomic) double longitude;
@property(readonly, nonatomic) double latitude;
@end

NS_ASSUME_NONNULL_END
