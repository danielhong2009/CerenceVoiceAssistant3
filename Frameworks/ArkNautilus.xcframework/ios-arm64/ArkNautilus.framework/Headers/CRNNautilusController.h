#import <Foundation/Foundation.h>
#import <Ark/Ark.h>
#import <ArkNautilus/CRNMusicDomain.h>
#import <ArkNautilus/CRNFitnessDomain.h>
#import <ArkNautilus/CRNSystemDomain.h>
#import <ArkNautilus/CRNCommonControlDomain.h>


NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(NautilusController)
@interface CRNNautilusController : NSObject <CRNHostController>
@property (weak, nonatomic) id <CRNMusicDomainDelegate> musicDomainDelegate;
@property (weak, nonatomic) id <CRNFitnessDomainDelegate> fitnessDomainDelegate;
@property (weak, nonatomic) id <CRNSystemDomainDelegate> systemDomainDelegate;
@property (weak, nonatomic) id <CRNCommonControlDomainDelegate> commonControlDomainDelegate;

@property (weak, nonatomic) id <CRNDynamicContentProvidingDelegate> contentProvidingDelegate;
@end

NS_ASSUME_NONNULL_END
