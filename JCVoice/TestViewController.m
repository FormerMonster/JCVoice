//
//  TestViewController.m
//  JCVoice
//
//  Created by Aventador on 2017/9/25.
//  Copyright © 2017年 Anonymous. All rights reserved.
//

#import "TestViewController.h"
#import "VoiceManager.h"
#import <AVFoundation/AVSpeechSynthesis.h>

@interface TestViewController ()

@end

@implementation TestViewController
- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor whiteColor];
    
    UIButton *voiceBtn = [[UIButton alloc] initWithFrame:CGRectMake(100, 100, 100, 50)];
    voiceBtn.backgroundColor = [UIColor orangeColor];
    [voiceBtn setTitle:@"开始" forState:UIControlStateNormal];
    [voiceBtn setTitle:@"停止" forState:UIControlStateSelected];
    [voiceBtn setTitleColor:[UIColor blueColor] forState:UIControlStateNormal];
    [voiceBtn addTarget:self action:@selector(voiceBtn:) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:voiceBtn];
    
}

- (void)voiceBtn:(UIButton *)btn{
    
    AVSpeechSynthesizer *voice= [[AVSpeechSynthesizer alloc]init];
    
    if (btn.selected ==NO) {
        
        if ([voice isPaused]) {
            
            [VoiceManager stopBroadcastVoice:voice];
            
        }else{
            
            [VoiceManager startBroadcastVoice:self speed:0.5 volume:1 tone:1 voice:voice LanguageType:@"zh-CN" content:@"安得广厦千万间，大庇天下寒士俱欢颜，风雨不动安如山。呜呼！何时眼前突兀见此屋，吾庐独破受冻死亦足"];
        }
    }else{
        [voice pauseSpeakingAtBoundary:AVSpeechBoundaryWord];//暂停
        btn.selected=!btn.selected;
        
    }
    
}

@end
