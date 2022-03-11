//
//  CRNCloudNLUContext.h
//  Ark
//
//  Created by Dada on 2021/8/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(CloudNLUContext)
@interface CRNCloudNLUContext : NSObject
@property (strong, readonly, nonatomic) NSString *contextType;
@property (strong, readonly, nonatomic) NSDictionary *contextInfo;
@end

NS_ASSUME_NONNULL_END
