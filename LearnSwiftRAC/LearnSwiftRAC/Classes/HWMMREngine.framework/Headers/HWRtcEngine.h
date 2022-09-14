//
//  HWRtcEngine.h
//  HWRtcEngine
//
//  Created by zhanganl on 2020/2/24.
//  Copyright © 2020 zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreMedia/CoreMedia.h>
#import "HWRtcConstants.h"
#import "HWRtcObject.h"
#import "HWRtcConnection.h"
#import "HWRtcMediaEngine.h"

@protocol HWRtcEngineDelegate <NSObject>
@optional

/// 加入房间成功回调
/// @param roomId 房间ID
/// @param userId 用户ID
-(void)onJoinSuccess:(NSString * _Nonnull)roomId
              userId:(NSString * _Nonnull)userId
              mediaSrvAddr:(NSString * _Nonnull)mediaSrvAddr
              mediaSrvPort:(int)mediaSrvPort;

/// 加入房间失败
/// @param errorCode 错误码
/// @param errorMsg  错误信息
- (void)onJoinRoomFailure:(int)errorCode
                 errorMsg:(NSString * _Nonnull)errorMsg;

/// 重新加入房间成功
/// 断网重连上,会触发该回调
/// @param roomid 房间id
/// @param userid 用户id
- (void)onRejoinRoomSuccess:(NSString * _Nonnull)roomid
                     userid:(NSString * _Nonnull)userid;

/// 离开房间完成回调
-(void)onLeaveRoom:(HWRtcLeaveReason)leaveReason
         statsInfo:(HWRtcStatsInfo * _Nonnull)statsInfo;

/// 用户加入房间回调
/// @param roomId 房间ID
/// @param userId 用户ID
/// @param userName 昵称
-(void)onUserJoined:(NSString * _Nonnull)roomId
             userId:(NSString * _Nonnull)userId
           userName:(NSString * _Nonnull)userName;

/// 用户离开房间回调
/// @param roomId 房间ID
/// @param userId 用户ID
/// @param reason 离开原因
-(void)onUserOffline:(NSString * _Nonnull)roomId
              userId:(NSString * _Nonnull)userId
              reason:(NSInteger)reason;

/// 远端用户名修改回调
/// @param roomId 房间ID
/// @param userId 用户ID
/// @param userName 昵称
-(void)onRemoteUserNameChanged:(NSString * _Nonnull)roomId
                        userId:(NSString * _Nonnull)userId
                      userName:(NSString * _Nonnull)userName;

/// 本地用户名修改回调
/// @param oldUserName 旧昵称
/// @param newUserName 新昵称
-(void)onUserNameChanged:(NSString * _Nonnull)oldUserName
             newUserName:(NSString * _Nonnull)newUserName;

/// 远端用户视频首帧解码通知
/// @param roomId 房间ID
/// @param userId 用户ID
/// @param width 宽
/// @param height 高
-(void)onFirstRemoteVideoDecoded:(NSString *_Nonnull)roomId
                          userId:(NSString * _Nonnull)userId
                          width:(int)width height:(int)height;

/// 远端用户视频首帧解码通知
/// @param roomId 房间ID
/// @param userId 用户ID
/// @param width 宽
/// @param height 高
/// @param elapsed 本端订阅远端用户视频到首帧解码后消耗时间，单位ms
-(void)onFirstRemoteVideoDecoded:(NSString *_Nonnull)roomId
                          userId:(NSString * _Nonnull)userId
                          width:(int)width
                          height:(int)height
                          elapsed:(NSUInteger)elapsed;

/// 远端用户辅流首帧解码通知
/// @param roomId 房间ID
/// @param userId 用户ID
/// @param width 宽
/// @param height 高
-(void)onFirstRemoteSubStreamDecoded:(NSString *_Nonnull)roomId
                              userId:(NSString * _Nonnull)userId
                              width:(int)width
                              height:(int)height;
/// 远端用户辅流首帧解码通知
/// @param roomId 房间ID
/// @param userId 用户ID
/// @param width 宽
/// @param height 高
/// @param elapsed 本端订阅远端用户视频到首帧解码后消耗时间，单位ms
-(void)onFirstRemoteSubStreamDecoded:(NSString *_Nonnull)roomId
                              userId:(NSString * _Nonnull)userId
                              width:(int)width
                              height:(int)height
                              elapsed:(NSUInteger)elapsed;

/// 引擎状态
/// @param state 链接服务器状态 可参考HWRtcConnStateType
/// @param reason 引擎状态 可参考HWRtcConnChangeReason
/// @param description 相对应引擎状态解释
- (void)onConnStateChange:(HWRtcConnStateType)state
                   reason:(HWRtcConnChangeReason)reason
              description:(NSString * _Nonnull)description;

/// 本地音频首帧编码成功通知
/// @param state 状态
/// @param reason 原因
-(void)onLocalAudioStateChanged:(HWRtcLocalAudioState)state
                         reason:(HWRtcLocalAudioStateReason)reason;

/// 本地视频首帧编码成功通知
/// @param state 状态
/// @param reason 原因
-(void)onLocalVideoStateChanged:(HWRtcLocalVideoState)state
                         reason:(HWRtcLocalVideoStateReason)reason;

/// 出错回调
/// @param errorCode 错误码
/// @param errorMsg <#errorMsg description#>
- (void)onError:(int)errorCode
       errorMsg:(NSString * _Nonnull)errorMsg;

/// 警告回调
/// @param warningCode 警告码
/// @param warningMsg <#warningMsg description#>
- (void)onWarning:(int)warningCode
       warningMsg:(NSString * _Nonnull)warningMsg;

/// 签名过期
- (void)onSignatureExpired;

/// 开启跨房回调
/// @param roomId 房间ID
/// @param role 角色,具体参考HWRtcRole
/// @param errorCode 错误码
/// @param msg 错误描述
- (void)onConnectOtherRoom:(NSString * _Nonnull)roomId
                      role:(HWRtcRole)role
                 errorCode:(int)errorCode
                       msg:(NSString * _Nonnull)msg;

/// 结束跨房回调
/// @param roomId 房间ID
/// @param role 角色,具体参考HWRtcRole
/// @param errorCode 错误码
/// @param msg 错误描述
- (void)onDisconnectOtherRoom:(NSString * _Nonnull)roomId
                         role:(HWRtcRole)role
                    errorCode:(int)errorCode
                          msg:(NSString * _Nonnull)msg;

/// 角色切换
/// @param oldRole 旧的角色,具体参考HWRtcRole
/// @param newRole 新的角色,具体参考HWRtcRole
- (void)onUserRoleChanged:(HWRtcRole)oldRole
                  newRole:(HWRtcRole)newRole;

#pragma mark - screenChapture

/// 辅流回调
/// @param roomId 房间id
/// @param userId 用户id
/// @param isAvailable 是否可用
- (void)onUserSubStreamAvailable:(NSString * _Nonnull)roomId
                          userId:(NSString * _Nonnull)userId
                     isAvailable:(BOOL)isAvailable;


#pragma mark - Device

/// 设备状态发生改变
/// @param deviceId 设备ID
/// @param deviceType 设备类型
/// @param deviceState 设备状态
-(void)onDeviceStateChanged:(NSString * _Nonnull)deviceId
                 deviceType:(HWRtcDeviceType)deviceType
                deviceState:(HWRtcDeviceState)deviceState;

/// 音频设备音量发生改变
/// @param deviceType 音频设备类型
/// @param volume 音量值 0-100
-(void)onAudioVolumeChanged:(HWRtcDeviceType)deviceType
                     volume:(unsigned int)volume;

/// 本地音频采集音量
/// @param volume 音量值 0-100
/// @param muted int 0 开启本地音频发送. 1 关闭本地音频发送
- (void)onLocalVolumeChanged:(int)volume
                       muted:(int)muted;

/// 音频路由发生改变(只支持iOS)
/// @param audioRoute 音频路由类型 参考HWRtcAudioRoute
- (void)onAudioRouteChange:(HWRtcAudioRoute)audioRoute;

/// 远端音频流状态改变
/// @param roomid 房间ID
/// @param userid 用户ID
/// @param state 参考 HWRtcRemoteAudioState
/// @param reason 参考 HWRtcRemoteAudioStateReason
- (void)onRemoteAudioStateChange:(NSString * _Nonnull)roomid
                          userid:(NSString * _Nonnull)userid
                           state:(HWRtcRemoteAudioState)state
                          reason:(HWRtcRemoteAudioStateReason)reason;

/// 远端视频流状态改变
/// @param roomid 房间ID
/// @param userid 用户ID
/// @param state 参考 HWRtcRemoteVideoState
/// @param reason 参考 HWRtcRemoteVideoStateReason
- (void)onRemoteVideoStateChange:(NSString * _Nonnull)roomid
                          userid:(NSString * _Nonnull)userid
                           state:(HWRtcRemoteVideoState)state
                          reason:(HWRtcRemoteVideoStateReason)reason;

/// 渲染视频帧回调
/// @param roomid 房间id
/// @param meidaDirection 参考HWRTCMediaDirection
/// @param videoFrame 视频帧 参考 HWRtcVideoFrame
- (void)onRenderVideoFrame:(NSString *_Nonnull)roomid
            meidaDirection:(HWRtcMediaDirection)meidaDirection
                videoFrame:(HWRtcVideoFrame * _Nonnull)videoFrame;

/// 渲染音频帧回调
/// @param roomid 房间id
/// @param audioFrame 音频帧 参考 HWRtcAudioFrame
- (void)onPlaybackAudioFrame:(NSString *_Nonnull)roomid
              meidaDirection:(HWRtcMediaDirection)meidaDirection
                  audioFrame:(HWRtcAudioFrame * _Nonnull)audioFrame;

/// 播放音频文件状态
/// @param isSuccess YES 表示成功 NO表示失败
- (void)onStartAudioFile:(BOOL)isSuccess;

/// 停止播放音频文件状态
/// @param isSuccess YES 表示成功 NO表示失败
- (void)onStopAudioFile:(BOOL)isSuccess;

/// 暂停播放音频文件状态
/// @param isSuccess YES 表示成功 NO表示失败
- (void)onPauseAudioFile:(BOOL)isSuccess;

/// 恢复播放音频文件状态
/// @param isSuccess YES 表示成功 NO表示失败
- (void)onResumeAudioFile:(BOOL)isSuccess;

/// 入会前网络检测回调状态
/// @param result 参考 HWRTCNetworkTestResult
- (void)onNetworkTestResult:(HWRtcNetworkTestResult * _Nonnull)result;

/// 入会前网络检测质量状态
/// @param level 参考 HWRTCNetworkQualityLevel
- (void)onNetworkTestQuality:(int)level;

#pragma mark - Information
/// 上传日志成功状态回调
/// @param result 0 表示上传日志成功 1表示上传日志失败
-(void)onLogUploadResult:(int)result;

/// 上传日志进度条回调
/// @param progress int 进度值 0 - 100
-(void)onLogUploadProgress:(int)progress;

/// 每隔二秒返回视频信息
/// @param videoStatsArray 本地视频信息
/// @param remoteVideoStatsInfos 远端视频信息
- (void)onVideoStats:(NSArray <HWRtcVideoStatsInfo *> * _Nullable)videoStatsArray
     remoteVideoInfo:(NSArray <HWRtcVideoStatsInfo *>* _Nullable)remoteVideoStatsInfos;

/// 每隔二秒返回音频信息
/// @param audioStatsArray 本地音频信息
/// @param remoteAudioStatsInfos 远端视频信息
- (void)onAudioStats:(NSArray <HWRtcAudioStatsInfo *> * _Nullable)audioStatsArray
     remoteAudioInfo:(NSArray <HWRtcAudioStatsInfo *> * _Nullable)remoteAudioStatsInfos;

/// 辅流信息
/// @param subStreamStatsArray 本地视频信息 如果是本地共享则改参数有值,否则为nil
/// @param remoteVideoStatsInfos 远端视频信息 如果是远端共享则该参数有值,否则为nil
- (void)onSubStreamStats:(NSArray <HWRtcVideoStatsInfo *> * _Nullable)subStreamStatsArray
         remoteVideoInfo:(NSArray <HWRtcVideoStatsInfo *> * _Nullable)remoteVideoStatsInfos;

/// 音量信息
/// @param usersVolumeArray  *****
/// @param userNumber  发音人数（目前最大4人）
/// @param totalVolume 总音量
- (void)onUserVolumeStats:(NSArray <HWRtcMediaUsersVolumeInfo *> *_Nullable)usersVolumeArray
               userNumber:(NSUInteger)userNumber totalVolume:(NSUInteger)totalVolume;

/// 每隔二秒返回本地视频信息
/// @param localVideoStatsArray 本地视频信息数组
- (void)onLocalVideoStats:(NSArray <HWRtcLocalVideoStats *> * _Nullable)localVideoStatsArray;

/// 每隔二秒返回本地音频信息
/// @param localAudioStatsArray 本地音频信息数组
- (void)onLocalAudioStats:(NSArray <HWRtcLocalAudioStats *> * _Nullable)localAudioStatsArray;

/// 每隔二秒返回远端视频信息
/// @param remoteVideoStatsArray 远端视频信息数组
- (void)onRemoteVideoStats:(NSArray <HWRtcRemoteVideoStats *> * _Nullable)remoteVideoStatsArray;

/// 每隔二秒返回远端音频信息
/// @param remoteAudioStatsArray 远端音频信息数组
- (void)onRemoteAudioStats:(NSArray <HWRtcRemoteAudioStats *> * _Nullable)remoteAudioStatsArray;

/// 网络链接中断
- (void)onConnectionInterrupted;

/// 网络连接丢失
- (void)onConnectionLost;

/// 视频大小发生改变
/// @param userId 用户ID
/// @param width 视频宽
/// @param height 视频高
- (void)onVideoSizeChanged:(NSString *_Nullable)userId width:(NSInteger)width height:(NSInteger)height;

/// 啸叫检测上行
- (void)onHowlingUpDetected:(int)result;

/// 啸叫检测下行
- (void)onHowlingDownDetected:(int)result;

/// 间隔2秒上报入会中网络质量
/// @param upStreamQualityArray  上行网络质量上报
/// @param downStreamQualityArray 下行网络质量上报
- (void)onNetworkQuality:(NSArray <HWRtcQualityInfo *> * _Nullable)upStreamQualityArray
downStreamQualityInfo:(NSArray <HWRtcQualityInfo *> * _Nullable)downStreamQualityArray;


- (void)onRenderSuccessNotify:(NSString *_Nonnull)userid
                        isAux:(NSUInteger)isAux;

- (void)onMediaStreamRecvPktNotify:(NSArray <HWRtcStreamPacketInfo *> * _Nullable)streamRecvPacketNotifyArray;

/// 远端用户音频首帧解码通知
/// @param userid 远端用户userid
/// @param elapsed 本端订阅远端用户到首帧解码后消耗时间，单位ms
- (void)onFirstRemoteAudioDecoded:(NSString *_Nonnull)userid
                          elapsed:(NSUInteger)elapsed;

/// 本端用户音频首帧发送通知
/// @param elapsed 本端音频首帧发送时间，从打开本地发送流开始计时，单位ms
- (void)onFirstLocalAudioFrame: (NSUInteger)elapsed;

/// 本端用户视频首帧发送通知
/// @param elapsed 本端视频首帧发送时间，从打开本地发送流开始计时，单位ms
- (void)onFirstLocalVideoFrame:(NSUInteger)elapsed;

/// 媒体连接状态变更通知
/// @param state 变化后的连接状态
/// @param reason 变化的原因
/// @param description 变化的描述
- (void)onMediaConnStateChange:(HWRtcMediaConnStateTypes)state reason:(HWRtcMediaConnChangeReason)reason description:(NSString * _Nonnull)description;

/// 音频混音状态变更通知
/// @param state 音频状态
/// @param reason 状态产生的原因
/// @param value 音频的时长或当前播放位置
- (void)onAudioFileStateChanged:(HWRtcAudioFileState)state reason:(HWRtcAudioFileReason)reason value:(NSUInteger)value;

/// 音频混音状态结束通知
- (void)onAudioFileFinished;

/// 音效播放完成通知
/// @param soundId 音效ID
- (void)onAudioClipFinished:(NSInteger)soundId;

- (void)onRtcStats:(NSArray <HWRtcOnStatsInfo *> * _Nullable)rtcStatsArray;
@end

@interface HWRtcEngine :NSObject
@property (nonatomic, weak) id<HWRtcEngineDelegate> _Nullable delegate;
@property (nonatomic, strong, readonly) HWRtcMediaEngine * _Nonnull mediaEngine;


/** 引擎单列话.保证APP只有一个引擎对象.
@return HWRtcEngine 对象.
*/
+ (instancetype _Nonnull)sharedEngine;

/// 获取当前SDK版本号
+ (NSString* _Nonnull)getVersion;

/// 获取当前设备ID
- (NSString *_Nonnull)getDeviceId;

/// 引擎初始化配置信息,
/// 如果domain 和appid发生改变 需要调用 destroy
/// @param domain 服务器地址
/// @param appId appid
- (int)init:(NSString * _Nonnull)domain
      appId:(NSString * _Nonnull)appId;

/// 引擎初始化配置信息
/// @param config 引擎配置
- (int)initWithConfig:(HWRtcEngineConfig* _Nonnull)config;

/// /// 设置打印日志级别和日志地址
/// @param logLevel 打印级别.HWRtcLogLevel
///                 ENGINE_LOG_LEVEL_ERROR = 0,
///                 ENGINE_LOG_LEVEL_WARNING,
///                 ENGINE_LOG_LEVEL_INFO,
///                 ENGINE_LOG_LEVEL_DEBUG
/// @param logPath 日志地址
/// @param enable 是否开启日志
- (int)setLogParam:(HWRtcLogLevel)logLevel
           logPath:(NSString* _Nonnull)logPath
            enable:(BOOL)enable;

/// <#Description#>
/// @param roomId <#roomId description#>
- (HWRtcConnection *_Nullable)createConnection:(NSString *_Nullable)roomId;

/// 打点开关
/// 在初始化前或初始化后调用,默认开启
/// @param enable YES 开启 NO关闭
- (int)setEnableRtcStats:(BOOL)enable;

/// 设置重力感应模式
/// @param mode 重力感应模式 参考 HWRtcGSensorMode
- (int)setGSensorMode:(HWRtcGSensorMode)mode;

/// 加入房间
/// @param userInfo 用户信息 参考HWRtcUserInfo
/// @param roomId 房间ID
/// @param mediaType HWRtcMediaType
/// @ctime ctime 当前时间戳+2小时的失效时间
- (int)joinRoom:(HWRtcUserInfo * _Nonnull)userInfo
         roomId:(NSString* _Nonnull)roomId
      mediaType:(HWRtcMediaType)mediaType;

/// 加入房间
/// @param userInfo 用户信息 参考HWRtcUserInfo
/// @param roomId 房间ID
/// @param options HwRtcMediaOptions
- (int)joinRoom:(HWRtcUserInfo * _Nonnull)userInfo
         roomId:(NSString* _Nonnull)roomId
        options:(HwRtcMediaOptions*)options;

/// 设置小流编码信息
/// @param enable YES 开启小流 NO 关闭小流
/// @param encParam 小流编码信息 参考 HWRtcVideoEncode
- (int)enableSmallVideoStream:(BOOL)enable
                     encParam:(HWRtcVideoEncode * _Nonnull)encParam;

/// 设置观看方优先选择的视频质量
/// @param type 大小流类型 参考 HWRtcVideoStreamType
- (int)setPriorRemoteVideoStreamType:(HWRtcVideoStreamType)type;

/// 选定观看制定userID的大画面还是小画面
/// @param userId 用户名
/// @param type 大小流类型 参考 HWRtcVideoStreamType
- (int)setRemoteVideoStreamType:(NSString * _Nonnull)userId
                           type:(HWRtcVideoStreamType)type;

/// 设置本地视频编码
/// @param videoEncoder HWRtcVideoEncode 对象.携带编码格式和总带宽

/// 设置本地视频编码
/// @param videoEncodes 用户希望传输的流类型 传入多个HWRtcVideoEncode,表示希望传输多路对应类型的流.
/// @param totalBitRate 多路流的总带宽
- (int)setVideoEncParam:(NSArray<HWRtcVideoEncode*>* _Nonnull)videoEncodes
           totalBitRate:(int)totalBitRate;

/// 设置大流编码信息
/// @param encParam 大流编码信息
- (int)setVideoEncParam:(HWRtcVideoEncode * _Nonnull)encParam;

// 设置本地预览画面/取消本地预览画面
/// @param local 预览试图 具体参考HWRtcVideoCanvas
/// @param viewMode 显示模式 具体参考HWRtcVideoDisplayMode
- (int)setupLocalVideo:(HWRtcVideoCanvas * _Nonnull)local
              viewMode:(HWRtcVideoDisplayMode)viewMode;

// 设置本地预览画面/取消本地预览画面
/// @param local 预览试图 具体参考HWRtcVideoCanvas
- (int)setupLocalVideo:(HWRtcVideoCanvas * _Nonnull)local;

// 设置本地预览画面显示模式
/// @param viewMode 显示模式 具体参考HWRtcVideoDisplayMode
- (int)setupLocalViewDisplayMode:(HWRtcVideoDisplayMode)viewMode;

/// 开启远端画面
/// @param remote 参考 HWRtcVideoCanvas
/// @param streamType HWRtcStreamType 编码类型
/// @param disableAdjustRes 下行流码率自适应 默认关闭 YES 关闭, NO 开启
- (int)startRemoteStreamView:(HWRtcVideoCanvas * _Nonnull)remote
                  streamType:(HWRtcStreamType)streamType
            disableAdjustRes:(BOOL)disableAdjustRes;

/// 是否自动选看
/// @param muted 是否自动选看
- (int)setDefaultMuteAllRemoteVideoStreams:(BOOL)muted;

/// 设置是否默认自动发送本地视频流
/// @param enable 开启/关闭
- (int)setDefaultMuteLocalVideoStreams:(BOOL)enable;

/// 是否自动订阅远端音频
/// @param muted 是否自动订阅
- (int)setDefaultMuteAllRemoteAudioStreams:(BOOL)muted;

/// 停止远端画面
/// @param userid 用户ID
- (int)stopRemoteStreamView:(NSString * _Nonnull)userid;

/// 设置远端画面显示模式
/// @param displayMode 参考HWRtcVideoDisplayMode
/// @param userid 用户ID
- (int)setRemoteViewDisplayMode:(HWRtcVideoDisplayMode)displayMode
                         userid:(NSString * _Nonnull)userid;

/// 选看远端试图  适用于大小流
/// @param remote 参考 HWRtcVideoCanvas
- (int)startRemoteStreamView:(HWRtcVideoCanvas * _Nonnull)remote;

/// 选看/关闭 远端试图
/// @param remote 参考 HWRtcVideoCanvas
- (int)setupRemoteView:(HWRtcVideoCanvas * _Nonnull)remote;

/// 设置辅流能力
/// @param videoEncode 参考HWRtcSubStreamEncParam
- (int)setSubStreamEncParam:(HWRtcSubStreamEncParam *_Nonnull)videoEncode;

- (NSArray <HWRtcScreenCaptureSourceInfo *>*_Nullable)getScreenCaptureSources;

/// 开始屏幕共享
- (int)startScreenCapture;

/// 停止屏幕共享
- (int)stopScreenCapture;

- (int)setScreenSmooth:(int)enable;

- (int)selectScreenCaptureTarget:(HWRtcScreenCaptureParam * _Nonnull)param;

/// 设置远端下行流的自适应
/// @param enable YES 启动 NO 关闭
- (int)setRemoteVideoAdjustResolution:(BOOL)enable;

/// 是否禁用房间重连功能
/// @param enable YES 启动 NO 关闭
- (int)disableRejoinRoom:(BOOL)enable;

/// 开启辅流画面
/// @param streamView 参考HWRtcVideoCanvas
/// @param streamType 编码类型
- (int)startRemoteSubStreamView:(HWRtcVideoCanvas * _Nonnull)streamView
                     streamType:(HWRtcStreamType)streamType;

/// 停止辅流画面
/// @param userid 用户ID
- (int)stopRemoteSubStreamView:(NSString *_Nonnull)userid;

/// 设置辅流画面角度
/// @param rotation 参考HWRtcVideoRotation
/// @param userid 用户ID
- (int)setRemoteSubStreamViewRotation:(HWRtcVideoRotation)rotation
                               userid:(NSString *_Nonnull)userid;

/// 设置辅流画面显示模式
/// @param displayMode 参考HWRtcVideoDisplayMode
/// @param userid 用户ID
- (int)setRemoteSubStreamViewDisplayMode:(HWRtcVideoDisplayMode)displayMode
                                  userid:(NSString *_Nonnull)userid;

/// 开启预览
/// 要调用setupLocalVideo 才会生效.
/// 在[joinRoom:roomId:mediaType:]之前调用才会生效
/// @return int 0表示成功.,其他表示失败
- (int)startPreview;

/// 关闭预览
/// 在[joinRoom:roomId:mediaType:]之前调用才会生效.如果开启预览之后加入房间,无需再调用关闭预览,离开房间会自动释放摄像头
/// @return int 0表示成功.,其他表示失败
- (int)stopPreview;

/// 跨房
/// @param roomid 房间id
/// @param role 角色
- (int)connectOtherRoom:(NSString * _Nonnull)roomid
                   role:(HWRtcRole)role;


/// 断开跨房
/// @param roomid 房间id
/// @param role 角色
- (int)disconnectOtherRoom:(NSString * _Nonnull)roomid
                      role:(HWRtcRole)role;

/// 设置用户的角色
/// @param role 角色
- (int)setUserRole:(HWRtcRole)role;

/// 设置远端音频最大的N个人的音频流
/// @param topNVoice int 建议传(0,17]
- (int)setRemoteAudioTopNVoice:(int)topNVoice;

- (int)enableTopThreeAudioMode:(int)enabled;

// 设置远端音频模式
/// @param mode HRTCRemoteAudioMode 音频模式
- (int)setRemoteAudioMode:(HWRtcRemoteAudioMode)mode;

/// 订阅或取消订阅某个用户音频
/// @param userid 用户id
/// @param muted BOOL YES 取消订阅, NO 订阅
- (int)muteRemoteAudio:(NSString * _Nonnull)userid
                 muted:(BOOL)muted;

/// 订阅或取消订阅某个用户视频
/// @param userid 用户id
/// @param muted BOOL YES 取消订阅, NO 订阅
- (int)muteRemoteVideo:(NSString * _Nonnull)userid
                 muted:(BOOL)muted;

/// 订阅或取消订阅全部用户
/// @param muted BOOL YES 取消订阅, NO 订阅
- (int)muteAllRemoteAudio:(BOOL)muted;

/// 订阅或取消订阅全部用户视频
/// @param muted BOOL YES 取消订阅, NO 订阅
- (int)muteAllRemoteVideo:(BOOL)muted;

/// 设置本地视频镜像模式
/// @param mirror 镜像模式
- (int)setLocalViewMirror:(HWRtcVideoMirrorType)mirror;

/// 设置视频编码镜像模式
/// @param mirror 镜像模式
- (int)setVideoEncoderMirror:(HWRtcVideoMirrorType)mirror;

/// 只支持IPHONE
/// 切换前后镜头
- (int)switchCamera;

/// 打开美颜能力
/// @param enable YES 开 NO 关闭
- (int)setVideoBeauty:(BOOL)enable;

/// 设置扬声器模式 (只支持IPHONE)
/// @param speakerModel 扬声器模式类型 具体参考HWRtcSpeakerModel
- (int)setSpeakerModel:(HWRtcSpeakerModel)speakerModel;

/// 设置默认扬声器模式 (只支持IPHONE)
/// @param speakerModel 扬声器模式类型 具体参考HWRtcSpeakerModel
- (int)setDefaultSpeakerModel:(HWRtcSpeakerModel)speakerModel;

/// 摄像头开关
/// @param enable BOOL类型 YES 表示开启 NO 表示关闭
- (int)enableLocalVideo:(BOOL)enable;

/// 麦克风开关
/// @param enable BOOL类型 YES 表示开启 NO 表示关闭
- (int)enableLocalAudio:(BOOL)enable;

/// 音频流发送开关
/// @param mute BOOL类型 YES 表示不发送 NO 表示发送
- (int)muteLocalAudio:(BOOL)mute;

/// 视频流发送开关
/// @param mute BOOL类型 YES 表示不发送 NO 表示发送
- (int)muteLocalVideo:(BOOL)mute;

/// 设置关闭视频流后发送的默认图片
/// @param imagePath 图片路径（nil表示关闭发送图片）
/// @param fps 显示帧率
-(int)setVideoMuteImage:(NSString* _Nonnull)imagePath fps:(NSUInteger)fps;

/// 开启音频外部采集
/// 必须在加入房间(joinRoom:roomId:mediaType:)之前调用
/// @param enable YES 开启外部采集 NO 关闭外部采集
/// @param sampleRate 采样率
/// @param channels 声道数
- (int)setExternalAudioCapture:(BOOL)enable
                    sampleRate:(NSUInteger)sampleRate
                      channels:(NSUInteger)channels;

/// 开启视频外部采集
///  必须在加入房间(joinRoom:roomId:mediaType:)之前调用
/// @param enabled YES 开启外部采集 NO 关闭外部采集
- (int)setExternalVideoCapture:(BOOL)enabled;

/// 外部推流音频流
/// @param audioData 音频流数据
- (int)pushExternalAudioFrame:(NSData * _Nonnull)audioData;

/// 外部推流视频流
/// @param videoFrame 参考 HWRtcVideoFrame
- (int)pushExternalVideoFrame:(HWRtcVideoFrame* _Nonnull)videoFrame;

/// 设置媒体数据自渲染
/// @param mediaType audio 设置音频 video设置视频
/// @param remoteEnable 远端 YES 远端自渲染 NO 关闭远端自渲染
/// @param localEnable 本地 YES 本地自渲染 NO 关闭本地自渲染
- (int)setExternalMediaFrameOutput:(HWRtcMediaType)mediaType
                      remoteEnable:(BOOL)remoteEnable
                       localEnable:(BOOL)localEnable;

/// 指定视频格式设置视频数据自渲染
/// @param format 视频格式
/// @param remoteEnable 远端 YES 远端自渲染 NO 关闭远端自渲染
/// @param localEnable 本地 YES 本地自渲染 NO 关闭本地自渲染
- (int)setExternalVideoFrameOutputWithFormat:(HwRtcImageBufferFormat *)format
                                remoteEnable:(BOOL)remoteEnable
                                 localEnable:(BOOL)localEnable;

/// 设置默认背景图
- (int)setDefaultImage:(NSString* _Nonnull)imagePath;

- (int)setVideoEncodeResolutionMode:(HWRtcVideoEncodeResolutionMode)mode;

/// 启用/关闭 无码流提示
/// 需要入会调用才生效
/// @param enable 启用/关闭
/// @param interval 间隔时间（秒）范围（1-60）
- (int)enableStreamRecvPacketNotify:(BOOL)enable interval:(NSUInteger)interval;

/// 调整采集音量
/// @param volume 音量值(0-100)
- (int)adjustRecordingVolume:(unsigned int)volume;

/// 调整播放音量
/// @param volume 音量值(0-100)
- (int)adjustPlaybackVolume:(unsigned int)volume;

- (int)adjustPlaybackVolume:(NSString *)userid volume :(unsigned int)volume;

/// 获取输出声音是否静音
- (BOOL)getPlaybackDeviceMute;

/// 获取输入声音是否静音
- (BOOL)getRecordingDeviceMute;

/// 设置输出声音设备是否静音 (只支持MacOS)
/// @param mute BOOL YES 表示输出声音设备静音, NO 表示输出声音设备不静音
- (int)setPlaybackDeviceMute:(BOOL)mute;

/// 是否关闭麦克风 (只支持MacOS)
/// @param mute BOOL 类型 YES 表示关闭麦克风 NO表示开启麦克风
- (int)setRecordingDeviceMute:(BOOL)mute;

/// 设置最大音量上报频率
/// @param volInterval int 类型  0 关闭音量上报不再触发回调 ，volInterval取值范围是[100 10000]ms
- (int)setVolumeNotifyInterval:(int)volInterval;

/// 设置扬声器的音量 (只支持MacOS)
/// @param volume int类型 取值在0-100, 10位正常音量,0为静音,100为最大音量
- (int)setPlaybackDevicesVolume:(unsigned int)volume;

/// 获取扬声器的音量 (只支持MacOS)
/// @return int
- (int)getPlaybackDevicesVolume;

/// 设置输入声音音量 (只支持MacOS)
/// @param volume 设置音量大小 volume取值范围是[0 100],10表示正常音量
- (int)setRecordingDevicesVolume:(unsigned int)volume;

/// 获取输入声音音量 (只支持MacOS)
- (int)getRecordingDevicesVolume;

/** 获取扬声器设备 (只支持MacOS)

@return (NSArray<HWRtcDeviceInfo*>*) 数组类型,数组中的对象HWRtcDeviceInfo类型的.
* nil: Failure.
*/
- (NSArray<HWRtcDeviceInfo*>*_Nonnull)getPlaybackDevices;

/** 获取麦克风设备 (只支持MacOS)
@return (NSArray<HWRtcDeviceInfo*>*) 数组类型,数组中的对象HWRtcDeviceInfo类型的.
* nil: Failure.
*/
- (NSArray<HWRtcDeviceInfo*>*_Nonnull)getRecordingDevices;

/** 获取摄像头设备 (只支持MacOS)
@return (NSArray<HWRtcDeviceInfo*>*) 数组类型,数组中的对象HWRtcDeviceInfo类型的.
* nil: Failure.
*/
- (NSArray<HWRtcDeviceInfo*>*_Nonnull)getVideoDevices;

/// 设置当前扬声器设备 (只支持MacOS)
/// @param deviceId 设备ID,可以从GetPlaybackDevices 获取到设备ID
- (int)setPlaybackDevice:(NSString*_Nonnull)deviceId;

/// 设置当前麦克风设备 (只支持MacOS)
/// @param deviceId 设备ID 可以从GetRecordingDevices 获取到设备ID
- (int)setRecordingDevice:(NSString*_Nonnull)deviceId;

/// 设置当前摄像头设备 (只支持MacOS)
/// @param deviceId 设备ID 可以从GetVideoDevices 获取到设备ID
- (int)setVideoDevice:(NSString*_Nonnull)deviceId;

/// 获取当前输入声音设备 (只支持MacOS)
/// 该值有可能为空.用户设置了什么,就返回什么.
- (NSString *_Nonnull)getCurrentRecordingDevice;

/// 获取当前输出声音设备 (只支持MacOS)
/// 该值有可能为空.用户设置了什么,就返回什么.
- (NSString *_Nonnull)getCurrentPlaybackDevice;

/// 获取当前摄像头设备 (只支持MacOS)
/// 该值有可能为空.用户设置了什么,就返回什么.
- (NSString *_Nonnull)getCurrentVideoDevice;

///入会前网络检测
/// @param netWorkTestConfig 参考 HWRTCNetworkTestConfig
- (int)startNetworkTest:(HWRtcNetworkTestConfig *_Nonnull)netWorkTestConfig;

//关闭入会前网络检测
- (int)stopNetworkTest;

/// 更新签名
/// @param signature 签名
/// @param time 当前时间
- (int)renewSignature:(NSString *_Nonnull)signature
                 time:(long long)time;

/// 啸叫检测
/// @param enable YES 开启 NO 关闭
- (int)enableHowlingDetect:(BOOL)enable;

/// 日志上传
- (int)logUpload;

/// 离开房间
- (int)leaveRoom;

/// 注销引擎
- (void)destroy;

/** 通过使用JSON选项配置SDK，提供技术预览功能或特殊定制。
@param options JSON格式的SDK选项。具体内容请联系官网
*/
- (int)setParameters:(NSString * _Nonnull)options;

/// 设置播放的音频文件
/// 需要入会调用才生效
/// @param startAudioFileParam 参考 HWRtcStartAudioFileParam
- (int)startAudioFile:(HWRtcStartAudioFileParam * _Nonnull)startAudioFileParam;

/// 启动音频混音
/// @param filePath 音频文件路径
/// @param publish 是否将音频发送到远端
/// @param cycle 音频播放次数，-1表示无限循环
/// @param replace 是否用音频文件替换麦克风采集的声音
- (int)startAudioFile:(NSString *)filePath
    publish:(int)publish
    cycle:(int)cycle
    replace:(int)replace;

/// 启动音频混音
/// @param filePath 音频文件路径
/// @param publish 是否将音频发送到远端
/// @param cycle 音频播放次数，-1表示无限循环
/// @param replace 是否用音频文件替换麦克风采集的声音
/// @param startPos 开始播放的位置，单位ms
- (int)startAudioFile:(NSString *)filePath
              publish:(int)publish
                cycle:(int)cycle
              replace:(int)replace
             startPos:(unsigned int)startPos;

/// 停止播放音频
- (int)stopAudioFile;

/// 暂停播放音频
- (int) pauseAudioFile;

/// 恢复播放音频
- (int) resumeAudioFile;

/// 设置音频音量
/// @param volume 音量，范围0-100
- (int) adjustAudioFileVolume:(unsigned int)volume;

/// 设置本地播放音频音量
/// @param volume 音量，范围0-100
- (int) adjustAudioFilePlayoutVolume:(unsigned int)volume;

/// 设置远端播放音频音量
/// @param volume 音量，范围0-100
- (int) adjustAudioFilePublishVolume:(unsigned int)volume;

/// 获取音频音量
- (int)getAudioFileVolume;

/// 获取本地播放音频音量
- (int)getAudioFilePlayoutVolume;

/// 获取本地播放音频音量
- (int)getAudioFilePublishVolume;

/// 获取音频时长
- (int)getAudioFileDuration;

/// 获取当前音频播放位置
- (int)getAudioFileCurrentPosition;

/// 设置音频播放位置
/// @param position 播放位置，单位ms
- (int)setAudioFilePosition:(unsigned long long)position;

/// 获取音效总音量
- (int)getAudioClipsVolume;

/// 获取指定音效音量
/// @param soundId 音效ID
- (int)getVolumeOfAudioClip:(int)soundId;

/// 设置音效总音量
/// @param volume 音量，范围0-100
- (int)setAudioClipsVolume:(double)volume;

/// 设置指定音效音量
/// @param soundId 音效ID
/// @param volume 音量，范围0-100
- (int)setVolumeOfAudioClip:(int)soundId volume:(double)volume;

/// 播放音效文件
/// @param soundId 音效ID
/// @param filePath 文件路径
/// @param loop 播放次数。-1表示无限循环
/// @param gain 音量，范围0-100
/// @param publish 是否将音效文件发送到远端
/// @param startPos 开始播放位置，单位ms
- (int)playAudioClip:(int)soundId
            filePath:(NSString *)filePath
                loop:(int)loop
               pitch:(double)pitch
                 pan:(double)pan
                gain:(double)gain
             publish:(int)publish
            startPos:(int)startPos;

/// 停止播放指定音效
/// @param soundId 音效ID
- (int)stopAudioClip:(int)soundId;

/// 停止播放所有音效
- (int)stopAllAudioClips;

/// 音效预加载
- (int)preloadAudioClip:(int)soundId filePath:(NSString *)filePath;

/// 删除预加载音效
- (int)unloadAudioClip:(int)soundId;

/// 暂停播放指定音效
/// @param soundId 音效ID
- (int)pauseAudioClip:(int)soundId;

/// 暂停播放所有音效
- (int)pauseAllAudioClips;

/// 恢复播放指定音效
/// @param soundId 音效ID
- (int)resumeAudioClip:(int)soundId;

/// 恢复播放所有音效
- (int)resumeAllAudioClips;

/// 获取指定音效当前播放位置
/// @param soundId 音效ID
- (int)getAudioClipCurrentPosition:(int)soundId;

/// 设置指定音效播放位置
/// @param soundId 音效ID
/// @param pos 位置，单位ms
- (int)setAudioClipPosition:(int)soundId pos:(int)pos;

/// 获取音效文件时长
/// @param filePath 音效文件路径
- (int)getAudioClipDuration:(NSString *_Nullable)filePath;

// 改名
- (int)changeUserName:(NSString*)userName;

// 降噪开关
- (int)enableAudioTNR:(BOOL)enable;

// 本地麦克风回音测试
- (int)startEchoTest:(int)intervalInSeconds;
- (int)stopEchoTest;

// mac共享声音
- (int)setShareComputerSound:(BOOL)enable;
@end
