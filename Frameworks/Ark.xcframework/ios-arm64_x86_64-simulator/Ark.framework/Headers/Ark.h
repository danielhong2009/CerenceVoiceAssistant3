#import <Foundation/Foundation.h>

// :nodoc:
FOUNDATION_EXPORT double ArkVersionNumber;

// :nodoc:
FOUNDATION_EXPORT const unsigned char ArkVersionString[];

#import <Ark/CRNArkAssistantSpec.h>
#import <Ark/CRNArkAssistant.h>
#import <Ark/CRNArkAssistantAudioInputDelegate.h>
#import <Ark/CRNArkAssistantHmiDelegate.h>
#import <Ark/CRNDomainHmiGateway.h>
#import <Ark/CRNArkAssistantSpeechAudioDelegate.h>
#import <Ark/CRNArkAssistantTTSPrompter.h>
#import <Ark/CRNAudioInput.h>
#import <Ark/CRNAudioQueueInput.h>
#import <Ark/CRNAudioQueueTTSOutput.h>
#import <Ark/CRNBaseEvent.h>
#import <Ark/CRNASRLanguage.h>
#import <Ark/CRNConfig.h>
#import <Ark/CRNVoiceConfig.h>
#import <Ark/CRNDialogContact.h>
#import <Ark/CRNHostController.h>
#import <Ark/CRNDialogMessage.h>
#import <Ark/CRNDomain.h>
#import <Ark/CRNLogger.h>
#import <Ark/CRNDialogMusicInfo.h>
#import <Ark/CRNRawAudioFileInput.h>
#import <Ark/CRNRequestHandler.h>
#import <Ark/CRNTTSOutput.h>
#import <Ark/CRNDialogLocation.h>
#import <Ark/CRNDynamicContentProvidingDelegate.h>

#import <Ark/CRNPassThroughController.h>
#import <Ark/CRNPassThroughDomain.h>

#import <Ark/CRNNotificationFilter.h>
#import <Ark/CRNDialogAsrResultUpdatedNotification.h>
#import <Ark/CRNDialogDynamicContentUpdatedNotification.h>
#import <Ark/CRNDialogEventNotification.h>
#import <Ark/CRNDialogNotification.h>
#import <Ark/CRNDialogSpeechInputTimeoutNotification.h>
#import <Ark/CRNDialogSpeechInputTimerBeginNotification.h>
#import <Ark/CRNDialogSpeechLevelUpdatedNotification.h>
#import <Ark/CRNDialogStateChangedNotification.h>

#import <Ark/CRNCloudNLUContext.h>
#import <Ark/CRNCloudNLUDriverContext.h>
#import <Ark/CRNCloudNLULocationContext.h>
#import <Ark/CRNCloudNLUNavigationContext.h>
#import <Ark/CRNCloudNLUUnitContext.h>
#import <Ark/CRNCloudNLUVehicleContext.h>
#import <Ark/CRNCloudNLULocation.h>
#import <Ark/CRNCloudNLULocationSource.h>
