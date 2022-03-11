#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CRNAudioInput;

/// The interface of the delegate of `CRNAudioInput`.
///
/// To complete a voice assistant using Ark framework, yuo should set an audio
/// input in you app, and let your app to become the delegate of the audio input
/// to receive audio data, then send audio data to the dialog engine.
NS_SWIFT_NAME(AudioInputDelegate)
@protocol CRNAudioInputDelegate <NSObject>

/// Called when the input is about to start.
///
/// The delegate should help the input to setup the audio session.
///
/// @param input The input
- (nullable NSError *)inputWillStart:(id <CRNAudioInput>)input NS_SWIFT_NAME(inputWillStart(_:));

/// Called when there are incoming receives data.
///
/// The delegate should send the data to the dialog manager.
///
/// @param input The input.
/// @param bytes The incoming audio data.
/// @param size The size of the incoming audio data.
- (void)input:(id <CRNAudioInput>)input didReceiveAudioData:(void *const)bytes size:(unsigned int)size NS_SWIFT_NAME(input(_:didReceive:size:));
@end

/// Defines an object as an audio input source.
///
/// To complete a voice assistant, an app needs to record users voice and then
/// send audio data to the dialog engine. CRNAudioInput only defines the
/// interface, if you want an implemented audio input, see `CRNAudioQueueInput`.
NS_SWIFT_NAME(AudioInput)
@protocol CRNAudioInput <NSObject>

/// Asks the input to start creating an audio recorder and
/// start recoding.
///
/// @param callback The callback block.
- (BOOL)startWithCallback:(void (^)(NSError *_Nullable))callback;

/// Asks the audio input to stop running.
///
/// The method could work only after calling `startWithCallback:`.
- (BOOL)stopWithCallback:(void (^)(NSError *_Nullable))callback;

/// Pauses the audio input.
///
/// The method could work only after calling `startWithCallback:`.
- (BOOL)pauseWithCallback:(void (^)(NSError *_Nullable))callback;

/// Resumes the audio input.
///
/// The method could work only after calling `startWithCallback:`.
- (BOOL)resumeWithCallback:(void (^)(NSError *_Nullable))callback;

/// Delegate for the audio input.
@property (weak, nonatomic) id <CRNAudioInputDelegate> delegate;
/// The the audio input is running.

@property (assign, nonatomic, readonly) BOOL running;
@end

NS_ASSUME_NONNULL_END
