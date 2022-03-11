//
//  CRNCloudNLULocationContext.h
//  Ark
//
//  Created by Dada on 2021/8/24.
//

#import <Ark/CRNCloudNLUContext.h>
#import <Ark/CRNCloudNLULocation.h>
#import <Ark/CRNCloudNLULocationSource.h>


NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(CloudNLULocationContext)
@interface CRNCloudNLULocationContext : CRNCloudNLUContext
- (instancetype)initWithLocation:(CRNCloudNLULocation *)inLocation source:(CRNCloudNLULocationSource)inSource;
@end

NS_ASSUME_NONNULL_END
