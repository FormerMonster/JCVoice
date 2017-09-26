//
//  VoiceManager.h
//  JCVoice
//
//  Created by Aventador on 2017/9/25.
//  Copyright © 2017年 Anonymous. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVSpeechSynthesis.h>

@interface VoiceManager : NSObject

/** 开始播报
 user : self
 speed : 0-1之间
 languageType : 语种
 volume :音量 [0-1] Default = 1
 tone : 音调 [0.5 - 2] Default = 1
 */
+ (void)startBroadcastVoice:(id)user speed:(NSInteger)speed volume:(NSInteger)volume tone:(NSInteger)tone voice:(AVSpeechSynthesizer *)voice LanguageType:(NSString *)languageType content:(NSString *)content;

/** 停止播报
 voice : 初始化类名
 */
+ (void)stopBroadcastVoice:(AVSpeechSynthesizer *)voice;
/** 语种
 "[AVSpeechSynthesisVoice 0x978a0b0] Language: th-TH",
 
 "[AVSpeechSynthesisVoice 0x977a450] Language: pt-BR",
 
 "[AVSpeechSynthesisVoice 0x977a480] Language: sk-SK",
 
 "[AVSpeechSynthesisVoice 0x978ad50] Language: fr-CA",
 
 "[AVSpeechSynthesisVoice 0x978ada0] Language: ro-RO",
 
 "[AVSpeechSynthesisVoice 0x97823f0] Language: no-NO",
 
 "[AVSpeechSynthesisVoice 0x978e7b0] Language: fi-FI",
 
 "[AVSpeechSynthesisVoice 0x978af50] Language: pl-PL",
 
 "[AVSpeechSynthesisVoice 0x978afa0] Language: de-DE",
 
 "[AVSpeechSynthesisVoice 0x978e390] Language: nl-NL",
 
 "[AVSpeechSynthesisVoice 0x978b030] Language: id-ID",
 
 "[AVSpeechSynthesisVoice 0x978b080] Language: tr-TR",
 
 "[AVSpeechSynthesisVoice 0x978b0d0] Language: it-IT",
 
 "[AVSpeechSynthesisVoice 0x978b120] Language: pt-PT",
 
 "[AVSpeechSynthesisVoice 0x978b170] Language: fr-FR",
 
 "[AVSpeechSynthesisVoice 0x978b1c0] Language: ru-RU",
 
 "[AVSpeechSynthesisVoice 0x978b210] Language: es-MX",
 
 "[AVSpeechSynthesisVoice 0x978b2d0] Language: zh-HK",中文(香港)粤语
 
 "[AVSpeechSynthesisVoice 0x978b320] Language: sv-SE",
 
 "[AVSpeechSynthesisVoice 0x978b010] Language: hu-HU",
 
 "[AVSpeechSynthesisVoice 0x978b440] Language: zh-TW",中文(台湾)
 
 "[AVSpeechSynthesisVoice 0x978b490] Language: es-ES",
 
 "[AVSpeechSynthesisVoice 0x978b4e0] Language: zh-CN",中文(普通话)
 
 "[AVSpeechSynthesisVoice 0x978b530] Language: nl-BE",
 
 "[AVSpeechSynthesisVoice 0x978b580] Language: en-GB",英语(英国)
 
 "[AVSpeechSynthesisVoice 0x978b5d0] Language: ar-SA",
 
 "[AVSpeechSynthesisVoice 0x978b620] Language: ko-KR",
 
 "[AVSpeechSynthesisVoice 0x978b670] Language: cs-CZ",
 
 "[AVSpeechSynthesisVoice 0x978b6c0] Language: en-ZA",
 
 "[AVSpeechSynthesisVoice 0x978aed0] Language: en-AU",
 
 "[AVSpeechSynthesisVoice 0x978af20] Language: da-DK",
 
 "[AVSpeechSynthesisVoice 0x978b810] Language: en-US",英语(美国)
 
 "[AVSpeechSynthesisVoice 0x978b860] Language: en-IE",
 
 "[AVSpeechSynthesisVoice 0x978b8b0] Language: hi-IN",
 
 "[AVSpeechSynthesisVoice 0x978b900] Language: el-GR",
 
 "[AVSpeechSynthesisVoice 0x978b950] Language: ja-JP"


 */
@end
