//
//  HWRtcConnection.h
//  HWRTCEngine
//
//  Created by weshow on 2021/2/26.
//  Copyright © 2021 HW. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWRtcConnection.h"
#import "HWRtcObject.h"
#import "HWRtcMediaEngine.h"
NS_ASSUME_NONNULL_BEGIN
@class HWRtcConnection;
@protocol HWRtcConnectionDelegate <NSObject>
@optional
/// 出错回调
/// @param errorCode 错误码
/// @param errorMsg <#errorMsg description#>
- (void)connection:(HWRtcConnection *)connection
           onError:(int)errorCode
          errorMsg:(NSString * _Nonnull)errorMsg;

/// 警告回调
/// @param warningCode 警告码
/// @param warningMsg <#warningMsg description#>
- (void)connection:(HWRtcConnection *)connection
         onWarning:(int)warningCode
        warningMsg:(NSString * _Nonnull)warningMsg;

/// 引擎状态
/// @param state 链接服务器状态 可参考HWRtcConnStateType
/// @param reason 引擎状态 可参考HWRtcConnChangeReason
/// @param description 相对应引擎状态解释
- (void)connection:(HWRtcConnection *)connection
 onConnStateChange:(HWRtcConnStateType)state
            reason:(HWRtcConnChangeReason)reason
       description:(NSString * _Nonnull)description;

/// 签名过期
- (void)connectionOnSignatureExpired:(HWRtcConnection *)connection;

/// 加入房间成功回调
/// @param userId 用户ID
- (void)connection:(HWRtcConnection *)connection
     onJoinSuccess:(NSString * _Nonnull)userId
      mediaSrvAddr:(NSString * _Nonnull)mediaSrvAddr
      mediaSrvPort:(int)mediaSrvPort;

/// 加入房间失败
/// @param errorCode 错误码
/// @param errorMsg  错误信息
- (void)connection:(HWRtcConnection *)connection
 onJoinRoomFailure:(int)errorCode
          errorMsg:(NSString * _Nonnull)errorMsg;

/// 重新加入房间成功
/// 断网重连上,会触发该回调
/// @param userid 用户id
- (void)connection:(HWRtcConnection *)connection
onRejoinRoomSuccess:(NSString * _Nonnull)userid;

/// 离开房间完成回调
-(void)connection:(HWRtcConnection *)connection
      onLeaveRoom:(HWRtcLeaveReason)leaveReason
        statsInfo:(HWRtcStatsInfo * _Nonnull)statsInfo;

/// 角色切换
/// @param oldRole 旧的角色,具体参考HWRtcRole
/// @param newRole 新的角色,具体参考HWRtcRole
- (void)connection:(HWRtcConnection *)connection
 onUserRoleChanged:(HWRtcRole)oldRole
           newRole:(HWRtcRole)newRole;

/// 用户加入房间回调
/// @param userId 用户ID
/// @param userName 昵称
- (void)connection:(HWRtcConnection *)connection
      onUserJoined:(NSString * _Nonnull)userId
          userName:(NSString * _Nonnull)userName;

/// 用户离开房间回调
/// @param userId 用户ID
/// @param reason 离开原因
- (void)connection:(HWRtcConnection *)connection
     onUserOffline:(NSString * _Nonnull)userId
            reason:(NSInteger)reason;

/// 音量信息
/// @param usersVolumeArray  *****
/// @param userNumber  发音人数（目前最大4人）
/// @param totalVolume 总音量
- (void)connection:(HWRtcConnection *)connection
 onUserVolumeStats:(NSArray <HWRtcMediaUsersVolumeInfo *> *_Nullable)usersVolumeArray
        userNumber:(NSUInteger)userNumber totalVolume:(NSUInteger)totalVolume;

/// 辅流回调
/// @param userId 用户id
/// @param isAvailable 是否可用
- (void)connection:(HWRtcConnection *)connection
onUserSubStreamAvailable:(NSString * _Nonnull)userId
       isAvailable:(BOOL)isAvailable;

/// 远端用户音频首帧解码通知
/// @param userId 用户ID
/// @param elapsed 本端订阅远端用户视频到首帧解码后消耗时间，单位ms
- (void)connection:(HWRtcConnection *)connection
onFirstRemoteAudioDecoded:(NSString * _Nonnull)userId elapsed:(NSUInteger)elapsed;

/// 远端用户视频首帧解码通知
/// @param userId 用户ID
/// @param width 宽
/// @param height 高
- (void)connection:(HWRtcConnection *)connection
onFirstRemoteVideoDecoded:(NSString * _Nonnull)userId
            width:(int)width height:(int)height;

/// 远端用户视频首帧解码通知
/// @param userId 用户ID
/// @param width 宽
/// @param height 高
/// @param elapsed 本端订阅远端用户视频到首帧解码后消耗时间，单位ms
- (void)connection:(HWRtcConnection *)connection
onFirstRemoteVideoDecoded:(NSString * _Nonnull)userId
            width:(int)width height:(int)height elapsed:(NSUInteger)elapsed;

/// 远端用户辅流首帧解码通知
/// @param userId 用户ID
/// @param width 宽
/// @param height 高
-(void)connection:(HWRtcConnection *)connection
onFirstRemoteSubStreamDecoded:(NSString * _Nonnull)userId
                        width:(int)width
                        height:(int)height;

/// 远端用户辅流首帧解码通知
/// @param userId 用户ID
/// @param width 宽
/// @param height 高
/// @param elapsed 本端订阅远端用户视频到首帧解码后消耗时间，单位ms
-(void)connection:(HWRtcConnection *)connection
onFirstRemoteSubStreamDecoded:(NSString * _Nonnull)userId
                        width:(int)width
                        height:(int)height
                        elapsed:(NSUInteger)elapsed;

- (void)connection:(HWRtcConnection *)connection
onMediaStreamRecvPktNotify:(NSArray <HWRtcStreamPacketInfo *> * _Nullable)streamRecvPacketNotifyArray;

- (void)connection:(HWRtcConnection *)connection
onRenderSuccessNotify:(NSString *_Nonnull)userId
             isAux:(NSUInteger)isAux;

/// 每隔二秒返回视频信息
/// @param videoStatsArray 本地视频信息
/// @param remoteVideoStatsInfos 远端视频信息
- (void)connection:(HWRtcConnection *)connection
      onVideoStats:(NSArray <HWRtcVideoStatsInfo *> * _Nullable)videoStatsArray
   remoteVideoInfo:(NSArray <HWRtcVideoStatsInfo *>* _Nullable)remoteVideoStatsInfos;

/// 每隔二秒返回音频信息
/// @param audioStatsArray 本地音频信息
/// @param remoteAudioStatsInfos 远端视频信息
- (void)connection:(HWRtcConnection *)connection
      onAudioStats:(NSArray <HWRtcAudioStatsInfo *> * _Nullable)audioStatsArray
   remoteAudioInfo:(NSArray <HWRtcAudioStatsInfo *> * _Nullable)remoteAudioStatsInfos;

/// 辅流信息
/// @param subStreamStatsArray 本地视频信息 如果是本地共享则改参数有值,否则为nil
/// @param remoteVideoStatsInfos 远端视频信息 如果是远端共享则该参数有值,否则为nil
- (void)connection:(HWRtcConnection *)connection
  onSubStreamStats:(NSArray <HWRtcVideoStatsInfo *> * _Nullable)subStreamStatsArray
   remoteVideoInfo:(NSArray <HWRtcVideoStatsInfo *> * _Nullable)remoteVideoStatsInfos;

/// 间隔2秒上报入会中网络质量
/// @param upStreamQualityArray  上行网络质量上报
/// @param downStreamQualityArray 下行网络质量上报
- (void)connection:(HWRtcConnection *)connection
onNetworkQuality:(NSArray <HWRtcQualityInfo *> * _Nullable)upStreamQualityArray
  downStreamQualityInfo:(NSArray <HWRtcQualityInfo *> * _Nullable)downStreamQualityArray;

/// 远端音频流状态改变
/// @param roomid 房间ID
/// @param userid 用户ID
/// @param state 参考 HWRtcRemoteAudioState
/// @param reason 参考 HWRtcRemoteAudioStateReason
- (void)connection:(HWRtcConnection *)connection
onRemoteAudioStateChange:(NSString * _Nonnull)roomid
            userid:(NSString * _Nonnull)userid
             state:(HWRtcRemoteAudioState)state
            reason:(HWRtcRemoteAudioStateReason)reason;

/// 远端视频流状态改变
/// @param roomid 房间ID
/// @param userid 用户ID
/// @param state 参考 HWRtcRemoteVideoState
/// @param reason 参考 HWRtcRemoteVideoStateReason
- (void)connection:(HWRtcConnection *)connection
onRemoteVideoStateChange:(NSString * _Nonnull)roomid
            userid:(NSString * _Nonnull)userid
             state:(HWRtcRemoteVideoState)state
            reason:(HWRtcRemoteVideoStateReason)reason;

/// 媒体连接状态变更通知
/// @param state 变化后的连接状态
/// @param reason 变化的原因
/// @param description 变化的描述
- (void)connection:(HWRtcConnection *)connection
onMediaConnStateChange:(HWRtcMediaConnStateTypes)state reason:(HWRtcMediaConnChangeReason)reason description:(NSString * _Nonnull)description;

/// 每隔二秒返回远端视频信息
/// @param connection HWRtcConnection的实例对象
/// @param remoteVideoStatsArray 远端视频信息数组
- (void)connection:(HWRtcConnection *)connection
onRemoteVideoStats:(NSArray <HWRtcRemoteVideoStats *> * _Nullable)remoteVideoStatsArray;

/// 每隔二秒返回远端音频信息
/// @param connection HWRtcConnection的实例对象
/// @param remoteAudioStatsArray 远端视频信息数组
- (void)connection:(HWRtcConnection *)connection
onRemoteAudioStats:(NSArray <HWRtcRemoteAudioStats *> * _Nullable)remoteAudioStatsArray;

/// 网络链接中断
/// @param connection HWRtcConnection的实例对象
- (void)connectionOnConnectionInterrupted:(HWRtcConnection *)connection;

/// 网络连接丢失
/// @param connection HWRtcConnection的实例对象
- (void)connectionOnConnectionLost:(HWRtcConnection *)connection;

/// 视频大小发生改变
/// @param connection HWRtcConnection的实例对象
/// @param userId 用户ID
/// @param width 视频宽
/// @param height 视频高
- (void)connection:(HWRtcConnection *)connection onVideoSizeChanged:(NSString *_Nullable)userId width:(NSInteger)width height:(NSInteger)height;

@end

@protocol HWRtcConnectionVideoDelegate <NSObject>
/// 视频前后处理
- (BOOL)connection:(HWRtcConnection *)connection
onRenderVideoFrame:(NSString *_Nonnull)userid
        videoFrame:(HWRtcVideoFrame* _Nonnull)videoFrame;

@end

@interface HWRtcConnection : NSObject
@property (nonatomic, weak) id <HWRtcConnectionDelegate> delegate;

- (NSString *)getRoomId;

/// 注销引擎
- (void)destroyConnection;

// 开启并配置媒体收包统计回调
- (int)enableStreamRecvPacketNotify:(BOOL)enable timeInterval:(int)timeInterval;

// 开启媒体流加密
- (int)enableEncryption:(BOOL)enable;

// 加入房间
- (int)joinRoom:(HWRtcUserInfo *)userInfo mediaType:(HWRtcMediaType)mediaType;

/// 加入房间
/// @param userInfo 用户信息 参考HWRtcUserInfo
/// @param options HwRtcMediaOptions
- (int)joinRoom:(HWRtcUserInfo * _Nonnull)userInfo options:(HwRtcMediaOptions*)options;

// 离开房间
- (int)leaveRoom;

// 更新签名
- (int)renewSignature:(NSString *)signature ctime:(long long)ctime;

// 禁止房间自动重入
- (int)disableRejoinRoom:(BOOL)disable;

// 切换角色
- (int)setUserRole:(HWRtcRole)role;

- (int)enableTls:(BOOL)enable;

- (int)enableSrtp:(BOOL)enable;

// 开启最大三方音频模式
- (int)enableTopThreeAudioMode:(int)enabled;

// 设置远端音频模式
- (int)setRemoteAudioMode:(HWRtcRemoteAudioMode)mode;

// 设置远端TopN音频流数
- (int)setRemoteAudioTopNVoice:(int)topNVoice;

// 远端用户静音
- (int)muteRemoteAudio:(NSString *)userId mute:(BOOL)mute;

// 所有远端用户静音
- (int)muteAllRemoteAudio:(BOOL)mute;

// 设置默认关闭所有远端视频
- (int)setDefaultMuteAllRemoteVideoStreams:(BOOL)mute;

/// 是否自动订阅远端音频
/// @param muted 是否自动订阅
- (int)setDefaultMuteAllRemoteAudioStreams:(BOOL)mute;

// 设置优先选看档位
- (int)setPriorRemoteVideoStreamType:(HWRtcVideoStreamType)type;

// 选看用户视频流
- (int)setupRemoteView:(HWRtcVideoCanvas *)view;

// 选看用户视频流档位
- (int)startRemoteStreamView:(HWRtcVideoCanvas *)view
                  streamType:(HWRtcStreamType)streamType;

// 选看用户视频流档位，并配置是否允许分辨率自动调整
- (int)startRemoteStreamView:(HWRtcVideoCanvas *)view
                  streamType:(HWRtcStreamType)streamType
            disableAdjustRes:(BOOL)disableAdjustRes;

// 取消选看
- (int)stopRemoteStreamView:(NSString *)userId;

// 选看用户某个档位的视频
- (int)setRemoteVideoStreamType:(NSString *)userId type:(HWRtcVideoStreamType)type;

// 设置远端视频渲染填充方式
- (int)setRemoteViewDisplayMode:(NSString *)userId viewMode:(HWRtcVideoDisplayMode)viewMode;

// 设置远端视频旋转角度
- (int)setRemoteViewRotation:(NSString *)userId rotation:(HWRtcVideoRotation)rotation;

// 开启远端视频镜像显示
- (int)setRemoteViewMirrorMode:(NSString *)userId enable:(int)enable;

// 设置远端视频横屏或竖屏展示
- (int)setRemoteViewOrientation:(NSString *)userId orientation:(HWRtcVideoOrientaion)orientation;

// 选看用户辅流
- (int)startRemoteSubStreamView:(HWRtcVideoCanvas *)view;

// 取消选看辅流
- (int)stopRemoteSubStreamView:(NSString *)userId;

// 设置辅流渲染填充方式
- (int)setRemoteSubStreamViewDisplayMode:(NSString *)userId viewMode:(HWRtcVideoDisplayMode)viewMode;

// 设置辅流旋转角度
- (int)setRemoteSubStreamViewRotation:(NSString *)userId rotation:(HWRtcVideoRotation)rotation;

// 开启辅流镜像显示
- (int)setRemoteSubStreamViewMirrorMode:(NSString *)userId enable:(int)enable;

// 设置辅流横屏或竖屏显示
- (int)setRemoteSubStreamViewOrientation:(NSString *)userId orientation:(HWRtcVideoOrientaion)orientation;

// 关闭远端用户视频
- (int)muteRemoteVideo:(NSString *)userId mute:(BOOL)mute;

// 关闭所有远端视频
- (int)muteAllRemoteVideo:(BOOL)mute;

// 是否允许远端流自动调整分辨率
- (int)setRemoteVideoAdjustResolution:(BOOL)enable;

// 修改用户昵称
- (int)changeUserName:(NSString *)userName;

- (int)adjustPlaybackVolume:(NSString *)userid volume :(unsigned int)volume;

// init
- (instancetype)initWithRoomId:(NSString *)roomId;

// 使能视频前后处理
- (int)registerVideoFrameObserver:(id <HWRtcConnectionVideoDelegate>)observer;
@end

NS_ASSUME_NONNULL_END
