/*********************************************************************
 * @file ark_conversation_engine.h
 *
 * This is the header file for customer to integrate.
 *
 *********************************************************************/

#ifndef ARK_CONVERSATION_ENGINE_H
#define ARK_CONVERSATION_ENGINE_H

#ifdef ACE_DLL_EXPORT
#ifdef _WIN32
#define ACE_API_EXPORT __declspec(dllexport)
#else
// for other platforms
#define ACE_API_EXPORT
#endif
#else
#define ACE_API_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>

/**
*  This enumeration defines the result code of calling the ace api.<p>
*/
typedef enum {
    ACE_OK = 0,                 /*!< No error occurred. */
    ACE_ERROR_UNKNOWN,          /*!< Some errors occurred,but unkown error type. */
    ACE_ERROR_INITIALIZE_TWICE, /*!< Application called { @link ace_initialize } twice. */
    ACE_ERROR_NOT_INITIALIZED,  /*!< The Ark Conversation Engine has not been initialized. */
    ACE_ERROR_CONFIG,           /*!< Config error,please check the config file. Returns in { @link ace_initialize }.*/
    ACE_ERROR_PROMPT,           /*!< play prompt error. Returns in API { @link ace_playPrompt } */
} AceResultCode;

/*!
 * This enumeration defines the AudioMode, used in { @link StartParams_t }.
 */
typedef enum {
    EXTERNAL = 0, /*!< Audio recording or playing by APP.*/
    INTERNAL      /*!< Audio recording or playing by SDK.*/
} AudioMode;

/*!
 * This enumeration defines the interaction modes which indicate how the user triggers a conversation.
 * It's used in { @link StartParams_t }.
 */
typedef enum {
    WUW = 0, /*!< Start a conversation by saying wake up word. */
    PTT      /*!< Start a conversation by PTT event. */
} InteractionMode;

//INTERNAL USE ONLY
typedef enum {
    CLOUD_SERVER_CHENGDU, /*!< Cloud server:ChengDu. */
    CLOUD_SERVER_MONTREAL /*!< Cloud server:Montreal. */
} CloudServerConfig;

/*!
 * This enumuration defines the type of the audio which will be sent to application via { @link fnOnSpeechAudio }.
 */
typedef enum {
    WAKEUP_WORD, /*!< The audio of wakeup word. This kind of audio will be returned after a wakeup word is detected. */
    COMMAND,     /*!< The audio of command. This kind of audio will be returned in streaming mode while user is saying command. */
    GENERIC      /*!< The generic speech audio data before conversation begins. This kind of audio will be returned when speech is detected while the system is listening for wakeup word. */
} SpeechAudioType;

/*!
 * Struct defines the prompter voice.
 */
typedef struct PrompterVoice_ {
    const char *voiceId;           /*!< The voice id, such as "cmn-CHN_lilian-ml_embedded-pro_1-0-1_female". */
    const char *language;          /*!< Language in 6-character format, such as "cmn-CHN". */
    const char *voiceName;         /*!< The voice name, such as "lilian-ml". */
    const char *operatingPoint;    /*!< The operating point, such as "embedded-pro". */
    const char *version;           /*!< The version of voice, such as "1-0-1". */
    const char *gender;            /*!< The gender, could be one of [male, female]. */
    const char **availableDomains; /*!< The supported of domains under this voiceId, such as default, sds... etc. Every voice should have a "default" domain. */
    size_t domainSize;             /*!< The size of availableDomains. */
} PrompterVoice_t;

/*!
 * Struct defines the configuration parameters when call { @link ace_start }
 */
typedef struct StartParams_ {
    bool enableDebug;                /*!< Enable debug or not. */
    bool enableBargein;              /*!< Enable bargein mode or not. */
    int snoozingDuration;            /*!< The duration for snoozing in millisecond ，must greater than 0 or equal to 0, if equal to 0 which means no short snoozing. */
    int listeningTimeout;            /*!< The listening timeout while the system is listening the command in millisecond, must greater than 0. */
    AudioMode audioRecordingMode;    /*!< Audio recording mode. */
    AudioMode audioPlaybackMode;     /*!< Audio playback mode. */
    InteractionMode interactionMode; /*!< The interaction mode,WUW or PTT. */
    const char *extra;               /*!< Extra information, json format, set to NULL if no extra information. */
} StartParams_t;

/**
 * Callback function APP should implement to receive and handle the requests from dialog system.
 * @param userData the userdata which was set in { @link ace_initialize }.
 * @param json  the Requests string from the dialog system, which format is json.
 * NOTE: while implementing fnOnRequest(), APP must call { @link ace_sendResponse } after the Request is handled. If failed to do so, dialog system will stuck in waiting for response state.
 */
typedef void (*fnOnRequest)(void *userData, const char *json);

/**
 * This function will be called to abort the request(due to application failed to send the response to the dialog system within timeout).
 * @param userData the userdata which was set in { @link ace_initialize }.
 * @param json the previous request in json format which time out happened.
 * @return false if application is NOT able to abort the request, dialog system will continue waiting for the response. Return true if application is able to abort the request, in this case, dialog flow will proceed without the response.
 */
typedef bool (*fnOnAbortRequest)(void *userData, const char *json);

/**
 * This callback used to receive notifications from the dialog system. The application may use these notifications to implement some GUI animations.
 * @param userData the userdata which was set in { @link ace_initialize }.
 * @param json the notification json, such as DialogEvent, DialogStateChanged, etc.
 */
typedef void (*fnOnNotification)(void *userData, const char *json);

/**
 * The callback will be called when the dialog system requests application to abort the prompt playback.
 * @param userData the userdata which was set in { @link ace_initialize }.
 * @param instanceName The prompter instance name.
 * @param ttsId The tts id of aborted prompt.
 */
typedef void (*fnOnAbortPrompt)(void *userData, const char *instanceName, int ttsId);

/**
 * This callback function will receive the audio data which is generated from the text that we put in the function { @link ace_playPrompt }.
 * It requests application to play the audio via speaker. After this method returns,
 * the audio data should already be played or written to audio output device.
 * DO NOT buffer the audio data and let the method return immediately, otherwise application will get wrong state notification of the prompt(E.g., the system thought the audio play
 * has finished while the application is still playing the audio).
 * @param userData the userdata which was set in { @link ace_initialize }.
 * @param instanceName The prompter instance name.
 * @param ttsId The tts id of the audio data.
 * @param pcm The audio data to be played. Please note that application should
 *            consume the audio data immediately(e.g. write the audio data to audio output device).
 * @param size The size of the audio data in bytes.
 */
typedef void (*fnOnPromptAudio)(void *userData, const char *instanceName, int ttsId, const char *pcm, size_t size);

/**
 * Notify the end of stream of the prompt, there is no more audio chunk for the prompt represented by the ttsId.
 * @param userData the userdata which was set in { @link ace_initialize }.
 * @param instanceName The prompter instance name.
 * @param ttsId The tts id of the audio data.
 */
typedef void (*fnOnPromptEndOfStream)(void *userData, const char *instanceName, int ttsId);

/**
 * This callback function will receive the prompt event.
 * @param userData the userdata which was set in { @link ace_initialize }.
 * @param instanceName The prompter instance name.
 * @param ttsId The tts id for the event.
 * @param event The prompt event in json format.
*/
typedef void (*fnOnPromptEvent)(void *userData, const char *instanceName, int ttsId, const char *event);

/**
 * This callback function will receive prompt error information.
 * @param userData the userdata which was set in { @link ace_initialize }.
 * @param instanceName The prompter instance name.
 * @param ttsId The tts id for the error.
 * @param error The prompt error in json format.
*/
typedef void (*fnOnPromptError)(void *userData, const char *instanceName, int ttsId, const char *error);

/**
 * This callback function indicates that the app should start sending audio data to the engine by calling { @link ace_feedAudio }.
 * @param userData the userdata which was set in { @link ace_initialize }.
 */
typedef void (*fnOnStartRecording)(void *userData);

/**
 * This callback function indicates that the app should stop sending audio data to the engine (stop calling { @link ace_feedAudio }).
 * @param userData the userdata which was set in { @link ace_initialize }.
 * @param transient If true, it indicates { @link fnOnStartRecording } will be called after a while (e.g. after tts finishes prompting),
 *                  in order to reduce the recording latency, application could keep the audio recording but NOT sending the audio data 
 *                  to ASR engine by { @link ace_feedAudio }. If false, it indicates that application could stop recording and close the 
 *                  audio input device.
 */
typedef void (*fnOnStopRecording)(void *userData, bool transient);

/**
 * This callback function will receive the audio data from the recognition engine.
 * @param userData the userdata which was set in { @link ace_initialize }.
 * @param type The type of the audio data,see { @link SpeechAudioType }.
 * @param pcm The audio data.
 * @param size The size of the audio data in bytes.
 */
typedef void (*fnOnSpeechAudio)(void *userData, SpeechAudioType type, const char *pcm, size_t size);

// pack the callback functions
/*!
 * Struct defines callback functions.
 */
typedef struct AceCallbacks_ {
    fnOnRequest onRequest;
    fnOnNotification onNotification;
    fnOnAbortPrompt onAbortPrompt;
    fnOnPromptAudio onPromptAudio;
    fnOnPromptEvent onPromptEvent;
    fnOnPromptError onPromptError;
    fnOnAbortRequest onAbortRequest;
    fnOnStartRecording onStartRecording;
    fnOnStopRecording onStopRecording;
    fnOnSpeechAudio onSpeechAudio;
    fnOnPromptEndOfStream onEndOfStream;
} AceCallbacks_t;

/**
 * Init ark conversation engine.
 * @param [in] data_path The path of the data pack.Should be absolute path.
 * @param [in] writable_path A writable directory for SDK to save or generate necessary data, such as log, audio, cop file, etc.Should be absolute path.
 * @param [in] language The language we want to use,such as eng-USA, cmn-CHN...etc.
 * @param [in] user_id User id for current user. The user id can:
 *                     1.help to improve the performance of cloud recognition due to the cloud can do some adaptation according to the same user id.
 *                     2.be used in the user profile scenario. Different user can set different user contexts(current location, home coordinates,
 *                     office coordinates), the cloud can return smart results according to these user contexts. For example, the user speaks 
 *                     "Find some restaurants near the company", the cloud can send user the restaurants near the company according to the office coordinates.
 *                     3.use with biometry.. 
 * @param [in] voice_id The available prompter voices that supported by the datapack.We can get the this from the function { @link ace_getAvailablePromptVoices }.
 * @param [in] callbacks The callbacks struct { @link AceCallbacks_t },to get callback information.
 * @param [in] user_data Context data set by user, will be send back to user in callback functions, can be NULL.
 * @return { @link ACE_OK } means successful. Otherwise please see { @link AceResultCode }.
 */
ACE_API_EXPORT AceResultCode ace_initialize(const char *data_path, const char *writable_path, const char *language, const char *user_id, const char *voice_id, AceCallbacks_t callbacks, void *user_data);

/**
 * Tear down the engine.
 * @return { @link ACE_OK } means successful. Otherwise please see { @link AceResultCode }.
 */
ACE_API_EXPORT AceResultCode ace_teardown();

/**
 * Start conversation engine。
 * @param [in] params The start params { @link StartParams_t }.
 * @return { @link ACE_OK } means successful. Otherwise please see { @link AceResultCode }.
 */
ACE_API_EXPORT AceResultCode ace_start(StartParams_t params);

/**
 * Stop conversation engine.
 * @return { @link ACE_OK } means successful. Otherwise please see { @link AceResultCode }.
 */
ACE_API_EXPORT AceResultCode ace_stop();

/**
 * Send app event to the conversation engine ,the events are defined in the file interface.json.
 * @param [in] msg_json The event content, consult interface.json for details.
 * @return { @link ACE_OK } means successful. Otherwise please see { @link AceResultCode }.
 */
ACE_API_EXPORT AceResultCode ace_sendAppEvent(const char *msg_json);

/**
 * Send response for system call(with msgId) to conversation engine.
 * @param [in] resp_json The response json content.
 * NOTE: Dialog will wait for this call for every system call, so don't forget to call this!
 * @return { @link ACE_OK } means successful. Otherwise please see { @link AceResultCode }.
 */
ACE_API_EXPORT AceResultCode ace_sendResponse(const char *resp_json);

/**
 * Generate a speech from the text that user put in, the audio data will be received from the callback function { @link fnOnPromptAudio }
 * @param [in] instance_name The prompt instance we want to use
 * @param [in] voice_id The voices that the datapack supports. Usecase format: lang_speaker_gender, voice example:
 *                   cmn-CHN_lilian-ml_female.
 * @param [in] domain The prompter domain, such as default,nav..etc.
 * @param [in] text The text that we want to play
 * @param [in] interrupt If this prompt request will interrupt the previous requests or not.
 * @param [out] prompt_id The id of this prompt request.
 * @return { @link ACE_OK } means successful. Otherwise please see { @link AceResultCode }.
 */
ACE_API_EXPORT AceResultCode ace_playPrompt(const char *instance_name, const char *voice_id, const char *domain, const char *text, bool interrupt, int *prompt_id);

/**
 * Stop Generating a speech from the text that user put in the function { @link ace_playPrompt }.
 * @param [in] instance_name The tts instance we want to stop
 * @return { @link ACE_OK } means successful. Otherwise please see { @link AceResultCode }.
 */
ACE_API_EXPORT AceResultCode ace_abortPrompt(const char *instance_name);

/**
 * Pause Generating a speech from the text that user put in the function { @link ace_playPrompt }.
 * @param [in] instance_name The tts instance we want to pause.
 * @return { @link ACE_OK } means successful. Otherwise please see { @link AceResultCode }.
 */
ACE_API_EXPORT AceResultCode ace_pausePrompt(const char *instance_name);

/**
 * Continue Generating a speech from the text that user put in the function { @link ace_playPrompt }.
 * @param [in] instance_name The tts instance we want to continue.
 * @return { @link ACE_OK } means successful. Otherwise please see { @link AceResultCode }.
 */
ACE_API_EXPORT AceResultCode ace_resumePrompt(const char *instance_name);

/**
 * Get the version of the conversation engine.
 * @return The version of the conversation engine.
 */
ACE_API_EXPORT const char *ace_getVersion();

/**
 * Update dynamic content, such as phone contact, music, app etc. The updated dynamic content will
 * take effect in the next voice recognition. If application wants to remove all the dynamic content for certain type,
 * pass 0 as the third argument(data_count).
 * Format for PHONE: id#name, e.g.
 * 1#David
 * 2#Joe
 * 3#Michael Jackson
 * 
 * Format for MUSIC: id#song#artist#album, e.g.
 * 1#Hero#Mariah Carey#Music Box
 * If artist or/and album information is not available, the field can be left as empty, e.g.
 * 1#Hero##
 * or
 * 1#Hero#Mariah Carey#
 *
 * Format for APPLICATION : id#app, e.g.
 * 1#Facebook
 * 2#Google Map
 * 3#Instagram
 * @param [in] category The tts instance we want to continue.
 * @param [in] data_list The data list,such as {"1#David", "2#Joe"}.
 * @param [in] data_count The size of the data list.
 * @return { @link ACE_OK } means successful. Otherwise please see { @link AceResultCode }.
 * 
*/
ACE_API_EXPORT AceResultCode ace_updateDynamicContent(const char *category, const char *data_list[], size_t data_count);

/**
 * Feed pcm format audio data to the engine.
 * @param [in] pcm Audio data.
 * @param [in] size The size of the audio data you send.
 * @return { @link ACE_OK } means successful. Otherwise please see { @link AceResultCode }.
*/
ACE_API_EXPORT AceResultCode ace_feedAudio(const char *pcm, size_t size);

/**
 * Set cloud server location.
 * @param [in] server Server location,see descrition { @link CloudServerConfig }.
 * NOTE: Once the ace_setCloudServer is called , we should reinitialize the engine.
 * @return { @link ACE_OK } means successful. Otherwise please see { @link AceResultCode }.
*/
ACE_API_EXPORT AceResultCode ace_setCloudServer(CloudServerConfig server);

/**
  * Change the user id. <p>
  * @param [in] user_id See { @link ace_initialize }.
*/
ACE_API_EXPORT void ace_setUserId(const char *user_id);

/**
  * Get the prompt instance. <p>
  * @return The prompt instance,example:prompter1
  * NOTE: The function should be called after ace_initialize. nd the returned params should release the heap by calling { @link ace_releaseString }. 
*/
ACE_API_EXPORT const char *ace_getDialogPromptInstanceName();

/**
  * Get the available prompter languages that supported by the datapack.
  * @param [in] data_path    The root path of datapack.
  * @param [out] languages   The available prompter languages that supported by the datapack.
  * @param [out] size        The size of languages list.
  * @return { @link ACE_OK } means successful. Otherwise please see { @link AceResultCode }.
*/
ACE_API_EXPORT AceResultCode ace_getAvailablePromptLanguages(const char *data_path, const char ***languages, size_t *size);

/**
  * Get the available asr languages that supported by the datapack.
  * @param [in] data_path    The root path of datapack.
  * @param [out] languages   The available asr languages that supported by the datapack.
  * @param [out] size        The size of languages list.
  * @return { @link ACE_OK } means successful. Otherwise please see { @link AceResultCode }.
*/
ACE_API_EXPORT AceResultCode ace_getAvailableAsrLanguages(const char *data_path, const char ***languages, size_t *size);

/**
 * Get available prompt instance list,when function { @link ace_playPrompt } is called,the instance name should be one of the instances factor,example: {"prompter1", "prompter2"}.
 * @param [out] instances The instances list pointer.
 * @param [out] size The size of the instances list.
 * NOTE: The function should be called after ace_initialize,and the params instances should release the heap by calling { @link ace_releaseStringList }
 * @return { @link ACE_OK } means successful. Otherwise please see { @link AceResultCode }.
*/
ACE_API_EXPORT AceResultCode ace_getAvailablePromptInstanceNames(const char ***instances, size_t *size);

/**
 * Set the voice type which is used by dialog prompt .
 * @param [in] voice_id The voices that the datapack supports. Usecase format: lang_speaker_gender, voice example:cmn-CHN_lilian-ml_female.
 * @return { @link ACE_OK } means successful. Otherwise please see { @link AceResultCode }.
*/
ACE_API_EXPORT AceResultCode ace_setDialogVoiceId(const char *voice_id);

/**
  * Get the available voices type instances for prompter. <p>
  * @param [in] data_path The data path, same as the datapath in ace_initialize.
  * @param [in] language The language filter, such as eng-USA, cmn-CHN...etc. If set, this function will only return the available voices under this language, if set to empty(""), this function will return all available voices.
  * @param [out] voices   The voice list that dialog support,see { @link PrompterVoice_t }.
  * @param [out] size     The size of the voices list.
  * NOTE:This funciton is available before  { @link ace_initialize } is called.The params voices should release the out param voices by calling { @link ace_releasePrompterVoiceList }.
  * @return { @link ACE_OK } means successful. Otherwise please see { @link AceResultCode }.
*/
ACE_API_EXPORT AceResultCode ace_getAvailablePromptVoices(const char *data_path, const char *language, PrompterVoice_t ***voices, size_t *size);

/**
  * Release the heap alloc by function { @link ace_getAvailablePromptInstances }. <p>
  * @param [in] data The data that we want to release.
  * @param [in] size The size of the data list size.
  * NOTE: The function must be called when we finished getting the instance list or voices list, or may cause memory leak.
*/
ACE_API_EXPORT void ace_releaseStringList(const char **data, size_t size);

/**
  * Release the heap alloc by function { @link ace_getDialogPromptInstance }. <p>
  * @param [in] data The data that we want to release.
  * NOTE: The function must be called when we finished getting the dialog prompt instance, or may cause memory leak.
*/
ACE_API_EXPORT void ace_releaseString(const char *data);

/**
  * Release the heap alloc by function { @link ace_getAvailablePromptVoices }. <p>
  * @param [in] voices The voices data that we want to release,see { @link PrompterVoice_t }.
  * NOTE: The function must be called when we finished getting the dialog prompt voice, or may cause memory leak.
*/
ACE_API_EXPORT void ace_releasePrompterVoiceList(PrompterVoice_t **voices, size_t size);

/**
  * Set context data for cloud NLU recognition.
  * The context data can help to improve the recognition result and make the engine more smart.
  * For parameter "key" could be:
  *   1. locationContext
  *   2. navigationContext
  *   3. driverContext
  *   4. vehicleContext
  *   5. uiContext
  *   6. dialog
  * 
  * In the real customer projects, the key can be expanded according to the customer requirements.
  * The details of context data format, please check the developer guide document which released with data pack.
  *
  * @param[in] key The key for the context data.
  * @param[in] context context data in JSON format.
  * @return { @link ACE_OK } means successful. Otherwise please see { @link AceResultCode }.
*/
ACE_API_EXPORT AceResultCode ace_updateCloudNluContext(const char *key, const char *context);

#ifdef __cplusplus
}
#endif

#endif