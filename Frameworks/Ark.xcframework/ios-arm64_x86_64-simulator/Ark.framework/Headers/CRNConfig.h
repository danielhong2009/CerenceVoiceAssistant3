#import <Foundation/Foundation.h>
#import <Ark/CRNArkAssistantSpec.h>
#import <Ark/CRNASRLanguage.h>
#import <Ark/CRNVoiceConfig.h>

NS_ASSUME_NONNULL_BEGIN

/// The configuration for starting Ark Assistant.
NS_SWIFT_NAME(ArkAssistant.Config)
@interface CRNConfig : NSObject
/// The path of the language pack.
@property (strong, nonatomic) NSString *dataPath;
/// The path where Ark Assistant could write audio and text logs.
@property (strong, nonatomic) NSString *writablePath;
/// The language of the language pack.
@property (strong, nonatomic) CRNASRLanguage language;
/// The cloud environment.
@property (assign, nonatomic) CRNCloudEnvironment environment;
/// The user ID. Helps Cerence to identify users.
@property (strong, nonatomic) NSString *userId;
/// If barge-in is on or off.
@property (assign, nonatomic) BOOL isBargeInOn;
/// The voice config used to play dialog prompt
@property (strong, nonatomic) CRNVoiceConfig *voice;
@end

NS_ASSUME_NONNULL_END
