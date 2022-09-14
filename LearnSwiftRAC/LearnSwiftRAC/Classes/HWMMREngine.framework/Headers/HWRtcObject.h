//
//  HWRtcObject.h
//  HWRtcEngine
//
//  Created by zhanganl on 2020/3/4.
//  Copyright © 2020 zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWRtcConstants.h"
#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#elif TARGET_OS_MAC
#import <AppKit/AppKit.h>
#endif
#import <MetalKit/MetalKit.h>
NS_ASSUME_NONNULL_BEGIN

/**
 视频画布对象的属性。
 */
#if TARGET_OS_IPHONE
__attribute__((visibility("default"))) @interface HWRtcView: UIView
@end
#elif TARGET_OS_MAC
__attribute__((visibility("default"))) @interface HWRtcView: NSView
@end
#endif

/**
 视频画布对象的属性。
 */
__attribute__((visibility("default"))) @interface HWRtcVideoCanvas : NSObject

/**
 视频显示视图。
 */
@property (strong, nonatomic) HWRtcView* _Nullable view;

/**
 视图的用户标识。
 */
@property (strong, nonatomic) NSString *uid;
@end

__attribute__((visibility("default"))) @interface HWRtcUserInfo : NSObject
@property (strong, nonatomic) NSString* userId;
@property (strong, nonatomic) NSString* userName;
@property (strong, nonatomic) NSString* signature;
@property (assign, nonatomic) long long ctime;
@property (strong, nonatomic) NSString* optionInfo;
@property (assign, nonatomic) HWRtcRole role;
@end

__attribute__((visibility("default"))) @interface HWRtcDeviceInfo : NSObject
@property (strong, nonatomic) NSString* deviceName;
@property (strong, nonatomic) NSString* deviceId;
@end

__attribute__((visibility("default"))) @interface HWRtcVideoEncode: NSObject
/* 编码流类型 */
@property (assign, nonatomic) HWRtcStreamType streamFlag;
@property (assign, nonatomic) NSUInteger width;;
@property (assign, nonatomic) NSUInteger height;
@property (assign, nonatomic) NSUInteger frameRate;
@property (assign, nonatomic) NSUInteger minFrameRate;
@property (assign, nonatomic) NSUInteger bitrate;
@property (assign, nonatomic) NSUInteger minBitrate;
@property (assign, nonatomic) BOOL disableAdjustRes;  // 表示上行流是否自适应
- (instancetype)initWithStreamType:(HWRtcStreamType)streamFlag;
@end

__attribute__((visibility("default"))) @interface HWRtcMediaUsersVolumeInfo: NSObject
@property (strong, nonatomic) NSString *userId;
@property (assign, nonatomic) int volume;
@end

__attribute__((visibility("default"))) @interface HWRtcVideoStatsInfo: NSObject
@property (strong, nonatomic) NSString *userId;
@property (assign, nonatomic) NSUInteger width;
@property (assign, nonatomic) NSUInteger height;
@property (assign, nonatomic) NSUInteger bitRate;
@property (assign, nonatomic) NSUInteger frameRate;
@property (assign, nonatomic) NSUInteger packetLoss;
@property (assign, nonatomic) NSUInteger delay;
@property (assign, nonatomic) NSUInteger jitter;
@end

__attribute__((visibility("default"))) @interface HWRtcStreamPacketInfo: NSObject
@property (strong, nonatomic) NSString *userId;
@property (assign, nonatomic) long long recvPacketCount;
@property (assign, nonatomic) BOOL isAux;
@end

__attribute__((visibility("default"))) @interface HWRtcAudioStatsInfo: NSObject
@property (strong, nonatomic) NSString *userId;
@property (assign, nonatomic) NSUInteger sampleRate;
@property (assign, nonatomic) NSUInteger channels;
// 远端音频才有
@property (assign, nonatomic) NSUInteger recvVEL;
// 本地音频才有
@property (assign, nonatomic) NSUInteger sendVEL;
@property (assign, nonatomic) NSUInteger bitRate;
@property (assign, nonatomic) NSUInteger packetLoss;
@property (assign, nonatomic) NSUInteger delay;
@property (assign, nonatomic) NSUInteger jitter;
@property (assign, nonatomic) long long bytes;
@end

__attribute__((visibility("default"))) @interface HWRtcLocalVideoStats: HWRtcVideoStatsInfo
@property (assign, nonatomic) long long bytes;
@property (assign, nonatomic) NSUInteger sendFrameRate;
@end

__attribute__((visibility("default"))) @interface HWRtcLocalAudioStats: HWRtcAudioStatsInfo
@end

__attribute__((visibility("default"))) @interface HWRtcRemoteVideoStats: HWRtcVideoStatsInfo
@property (assign, nonatomic) long long bytes;
@property (assign, nonatomic) NSUInteger rendererOutputFrameRate;
@property (assign, nonatomic) NSUInteger totalFrozenTime;
@property (assign, nonatomic) NSUInteger frozenRate;
@end

__attribute__((visibility("default"))) @interface HWRtcRemoteAudioStats: HWRtcAudioStatsInfo
@property (assign, nonatomic) NSUInteger totalFrozenTime;
@property (assign, nonatomic) NSUInteger frozenRate;
@end

__attribute__((visibility("default"))) @interface HWRtcQualityInfo: NSObject
@property (strong, nonatomic) NSString *userId;
@property (assign, nonatomic) HWRtcNetworkQualityLevel level;
@property (assign, nonatomic) NSUInteger width;
@property (assign, nonatomic) NSUInteger height;
@end

__attribute__((visibility("default"))) @interface HWRtcStreamRecvPktInfo: NSObject
@property (strong, nonatomic) NSString *userId;
@property (strong, nonatomic) NSString *roomId;
@property (assign,nonatomic)  NSUInteger totalRecvPacketCount;
@end


__attribute__((visibility("default"))) @interface HWRtcStatsInfo: NSObject
@property (strong, nonatomic) NSString *roomId;
@property (strong, nonatomic) NSString *userId;
@property (assign, nonatomic) long long mildlyFrozenCounts;
@property (assign, nonatomic) long long severelyFrozenCounts;
@property (assign, nonatomic) long long totalMildlyFrozenTime;
@property (assign, nonatomic) long long totalSeverelyFrozenTime;
@property (assign, nonatomic) long long totalActiveTime;
@end

__attribute__((visibility("default"))) @interface HWRtcVideoFrame: NSObject
/// 图像格式
@property (assign, nonatomic) HWRtcVideoImageFormat format;
/// 图像宽度，作为输入时，范围为[90,1920]，必须是4的整数倍
@property (assign, nonatomic) NSUInteger width;
/// 图像高度，作为输入时，范围为[90,1200]，必须是2的整数倍
@property (assign, nonatomic) NSUInteger height;
/// 存储视频数据,是重新copy一份
@property (strong, nonatomic) NSData * _Nullable data;
/// 原视频数据buf地址
@property (assign, nonatomic) void *dataBuf;
/// 视频数据的长度，单位为Byte
@property (assign, nonatomic) NSUInteger dataLen;
/// 被选看的远端userid 本地推流不需要赋值
@property (strong, nonatomic) NSString *userId;
@end

__attribute__((visibility("default"))) @interface HWRtcAudioFrame: NSObject
/// 音频帧类型
@property (nonatomic, assign) HWRtcAudioFrameType frameType;
/// 每个声道的采样点数,iSamples=iSamplesPerSec * 10ms /1000
@property (nonatomic, assign) NSUInteger samples;
/// 采样率
@property (nonatomic, assign) NSUInteger samplesPerSec;
/// 每个采样点的字节数,pcm数据一般2字节
@property (nonatomic, assign) NSUInteger bytesPerSample; // bitsPerSample
/// 声道数
@property (nonatomic, assign) NSUInteger channels;
///  数据缓冲区,长度=samples*bytesPerSample*channels
@property (strong, nonatomic) NSData * _Nullable data;
/// 原音频数据buf地址
@property (assign, nonatomic) void *dataBuf;
/// 音频数据的长度，单位为Byte
@property (assign, nonatomic) NSUInteger dataLen;
@end

__attribute__((visibility("default"))) @interface HWRtcStartAudioFileParam: NSObject
@property (nonatomic, strong) NSString * _Nonnull fullFilePath;
@property (nonatomic, assign) HWRtcAudioFilePlayMode playMode;
@property (nonatomic, assign) NSUInteger cycle;
@property (nonatomic, assign) NSUInteger replace;
@end

__attribute__((visibility("default"))) @interface HWRtcNetworkTestConfig: NSObject
@property (strong, nonatomic) NSString * _Nonnull userId;
@property (strong, nonatomic) NSString * _Nonnull roomId;
@property (strong, nonatomic) NSString *signature;
@property (nonatomic, assign) long long ctime;
@property (assign, nonatomic) BOOL enableUplinkTest;
@property (assign, nonatomic) BOOL enableDownlinkTest;
@property (nonatomic, assign) NSUInteger expectedUplinkBitrate;
@property (nonatomic, assign) NSUInteger expectedDownlinkBitrate;
@end

__attribute__((visibility("default"))) @interface HWRtcNetworkTestResultParam: NSObject
@property (nonatomic, assign) NSInteger bitRate;
@property (nonatomic, assign) NSInteger packetLoss;
@property (nonatomic, assign) NSInteger delay;
@property (nonatomic, assign) NSInteger jitter;
@end

__attribute__((visibility("default"))) @interface HWRtcNetworkTestResult: NSObject
@property (assign, nonatomic) HWRtcNetworkTestState state;
@property (nonatomic, strong) HWRtcNetworkTestResultParam *uplinkResult;
@property (nonatomic, strong) HWRtcNetworkTestResultParam * downlinkResult;
@end

__attribute__((visibility("default"))) @interface HWRtcOnStatsInfo: NSObject
@property (assign, nonatomic) double cpuAppUsage;
@property (assign, nonatomic) double cpuTotalUsage;
@property (assign, nonatomic) NSUInteger memoryAppUsageInKbytes;
@property (assign, nonatomic) double memoryAppUsageRatio;
@property (assign, nonatomic) double memoryTotalUsageRatio;
@property (assign, nonatomic) NSInteger gatewayRtt;
@property (assign, nonatomic) unsigned long long sendBytes;
@property (assign, nonatomic) unsigned long long sendVideoBytes;
@property (assign, nonatomic) unsigned long long sendAudioBytes;
@property (assign, nonatomic) unsigned long long receiveBytes;
@property (assign, nonatomic) unsigned long long receiveVideoBytes;
@property (assign, nonatomic) unsigned long long receiveAudioBytes;
@property (assign, nonatomic) NSUInteger sendBitRate;
@property (assign, nonatomic) NSUInteger sendVideoBitRate;
@property (assign, nonatomic) NSUInteger sendAudioBitRate;
@property (assign, nonatomic) NSUInteger receiveBitRate;
@property (assign, nonatomic) NSUInteger receiveVideoBitRate;
@property (assign, nonatomic) NSUInteger receiveAudioBitRate;
@property (assign, nonatomic) NSUInteger sendLossRate;
@property (assign, nonatomic) NSUInteger receiveLossRate;
@property (assign, nonatomic) NSUInteger lastmileDelay;
@end

__attribute__((visibility("default"))) @interface HWRtcEngineConfig: NSObject
@property (strong, nonatomic) NSString * _Nonnull domain;
@property (strong, nonatomic) NSString * _Nonnull appId;
@property (assign, nonatomic) HWRtcAreaCode areaCode;
@end

__attribute__((visibility("default"))) @interface HwRtcImageBufferFormat: NSObject
@property (assign, nonatomic) HWRtcVideoImageFormat format;
@property (assign, nonatomic) HWRtcVideoImageBufferType bufferType;
@end

__attribute__((visibility("default"))) @interface HWRtcScreenCaptureParam: NSObject
#if TARGET_OS_IPHONE

#elif TARGET_OS_MAC
@property (assign, nonatomic) HWRtcScreenCaptureType type;
@property (nonatomic, assign) NSInteger viewID;
@property (nonatomic, assign) BOOL bCaptureMouse;
@property (nonatomic, assign) NSRect rect;
#endif
@end

__attribute__((visibility("default"))) @interface HWRtcScreenCaptureSourceInfo: NSObject
#if TARGET_OS_IPHONE

#elif TARGET_OS_MAC
@property (nonatomic, assign) NSInteger sourceId; // 采集源ID，windowID 应用ID
@property (nonatomic, strong) NSString *sourceName;// 采集源名称
@property (nonatomic, assign) HWRtcScreenCaptureType type; // 共享类型
@property (nonatomic, assign) void* icon;//mac 暂不支持
#endif
@end

__attribute__((visibility("default"))) @interface HWRtcSubStreamEncParam: NSObject
#if TARGET_OS_IPHONE
#elif TARGET_OS_MAC
@property (nonatomic, assign) NSInteger frameRate;
@property (nonatomic, assign) NSInteger width;
@property (nonatomic, assign) NSInteger height;
@property (nonatomic, assign) NSInteger bitrate;
#endif
@end

__attribute__((visibility("default"))) @interface HwRtcMediaOptions: NSObject
@property (assign, nonatomic) BOOL autoSubscribeAudio;
@property (assign, nonatomic) BOOL autoSubscribeVideo;
@property (nonatomic, assign) HWRtcMediaType mediaType; // 会议媒体类型
@end

@interface HWRtcObject : NSObject
@end

NS_ASSUME_NONNULL_END
