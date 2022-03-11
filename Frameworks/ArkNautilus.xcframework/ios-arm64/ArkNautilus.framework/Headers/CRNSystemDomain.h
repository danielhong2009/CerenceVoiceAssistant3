#import <Foundation/Foundation.h>
#import <Ark/Ark.h>
#import <ArkNautilus/CRNDialogSystemRequestAudioFocusRequest.h>
#import <ArkNautilus/CRNDialogSystemGetForegroundMediaTypeRequest.h>
#import <ArkNautilus/CRNDialogSystemReleaseAudioFocusRequest.h>
#import <ArkNautilus/CRNDialogSystemGetActiveMediaTypeBeforeConversationRequest.h>
#import <ArkNautilus/CRNDialogSystemGetNetworkStatusRequest.h>
#import <ArkNautilus/CRNDialogSystemGetMediaStateBeforeConversationRequest.h>



NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(SystemDomainDelegate)
@protocol CRNSystemDomainDelegate <NSObject>
- (void)onRequestAudioFocus:(CRNDialogSystemRequestAudioFocusRequest *)command callback:(void(^)(CRNDialogSystemRequestAudioFocusResponse *))callback NS_SWIFT_NAME(on(requestAudioFocus:callback:));
- (void)onGetForegroundMediaType:(CRNDialogSystemGetForegroundMediaTypeRequest *)command callback:(void(^)(CRNDialogSystemGetForegroundMediaTypeResponse *))callback NS_SWIFT_NAME(on(getForegroundMediaType:callback:));
- (void)onReleaseAudioFocus:(CRNDialogSystemReleaseAudioFocusRequest *)command callback:(void(^)(CRNDialogSystemReleaseAudioFocusResponse *))callback NS_SWIFT_NAME(on(releaseAudioFocus:callback:));
- (void)onGetActiveMediaTypeBeforeConversation:(CRNDialogSystemGetActiveMediaTypeBeforeConversationRequest *)command callback:(void(^)(CRNDialogSystemGetActiveMediaTypeBeforeConversationResponse *))callback NS_SWIFT_NAME(on(getActiveMediaTypeBeforeConversation:callback:));
- (void)onGetNetworkStatus:(CRNDialogSystemGetNetworkStatusRequest *)command callback:(void(^)(CRNDialogSystemGetNetworkStatusResponse *))callback NS_SWIFT_NAME(on(getNetworkStatus:callback:));
- (void)onGetMediaStateBeforeConversation:(CRNDialogSystemGetMediaStateBeforeConversationRequest *)command callback:(void(^)(CRNDialogSystemGetMediaStateBeforeConversationResponse *))callback NS_SWIFT_NAME(on(getMediaStateBeforeConversation:callback:));

@end

NS_SWIFT_NAME(SystemDomain)
@interface CRNSystemDomain : NSObject <CRNDomain>
@property (weak, nonatomic) id <CRNSystemDomainDelegate> delegate;
@end


NS_ASSUME_NONNULL_END
