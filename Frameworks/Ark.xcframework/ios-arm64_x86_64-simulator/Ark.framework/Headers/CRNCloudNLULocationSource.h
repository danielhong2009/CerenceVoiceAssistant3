//
//  CRNCloudNLULocationSource.h
//  Ark
//
//  Created by Dada on 2021/8/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSString * const CRNCloudNLULocationSource NS_TYPED_ENUM NS_SWIFT_NAME(CloudNLULocationSource);
extern CRNCloudNLULocationSource CRNCloudNLULocationSourceGPS;
extern CRNCloudNLULocationSource CRNCloudNLULocationSourceReckoning;
extern CRNCloudNLULocationSource CRNCloudNLULocationSourceLastKnown;
extern CRNCloudNLULocationSource CRNCloudNLULocationSourceMock;

NS_ASSUME_NONNULL_END
