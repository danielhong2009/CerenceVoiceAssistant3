#import <Foundation/Foundation.h>
#import <Ark/CRNDynamicContentTypeEnum.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CRNHostController;
@protocol CRNArkAssistantHmiDelegate;
@protocol CRNArkAssistantAudioInputDelegate;
@protocol CRNArkAssistantSpeechAudioDelegate;
@protocol CRNArkAssistantTTSPrompter;
@protocol CRNTTSOutput;
@protocol CRNLogger;

@class CRNDialogContact;
@class CRNDialogMusicInfo;
@class CRNBaseEvent;
@class CRNConfig;
@class CRNVoiceConfig;
@class CRNCloudNLUContext;

/// The cloud environment used by the dialog engine.
typedef NS_ENUM(NSInteger, CRNCloudEnvironment) {
    /// Chengdu
    CRNCloudEnvironmentChengdu = 0,
    /// Montreal
    CRNCloudEnvironmentMontreal
} NS_SWIFT_NAME(ArkAssistant.CloudEnvironment);

/// The wake up mode used by the dialog engine.
typedef NS_ENUM(NSInteger, CRNDialogWakeUpMode)
{
    CRNDialogWakeUpModeWuwListening = 0,
    CRNDialogWakeUpModePushToTalk
} NS_SWIFT_NAME(DialogWakeUpMode);

/// The interface to let clients to interact with the dialog engine - Cerence's
/// voice recognition service.
NS_SWIFT_NAME(ArkAssistantSpec)
@protocol CRNArkAssistantSpec <NSObject>

#pragma mark - Life Cycle

/// Initializes the SDK.
///
/// @param config The configuration.
/// @param error Returns, by-reference, a description of the error.
- (BOOL)initializeWithConfig:(CRNConfig *)config controller:(id <CRNHostController>)controller error:(NSError **)error NS_SWIFT_NAME(initialize(config:controller:));

/// Initializes the SDK.
///
/// @param config The configuration.
/// @param error Returns, by-reference, a description of the error.
- (BOOL)initializeWithConfig:(CRNConfig *)config controller:(id <CRNHostController>)controller logger:(nullable id <CRNLogger>)logger error:(NSError **)error NS_SWIFT_NAME(initialize(config:controller:logger:));

/// Set the dialog's TTS voice.
/// @param inVoiceConfig The voice to use.
/// @param error Returns, by-reference, a description of the error.
- (BOOL)setDialogTTSVoice:(CRNVoiceConfig *)inVoiceConfig error:(NSError **)error NS_SWIFT_NAME(seDialogTTSVoice(_:));

/// Set the dialog's TTS voice.
/// @param inVoiceID The voice to use.
/// @param error Returns, by-reference, a description of the error.
- (BOOL)setDialogTTSVoiceID:(NSString *)inVoiceID error:(NSError **)error NS_SWIFT_NAME(seDialogTTSVoiceID(_:));

/// Starts to switch the environment.
///
/// @param error Returns, by-reference, a description of the error.
- (BOOL)setCloudServer:(CRNCloudEnvironment)environment error:(NSError **)error NS_SWIFT_NAME(set(cloudServer:));

/// Starts to run the voice assistant.
///
/// @param error Returns, by-reference, a description of the error.
- (BOOL)startVoiceAssistantWithWakeUpMode:(CRNDialogWakeUpMode)mode BargeInOn:(BOOL)isBargeInOn error:(NSError **)error NS_SWIFT_NAME(startVoiceAssistant(wakeUpMode:bargeInOn:));

/// Stop the voice assistant.
///
/// @param error Returns, by-reference, a description of the error.
- (BOOL)stopVoiceAssistantAndReturnError:(NSError **)error NS_SWIFT_NAME(stopVoiceAssistant());

/// Tears down the engine.
///
/// @param error Returns, by-reference, a description of the error.
- (BOOL)tearDownAndReturnError:(NSError **)error;

#pragma mark - Data Input

/// Sends a given event to the engine.
///
/// Please note that the method should be called only in background threads.
///
/// @param event The event.
/// @param error Returns, by-reference, a description of the error.
- (BOOL)sendEvent:(CRNBaseEvent *)event error:(NSError **)error NS_SWIFT_NAME(send(appEvent:));

/// Sends a response for a specific command.
///
/// @param messageID The message ID of the original command.
/// @param response The body of the response.
/// @param error Returns, by-reference, a description of the error.
- (BOOL)sendResponse:(nullable id)response messageID:(NSUInteger)messageID error:(NSError **)error NS_SWIFT_NAME(send(response:messageID:));

/// Feeds audio data to the engine.
///
/// Please note that the engine only accept signed int 16 PCM data with 22050
/// sample rate, 1 channel. Each slice should contain 320 samples (640 bytes).
///
/// @param data The audio data.
/// @param size The size of the data.
/// @param error The error that happens while feeding audio to the engine.
- (BOOL)feedAudioData:(void *)data size:(unsigned int)size error:(NSError **)error NS_SWIFT_NAME(feed(audioData:size:));

#pragma mark - TTS

/// Provide the list of available language that the ArkAssistant supports.
///
/// @param inDataPath  the path to place the data pack
+ (nonnull NSArray<NSString *> *)getAvailableASRLanguagesFromDataPath:(nonnull NSString *)inDataPath error:(NSError **)error NS_SWIFT_NAME(getAvailableASRLanguages(dataPath:)) __attribute__((swift_error(nonnull_error)));

/// Provide the list of available language that the ArkAssistant supports.
///
/// @param inDataPath  the path to place the data pack
+ (nonnull NSArray<NSString *> *)getAvailableTTSLanguagesFromDataPath:(nonnull NSString *)inDataPath error:(NSError **)error NS_SWIFT_NAME(getAvailableTTSLanguages(dataPath:)) __attribute__((swift_error(nonnull_error)));

/// Provide the list of available language that the ArkAssistant supports.
- (nonnull NSArray<NSString *> *)getAvailableTTSLanguagesWithError:(NSError **)error NS_SWIFT_NAME(getAvailableTTSLanguages()) __attribute__((swift_error(nonnull_error)));

/// Provide the list of available voice config that the ArkAssistant supports.
///
/// @param inDataPath the path to place the data pack
/// @param inLanguage the language to use
+ (NSArray<CRNVoiceConfig *> *)getAvailableTTSVoicesFromDataPath:(NSString *)inDataPath language:(NSString *)inLanguage error:(NSError **)error NS_SWIFT_NAME(getAvailableTTSVoices(dataPath:language:)) __attribute__((swift_error(nonnull_error)));

/// Provide the list of available voice config that the ArkAssistant supports.
///
/// @param inLanguage the language to use
- (NSArray<CRNVoiceConfig *> *)getAvailableTTSVoicesWithLanguage:(NSString *)inLanguage error:(NSError **)error NS_SWIFT_NAME(getAvailableTTSVoices(language:)) __attribute__((swift_error(nonnull_error)));

/// Create the TTS prompter.
/// The assistant won't retain the prompter. You should retain it by yourself.
/// @param inError The error that happens while feeding audio to the engine
- (id<CRNArkAssistantTTSPrompter>)createPrompterWithError:(NSError **)inError __attribute__((swift_error(nonnull_error)));

/// Create the TTS prompter with your own TTSOutput.
/// The assistant won't retain the prompter. You should retain it by yourself.
/// @param inOutput The output create by the user.
/// @param inError The error that happens while feeding audio to the engine
- (id<CRNArkAssistantTTSPrompter>)createPrompterWithOutput:(nullable id<CRNTTSOutput>)inOutput error:(NSError **)inError __attribute__((swift_error(nonnull_error)));

/// Invalidate the prompter.
/// @param inPrompter The prompter you want to invalidate.
/// @param inError The error that happens while feeding audio to the engine
- (void)destroyPrompter:(id<CRNArkAssistantTTSPrompter>)inPrompter error:(NSError **)inError __attribute__((swift_error(nonnull_error)));

#pragma mark - Dynamic Content

/// Helps Ark Assistant to load pre-defined dynamic contents like contacts, music tracks, current location and so on.
/// @param contentType The type of the content.
///
/// @param error Returns, by-reference, a description of the error.
- (BOOL)notifyContentChangedWithType:(CRNDynamicContentTypeEnum)contentType error:(NSError **)error NS_SWIFT_NAME(notifyContentChanged(type:));

/// Helps Ark Assistant to load user-defined dynamic contents.
/// @param contentType User-defined type. The type should be defined in dcc_config.
/// @param dataList Data to update.
///
/// @param error Returns, by-reference, a description of the error
- (BOOL)updateDynamicContent:(NSString *)contentType dataList:(NSArray<NSString *> *)dataList error:(NSError **)error NS_SWIFT_NAME(updateDynamicContent(contentType:dataList:));

/// Tells the assistant about where the current user is at in order to help the
/// assistant to find proper POIs and weather information.
///
/// @param longitude The longitude of the current location.
/// @param latitude The latitude of the current location.
/// @param error The error that happens while feeding audio to the engine.
- (BOOL)updateLocationWithLongitude:(float)longitude latitude:(float)latitude error:(NSError **)error NS_SWIFT_NAME(updateLocation(longitude:latitude:));

/// Updates the NLU context to the cloud.
/// @param inContext The context to update. There some pre-defined context such as, CRNCloudNLULocationContext, CRNCloudNLUDriverContext, CRNCloudNLUNavigationContext, CRNCloudNLUUnitContext and CRNCloudNLUVehicleContext.
///
/// @param error Returns, by-reference, a description of the error
- (BOOL)updateCloudNLUContext:(CRNCloudNLUContext *)inContext error:(NSError **)error NS_SWIFT_NAME(updateCloudNLUContext(_:));

#pragma mark - Delegates

/// Registers a system call delegate.
///
/// Please note that it creates a weak reference.
///
/// @param delegate the delegate.
- (id <CRNArkAssistantSpec>)registerHmiDelegate:(id <CRNArkAssistantHmiDelegate>)delegate NS_SWIFT_NAME(register(hmiDelegate:));

/// Registers a delegate to listen to the events for audio input.
///
/// Please note that it creates a weak reference.
///
/// @param delegate the delegate.
- (id <CRNArkAssistantSpec>)registerAudioInputDelegate:(id <CRNArkAssistantAudioInputDelegate>)delegate NS_SWIFT_NAME(register(audioInputDelegate:));

/// Registers a TTS output. It creates a weak reference.
///
/// Please note that it creates a weak reference.
///
/// @param output The output.
- (id <CRNArkAssistantSpec>)registerTTSOutput:(id <CRNTTSOutput>)output NS_SWIFT_NAME(register(ttsOutput:));

/// Registers a speech audio delegate.
///
/// Please note that it creates a weak reference.
///
- (id <CRNArkAssistantSpec>)registerSpeechAudioDelegate:(id <CRNArkAssistantSpeechAudioDelegate>)delegate NS_SWIFT_NAME(register(speechAudioDelegate:));

/// The registered system call delegate.
@property (readonly, weak, nonatomic) id <CRNArkAssistantHmiDelegate> hmiDelegate;

/// The registered audio input delegate.
@property (readonly, weak, nonatomic) id <CRNArkAssistantAudioInputDelegate> audioInputDelegate;

/// The registered TTS output.
@property (readonly, weak, nonatomic) id <CRNTTSOutput> ttsOutput;

/// The registered speech audio delegate.
@property (readonly, weak, nonatomic) id <CRNArkAssistantSpeechAudioDelegate> speechAudioDelegate;

@end

NS_ASSUME_NONNULL_END
