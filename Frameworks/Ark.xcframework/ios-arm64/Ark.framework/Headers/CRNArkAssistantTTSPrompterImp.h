#import <Foundation/Foundation.h>
#import <Ark/CRNAudioQueueTTSOutput.h>
#import "CRNArkAssistantTTSPrompter.h"

NS_ASSUME_NONNULL_BEGIN

@class CRNArkAssistantTTSPrompterImp;
@protocol CRNArkAssistantTTSPrompterImpDelegate <CRNArkAssistantSpec>
- (BOOL)prompter:(CRNArkAssistantTTSPrompterImp *)inPrompter shouldPlayWithText:(NSString *)inText voiceID:(NSString *)inVoiceID domain:(NSString *)inDomain shouldInterrupt:(BOOL)inShouldInterrupt error:(NSError **)inError;
- (BOOL)prompter:(CRNArkAssistantTTSPrompterImp *)inPrompter shouldPauseWithError:(NSError **)inError;
- (BOOL)prompter:(CRNArkAssistantTTSPrompterImp *)inPrompter shouldResumeWithError:(NSError **)inError;
- (BOOL)prompter:(CRNArkAssistantTTSPrompterImp *)inPrompter shouldStopWithError:(NSError **)inError;
@end

/// A simple TTS prompter which uses `CRNAudioQueueTTSOutput` to output TTS audio data.
NS_SWIFT_NAME(ArkAssistant.DefaultTTSPrompter)
@interface CRNArkAssistantTTSPrompterImp : NSObject <CRNArkAssistantTTSPrompter>
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithName:(NSString *)inPrompterName delegate:(id<CRNArkAssistantTTSPrompterImpDelegate>)inDelegate;
- (instancetype)initWithName:(NSString *)inPrompterName output:(id<CRNTTSOutput>)inOutput delegate:(id<CRNArkAssistantTTSPrompterImpDelegate>)inDelegate;

- (BOOL)tearDownWithError:(NSError **)inError;

- (void)didReceiveAudio:(const char *)data size:(unsigned int)size;
- (void)didEndPlayingAudio;
- (void)didReceivePromptEvent:(NSString *)event;
- (void)didReceivePromptError:(NSError *)error;
@end

NS_ASSUME_NONNULL_END
