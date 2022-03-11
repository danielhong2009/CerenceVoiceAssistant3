//
//  CRNVoiceConfig.h
//  Ark
//
//  Created by Dada on 2021/8/19.
//

#import "CRNVoiceConfig.h"
#import "ark_conversation_engine.h"


NS_ASSUME_NONNULL_BEGIN

@interface CRNVoiceConfig(InnerParam)
+ (instancetype)configWithParam:(PrompterVoice_t *)inParam;
@end

NS_ASSUME_NONNULL_END
