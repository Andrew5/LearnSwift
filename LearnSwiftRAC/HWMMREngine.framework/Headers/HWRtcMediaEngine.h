//
//  HWRtcMediaEngine.h
//  HRTCEngine
//
//  Created by weshow on 2021/7/2.
//  Copyright © 2021 HW. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWRtcObject.h"
NS_ASSUME_NONNULL_BEGIN

@protocol HWRtcMediaEngineVideoDelegate <NSObject>

@optional
/// 视频前后处理
- (BOOL)onCaptureVideoFrame:(HWRtcVideoFrame* _Nonnull)videoFrame;
- (BOOL)onRenderVideoFrame:(NSString *_Nonnull)userid
                videoFrame:(HWRtcVideoFrame* _Nonnull)videoFrame;
- (BOOL)requireCaptureVideoFrame;
- (BOOL)requireRenderVideoFrame;

@end

@protocol HWRtcMediaEngineAudioDelegate <NSObject>

@optional
/// 音频前后处理
- (BOOL)onPlaybackAudioFrame:(HWRtcAudioFrame * _Nonnull)audioFrame;
- (BOOL)onMixedAudioFrame:(HWRtcAudioFrame * _Nonnull)audioFrame;
- (BOOL)onRecordAudioFrame:(HWRtcAudioFrame * _Nonnull)audioFrame;
- (BOOL)requireRecordAudioFrame;
- (BOOL)requirePlaybackAudioFrame;
- (BOOL)requireMixedAudioFrame;

@end

@interface HWRtcMediaEngine : NSObject
- (int)registerVideoFrameObserver:(id<HWRtcMediaEngineVideoDelegate>)observer;
- (int)registerAudioFrameObserver:(id<HWRtcMediaEngineAudioDelegate>)observer;
@end

NS_ASSUME_NONNULL_END
