#import <Ark/CRNASRLanguage.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ArkAssistant.VoiceConfig)
@interface CRNVoiceConfig : NSObject
@property(readonly, strong, nonatomic) NSString *voiceId;
@property(readonly, strong, nonatomic) CRNASRLanguage language;
@property(readonly, strong, nonatomic) NSString *voiceName;
@property(readonly, strong, nonatomic) NSString *gender;
@property(readonly, strong, nonatomic) NSArray<NSString *> *availableDomains;
@end

NS_ASSUME_NONNULL_END
