#import <Foundation/Foundation.h>
#import <Ark/Ark.h>
#import <ArkNautilus/CRNDialogHMIDisplayRequest.h>


NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(NautilusHmiDataFilterDelegate)
@protocol CRNHmiDataFilterDelegate <NSObject>
- (void)onDisplay:(CRNDialogHMIDisplayRequest *)command callback:(void(^)(CRNDialogHMIDisplayResponse *))callback NS_SWIFT_NAME(on(display:callback:));

@end

NS_SWIFT_NAME(NautilusHmiDataFilter)
@interface CRNHmiDataFilter : NSObject
- (void)process:(NSDictionary *)dictionary messageID:(NSUInteger)msgID assistant:(id<CRNArkAssistantSpec>)assisant;
@property (weak, nonatomic) id <CRNHmiDataFilterDelegate> delegate;
@end

NS_ASSUME_NONNULL_END
