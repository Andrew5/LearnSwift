//  Huawei Engine SDK
//
//  Copyright (c) 2020 huawei.io. All rights reserved.
//

#ifndef HMMR_DEFINE_H
#define HMMR_DEFINE_H

#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#if defined WIN32
#define HRTC_CALL __cdecl
#define HRTC_API extern "C" __declspec(dllexport)
#else
#define HRTC_CALL
#define HRTC_API extern "C" __attribute__ ((__visibility__ ("default")))
#endif

namespace huawei {
    namespace mmr {
        typedef void* view_t;

        class HRTCConstant final {
        public:
            static const int HRTC_MAX_DOMAIN_LEN = 119;
            static const int HRTC_MAX_APPID_LEN = 128;
            static const int HRTC_MAX_LOG_PATH_LEN = 226;
            static const int HRTC_MAX_USERID_LEN = 64;
            static const int HRTC_MAX_USERNAME_LEN = 256;
            static const int HRTC_MAX_ROOMID_LEN = 64;
            static const int HRTC_MAX_SIGNATURE_LEN = 128;
            static const int HRTC_MAX_OPTION_INFO_LEN = 1024;
            static const int HRTC_MAX_CODEC_NAME_LEN = 64;
            static const int HRTC_MAX_DEVICE_NAME_LEN = 256;
            static const int HRTC_MAX_DEVICE_ID_LEN = 256;
            static const int HRTC_MAX_SOURCE_NAME_LEN = 512;
            static const int HRTC_MAX_WATCH_RESULT_REASON_LEN = 128;
            static const int HRTC_MAX_DEVICE_NUM = 20;
        };

        enum HRTCErrorCode {
            HRTC_ERR_CODE_SUCCESS = 0,
            HRTC_ERR_CODE_SDK_INTERNAL_ERROR = 90000001,
            HRTC_ERR_CODE_MSG_TOOLARGE,
            HRTC_ERR_CODE_MEM_NOT_ENOUGH,
            HRTC_ERR_CODE_SYNSEND_MSG_ERR,
            HRTC_ERR_CODE_PARAM_ERROR = 90000005,
            HRTC_ERR_CODE_API_CALLED_IN_WRONG_ORDER,
            HRTC_ERR_CODE_SETUP_LOCAL_VIEW_FAIL,
            HRTC_ERR_CODE_START_REMOTE_STREAM_VIEW_FAIL,
            HRTC_ERR_CODE_SET_DEVICE_FAIL,
            HRTC_ERR_CODE_INITIALIZING = 90000010,      // 初始化中
            HRTC_ERR_CODE_UN_INITIALIZING,   // 去初始化中
            HRTC_ERR_CODE_LOG_UPLOADING,     // 正在日志上传中
            HRTC_ERR_CODE_MEDIA_PORT_ERROR,            /* 获取媒体端口失败 */
            HRTC_ERR_CODE_WATCH_VIEW_TOO_MUCH,       /* 选看窗口超过规格数 */
            HRTC_ERR_CODE_MEDIA_CMP_ERR = 90000015,       /* 媒体协商失败 */
            HRTC_ERR_CODE_SERVER_NO_RESPONSE,   /* 服务器没有响应 */
            HRTC_ERR_CODE_USER_ROLE_CHANGE_FAIL,   /* 角色切换失败 */
            HRTC_ERR_CODE_JOIN_ROOM_FAIL,  /* 加入房间失败 */
            HRTC_ERR_CODE_JOIN_ROOM_STATUS_BUSY,   /* 非空闲状态 */
            HRTC_ERR_CODE_JOIN_ROOM_SERVER_ERROR = 90000020,   /* 加入房间失败，服务器异常 */
            HRTC_ERR_CODE_JOIN_ROOM_SERVICE_UNREACHABLE,  /* 加入房间失败，服务不可达 */
            HRTC_ERR_CODE_JOIN_ROOM_AUTH_FAIL,  /* 加入房间失败，鉴权失败 */
            HRTC_ERR_CODE_JOIN_ROOM_AUTH_RETRY,  /* 加入房间失败，鉴权重试 */
            HRTC_ERR_CODE_JOIN_ROOM_AUTH_CLOCK_SYNC, /* 加入房间失败，时钟同步 */
            HRTC_ERR_CODE_JOIN_ROOM_URL_NOT_RIGHT = 90000025, /* 加入房间失败，url错误 */
            HRTC_ERR_CODE_KICKED_OFF,        /* 被踢 */
            HRTC_ERR_CODE_SCREEN_CAPTURE_FAIL,   /* 共享失败 */
            HRTC_ERR_CODE_EXT_MEDIA_OUTPUT, /* 当前为外部媒体输出模式，禁用该操作*/
            HRTC_ERR_CODE_RECONNECT_FAILED, /* 重连失败*/
            HRTC_ERR_CODE_SERVER_BREAK_DOWN = 90000030, /* 服务器宕机*/
            HRTC_ERR_CODE_SIGNATURE_EXPIRED, /* 签名已过期*/
            HRTC_ERR_CODE_SET_REMOTE_RENDER_MODE_FAIL,  /* 设置远端窗口模式失败*/
            HRTC_ERR_CODE_SET_REMOTE_AUDIO_MUTE_FAIL,    /* 订阅或取消订阅音频失败 */
            HRTC_ERR_CODE_CONNECT_OTHER_ROOM_FAIL,    /* 跨房失败 */
            HRTC_ERR_CODE_DISCONNECT_OTHER_ROOM_FAIL = 90000035,  /* 结束跨房失败 */
            HRTC_ERR_CODE_SET_USEROLE_NOT_ALLOWED,   /* 不允许角色切换 */
            HRTC_ERR_CODE_EXT_MEDIA_CAPTURE_INPUT, /* 当前为第三方采集模式，禁用该操作 */
            HRTC_ERR_CODE_SET_EXTAUDIO_CAPTURE_FAIL, /* 设置第三方音频采集失败 */
            HRTC_ERR_CODE_SET_EXTVIDEO_CAPTURE_FAIL, /* 设置第三方视频采集失败 */
            HRTC_ERR_CODE_SET_SHARE_COMPUTER_SOUND_FAIL = 90000040, /* 设置共享声音开关失败 */
            HRTC_ERR_CODE_SET_LOCAL_AUDIO_MUTE_FAIL, /* 启停上行音频流失败 */
            HRTC_ERR_CODE_SET_LOCAL_VIDEO_MUTE_FAIL, /* 启停上行视频流失败 */
            HRTC_ERR_CODE_USER_REMOVED,  /* 用户被移除 */
            HRTC_ERR_CODE_ROOM_DISMISSED, /* 房间被解散 */
            HRTC_ERR_CODE_SETUP_REMOTE_VIEW_FAIL,    /* 设置远端View失败 */
            HRTC_ERR_CODE_REGION_NOT_COVERED = 90000048,
            HRTC_ERR_CODE_NOT_SUPPORT = 90000050,    /* 该平台不支持此功能 */
            HRTC_ERR_CODE_REPEATE_JOIN_ROOM,          /*重复加入房间*/
            HRTC_ERR_CODE_BUTT
        };

        enum HRTCStreamType {
            HRTC_STREAM_TYPE_LD,
            HRTC_STREAM_TYPE_SD,
            HRTC_STREAM_TYPE_HD,
            HRTC_STREAM_TYPE_FHD,
            HRTC_STREAM_TYPE_THD
        };

        enum HRTCVideoDisplayMode {
            HRTC_VIDEO_DISPLAY_MODE_FIT,  /* 优先保证视频内容全部显示。视频尺寸等比缩放，直至视频窗口的一边与视窗边框对齐。如果视频长宽与显示窗口不同，视窗上未被填满的区域将被涂黑 */
            HRTC_VIDEO_DISPLAY_MODE_HIDDEN, /* 优先保证视窗被填满。视频尺寸等比缩放，直至整个视窗被视频填满。如果视频长宽与显示窗口不同，多出的视频将被截掉 */
            HRTC_VIDEO_DISPLAY_MODE_FILL,   /* 视频尺寸进行缩放和拉伸以充满显示视窗 */
            HRTC_VIDEO_DISPLAY_ADAPT      /* 自适应模式，显示图像和设备的横竖屏不同使用黑边模式，横竖屏相同使用裁剪模式,只支持Android和iOS平台  */
        };

        enum HRTCMediaType {
            HRTC_MEDIA_TYPE_AUDIO,
            HRTC_MEDIA_TYPE_VIDEO
        };

        enum HRTCRoleType {
            HRTC_ROLE_TYPE_JOINER, /* < 双向流角色，例如主播加入 */
            HRTC_ROLE_TYPE_PUBLISER, /* < 发布流角色，例如广播 */
            HRTC_ROLE_TYPE_PLAYER /* < 接收流角色，例如观众 */
        };

        enum HRTCLogLevel {
            HRTC_LOG_LEVEL_ERROR,
            HRTC_LOG_LEVEL_WARNING,
            HRTC_LOG_LEVEL_INFO,
            HRTC_LOG_LEVEL_DEBUG
        };

        enum HRTCScreenCaptureType {
            HRTC_SCREEN_CAPTURE,
            HRTC_WINDOW_CAPTURE,
        };

        enum HRTCConnStateTypes {
            HRTC_CONN_DISCONNECTED = 0, // 连接断开
            HRTC_CONN_CONNECTING,       // 建立网络连接中
            HRTC_CONN_CONNECTED,        // 网络连接成功
            HRTC_CONN_RECONNECTING,     // 重新建立网络连接中
            HRTC_CONN_FAILED            // 网络连接失败
        };

        enum HRTCConnChangeReason {
            HRTC_CONN_CHANGED_CONNECTING = 0,           // 正在连接
            HRTC_CONN_CHANGED_JOIN_SUCCESS,             // 加入房间成功
            HRTC_CONN_CHANGED_RECONNECTING,             // 重连中
            HRTC_CONN_CHANGED_RECONNECT_SUCCESS,        // 重连成功
            HRTC_CONN_CHANGED_JOIN_FAILED,              // 加入房间失败
            HRTC_CONN_CHANGED_RECONNCET_FAILED,         // 重连失败
            HRTC_CONN_CHANGED_INTERRUPTED,              // 连接中断
            HRTC_CONN_CHANGED_KEEP_ALIVE_TIMEOUT,       // 心跳超时
            HRTC_CONN_CHANGED_LEAVE_ROOM,               // 主动离开房间
            HRTC_CONN_CHANGED_JOIN_ROOM_SERVER_ERROR,        // 服务器异常
            HRTC_CONN_CHANGED_SFU_BREAKDOWN,            // sfu服务故障
            HRTC_CONN_CHANGED_JOIN_ROOM_AUTH_FAILED,              // 鉴权失败,appid或者签名错误
            HRTC_CONN_CHANGED_JOIN_ROOM_AUTH_RETRY,               // 鉴权重试
            HRTC_CONN_CHANGED_JOIN_ROOM_AUTH_CLOCK_SYNC,          // 时钟同步
            HRTC_CONN_CHANGED_JOIN_ROOM_URL_NOT_RIGHT,            // URL错误 400
            HRTC_CONN_CHANGED_JOIN_ROOM_SERVICE_UNREACHABLE,      // 服务不可达503
            HRTC_CONN_CHANGED_INTERNAL_ERROR,           // 内部错误
            HRTC_CONN_CHANGED_KICKED_OFF,               // 被踢
            HRTC_CONN_CHANGED_SIGNATURE_EXPIRED,         // 签名过期
            HRTC_CONN_REASON_USER_REMOVED,              // 用户移除
            HRTC_CONN_REASON_ROOM_DISMISSED,            // 房间解散
            HRTC_CONN_CHANGED_REGION_NOT_COVERED
        };

        enum HRTCMediaConnStateTypes {
            HRTC_MEDIA_CONN_CONNECTED,  // 连接成功
            HRTC_MEDIA_CONN_FAILED      // 建链失败
        };

        enum HRTCMediaConnChangeReason {
            HRTC_MEDIA_CONN_CHANGED_CONNECTED,  // 连接成功
            HRTC_MEDIA_CONN_CHANGED_NAT_FAILED  // NAT未打通
        };

        enum HRTCSpeakerModel {
            HRTC_SPEAKER_MODEL_EARPIECE,    //  耳机
            HRTC_SPEAKER_MODEL_SPEAKER      //  扬声器
        };

        enum HRTCVideoRotation {
            HRTC_VIDEO_ROTATION_0,      //  不旋转
            HRTC_VIDEO_ROTATION_1,      //  逆时针旋转90度
            HRTC_VIDEO_ROTATION_2,      //  逆时针旋转180度
            HRTC_VIDEO_ROTATION_3,      //  逆时针旋转270度
        };


        enum HRTCVideoOrientation {
            HRTC_VIDEO_ORIENTATION__LANSCAPE,       /* < 横屏 */
            HRTC_VIDEO_ORIENTATION__PORTRAIT,       /* < 竖屏 */
        };
        enum HRTCOrientationMode {
            HRTC_ORIENTATION_MODE_PORTRAIT,   // 竖屏
            HRTC_ORIENTATION_MODE_LANDSCAPE,   // 横屏
            HRTC_ORIENTATION_MODE_SENSOR_LANDSCAPE, // 横屏重力感应
            HRTC_ORIENTATION_MODE_SENSOR // 重力感应
        };

        enum HRTCUserNotifyType {
            HRTC_USER_NOTIFY_TYPE_SINGLE,
            HRTC_USER_NOTIFY_TYPE_BATCH,
};

        enum HRTCDeviceType {
            HRTC_DEVTYPE_AUDIO_PLAYBACK,
            HRTC_DEVTYPE_AUDIO_RECORDING,
            HRTC_DEVTYPE_VIDEO_CAPTURE
        };

        enum HRTCDeviceState {
            HRTC_DEVICE_STATE_ACTIVE,
            HRTC_DEVICE_STATE_DISABLED,
            HRTC_DEVICE_STATE_UNPLUGGED
        };

        enum HRTCLeaveReason {
            HRTC_LEAVE_REASON_USER_LEAVE_ROOM = 0,      // 用户主动离开
            HRTC_LEAVE_REASON_SERVER_ERROR,             // 服务器异常
            HRTC_LEAVE_REASON_BREAKDOWN,                // sfu服务故障
            HRTC_LEAVE_REASON_SERVICE_UNREACHABLE,      // 服务不可达
            HRTC_LEAVE_REASON_INTERNAL_ERROR,           // 内部错误
            HRTC_LEAVE_REASON_KICKED_OFF,               // 被踢
            HRTC_LEAVE_REASON_SIGNATURE_EXPIRED,        // 签名过期
            HRTC_LEAVE_REASON_RECONNECT_FAILED,         // 重连超时
            HRTC_LEAVE_REASON_NETWORK_TEST,              // 网络探测结束，UI不用关注
            HRTC_LEAVE_REASON_USER_REMOVED,              // 用户移除
            HRTC_LEAVE_REASON_ROOM_DISMISSED,            // 房间解散
            HRTC_LEAVE_REASON_REGION_NOT_COVERED
        };

        enum HRTCRejoinReason {
            HRTC_REJOIN_REASON_UPDATE_TIMEOUT = 0,      // 心跳超时
        };

        enum HRTCVideoImageFormat {
            HRTC_VIDEO_IMAGE_FORMAT_YUV420P = 100,
            HRTC_VIDEO_IMAGE_FORMAT_YV12 = 101,
            HRTC_VIDEO_IMAGE_FORMAT_YUY2 = 102,
            HRTC_VIDEO_IMAGE_FORMAT_UYVY = 103,
            HRTC_VIDEO_IMAGE_FORMAT_NV12 = 104,
            HRTC_VIDEO_IMAGE_FORMAT_NV21 = 105,
            HRTC_VIDEO_IMAGE_FORMAT_ARGB = 200,
            HRTC_VIDEO_IMAGE_FORMAT_RGB24 = 201,
            HRTC_VIDEO_IMAGE_FORMAT_RGB565 = 202,
            HRTC_VIDEO_IMAGE_FORMAT_BGRA_MAC = 203,
            HRTC_VIDEO_IMAGE_FORMAT_ARGB4444 = 204,
            HRTC_VIDEO_IMAGE_FORMAT_ARGB1555 = 205,
            HRTC_VIDEO_IMAGE_FORMAT_RGBA = 206, // [RR2021021800621] support rgba
            HRTC_VIDEO_IMAGE_FORMAT_BGRA = 207,
            
            HRTC_VIDEO_IMAGE_FORMAT_JPEG = 300,
            
            HRTC_VIDEO_IMAGE_FORMAT_TEXTURE_OES = 400,
            HRTC_VIDEO_IMAGE_FORMAT_TEXTURE_2D = 401,
            
            HRTC_VIDEO_IMAGE_FORMAT_UNKNOWN = 999,
        };

        enum HRTCVideoImageBufferType {
            HRTC_VIDEO_IMAGE_BUFFER_BYTE_ARRAY,
            HRTC_VIDEO_IMAGE_BUFFER_TEXTURE
        };

        enum HRTCAudioFrameType {
            HRTC_AUDIO_FRAME_TYPE_PCM16
        };

        enum HRTCScreenCaptureIconType {
            HRTC_SCREENCAPTURE_SMALL_ICON,
            HRTC_SCREENCAPTURE_BIG_ICON
        };

        enum HRTCRemoteAudioStreamState {
            HRTC_REMOTE_AUDIO_STATE_STOPPED,
            HRTC_REMOTE_AUDIO_STATE_STARTING
        };

        enum HRTCRemoteAudioStreamStateReason {
            HRTC_REMOTE_AUDIO_REASON_REMOTE_OFFLINE,
            HRTC_REMOTE_AUDIO_REASON_REMOTE_MUTED,
            HRTC_REMOTE_AUDIO_REASON_REMOTE_UNMUTED
        };

        enum HRTCRemoteVideoStreamState {
            HRTC_REMOTE_VIDEO_STATE_STOPPED,
            HRTC_REMOTE_VIDEO_STATE_STARTING
        };

        enum HRTCRemoteVideoStreamStateReason {
            HRTC_REMOTE_VIDEO_REASON_REMOTE_OFFLINE,
            HRTC_REMOTE_VIDEO_REASON_REMOTE_MUTED,
            HRTC_REMOTE_VIDEO_REASON_REMOTE_UNMUTED,
            HRTC_REMOTE_VIDEO_REASON_LOCAL_MUTED,
            HRTC_REMOTE_VIDEO_REASON_LOCAL_UNMUTED
        };

        enum HRTCLocalAudioStreamState {
            HRTC_LOCAL_AUDIO_STATE_STOPPED,
            HRTC_LOCAL_AUDIO_STATE_RECORDING,
            HRTC_LOCAL_AUDIO_STATE_FAILED
        };

        enum HRTCLocalAudioStreamStateReason {
            HRTC_LOCAL_AUDIO_REASON_ERROR_OK,
            HRTC_LOCAL_AUDIO_REASON_ERROR_FAILURE,
            HRTC_LOCAL_AUDIO_REASON_ERROR_RECORD_FAILURE,
            HRTC_LOCAL_AUDIO_REASON_ERROR_STOP_FAILURE,
            HRTC_LOCAL_AUDIO_REASON_ERROR_ACCESS_DENIED, // new add in 1.10
            HRTC_LOCAL_AUDIO_REASON_ERROR_ON_EXCLUSIVE_MODE,
            HRTC_LOCAL_AUDIO_REASON_ERROR_ENDPOINT_CREATE_FAILED,
            HRTC_LOCAL_AUDIO_REASON_ERROR_MMSYSERR_INVALPARAM,
            HRTC_LOCAL_AUDIO_REASON_ERROR_MMSYSERR_NODRIVER,
            HRTC_LOCAL_AUDIO_REASON_ERROR_AUDIO_SERVER_NOT_RUNNING,
            HRTC_LOCAL_AUDIO_REASON_ERROR_NO_DEVICE,
            HRTC_LOCAL_AUDIO_REASON_ERROR_RESTART_FAILED
        };

        enum HRTCLocalVideoStreamState {
            HRTC_LOCAL_VIDEO_STATE_STOPPED,
            HRTC_LOCAL_VIDEO_STATE_CAPTURING,
            HRTC_LOCAL_VIDEO_STATE_FAILED
        };

        enum HRTCLocalVideoStreamStateReason {
            HRTC_LOCAL_VIDEO_REASON_ERROR_OK,
            HRTC_LOCAL_VIDEO_REASON_ERROR_FAILURE,
            HRTC_LOCAL_VIDEO_REASON_ERROR_CAPTURE_FAILURE,
            HRTC_LOCAL_VIDEO_REASON_ERROR_STOP_FAILURE,
            HRTC_LOCAL_VIDEO_REASON_ERROR_CAPTURE_DEVICE_NO_PERMISSION, // new add in 1.10
            HRTC_LOCAL_VIDEO_REASON_ERROR_CAPTURE_DEVICE_BUSY,
            HRTC_LOCAL_VIDEO_REASON_ERROR_CAPTURE_APP_IN_BACKGROUND,
            HRTC_LOCAL_VIDEO_REASON_ERROR_CAPTURE_OPEN_CAMERA_FAILED,
            HRTC_LOCAL_VIDEO_REASON_ERROR_CAPTURE_MULTIPLE_FOREGROUND_APP,
            HRTC_LOCAL_VIDEO_REASON_ERROR_CAPTURE_DEVICE_DISCONNECTED
        };

        enum HRTCVideoMirrorType {
            HRTC_VIDEO_MIRROR_TYPE_AUTO = 0, // SDK 决定镜像方式：前置摄像头镜像，后置摄像头不镜像
            HRTC_VIDEO_MIRROR_TYPE_ENABLE,   // 前置摄像头和后置摄像头都镜像
            HRTC_VIDEO_MIRROR_TYPE_DISABLE   // 前置摄像头和后置摄像头都不镜像
        };

        enum HRTCMediaDirection {
            HRTC_MEDIA_LOCAL = 0,
            HRTC_MEDIA_REMOTE
        };

        enum HRTCNetworkTestState {
            HRTC_NETWORK_TEST_OK = 0,
            HRTC_NETWORK_TEST_FAIL // 后续补充出错场景。
        };

        enum HRTCNetworkQualityLevel {
            HRTC_NETWORK_QUALITY_UNKNOWN = 0,
            HRTC_NETWORK_QUALITY_EXCELLENT,
            HRTC_NETWORK_QUALITY_GOOD,
            HRTC_NETWORK_QUALITY_POOR,
            HRTC_NETWORK_QUALITY_BAD,
            HRTC_NETWORK_QUALITY_VBAD
        };

        enum HRTCVideoStreamType {
            HRTC_VIDEO_STREAM_TYPE_BIG,
            HRTC_VIDEO_STREAM_TYPE_SMALL
        };

        enum HRTCRemoteAudioMode {
            HRTC_REMOTE_AUDIO_TOPN_OF_ALL = 0,
            HRTC_REMOTE_AUDIO_SUBSCRIBED = 1,
            HRTC_REMOTE_AUDIO_TOP_THREE = 2
        };

        enum HRTCVideoEncodeResolutionMode {
            HRTC_VIDEO_ENCODE_RESOLUTION_MODE_NONE,
            HRTC_VIDEO_ENCODE_RESOLUTION_MODE_CONST_RATIO
        };

        enum HRTCNetWorkState {
            HRTC_UNREACHABLE,
            HRTC_WIFI,
            HRTC_WWLAN
        };

        enum HRTCAudioRoute {
            HRTC_AUDIO_ROUTE_SPEAKER,
            HRTC_AUDIO_ROUTE_RECEIVER,
            HRTC_AUDIO_ROUTE_HEADSET,
            HRTC_AUDIO_ROUTE_BLUETOOTH
        };

        enum HRTCAudioFileState {
            HRTC_AUDIO_FILE_OPEN_COMPLETED,
            HRTC_AUDIO_FILE_OPENING,
            HRTC_AUDIO_FILE_IDLE,
            HRTC_AUDIO_FILE_PLAYING,
            HRTC_AUDIO_FILE_PLAY_COMPLETED,
            HRTC_AUDIO_FILE_PAUSED,
            HRTC_AUDIO_FILE_STOPPED,
            HRTC_AUDIO_FILE_FAILED,
            HRTC_AUDIO_FILE_POSITION_UPDATE,
            HRTC_AUDIO_FILE_STATE_UNKNOWN
        };

        enum HRTCAudioFileReason {
            HRTC_AUDIO_FILE_REASON_NONE,
            HRTC_AUDIO_FILE_REASON_URL_NOT_FOUND = 1,
            HRTC_AUDIO_FILE_REASON_CODEC_NOT_SUPPORTED,
            HRTC_AUDIO_FILE_REASON_INVALID_ARGUMENTS,
            HRTC_AUDIO_FILE_REASON_SRC_BUFFER_UNDERFLOW,
            HRTC_AUDIO_FILE_REASON_INTERNAL,
            HRTC_AUDIO_FILE_REASON_INVALID_STATE,
            HRTC_AUDIO_FILE_REASON_NO_RESOURCE,
            HRTC_AUDIO_FILE_REASON_OBJ_NOT_INITIALIZED,
            HRTC_AUDIO_FILE_REASON_INVALID_CONNECTION_STATE,
            HRTC_AUDIO_FILE_REASON_UNKNOWN_STREAM_TYPE,
            HRTC_AUDIO_FILE_REASON_VIDEO_RENDER_FAILED,
            HRTC_AUDIO_FILE_REASON_INVALID_MEDIA_SOURCE,
            HRTC_AUDIO_FILE_REASON_UNKNOWN
        };

        enum HRTCAreaCode {
            HRTC_AREA_CODE_GLOB = 0,    // 全球
            HRTC_AREA_CODE_CN,          // 中国
            HRTC_AREA_CODE_NA,          // 中北美
            HRTC_AREA_CODE_SA,          // 拉美
            HRTC_AREA_CODE_EU,          // 欧洲
            HRTC_AREA_CODE_SEA,         // 东南亚
            HRTC_AREA_CODE_AF,          // 非洲
            HRTC_AREA_CODE_AS,          // 亚洲
        };

        enum HRTCGSensorMode {
            HRTC_GSensorModeDisable, // 重力感应不使能
            HRTC_GSensorModeUIAutoLayout // 重力感应
        };

        enum HRTCInterfaceIdType {
            HRTC_IID_INFORMAL_INTERFACE_MANAGER = 1,
        };

        enum HRTCVideoAbility {
            HRTC_VIDEO_ABILITY_NONE = 0,    // 无能力支持
            HRTC_VIDEO_ABILITY_CPU  = 1,    // 支持CPU能力
            HRTC_VIDEO_ABILITY_GPU  = 2,    // 支持GPU能力
            HRTC_VIDEO_ABILITY_NPU  = 4,    // 支持NPU能力
            HRTC_VIDEO_ABILITY_ALL  = 255,  // 支持所有能力
        };

        enum HRTCAudioQueModel {
            HRTC_REMOTE_AUDIO_VQE_AUTO = 1,            // 自适应模型
            HRTC_REMOTE_AUDIO_VQE_NORMAL,            // 个人电脑普通模式
            HRTC_REMOTE_AUDIO_VQE_LOUDSPEAKER,        // 支持调音台等扩音设备回声削波模式
            HRTC_REMOTE_AUDIO_VQE_BOARD,            // 电子白板模式
        };

        enum HMMRLocalWindowType {
            HMMR_LOCAL_WINDOW_MAIN, /* 原本地窗口 */
            HMMR_LOCAL_WINDOW_PREVIEW /* 预览窗口 */
        };

        struct HRTCLogInfo {
            HRTCLogLevel level;
            const char* path;
        };

        struct HRTCUserInfo {
            HRTCRoleType role;
            const char* userId;  /* max len of userId is HRTC_MAX_USERID_LEN */
            const char* userName; /* max len of userName is HRTC_MAX_USERNAME_LEN */
            const char* signature;
            long long ctime;
            const char* optionInfo;
        };

        /** Device information
        */
        struct HRTCDeviceInfo {
            char deviceName[HRTCConstant::HRTC_MAX_DEVICE_NAME_LEN + 1];
            char deviceId[HRTCConstant::HRTC_MAX_DEVICE_ID_LEN + 1];
        };

        struct HRTCStatsInfo {
            long long mildlyFrozenCounts;
            long long severelyFrozenCounts;
            long long totalMildlyFrozenTime;
            long long totalSeverelyFrozenTime;
            long long totalActiveTime;
        };

        struct HRTCVideoRemoteView {
            void* view;                                     /* 窗口句柄 */
            HRTCStreamType streamType;                      /* 流模式 */
            const char* userId;
            int disableAdjustRes;
            HRTCStreamType minResolution;                   /* 自适应场景下，建议的最低选择档位 */
        };

        struct HRTCVideoEncParam {
            HRTCStreamType streamType;
            int width;
            int height;
            int frameRate;
            int minFrameRate;
            int bitrate;
            int minBitrate;
            bool disableAdjustRes;  // 表示上行流是否自适应
        };

        struct HRTCCaptureVideoStats {
            int frameRate; // 实际采集到的帧率
        };

        struct HRTCLocalVideoStats {
            int width;
            int height;
            int bitRate;
            int frameRate;
            int packetLoss;
            int delay;
            int jitter;
            long long bytes;
            int sendFrameRate;
            char codecName[HRTCConstant::HRTC_MAX_CODEC_NAME_LEN + 1];
        };

        struct HRTCRemoteVideoStats {
            char userId[HRTCConstant::HRTC_MAX_USERID_LEN + 1];
            int width;
            int height;
            int buffered;
            int bitRate;
            int frameRate;
            int packetLoss;
            int delay;
            int jitter;
            long long bytes;
            int rendererOutputFrameRate;
            int totalFrozenTime;
            int frozenRate;
            char codecName[HRTCConstant::HRTC_MAX_CODEC_NAME_LEN + 1];
        };

        struct HRTCLocalAudioStats {
            int sampleRate;
            int channels;
            int sendVEL;
            int bitRate;
            int packetLoss;
            int delay;
            int jitter;
            long long bytes;
        };

        struct HRTCRemoteAudioStats {
            char userId[HRTCConstant::HRTC_MAX_USERID_LEN + 1];
            int sampleRate;
            int channels;
            int recvVEL;
            int bitRate;
            int packetLoss;
            int delay;
            int jitter;
            long long bytes;
            int totalFrozenTime;
            int frozenRate;
        };

        struct HRTCConnectInfo {
            char roomId[HRTCConstant::HRTC_MAX_ROOMID_LEN + 1];
            HRTCRoleType role;
        };

        struct HRTCImageBufferFormat {
            HRTCVideoImageFormat format;
            HRTCVideoImageBufferType bufferType;
            HRTCImageBufferFormat(HRTCVideoImageFormat f = HRTC_VIDEO_IMAGE_FORMAT_YUV420P, HRTCVideoImageBufferType t = HRTC_VIDEO_IMAGE_BUFFER_BYTE_ARRAY){
                format = f;
                bufferType = t;
            }
        };

        struct HRTCRotationParam {
            int captureIndex;           // 0：前置摄像头，1：后置摄像头
            int captureRotation;        // 0: 不旋转，1逆时针旋转90度，2逆时针旋转180度，3逆时针旋转270度
            int wndType;                // remain param，set 1 now.
            int displayRotation;        // 0: 不旋转，1逆时针旋转90度，2逆时针旋转180度，3逆时针旋转270度
        };


        struct HRTCVolumeInfo {
            char userId[HRTCConstant::HRTC_MAX_USERID_LEN + 1];
            unsigned int volume;
        };

        struct HRTCVideoFrame {
            HRTCVideoImageFormat format;
            unsigned int width;
            unsigned int height;
            unsigned char* data;
            unsigned int dataLen;
            unsigned int originWidth;
            unsigned int originHeight;
            unsigned int rotation;
        };

        struct HRTCAudioFrame {
            HRTCAudioFrameType frameType;
            int sampleRate;
            int samplesPerSec;
            int bytesPerSample;
            int channels;
            unsigned char* data;
            unsigned int dataLen;
        };

       struct HRTCScreenCaptureSourceInfo {
            void* sourceId;  // 采集源ID，如果是屏幕共享 主屏：字符串"1" , 当前只支持主屏采集， 如果是窗口共享则为窗口句柄(HWND)
            char sourceName[HRTCConstant::HRTC_MAX_SOURCE_NAME_LEN + 1]; // 采集源名称，如果是屏幕共享 主屏："Monitor_1",当前只支持主屏， 如果是窗口共享则为窗口对应名称
            HRTCScreenCaptureType type; // 共享类型
            void* icon; // type是HRTC_WINDOW_CAPTURE 才有效, 返回类型是windows资源类型HICON
       };

       struct HRTCRect {
           unsigned int left;
           unsigned int top;
           unsigned int right;
           unsigned int bottom;
       };

        struct HRTCSrceenCaptureOptionalInfo {
            bool disableCaptureMouse;  // 是否禁止鼠标采集，默认false 采集鼠标
            HRTCRect rect;             // 程序共享下支持区域共享，宽不能超过1920 高度不能超过1080， 最小宽不能小于320，高度不能小于240，共享前设置，区域要求是固定的
        };

        struct HRTCNetworkTestConfig {
            char* userId;          // 必选
            char* roomId;          // 必选
            char* signature;       // 开启签名鉴权必选，否则可选
            long long ctime;       // 开启签名鉴权必选，否则可选
            int enableUplinkTest;
            int enableDownlinkTest;
            unsigned int expectedUplinkBitrate;  // 用户期望的最高发送码率，单位为 bps，范围为0 以及 [100000, 5000000]，设为0表示由SDK指定最高码率
            unsigned int expectedDownlinkBitrate;  // 用户期望的最高接收码率，单位为 bps，范围为0 以及 [100000, 5000000]，设为0表示由SDK指定最高码率
        };

        struct HRTCNetworkTestResultParam {
            int bitRate;
            int packetLoss;
            int delay;
            int jitter;
        };

        struct HRTCNetworkTestResult {
            HRTCNetworkTestState testState;
            HRTCNetworkTestResultParam uplinkResult;
            HRTCNetworkTestResultParam downlinkResult;
        };

        struct HRTCSubStreamEncParam {
            int frameRate;
            int width;
            int height;
            int bitrate;
            HRTCSubStreamEncParam()
                : frameRate(0)
                , width(0)
                , height(0)
                , bitrate(0)
            {

            }
        };

        struct HRTCQualityInfo {
            char userId[HRTCConstant::HRTC_MAX_USERID_LEN + 1];
            int width;
            int height;
            HRTCNetworkQualityLevel level;
        };

        struct HRTCFrameBuffer {
            unsigned char* buffer;
            unsigned int dataSize;
            unsigned int bufferSize;
        };

        struct HRTCStreamPacketInfo {
            char userId[HRTCConstant::HRTC_MAX_USERID_LEN + 1];
            unsigned long long recvPacketCount;
            bool isAux;
        };

        struct HRTCEngineConfig {
            const char *domain;
            const char *appId;
            void *context;
            void *jvm;
            HRTCAreaCode areaCode;
            HRTCEngineConfig()
                :domain(nullptr),
                appId(nullptr),
                context(nullptr),
                jvm(nullptr),
                areaCode(HRTC_AREA_CODE_GLOB)
                {}
        };
        typedef HRTCEngineConfig HRtcEngineInfo;

        struct HRTCSetupRemoteViewResult {
            char userId[HRTCConstant::HRTC_MAX_USERID_LEN + 1];
            unsigned char result;  // 0是成功， 1是失败
            int code;
            char reason[HRTCConstant::HRTC_MAX_WATCH_RESULT_REASON_LEN + 1];
        };

        struct HRTCOnStats {
            double cpuAppUsage;
            double cpuTotalUsage;
            unsigned int memoryAppUsageInKbytes;
            double memoryAppUsageRatio;
            double memoryTotalUsageRatio;
            int gatewayRtt;
            unsigned long long sendBytes;
            unsigned long long sendVideoBytes;
            unsigned long long sendAudioBytes;
            unsigned long long receiveBytes;
            unsigned long long receiveVideoBytes;
            unsigned long long receiveAudioBytes;
            unsigned int sendBitRate;
            unsigned int sendVideoBitRate;
            unsigned int sendAudioBitRate;
            unsigned int receiveBitRate;
            unsigned int receiveVideoBitRate;
            unsigned int receiveAudioBitRate;
            unsigned int sendLossRate;
            unsigned int receiveLossRate;
            unsigned int lastmileDelay;
        };

        struct HRTCMediaOptions {
            bool autoSubscribeAudio; // 自动订阅远端用户音频流
            bool autoSubscribeVideo; // 自动订阅远端用户视频流
            HRTCMediaType mediaType;

            HRTCMediaOptions() {
                autoSubscribeAudio = true;
                autoSubscribeVideo = false;
                mediaType = HRTC_MEDIA_TYPE_VIDEO;
            }
        };
        /* 虚拟背景模式相关信息 */
        struct HRTCPluginVBModeInfo {
            unsigned int mode;              // 虚拟背景模式; 0: 无; 1: 虚化; 2: 背景替换
            char picPath[HRTCConstant::HRTC_MAX_LOG_PATH_LEN + 1];            // 背景替换的背景图片路径
            unsigned int result;            // 操作结果
        };

        /* 虚拟背景模型相关信息 */
        struct HRTCPluginVBMouldInfo {
            unsigned int result;              // 模型加载结果
            unsigned long long loadStartTimer;      // 模型加载时间
            unsigned long long loadEndTimer;        // 模型结束时间
            char moudlPath[HRTCConstant::HRTC_MAX_LOG_PATH_LEN + 1];            // 模型路径
        };
        struct HRTCPluginTrackInfo {
            bool hasPluginVBModeInfo;
            HRTCPluginVBModeInfo pluginVBModeInfo;
            bool hasPluginVBMouldInfo;
            HRTCPluginVBMouldInfo pluginVBMouldInfo;
        };
    }
}
#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif
