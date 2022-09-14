//
//  HWRtcObject.h
//  HWRtcEngine
//
//  Created by zhanganl on 2020/3/4.
//  Copyright © 2020 zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,HWRtcErrorCode) {
    /* */
    HWRtcErrorCodeSuccess = 0,
    /* SDK内部错误 */
    HWRtcErrorCodeSdkInternalError = 90000001,
    /* */
    HWRtcErrorCodeMsgToolarge,
    /* 内存不足 */
    HWRtcErrorCodeMemNotEnough,
    /* 同步信息错误 */
    HWRtcErrorCodeSynsendMsgError,
    /* 参数错误 */
    HWRtcErrorCodeParamError = 90000005,
    /* api呼叫顺序错误 */
    HWRtcErrorCodeApiCalledInWrongOrder,
    /* 设置本地视图失败 */
    HWRtcErrorCodeSetupLocalViewFail,
    /* 设置远端视图失败 */
    HWRtcErrorCodeStartRemoteStreamViewFail,
    /* 设置设备错误 */
    HWRtcErrorCodeSetDeviceFail,
    /* 初始化中 */
    HWRtcErrorCodeInitializing = 90000010,
    /* 去初始化中 */
    HWRtcErrorCodeUnInitializing,
    /* 正在日志上传中 */
    HWRtcErrorCodeLogUploading,
    /* 媒体端口错误 */
    HWRtcErrorCodeMediaPortError,
    /* 观看视图过多 */
    HWRtcErrorCodeWatchViewTooMuch,
    /* */
    HWRtcErrorCodeMediaCmpErr = 90000015,
    /* 服务器无响应 */
    HWRtcErrorCodeServerNoResponse,
    /* 切换角色失败 */
    HWRtcErrorCodeUserRoleChangeFail,
    /* 加入房间失败 */
    HWRtcErrorCodeJoinRoomFail,
    /* 房间状态忙 */
    HWRtcErrorCodeJoinRoomStatusBusy,
    /* 加入房间服务器错误 */
    HWRtcErrorCodejoinRoomServerError = 90000020,
    /* 加入房间服务器无法访问 */
    HWRtcErrorCodejoinRoomServiceUnreachable,
    /* 加入房间验证错误 */
    HWRtcErrorCodejoinRoomAuthFail,
    /* 加入房间验证重试 */
    HWRtcErrorCodejoinRoomAuthRetry,
    /* 加入房间时间同步 */
    HWRtcErrorCodejoinRoomClockSync,
    /* 加入房间网址不正确 */
    HWRtcErrorCodejoinRoomUrlNotRight = 90000025,
    /* 被踢 */
    HWRtcErrorCodeKickedOff,
    /* 共享失败 */
    HWRtcErrorCodeScreenCaptureFail,
    /* 当前为外部媒体输出模式，禁用该操作 */
    HWRtcErrorCodeExtMediaOutPut,
    /* 重连失败 */
    HWRtcErrorCodeReconnectFailed,
    /* 服务器宕机 */
    HWRtcErrorCodeServerBreakDown = 90000030,
    /* 签名已经过期 */
    HWRtcErrorCodeSignatureExpired,
    /* 设置远端窗口模式失败 */
    HWRtcErrorCodeSetRemoteRenderModeFail,
    /* 订阅或取消订阅音频失败 */
    HWRtcErrorCodeSetRemoteAudioMuteFail,
    /* 连接其他房间失败 */
    HWRtcErrorCodeConnectOtherRoomFail,
    /* 断开连接其他房间失败 */
    HWRtcErrorCodeDisConnectOtherRoomFail = 90000035,
    /* 不允许角色切换 */
    HWRtcErrorCodeSetUseRoleNotAllowed,
    /* 当前为第三方采集模式，禁用该操作 */
    HWRtcErrorCodeExtMediaCaptureInput,
    /* 设置第三方音频采集失败 */
    HWRtcErrorCodeSetExtAudioCaptureFail,
    /* 设置第三方视频采集失败 */
    HWRtcErrorCodeSetExtVideoCaptureFail,
    /* 设置共享声音开关失败 */
    HWRtcErrorCodeSetShareComputerSoundFail = 90000040,
    /* 启停上行音频流失败 */
    HWRtcErrorCodeSetLocalAudioMuteFail,
    /* 启停上行视频流失败 */
    HWRtcErrorCodeSetLocalVideoMuteFail,
    /* 用戶被移除 */
    HWRtcErrorCodeUserRemoved,
    /* 房间被解散 */
    HWRtcErrorCodeRoomDismissed,
    /* 设置远端窗口失败 */
    HWRtcErrorCodeSetupRemoteViewFail,
    /* 请求被调度拒绝 */
    HWRtcErrorCodeRegionNotCovered = 90000048,
    /* 置于最后 */
    HWRtcErrorCodeButt
};

typedef NS_ENUM(NSInteger,HWRtcLogLevel) {
    /* 输出ERROR级别日志 */
    HWRtcLogLevelError = 0,
    /* 输出WARNING级别日志 */
    HWRtcLogLevelWarning,
    /* 输出INFO级别日志 */
    HWRtcLogLevelInfo,
    /* 输出DEBUG级别日志 */
    HWRtcLogLevelDebug
};

typedef NS_ENUM(NSInteger,HWRtcRole) {
    /* 双向流角色，例如主播加入 */
    HWRtcRoleJoiner = 0,
    /* 发布流角色，例如广播,无法在房间中切换角色 */
    HWRtcRolePublisher,
    /* 接收流角色，例如观众 */
    HWRtcRolePlayer
};

typedef NS_ENUM(NSInteger, HWRtcGSensorMode) {
    HWRtcGSensorModeDisable = 0, // 关闭重力感应
    HWRtcGSensorModeUIAutoLayout, // 开启重力感应,但是SDK不会根据陀螺仪自动调整本地View的画面方向,而是需要您的APP开启了重力感应适配.
};

typedef NS_ENUM(NSInteger,HWRtcMediaType){
    /* 音频流 */
    HWRtcMediaTypeAudio = 0,
    /* 视频流 */
    HWRtcMediaTypeVideo
};

typedef NS_ENUM(NSInteger,HWRtcVideoDisplayMode) {
    /* 优先保证视频内容全部显示。视频尺寸等比缩放，直至视频窗口的一边与视窗边框对齐。如果视频长宽与显示窗口不同，视窗上未被填满的区域将被涂黑 */
    HWRtcVideoDisplayModeFit = 0,
    /* 优先保证视窗被填满。视频尺寸等比缩放，直至整个视窗被视频填满。如果视频长宽与显示窗口不同，多出的视频将被截掉 */
    HWRtcVideoDisplayModeHidden,
    /* 视频尺寸进行缩放和拉伸以充满显示视窗 */
    HWRtcVideoDisplayModeFill,
    /* (iOS only)自适应模式,显示图像和设备的横竖屏不同使用黑边模式,横竖屏相同使用裁剪模式 */
    HWRtcVideoDisplayModeAdapt
};

typedef NS_ENUM(NSInteger,HWRtcStreamType) {
    HWRtcStreamTypeLD,   // 流畅 90
    HWRtcStreamTypeSD,   // 标清 180
    HWRtcStreamTypeHD,   // 高清 360-270
    HWRtcStreamTypeFHD,   // 超高清 720-450
    HWRtcStreamTypeTHD,   // 真高清
    HWRtcStreamTypeBUTT
};

typedef NS_ENUM(NSInteger,HWRtcVideoStreamType) {
    HWRtcVideoStreamTypeBig, // 大流
    HWRtcVideoStreamTypeSmall // 小流
};

typedef NS_ENUM(NSInteger,HWRtcVideoRotation) {
    HWRtcVideoRotation0,
    HWRtcVideoRotation90,
    HWRtcVideoRotation180,
    HWRtcVideoRotation270
};

typedef NS_ENUM(NSInteger,HWRtcVideoOrientaion) {
    HWRtcVideoOrientaionLanscape,
    HWRtcVideoOrientaionPortrait
};

typedef NS_ENUM(NSInteger,HWRtcSpeakerModel) {
    /* 听筒模式 */
    HWRtcSpeakerModelEarpiece,
    /* 扬声器模式 */
    HWRtcSpeakerModelSpeaker
};

typedef NS_ENUM(NSInteger,HWRtcDeviceType){
    /* 音频播放设备 */
    HWRtcDeviceTypePlayback,
    /* 音频录制设备 */
    HWRtcDeviceTypeRecording,
    /* 视频采集设备 */
    HWRtcDeviceTypeVideoCapture
};

typedef NS_ENUM(NSInteger,HWRtcDeviceState){
    /* 设备状态活跃的 */
    HWRtcDeviceStateActicve,
    /* 设备状态残疾的 */
    HWRtcDeviceStateDisabled,
    /* 设备状态断开的 */
    HWRtcDeviceStateUnplugged
};

typedef NS_ENUM(NSInteger,HWRtcConnChangeReason) {
    /* 正在连接 */
    HWRtcConnChangeConnecting = 0,
    /* 加入房间成功 */
    HWRtcConnChangeJoinSuccess,
    /* 重连中 */
    HWRtcConnChangeReconnecting,
    /* 重连成功 */
    HWRtcConnChangeReconnectSuccess,
    /* 加入房间失败 */
    HWRtcConnChangeJoinFailed,
    /* 重连失败 */
    HWRtcConnChangeReconncetFailed,
    /* 连接中断 */
    HWRtcConnChangeInterrupted,
    /* 心跳超时 */
    HWRtcConnChangeKeepAliveTimeout,
    /* 主动离开房间 */
    HWRtcConnChangeLeaveRoom,
    /* 服务器异常 */
    HWRtcConnChangeJoinServerError,
    /* sfu服务故障 */
    HWRtcConnChangeSFUBreakdown,
    /* 鉴权失败,appid或者签名错误 */
    HWRtcConnChangeJoinRoomAuthFailed,
    /* 鉴权重试 */
    HWRtcConnChangeJoinRoomAuthRetry,
    /* 时钟同步 */
    HWRtcConnChangeJoinRoomAuthClockSync,
    /* URL错误400 */
    HWRtcConnChangeUrlNotRight,
    /* 服务不可达 503*/
    HWRtcConnChangeJoinRoomServiceUnreachable,
    /* 内部错误 */
    HWRtcConnChangeInternalError,
    /* 被踢 */
    HWRtcConnChangeKickedOff,
    /* 签名过期 */
    HWRtcConnChangeSignatureExpired,
    /* 用户被移除 */
    HWRtcConnChangeUserRemoved,
    /* 房间被解散 */
    HWRtcConnChangeRoomDismissed,
    /* 请求被调度拒绝 */
    HWRtcConnChangeRegionNotCovered,
};

typedef NS_ENUM(NSInteger,HWRtcConnStateType) {
    /* 连接断开 */
    HWRtcConnStateTypeDisconnected = 0,
    /* 建立网络连接中 */
    HWRtcConnStateTypeConnecting,
    /* 网络连接成功 */
    HWRtcConnStateTypeConnected,
    /* 重新建立网络连接中 */
    HWRtcConnStateTypeReconnecting,
    /* 网络连接失败 */
    HWRtcConnStateTypeFailed
};

typedef NS_ENUM(NSInteger,HWRtcAudioRoute) {
    /* 扬声器 */
    HWRtcAudioRouteSpeaker = 0,
    /* 听筒 */
    HWRtcAudioRouteReceiver,
    /* 耳机 */
    HWRtcAudioRouteHeadset,
    /* 蓝牙 */
    HWRtcAudioRouteBluetooth
};

typedef NS_ENUM (NSInteger,HWRtcLeaveReason){
    HWRtcLeaveReasonUserLeaveRoom = 0,       // 用户主动离开
    HWRtcLeaveReasonServerError,             // 服务器异常
    HWRtcLeaveReasonBreakdown,               // sfu服务故障
    HWRtcLeaveReasonServiceUnreachable,      // 服务不可达503
    HWRtcLeaveReasonInternalError,           // 内部错误
    HWRtcLeaveReasonKickedOff,               // 被踢
    HWRtcLeaveReasonSignatureExpired,        // 签名过期
    HWRtcLeaveReasonReconnectFailed,         // 重连超时
    HWRtcLeaveReasonNetworkTest,             // 网络检测，UI不需要关注该错误码，不对外体现
    HWRtcLeaveReasonUserRemoved,             // 用户移除
    HWRtcLeaveReasonRoomDismissed,           // 房间解散
    HWRtcLeaveReasonRegionNotCovered,
};

typedef NS_ENUM (NSInteger,HWRtcVideoMirrorType){
    HWRtcVideoMirrorTypeAuto = 0,//SDK 决定镜像方式：前置摄像头镜像，后置摄像头不镜像
    HWRtcVideoMirrorTypeEnable, // 前置摄像头和 后置摄像头都镜像
    HWRtcVideoMirrorTypeDisable // 前置摄像头和 后置摄像头都不镜像
};

typedef NS_ENUM (NSInteger,HWRtcRemoteAudioState){
    HWRtcRemoteAudioStateStopped,
    HWRtcRemoteAudioStateStarting
};

typedef NS_ENUM (NSInteger,HWRtcRemoteAudioStateReason){
    HWRtcRemoteAudioStateReasonRemoteOffline,
    HWRtcRemoteAudioStateReasonRemoteMuted,
    HWRtcRemoteAudioStateReasonRemoteUnmuted
};

typedef NS_ENUM (NSInteger,HWRtcLocalAudioState){
    HWRtcLocalAudioStateStopped,
    HWRtcLocalAudioStateRecording,
    HWRtcLocalAudioStateFailed,
};

typedef NS_ENUM (NSInteger,HWRtcLocalAudioStateReason){
    HWRtcLocalAudioReasonErrorOk,
    HWRtcLocalAudioReasonErrorFailure,
    HWRtcLocalAudioReasonErrorRecordFailure,
    HWRtcLocalAudioReasonErrorStopFailure,
    HWRtcLocalAudioReasonErrorAccessDenied,
    HWRtcLocalAudioReasonErrorOnExclusiveMode,
    HWRtcLocalAudioReasonErrorEndpointCreateFailed,
    HWRtcLocalAudioReasonErrorMmsyserrInvalparam,
    HWRtcLocalAudioReasonErrorMmsyserrNodriver,
    HWRtcLocalAudioReasonErrorAudioServerNotRunning,
    HWRtcLocalAudioReasonErrorNoDevice,
    HWRtcLocalAudioReasonErrorRestartFailed,
};

typedef NS_ENUM (NSInteger,HWRtcLocalVideoState){
    HWRtcLocalVideoStateStopped,
    HWRtcLocalVideoStateCapturing,
    HWRtcLocalVideoStateFailed,
};

typedef NS_ENUM (NSInteger,HWRtcLocalVideoStateReason){
    HWRtcLocalVideoReasonErrorOk,
    HWRtcLocalVideoReasonErrorFailure,
    HWRtcLocalVideoReasonErrorCaptureFailure,
    HWRtcLocalVideoReasonErrorStopFailure,
    HWRtcLocalVideoReasonErrorCaptureDeviceNoPermission,
    HWRtcLocalVideoReasonErrorCaptureDeviceBusy,
    HWRtcLocalVideoReasonErrorCaptureAppInBackground,
    HWRtcLocalVideoReasonErrorCaptureOpenCameraFailed,
    HWRtcLocalVideoReasonErrorCaptureMultipleForegroundApp,
    HWRtcLocalVideoReasonErrorCaptureMultipleDeviceDisconnected,
};

typedef NS_ENUM (NSInteger,HWRtcRemoteVideoState){
    HWRtcRemoteVideoStateStopped,
    HWRtcRemoteVideoStateStarting
};

typedef NS_ENUM (NSInteger,HWRtcRemoteVideoStateReason){
    HWRtcRemoteVideoStateReasonRemoteOffline,
    HWRtcRemoteVideoStateReasonRemoteMuted,
    HWRtcRemoteVideoStateReasonRemoteUnmuted,
    HWRtcRemoteVideoStateReasonLocalMuted,
    HWRtcRemoteVideoStateReasonLocalUnmuted
};

typedef NS_ENUM (NSInteger,HWRtcVideoImageFormat){
    HWRtcVideoImageFormatYUV420P,
    HWRtcVideoImageFormatYUV422I,
    HWRtcVideoImageFormatRGB24,
    HWRtcVideoImageFormatRGBA = 3,
    HWRtcVideoImageFormatBGRA
};

typedef NS_ENUM (NSInteger,HWRtcVideoImageBufferType){
    HWRtcVideoImageBufferByteArray,
    HWRtcVideoImageBufferTexture
};

typedef NS_ENUM (NSInteger,HWRtcAudioFrameType){
    HWRtcAudioFrameTypePCM16
};

typedef NS_ENUM (NSInteger,HWRtcAudioFilePlayMode){
    HWRtcAudioFileLocalPlayMode = 0,  // 本地播放模式
    HWRtcAudioFileRemotePlayMode              // 远端播放模式
};

typedef NS_ENUM (NSInteger,HWRtcMediaDirection){
    HWRtcMediaDirectionLocal = 0,
    HWRtcMediaDirectionRemote
};

typedef NS_ENUM (NSInteger,HWRtcNetworkTestState){
    HWRtcNetworkTestOK = 0,
    HWRtcNetworkTestFAIL
};

typedef NS_ENUM (NSInteger,HWRtcNetworkQualityLevel){
    HWRtcNetworkQualityUnknown = 0,
    HWRtcNetworkQualityExcellent,
    HWRtcNetworkQualityGood,
    HWRtcNetworkQualityPoor,
    HWRtcNetworkQualityBad,
    HWRtcNetworkQualityVbad
};

typedef NS_ENUM(NSInteger,HWRtcVideoEncodeResolutionMode) {
    HWRtcVideoEncodeResolutionModeNone,
    HWRtcVideoEncodeResolutionModeConstRatio
};

typedef NS_ENUM (NSInteger,HWRTCRenderSuccessType){
    HWRTCRenderSuccessTypeFirestRender,
    HWRTCRenderSuccessTypeRecoverRender,
    HWRTCRenderSuccessTypeResolutionChange,
    HWRTCRenderSuccessTypeViewChange
};

typedef NS_ENUM (NSInteger,HWRtcRemoteAudioMode){
    HWRtcRemoteAudioTopnOfAll,
    HWRtcRemoteAudioSubscribe,
    HWRtcRemoteAudioTopThree
};

typedef NS_ENUM (NSInteger,HWRtcMediaConnStateTypes) {
    HWRtcMediaConnConnected,  // 连接成功
    HWRtcMediaConnFailed      // 建链失败
};

typedef NS_ENUM (NSInteger,HWRtcMediaConnChangeReason) {
    HWRtcMediaConnChangedConnected,  // 连接成功
    HWRtcMediaConnChangedNATFailed   // NAT未打通
};

typedef NS_ENUM (NSInteger,HWRtcScreenCaptureType) {
    HWRtcScreenCaptureTypeDesktop,  // 桌面分享
    HWRtcScreenCaptureTypeWindow   // 窗口分享
};

typedef NS_ENUM (NSInteger,HWRtcAudioFileState){
    HWRtcAudioFileOpenCompleted,  // 音频打开完成
    HWRtcAudioFileOpening,        // 音频正在打开
    HWRtcAudioFileIdle,           // 播放器空闲
    HWRtcAudioFilePlaying,        // 音频正在播放
    HWRtcAudioFilePlayCompleted,  // 音频播放完成
    HWRtcAudioFilePaused,         // 音频暂停
    HWRtcAudioFileStopped,        // 音频停止播放
    HWRtcAudioFileFailed,         // 音频播放失败
    HWRtcAudioFilePositionUpdate, // 更新音频播放进度
    HWRtcAudioFileStateUnknown    // 未知状态
};

typedef NS_ENUM (NSInteger,HWRtcAudioFileReason){
    HWRtcAudioFileReasonNone,
    HWRtcAudioFileReasonUrlNotFound = 1,
    HWRtcAudioFileReasonCodecNotSupported,
    HWRtcAudioFileReasonInvalidArguments,
    HWRtcAudioFileReasonSrcBufferUnderflow,
    HWRtcAudioFileReasonInterval,
    HWRtcAudioFileReasonInvalidState,
    HWRtcAudioFileReasonNoResource,
    HWRtcAudioFileReasonObjNotInitialized,
    HWRtcAudioFileReasonInvalidConnectionState,
    HWRtcAudioFileReasonUnknowdStreamType,
    HWRtcAudioFileReasonVideoRenderFailed,
    HWRtcAudioFileReasonInvalidMediaSource,
    HWRtcAudioFileReasonUnknown
};

typedef NS_ENUM (NSInteger,HWRtcAreaCode){
    HWRtcAreaCodeGLOB,
    HWRtcAreaCodeCN,
    HWRtcAreaCodeNA,
    HWRtcAreaCodeSA,
    HWRtcAreaCodeEU,
    HWRtcAreaCodeSEA,
    HWRtcAreaCodeAF,
    HWRtcAreaCodeAS
};

@interface HWRtcConstants : NSObject

@end

NS_ASSUME_NONNULL_END
