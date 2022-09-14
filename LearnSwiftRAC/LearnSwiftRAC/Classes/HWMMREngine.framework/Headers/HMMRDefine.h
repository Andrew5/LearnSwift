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
            HRTC_ERR_CODE_INITIALIZING = 90000010,      // ��ʼ����
            HRTC_ERR_CODE_UN_INITIALIZING,   // ȥ��ʼ����
            HRTC_ERR_CODE_LOG_UPLOADING,     // ������־�ϴ���
            HRTC_ERR_CODE_MEDIA_PORT_ERROR,            /* ��ȡý��˿�ʧ�� */
            HRTC_ERR_CODE_WATCH_VIEW_TOO_MUCH,       /* ѡ�����ڳ�������� */
            HRTC_ERR_CODE_MEDIA_CMP_ERR = 90000015,       /* ý��Э��ʧ�� */
            HRTC_ERR_CODE_SERVER_NO_RESPONSE,   /* ������û����Ӧ */
            HRTC_ERR_CODE_USER_ROLE_CHANGE_FAIL,   /* ��ɫ�л�ʧ�� */
            HRTC_ERR_CODE_JOIN_ROOM_FAIL,  /* ���뷿��ʧ�� */
            HRTC_ERR_CODE_JOIN_ROOM_STATUS_BUSY,   /* �ǿ���״̬ */
            HRTC_ERR_CODE_JOIN_ROOM_SERVER_ERROR = 90000020,   /* ���뷿��ʧ�ܣ��������쳣 */
            HRTC_ERR_CODE_JOIN_ROOM_SERVICE_UNREACHABLE,  /* ���뷿��ʧ�ܣ����񲻿ɴ� */
            HRTC_ERR_CODE_JOIN_ROOM_AUTH_FAIL,  /* ���뷿��ʧ�ܣ���Ȩʧ�� */
            HRTC_ERR_CODE_JOIN_ROOM_AUTH_RETRY,  /* ���뷿��ʧ�ܣ���Ȩ���� */
            HRTC_ERR_CODE_JOIN_ROOM_AUTH_CLOCK_SYNC, /* ���뷿��ʧ�ܣ�ʱ��ͬ�� */
            HRTC_ERR_CODE_JOIN_ROOM_URL_NOT_RIGHT = 90000025, /* ���뷿��ʧ�ܣ�url���� */
            HRTC_ERR_CODE_KICKED_OFF,        /* ���� */
            HRTC_ERR_CODE_SCREEN_CAPTURE_FAIL,   /* ����ʧ�� */
            HRTC_ERR_CODE_EXT_MEDIA_OUTPUT, /* ��ǰΪ�ⲿý�����ģʽ�����øò���*/
            HRTC_ERR_CODE_RECONNECT_FAILED, /* ����ʧ��*/
            HRTC_ERR_CODE_SERVER_BREAK_DOWN = 90000030, /* ������崻�*/
            HRTC_ERR_CODE_SIGNATURE_EXPIRED, /* ǩ���ѹ���*/
            HRTC_ERR_CODE_SET_REMOTE_RENDER_MODE_FAIL,  /* ����Զ�˴���ģʽʧ��*/
            HRTC_ERR_CODE_SET_REMOTE_AUDIO_MUTE_FAIL,    /* ���Ļ�ȡ��������Ƶʧ�� */
            HRTC_ERR_CODE_CONNECT_OTHER_ROOM_FAIL,    /* �緿ʧ�� */
            HRTC_ERR_CODE_DISCONNECT_OTHER_ROOM_FAIL = 90000035,  /* �����緿ʧ�� */
            HRTC_ERR_CODE_SET_USEROLE_NOT_ALLOWED,   /* �������ɫ�л� */
            HRTC_ERR_CODE_EXT_MEDIA_CAPTURE_INPUT, /* ��ǰΪ�������ɼ�ģʽ�����øò��� */
            HRTC_ERR_CODE_SET_EXTAUDIO_CAPTURE_FAIL, /* ���õ�������Ƶ�ɼ�ʧ�� */
            HRTC_ERR_CODE_SET_EXTVIDEO_CAPTURE_FAIL, /* ���õ�������Ƶ�ɼ�ʧ�� */
            HRTC_ERR_CODE_SET_SHARE_COMPUTER_SOUND_FAIL = 90000040, /* ���ù�����������ʧ�� */
            HRTC_ERR_CODE_SET_LOCAL_AUDIO_MUTE_FAIL, /* ��ͣ������Ƶ��ʧ�� */
            HRTC_ERR_CODE_SET_LOCAL_VIDEO_MUTE_FAIL, /* ��ͣ������Ƶ��ʧ�� */
            HRTC_ERR_CODE_USER_REMOVED,  /* �û����Ƴ� */
            HRTC_ERR_CODE_ROOM_DISMISSED, /* ���䱻��ɢ */
            HRTC_ERR_CODE_SETUP_REMOTE_VIEW_FAIL,    /* ����Զ��Viewʧ�� */
            HRTC_ERR_CODE_REGION_NOT_COVERED = 90000048,
            HRTC_ERR_CODE_NOT_SUPPORT = 90000050,    /* ��ƽ̨��֧�ִ˹��� */
            HRTC_ERR_CODE_REPEATE_JOIN_ROOM,          /*�ظ����뷿��*/
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
            HRTC_VIDEO_DISPLAY_MODE_FIT,  /* ���ȱ�֤��Ƶ����ȫ����ʾ����Ƶ�ߴ�ȱ����ţ�ֱ����Ƶ���ڵ�һ�����Ӵ��߿���롣�����Ƶ��������ʾ���ڲ�ͬ���Ӵ���δ�����������򽫱�Ϳ�� */
            HRTC_VIDEO_DISPLAY_MODE_HIDDEN, /* ���ȱ�֤�Ӵ�����������Ƶ�ߴ�ȱ����ţ�ֱ�������Ӵ�����Ƶ�����������Ƶ��������ʾ���ڲ�ͬ���������Ƶ�����ص� */
            HRTC_VIDEO_DISPLAY_MODE_FILL,   /* ��Ƶ�ߴ�������ź������Գ�����ʾ�Ӵ� */
            HRTC_VIDEO_DISPLAY_ADAPT      /* ����Ӧģʽ����ʾͼ����豸�ĺ�������ͬʹ�úڱ�ģʽ����������ͬʹ�òü�ģʽ,ֻ֧��Android��iOSƽ̨  */
        };

        enum HRTCMediaType {
            HRTC_MEDIA_TYPE_AUDIO,
            HRTC_MEDIA_TYPE_VIDEO
        };

        enum HRTCRoleType {
            HRTC_ROLE_TYPE_JOINER, /* < ˫������ɫ�������������� */
            HRTC_ROLE_TYPE_PUBLISER, /* < ��������ɫ������㲥 */
            HRTC_ROLE_TYPE_PLAYER /* < ��������ɫ��������� */
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
            HRTC_CONN_DISCONNECTED = 0, // ���ӶϿ�
            HRTC_CONN_CONNECTING,       // ��������������
            HRTC_CONN_CONNECTED,        // �������ӳɹ�
            HRTC_CONN_RECONNECTING,     // ���½�������������
            HRTC_CONN_FAILED            // ��������ʧ��
        };

        enum HRTCConnChangeReason {
            HRTC_CONN_CHANGED_CONNECTING = 0,           // ��������
            HRTC_CONN_CHANGED_JOIN_SUCCESS,             // ���뷿��ɹ�
            HRTC_CONN_CHANGED_RECONNECTING,             // ������
            HRTC_CONN_CHANGED_RECONNECT_SUCCESS,        // �����ɹ�
            HRTC_CONN_CHANGED_JOIN_FAILED,              // ���뷿��ʧ��
            HRTC_CONN_CHANGED_RECONNCET_FAILED,         // ����ʧ��
            HRTC_CONN_CHANGED_INTERRUPTED,              // �����ж�
            HRTC_CONN_CHANGED_KEEP_ALIVE_TIMEOUT,       // ������ʱ
            HRTC_CONN_CHANGED_LEAVE_ROOM,               // �����뿪����
            HRTC_CONN_CHANGED_JOIN_ROOM_SERVER_ERROR,        // �������쳣
            HRTC_CONN_CHANGED_SFU_BREAKDOWN,            // sfu�������
            HRTC_CONN_CHANGED_JOIN_ROOM_AUTH_FAILED,              // ��Ȩʧ��,appid����ǩ������
            HRTC_CONN_CHANGED_JOIN_ROOM_AUTH_RETRY,               // ��Ȩ����
            HRTC_CONN_CHANGED_JOIN_ROOM_AUTH_CLOCK_SYNC,          // ʱ��ͬ��
            HRTC_CONN_CHANGED_JOIN_ROOM_URL_NOT_RIGHT,            // URL���� 400
            HRTC_CONN_CHANGED_JOIN_ROOM_SERVICE_UNREACHABLE,      // ���񲻿ɴ�503
            HRTC_CONN_CHANGED_INTERNAL_ERROR,           // �ڲ�����
            HRTC_CONN_CHANGED_KICKED_OFF,               // ����
            HRTC_CONN_CHANGED_SIGNATURE_EXPIRED,         // ǩ������
            HRTC_CONN_REASON_USER_REMOVED,              // �û��Ƴ�
            HRTC_CONN_REASON_ROOM_DISMISSED,            // �����ɢ
            HRTC_CONN_CHANGED_REGION_NOT_COVERED
        };

        enum HRTCMediaConnStateTypes {
            HRTC_MEDIA_CONN_CONNECTED,  // ���ӳɹ�
            HRTC_MEDIA_CONN_FAILED      // ����ʧ��
        };

        enum HRTCMediaConnChangeReason {
            HRTC_MEDIA_CONN_CHANGED_CONNECTED,  // ���ӳɹ�
            HRTC_MEDIA_CONN_CHANGED_NAT_FAILED  // NATδ��ͨ
        };

        enum HRTCSpeakerModel {
            HRTC_SPEAKER_MODEL_EARPIECE,    //  ����
            HRTC_SPEAKER_MODEL_SPEAKER      //  ������
        };

        enum HRTCVideoRotation {
            HRTC_VIDEO_ROTATION_0,      //  ����ת
            HRTC_VIDEO_ROTATION_1,      //  ��ʱ����ת90��
            HRTC_VIDEO_ROTATION_2,      //  ��ʱ����ת180��
            HRTC_VIDEO_ROTATION_3,      //  ��ʱ����ת270��
        };


        enum HRTCVideoOrientation {
            HRTC_VIDEO_ORIENTATION__LANSCAPE,       /* < ���� */
            HRTC_VIDEO_ORIENTATION__PORTRAIT,       /* < ���� */
        };
        enum HRTCOrientationMode {
            HRTC_ORIENTATION_MODE_PORTRAIT,   // ����
            HRTC_ORIENTATION_MODE_LANDSCAPE,   // ����
            HRTC_ORIENTATION_MODE_SENSOR_LANDSCAPE, // ����������Ӧ
            HRTC_ORIENTATION_MODE_SENSOR // ������Ӧ
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
            HRTC_LEAVE_REASON_USER_LEAVE_ROOM = 0,      // �û������뿪
            HRTC_LEAVE_REASON_SERVER_ERROR,             // �������쳣
            HRTC_LEAVE_REASON_BREAKDOWN,                // sfu�������
            HRTC_LEAVE_REASON_SERVICE_UNREACHABLE,      // ���񲻿ɴ�
            HRTC_LEAVE_REASON_INTERNAL_ERROR,           // �ڲ�����
            HRTC_LEAVE_REASON_KICKED_OFF,               // ����
            HRTC_LEAVE_REASON_SIGNATURE_EXPIRED,        // ǩ������
            HRTC_LEAVE_REASON_RECONNECT_FAILED,         // ������ʱ
            HRTC_LEAVE_REASON_NETWORK_TEST,              // ����̽�������UI���ù�ע
            HRTC_LEAVE_REASON_USER_REMOVED,              // �û��Ƴ�
            HRTC_LEAVE_REASON_ROOM_DISMISSED,            // �����ɢ
            HRTC_LEAVE_REASON_REGION_NOT_COVERED
        };

        enum HRTCRejoinReason {
            HRTC_REJOIN_REASON_UPDATE_TIMEOUT = 0,      // ������ʱ
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
            HRTC_VIDEO_MIRROR_TYPE_AUTO = 0, // SDK ��������ʽ��ǰ������ͷ���񣬺�������ͷ������
            HRTC_VIDEO_MIRROR_TYPE_ENABLE,   // ǰ������ͷ�ͺ�������ͷ������
            HRTC_VIDEO_MIRROR_TYPE_DISABLE   // ǰ������ͷ�ͺ�������ͷ��������
        };

        enum HRTCMediaDirection {
            HRTC_MEDIA_LOCAL = 0,
            HRTC_MEDIA_REMOTE
        };

        enum HRTCNetworkTestState {
            HRTC_NETWORK_TEST_OK = 0,
            HRTC_NETWORK_TEST_FAIL // ���������������
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
            HRTC_AREA_CODE_GLOB = 0,    // ȫ��
            HRTC_AREA_CODE_CN,          // �й�
            HRTC_AREA_CODE_NA,          // �б���
            HRTC_AREA_CODE_SA,          // ����
            HRTC_AREA_CODE_EU,          // ŷ��
            HRTC_AREA_CODE_SEA,         // ������
            HRTC_AREA_CODE_AF,          // ����
            HRTC_AREA_CODE_AS,          // ����
        };

        enum HRTCGSensorMode {
            HRTC_GSensorModeDisable, // ������Ӧ��ʹ��
            HRTC_GSensorModeUIAutoLayout // ������Ӧ
        };

        enum HRTCInterfaceIdType {
            HRTC_IID_INFORMAL_INTERFACE_MANAGER = 1,
        };

        enum HRTCVideoAbility {
            HRTC_VIDEO_ABILITY_NONE = 0,    // ������֧��
            HRTC_VIDEO_ABILITY_CPU  = 1,    // ֧��CPU����
            HRTC_VIDEO_ABILITY_GPU  = 2,    // ֧��GPU����
            HRTC_VIDEO_ABILITY_NPU  = 4,    // ֧��NPU����
            HRTC_VIDEO_ABILITY_ALL  = 255,  // ֧����������
        };

        enum HRTCAudioQueModel {
            HRTC_REMOTE_AUDIO_VQE_AUTO = 1,            // ����Ӧģ��
            HRTC_REMOTE_AUDIO_VQE_NORMAL,            // ���˵�����ͨģʽ
            HRTC_REMOTE_AUDIO_VQE_LOUDSPEAKER,        // ֧�ֵ���̨�������豸��������ģʽ
            HRTC_REMOTE_AUDIO_VQE_BOARD,            // ���Ӱװ�ģʽ
        };

        enum HMMRLocalWindowType {
            HMMR_LOCAL_WINDOW_MAIN, /* ԭ���ش��� */
            HMMR_LOCAL_WINDOW_PREVIEW /* Ԥ������ */
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
            void* view;                                     /* ���ھ�� */
            HRTCStreamType streamType;                      /* ��ģʽ */
            const char* userId;
            int disableAdjustRes;
            HRTCStreamType minResolution;                   /* ����Ӧ�����£���������ѡ��λ */
        };

        struct HRTCVideoEncParam {
            HRTCStreamType streamType;
            int width;
            int height;
            int frameRate;
            int minFrameRate;
            int bitrate;
            int minBitrate;
            bool disableAdjustRes;  // ��ʾ�������Ƿ�����Ӧ
        };

        struct HRTCCaptureVideoStats {
            int frameRate; // ʵ�ʲɼ�����֡��
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
            int captureIndex;           // 0��ǰ������ͷ��1����������ͷ
            int captureRotation;        // 0: ����ת��1��ʱ����ת90�ȣ�2��ʱ����ת180�ȣ�3��ʱ����ת270��
            int wndType;                // remain param��set 1 now.
            int displayRotation;        // 0: ����ת��1��ʱ����ת90�ȣ�2��ʱ����ת180�ȣ�3��ʱ����ת270��
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
            void* sourceId;  // �ɼ�ԴID���������Ļ���� �������ַ���"1" , ��ǰֻ֧�������ɼ��� ����Ǵ��ڹ�����Ϊ���ھ��(HWND)
            char sourceName[HRTCConstant::HRTC_MAX_SOURCE_NAME_LEN + 1]; // �ɼ�Դ���ƣ��������Ļ���� ������"Monitor_1",��ǰֻ֧�������� ����Ǵ��ڹ�����Ϊ���ڶ�Ӧ����
            HRTCScreenCaptureType type; // ��������
            void* icon; // type��HRTC_WINDOW_CAPTURE ����Ч, ����������windows��Դ����HICON
       };

       struct HRTCRect {
           unsigned int left;
           unsigned int top;
           unsigned int right;
           unsigned int bottom;
       };

        struct HRTCSrceenCaptureOptionalInfo {
            bool disableCaptureMouse;  // �Ƿ��ֹ���ɼ���Ĭ��false �ɼ����
            HRTCRect rect;             // ��������֧�����������ܳ���1920 �߶Ȳ��ܳ���1080�� ��С����С��320���߶Ȳ���С��240������ǰ���ã�����Ҫ���ǹ̶���
        };

        struct HRTCNetworkTestConfig {
            char* userId;          // ��ѡ
            char* roomId;          // ��ѡ
            char* signature;       // ����ǩ����Ȩ��ѡ�������ѡ
            long long ctime;       // ����ǩ����Ȩ��ѡ�������ѡ
            int enableUplinkTest;
            int enableDownlinkTest;
            unsigned int expectedUplinkBitrate;  // �û���������߷������ʣ���λΪ bps����ΧΪ0 �Լ� [100000, 5000000]����Ϊ0��ʾ��SDKָ���������
            unsigned int expectedDownlinkBitrate;  // �û���������߽������ʣ���λΪ bps����ΧΪ0 �Լ� [100000, 5000000]����Ϊ0��ʾ��SDKָ���������
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
            unsigned char result;  // 0�ǳɹ��� 1��ʧ��
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
            bool autoSubscribeAudio; // �Զ�����Զ���û���Ƶ��
            bool autoSubscribeVideo; // �Զ�����Զ���û���Ƶ��
            HRTCMediaType mediaType;

            HRTCMediaOptions() {
                autoSubscribeAudio = true;
                autoSubscribeVideo = false;
                mediaType = HRTC_MEDIA_TYPE_VIDEO;
            }
        };
        /* ���ⱳ��ģʽ�����Ϣ */
        struct HRTCPluginVBModeInfo {
            unsigned int mode;              // ���ⱳ��ģʽ; 0: ��; 1: �黯; 2: �����滻
            char picPath[HRTCConstant::HRTC_MAX_LOG_PATH_LEN + 1];            // �����滻�ı���ͼƬ·��
            unsigned int result;            // �������
        };

        /* ���ⱳ��ģ�������Ϣ */
        struct HRTCPluginVBMouldInfo {
            unsigned int result;              // ģ�ͼ��ؽ��
            unsigned long long loadStartTimer;      // ģ�ͼ���ʱ��
            unsigned long long loadEndTimer;        // ģ�ͽ���ʱ��
            char moudlPath[HRTCConstant::HRTC_MAX_LOG_PATH_LEN + 1];            // ģ��·��
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
