/**
 * @file HwmConfServiceDef.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */


#ifndef __HWM_PRIVATE_CONF_SERVICE_DEF_H__
#define __HWM_PRIVATE_CONF_SERVICE_DEF_H__

#import "HwmSdkCommonDef.h"
#import "HwmGlobalErrorCodeDef.h"
#import "HwmConfServiceDef.h"
#import "HwmLoginServiceDef.h"

BEGIN_HWM_SDK_NAMESPACE

/**
* [en]This enum is used to pair role type
* [cn]配对角色类型
* @ios:disable
*/
typedef enum tagPairRoleType
{
    HWM_CONF_PAIR_ROLE_SERVER = 0,
    HWM_CONF_PAIR_ROLE_CLIENT = 1
}PairRoleType;

/**
* [en]This enum is used to call pair reason type
* [cn]配对相关原因定义
* @ios:disable
*/
typedef enum tagCallPairReasonType
{
    HWM_CONF_CANCEL_PAIR_SOFT_TERMINAL_INITIATE,                      /**< [en]Indicates soft client initiate.
                                                                      <br>[cn]软终端发起 */
    HWM_CONF_CANCEL_PAIR_HARD_TERMINAL_INITIATE,                      /**< [en]Indicates hard client initiate.
                                                                      <br>[cn]硬终端发起 */
    HWM_CONF_CANCEL_PAIR_ABNORMAL_HEARTBEAT,                          /**< [en]Indicates abnormal heartbeat.
                                                                      <br>[cn]心跳异常   */
    HWM_CONF_CANCEL_PAIR_SEND_MAKE_PAIR_FAIL,                         /**< [en]Indicates sending "makepair" failed.
                                                                      <br>[cn]发送"makepair"失败  */
    HWM_CONF_CANCEL_PAIR_SEND_MAKE_PAIR_RESPONSE_FAIL,                /**< [en]Indicates sending "makepair_response" failed.
                                                                      <br>[cn]发送"makepair_response"失败  */
    HWM_CONF_CANCEL_PAIR_SOFT_TERMINAL_TIMER_ERROR,                   /**< [en]Indicates soft client timer error.
                                                                      <br>[cn]软终端定时器错误  */
    HWM_CONF_CANCEL_PAIR_PARSE_MAKE_PAIR_RESPONSE_FAIL,               /**< [en]Indicates parsing "makepair_response" info failed.
                                                                      <br>[cn]解析"makepair_response"info消息失败  */
    HWM_CONF_CANCEL_PAIR_SOFT_TERMINAL_SEND_NOTIFY_TO_UI_FAIL,        /**< [en]Indicates sending notify to UI failed.
                                                                      <br>[cn]软终端向UI发送消息失败  */
    HWM_CONF_CANCEL_PAIR_COMMAND_REQUEST_TIMEOUT,                     /**< [en]Indicates no receiving  command back when request time out.
                                                                      <br>[cn]请求超时未收到 响应命令  */
    HWM_CONF_CANCEL_PAIR_SEND_CANCEL_PAIR_FAIL,                       /**< [en]Indicates sending "cancelpair" failed.
                                                                      <br>[cn]发送"cancelpair"失败  */
    HWM_CONF_CANCEL_PAIR_HARD_TERMINAL_TIMER_ERROR,                   /**< [en]Indicates hard client timer error.
                                                                      <br>[cn]硬终端定时器错误  */
    HWM_CONF_CANCEL_PAIR_AUTH_FAIL,                                   /**< [en]Indicates authentication fail.
                                                                      <br>[cn]配对鉴权失败  */
    HWM_CONF_CANCEL_PAIR_USER_NUM_LIMITED,                            /**< [en]Indicates user number of paired limited.
                                                                      <br>[cn]配对用户数达到上限  */
    HWM_CONF_CANCEL_PAIR_PROHIBIT_PAIR,                               /**< [en]Indicates pair prohibited.
                                                                      <br>[cn]硬终端禁用配对  */
    HWM_CONF_CANCEL_PAIR_HARD_TERMINAL_NOT_PERMIT,                    /**< [en]Indicates hard terminal not allow pair.
                                                                      <br>[cn]硬终端拒绝配对  */
    HWM_CONF_CANCEL_PAIR_HARD_TERMINAL_SEND_NOTIFY_TO_UI_FAIL,        /**< [en]Indicates sending notify to UI failed.
                                                                      <br>[cn]硬终端向UI发送消息失败  */
    HWM_CONF_CANCEL_PAIR_SOFT_TERMINAL_SEND_SUBSCRIBE_FAIL,           /**< [en]Indicates soft client send subscribe failed.
                                                                      <br>[cn]软终端发送订阅会话状态消息失败  */
    HWM_CONF_CANCEL_PAIR_SOFT_TERMINAL_RECEIVE_SUBSCRIBE_RESULT_TIMEOUT, /**< [en]Indicates soft client receive subscribe result time out.
                                                                         <br>[cn]软终端接收订阅结果超时  */
    HWM_CONF_CANCEL_PAIR_SOFT_TERMINAL_SUBSCRIBE_RESULT_FAIL,            /**< [en]Indicates soft client subscribe failed.
                                                                         <br>[cn]软终端订阅会话状态失败  */
    HWM_CONF_CANCEL_PAIR_SOFT_TERMINAL_SEND_CONFERENCE_LINKAGE_FAIL,               /**< [en]Indicates soft client sending conference linkage failed.
                                                                                   <br>[cn]软终端发送会议联动消息失败  */
    HWM_CONF_CANCEL_PAIR_SOFT_TERMINAL_RECEIVE_CONFERENCE_LINKAGE_RESULT_TIMEOUT,  /**< [en]Indicates soft client receive conference linkage result time out.
                                                                                   <br>[cn]软终端接收会议联动结果超时  */
    HWM_CONF_CANCEL_PAIR_SOFT_TERMINAL_CONFERENCE_LINKAGE_FAIL,                    /**< [en]Indicates soft client conference linkage failed.
                                                                                   <br>[cn]软终端会议联动失败  */
    HWM_CONF_CANCEL_PAIR_BUTT = 0x1000
}CallPairReasonType;

/**
* [en]This struct is used to describe call pair parameter
* [cn]配对参数
* @ios:disable
*/
typedef struct tagCallPairParam
{
    HWM_CHAR deviceName[HWM_MAX_NAME_LEN + 1];             /**< [en]Indicates the display name.   [cn]硬终端设备名 */
    HWM_UINT32 heartbeatInterval;                          /**< [en]Indicates the heartbeat interval. Unit: second.   [cn]心跳间隔。单位: 秒。*/
    HWM_BOOL isSupportForce;                               /**< [en]Indicates is enable force. [cn]是否支持抢占 */
}CallPairParam;

/**
* [en]This struct is used to describe accpet call pair parameter
* [cn]接受配对参数
* @ios:disable
*/
typedef struct tagCallPairAcceptInfo
{
    HWM_INT64 pairId;                                  /**< [en]Indicates session id. [cn]配对会话ID */
    HWM_BOOL isPermit;                                  /**< [en]if accept pair. [cn]是否允许配对 */
    CallPairReasonType reasonCode;                   /**< [en]pair reason. [cn]配对相关原因 */
    CallPairParam pairParam;                         /**< [en]pair param   [cn]配对参数*/
}CallPairAcceptInfo;

/**
* [en]This struct is used to describe join pair info
* [cn]配对入会参数
* @ios:disable
*/
typedef struct tagPairConfInfo
{
    HWM_CHAR deviceName[HWM_MAX_NAME_LEN + 1];             /**< [en]Indicates the display name.   [cn]硬终端设备名 */
    HWM_UINT32 heartbeatInterval;                          /**< [en]Indicates the heartbeat interval. Unit: second.   [cn]心跳间隔。单位: 秒。*/
    HWM_BOOL isSupportForce;                               /**< [en]Indicates is enable force. [cn]是否支持抢占 */
}PairConfInfo;

/**
* [en]This structure is used to describe start ctd call param.
* [cn]ctd呼叫的参数
* @mobile:disable
*/
typedef struct tagStartCtdCallParam
{
    HWM_CHAR caller[HWM_MAX_NUMBER_LEN];            /**< [en]Indicates the caller number
                                                    [cn]主叫号码  */
    HWM_CHAR callee[HWM_MAX_NUMBER_LEN];            /**< [en]Indicates the callee number
                                                    [cn]被叫号码  */
}StartCtdCallParam;

/**
* [en]This struct is used to describe xxx.
* [cn]匿名会议 获取滑块结果信息
*/
typedef struct tagGetSliderResultInfo
{
    HWM_CHAR shadowImageName[HWM_MAX_FILE_PATH_LEN];   /**< [en]Indicates xxx.
                                                       [cn]背景大图片 */
    HWM_CHAR sliderImageName[HWM_MAX_FILE_PATH_LEN];   /**< [en]Indicates xxx.
                                                       [cn]滑块图片 */
    HWM_UINT32 pointY;                                 /**< [en]Indicates xxx.
                                                       [cn]滑块的y轴位置 */
}GetSliderResultInfo;

/**
* [en]History conf list info.
* [cn]历史会议信息列表
* @mobile:disable
*/
typedef struct tagHistoryConfListInfo
{
    HistoryConfInfo* confInfo;       /**< [en]Indicates conference info. [cn]会议信息 */
    HWM_UINT32 numOfConf;            /**< [length for confInfo][en]Indicates conference number. [cn]会议数量 */
} HistoryConfListInfo;

/**
* [en]History conf list attendee info.
* [cn]历史会议与会者列表
* @mobile:disable
*/
typedef struct tagHistoryConfAttendeeResult
{
    HWM_UINT32 numOfAddendee;               /**< [length for attendee][en]Indicates attendee number. [cn]与会者数量 */
    AttendeeBaseInfo* attendee;                 /**< [en]Indicates attendee. [cn]与会者 */
} HistoryConfAttendeeResult;

/**
* [cn]数据会议大参数
*/
typedef struct tagJoinShareConfParamInfo
{
    HWM_UINT32  callId;
    HWM_CHAR    confId[HWM_MAX_CONF_ID_LEN];
    HWM_CHAR    hostKey[HWM_MAX_HOSTKEY_LEN];
    HWM_CHAR    cryptKey[HWM_MAX_AUTHKEY_LEN];
    HWM_CHAR    siteUrl[HWM_MAX_URL_LEN];
    HWM_CHAR    siteId[HWM_MAX_CONF_ID_LEN];
    HWM_CHAR    userId[HWM_MAX_USER_ID_LEN];
    HWM_CHAR    userName[HWM_MAX_DISPLAY_NAME_LEN]; /**< [cs_sensitive:name] >*/
    HWM_CHAR    userUri[HWM_MAX_URL_LEN];
    HWM_CHAR    bindNumber[HWM_MAX_NUMBER_LEN];
    HWM_CHAR    shortConfName[HWM_MAX_SHORT_NAME_LEN]; /**< [cs_sensitive:name][en]Indicates short conference name(get 63 bytes form the conf_name). [cn]会议名称(取conf_name的前63个字节) */
    HWM_CHAR    accessCode[HWM_MAX_ACCESS_NUM_LEN];
    HWM_CHAR    partSecureConfNum[HWM_MAX_SECURE_CONF_NUM_LEN];
    HWM_UINT32  userRole;                                 /**< [en]participant user role. 0：normal 1:chairman[cn]sbc会议角色 0 普通与会者 1 主席 */
    HWM_UINT32  numberM;
    HWM_UINT32  numberT;
    HWM_CHAR    stgAddress[HWM_MAX_CONF_URI_LEN];//通过私有接口传给CONFSDK
    HWM_CHAR    sbcAddress[HWM_MAX_CONF_URI_LEN];//音视频探测选定的SBC地址，直接供数据会议使用
    HWM_CHAR    serverAddr[HWM_MAX_CONF_SERVER_ADDR_LEN]; /**< [cs_sensitive:address] >*/
    HWM_UINT32  option;
    FirewallModeType firewallMode;
    HWM_CHAR    userInfo[HWM_MAX_DISPLAY_NAME_LEN];
    HWM_UINT32  dataCodecVer;
    EncodeVersionType encodeVerType;     /**< [en]Indicates encode version. [cn]屏幕共享协商解码版本 */
    HWM_UINT32  maxEncBitRate;      /**< [en]Indicates max bitRate. [cn]屏幕共享发送最大带宽，单位kb/s */
    HWM_UINT32  maxDecBitRate;      /**< [en]Indicates max decode width. [cn]屏幕共享接收最大带宽，单位kb/s  */
}JoinShareConfParamInfo;

/**
* [en]This struct is used to describe pair universal info
* [cn]配对通用信息
* @private
* @ios:disable
*/
typedef struct tagPairUniversalInfo
{
    HWM_UINT64              pairId;                             /**< [en]Indicates pair id. [cn]配对ID */
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];                       /**< [en]Indicates conf id. [cn]会议id */
    HWM_CHAR confPas[HWM_MAX_PASSWORD_LEN];                     /**< [en]Indicates conf password，[en]会议密码 */
}PairUniversalInfo;

/**
* [en]This struct is used to describe pair event info
* [cn]配对事件的的信息
* @private
* @ios:disable
*/
typedef struct tagPairEventInfo
{
    HWM_INT64              sessionId;                  /**< [en]Indicates session id. [cn]配对会话ID */
    HWM_BOOL                isPaired;                   /**< [en]Indicates pairing or cancel pairing. TUP_TRUE, indicates pairing; otherwise, cancel pairing.  [cn]表示配对或取消配对。TUP_TRUE，表示配对；否则，表示取消配对。 */
    CallPairReasonType      reason;                     /**< [en]Indicates the reason. It should be CALL_E_CANCEL_PAIR_BUTT if pairing success.[cn]原因值。配对成功时，填CALL_E_CANCEL_PAIR_BUTT。 */
}PairEventInfo;

/**
* [en]This struct is used to describe pair request info
* [cn]配对请求信息
* @private
* @ios:disable
*/
typedef struct tagPairReqInfo
{
    HWM_INT64  pairId;                                  /**< [en]Indicates session id. [cn]配对会话ID */
    HWM_CHAR   pairKey[HWM_MAX_PAIR_KEY_LEN];           /**< [en]Pair key [cn]配对key */
    HWM_CHAR   sipNumber[HWM_MAX_SIP_NUMBER_LENGTH];    /**< [en]Indicates the number.   [cn]软终端sip号码 */
    HWM_CHAR   displayName[HWM_MAX_DISPLAY_NAME_LEN];   /**< [en]Indicates the display name.   [cn]软终端显示名 */
    HWM_CHAR   remoteIp[HWM_MAX_IP_ADDRESS_LEN];        /**< [en]remote ip [cn]远端IP */
    HWM_BOOL   isForce;                                 /**< [en]is force [cn]是否抢占 */
}PairReqInfo;

/**
* [en]xxxxxx
* [cn]开始配对参数
*/
typedef struct tagStartPairParam
{
    HWM_CHAR  pairCode[HWM_MAX_DISPLAY_NAME_LEN];              /**< [en]xxxxxxx [cn]配对码
                                                               [cs_allowNull:N][cs_length:1-256]*/
    HWM_CHAR  filePath[HWM_MAX_FILE_PATH_LEN];                 /**< [en]xxxxxxx [cn]文件路径
                                                               [cs_allowNull:N][cs_length:1-512] */
    HWM_CHAR  deviceUuid[HWM_MAX_DEVICE_UUID_LEN];             /**< [en]xxxxxxx [cn]设备UUID
                                                               [cs_allowNull:N][cs_length:1-128] */
}StartPairParam;

typedef struct tagInviteHardTerminalParam
{
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];       /**< [en]Indicates xxxx. [cn]会议id
                                                [cs_allowNull:N][cs_length:1-16] */
    HWM_CHAR confPwd[HWM_MAX_PASSWORD_LEN];     /**< [cs_sensitive:hide][en]Indicates xxxx. [cn]会议密码
                                                [cs_allowNull:Y][cs_length:0-128] */
    HWM_CHAR orgId[HWM_MAX_CONF_ID_LEN];        /**< [en]Indicates xxxx. [cn]企业ID
                                                [cs_allowNull:Y][cs_length:0-16] */
    HWM_CHAR number[HWM_MAX_NUMBER_LEN];        /**< [en]Indicates xxxx. [cn]邀请号码
                                                [cs_allowNull:N][cs_length:1-128] */
    HWM_UINT32 numberType;                      /**< [en]Indicates xxxx. [cn]0:本局 1:中继
                                                [cs_allowNull:Y] */
} InviteHardTerminalParam;

/**
* [en]This structure is used to describe the video control.
* [cn]视频控制
*/
typedef struct tagVideoControlParam
{
    HWM_UINT32 callId;                          /**< [en]Indicates Call ID. [cn]呼叫ID
                                                [cs_allowNull:N] */
    HWM_UINT32 operation;                       /**< [en]Indicates operation action, value of HwmVideoCtrlOpAct, can use logical operators "|" combine, open|start，close|stop .
                                                [cn]操作动作，取值: HwmVideoCtrlOpAct ，可以使用逻辑运算符"|"连接，open|start，close|stop
                                                [cs_allowNull:N] */
    HWM_UINT32 module;                          /**< [en]Indicates video control object, value of HwmVideoCtrlModule, can use logical operators "|" combine.
                                                [cn]视频控制对象，取值: HwmVideoCtrlModule ，可以使用逻辑运算符"|"连接
                                                [cs_allowNull:N] */
    HWM_BOOL isSync;                            /**< [en]Indicates whether to use synchronous execution. [cn]是否使用同步执行,ios8.3使用异步，否则在切后台时调用该接口会被系统迅速挂起导致崩溃卡死
                                                [cs_allowNull:N] */
}VideoControlParam;

/**
* [en]This enumeration is used to describe the video window type.
* [cn]视频窗口类型
*/
typedef enum tagVideoWndType
{
    VIDEO_WND_REMOTE = 0,                /**< [en]Indicates remote video window
                                         [cn]远端视频窗口
                                         [ios:rename:Remote]*/
    VIDEO_WND_LOCAL,                     /**< [en]Indicates local video window
                                         [cn]本地视频窗口
                                         [ios:rename:Local]*/
    VIDEO_WND_PREVIEW,                   /**< [en]Indicates preview window
                                         [cn]预览窗口
                                         [ios:rename:Preview]*/
    VIDEO_WND_AUX_DATA,                  /**< [en]Indicates auxiliary data window
                                         [cn]辅流窗口
                                         [ios:rename:Data]*/
} VideoWndType;

/**
* [en]This structure is used to describe the video window information.
* [cn]视频窗口信息
*/
typedef struct tagVideoWndBasicInfo
{
    HWM_UINT32 wndSizeType;                        /*远端窗口(0),本地窗口(1),预览窗口(2)*/
    HWM_UPTR render;                               /**< [en]Indicates window handle. [cn]窗口句柄*/
    VideoWndDisplayMode displayType;
}VideoWndBasicInfo;



/**
* [en]This structure is used to describe the video display window properties.
* [cn]视频显示窗口属性
*/
typedef struct tagVideoRenderInfo
{
    VideoWndType renderType;  /**< [en]Indicates the window type enumeration value. [cn]窗口类型枚举值 */
    VideoWndDisplayMode displayType;           /**< [en]Indicates window display mode 0: Stretch mode 1: (No stretch) Black border mode 2: (No stretch) Crop mode 3: (guaranteed window size> = image size) Displayed at original resolution. [cn]窗口显示模式 0:拉伸模式 1:(不拉伸)黑边模式 2:(不拉伸)裁剪模式 6:(需保证窗口尺寸 >= 图像尺寸)按原始分辨率显示 */
    HWM_UINT32 mirrorType;            /**< [en]Indicates window Mirror Mode 0: not mirror (default) 1: Mirror up and down (currently not supported) 2: Mirror left and right. [cn]窗口镜像模式 0:不做镜像(默认值) 1:上下镜像(目前未支持) 2:左右镜像 */
    HWM_UINT32 devideOrientation;     /**< [en] Indicates Render Orientation. [cn]render方向*/
}VideoRenderInfo;

/**
* [en]This structure is used to describe the video display window properties.
* [cn]视频显示远端窗口渲染模式属性
*/
typedef struct tagVideoRenderDisplayModeInfo
{
    VideoWndType renderType;  /**< [en]Indicates the window type enumeration value. [cn]窗口类型枚举值 */
    VideoWndDisplayMode displayType;           /**< [en]Indicates window display mode 0: Stretch mode 1: (No stretch) Black border mode 2: (No stretch) Crop mode 3: (guaranteed window size> = image size) Displayed at original resolution. [cn]窗口显示模式 0:拉伸模式 1:(不拉伸)黑边模式 2:(不拉伸)裁剪模式 6:(需保证窗口尺寸 >= 图像尺寸)按原始分辨率显示 */
}VideoRenderDisplayModeInfo;

/**
* [en]This structure is used to describe the video display window properties.
* [cn]视频显示远端窗口属性
*/
typedef struct tagRemoteVideoRenderInfo
{
    HWM_UPTR render;                                /**< [en]Indicates window handle. [cn]窗口句柄*/
    VideoWndOrientation orientation;                  /**< [en] Indicates Render Orientation. [cn]render方向*/
}RemoteVideoRenderInfo;

/**
* [en]This struct is used to describe user setting parameter
* [cn]用户设置里的信息
* @mobile:disable
*/
typedef struct tagUserSettingInfo
{
    //双屏设置选项
    HWM_BOOL hasDualMonitorParam;
    HWM_BOOL enableDualMonitor;
    HWM_UINT32 monitorNumber;

    //啸叫设置选项
    HWM_BOOL hasDeviceHowlingDetection;
    HWM_BOOL enableDeviceHowlingDetection;

    //uisdk默认模式设置
    HWM_BOOL hasSetDefaultViewMode;
    HWM_UINT32 defaultViewMode;
} UserSettingInfo;

/**
* [en]This struct is used to describe nonce join conf param.
* [cn]随机数入会参数
*/
typedef struct tagNonceJoinConfParam
{
    JoinConfByIdParam baseJoinConfParam;                   /**< [en] Indicates base join conf param. [cn]基本入会参数 [cs_allowNull:Y] */
    HWM_CHAR nonce[HWM_MAX_NONCE_LEN];                     /**< [en] Indicates nonce. [cn]随机数 [cs_allowNull:N] */
    LoginClientType clientType;                            /**< [en] Indicates client type. [cn]客户端类型 [cs_allowNull:Y] */
}NonceJoinConfParam;

typedef struct tagHistoryConfInfoParam
{
    HWM_CHAR  confId[HWM_MAX_CONF_ID_LEN];

    HWM_CHAR  recordFile[HWM_MAX_DB_VALUE_LEN];
}HistoryConfInfoParam;
typedef enum tagBasicConfRole
{
    BASIC_CONF_ROLE_ATTENDEE = 0,    /**< [en]Indicates attendee
							    <br>[cn]普通与会者 */
    BASIC_CONF_ROLE_CHAIRMAN,        /**< [en]Indicates chairman
								    <br>[cn]主席 */
    BASIC_CONF_ROLE_AUDIENCE        /**< [en]Indicates audience
								    <br>[cn]观众 */
} BasicConfRole;

/**
* [en]This struct is used to describe basic meeting info param.
* [cn]随机数入会参数
*/
typedef struct tagSipConfInfo
{
    HWM_CHAR  impu[HWM_MAX_NAME_LEN];      /**< 用户ID  impu */
    HWM_CHAR  impi[HWM_MAX_NAME_LEN];      /**< 用户名impi   */
    HWM_INT8  pwdtype;                            /** 会议密码类型 **/
    HWM_CHAR  passwd[HWM_MAX_PASSWORD_LEN];       /**< [cs_sensitive:hide][en]IndiLAG  passwd，[en] 密码 */
    HWM_CHAR  domain[HWM_MAX_DOMAIN_LENGTH];      /**< [en]Indicates conference domain . [cn]域名*/
    HWM_CHAR  accesscode[HWM_MAX_ACCESS_NUM_LEN];/**< [en]Indicates conference access code. [cn]会议接入码 */
    HWM_CHAR  confid[HWM_MAX_CONF_ID_LEN];       /**< [en]Indicates when creating a meeting, add the create request ID in the call-id field to differentiate multiple sessions created simultaneously. [cn]在创建会议时，在call-id字段添加创建请求ID，用于区分同时创建的多个会议 */
    HWM_CHAR  confpwd[HWM_MAX_PASSWORD_LEN];     /**< [cs_sensitive:hide][cn]会议密码 **/
}SipConfInfo;


/**
* [en]This struct is used to describe basic meeting info param.
* [cn]基本会议信息
*/
typedef struct tagBasicConfInfo
{
    HWM_CHAR  accessCode[HWM_MAX_ACCESS_NUM_LEN];/**< [en]Indicates conference access code. [cn]会议接入码 */
    HWM_CHAR  confId[HWM_MAX_CONF_ID_LEN];       /**< [en]Indicates when creating a meeting, add the create request ID in the call-id field to differentiate multiple sessions created simultaneously. [cn]在创建会议时，在call-id字段添加创建请求ID，用于区分同时创建的多个会议 */
    HWM_CHAR  confPass[HWM_MAX_PASSWORD_LEN];                  /** [cs_sensitive:hide]会议密码 **/
    HWM_INT32 confMode;      /**< [en]Indicates conference mode . [cn]会议模式0COMMON:MCU    1MMR*/
    HWM_UINT32  mediaType;       /**< [en]Indicates media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]媒体类型，取值参考CONFCTRL_E_CONF_MEDIATYPE_FLAG，可进行"|"操作 */
    HWM_CHAR nearbyaccess[HWM_OBS_URL_LENGTH];      /**< [en]Indicates nearbyaccess */
    SipConfInfo sip_info;                        /**< [en]Indicates sip info [cn]sip结构体 */
    HWM_BOOL is_webinar;                                     /**< [en]Indicates is webinar. [cn]是否是网络研讨会 */
    BasicConfRole  role;        /**< [en]Indicates role. [cn]会议成员角色 */
    HWM_BOOL is_confServiceTp;                                     /**< [en]Indicates is confServiceTp. [cn]是否是confServiceTp */
    HWM_CHAR  confCompanyID[HWM_MAX_CONF_ID_LEN];       /**< [en]Indicates companyId. [cn]企业ID */
    HWM_UINT32 result_code;               /**< [en]Indicates is result_code. [cn]返回错误码 */
    HWM_CHAR  meetingSubject[HWM_MAX_SUBJECT_LEN];                 /**< [en]Indicates is meetingSubject. [cn]会议主题 */
    HWM_INT64 startTime;                                /**< [en]Indicates is startTime. [cn]会议起始时间 */
    HWM_INT32 length;                                   /**< [en]Indicates is length. [cn]会议时长 */
}BasicConfInfo;


typedef enum tagSurveySubmitType
{
    SURVEY_SUBMMIT_PRESENTED = 0,    /**< [en]Indicates attendee
                                     <br>[cn]呈现上报 */
    SURVEY_SUBMMIT_NSS_SATISFY        /**< [en]Indicates chairman
                                      <br>[cn]满意反馈 */
} SurveySubmitType;

typedef enum tagSubEventType
{
    HW_NSS = 0,               /**< [en]Indicates attendee
                                     <br>[cn]华为满意度 */
    CONF_NSS,                 /**< [en]Indicates chairman
                                      <br>[cn]会议满意 */
    CONF_NOTICE,                /**< [en]Indicates chairman
                                     <br>[cn]公告 */
} SubEventType;

/**
* [en]This struct is used to describe NssSurveyParam param.
* [cn]NSS 调查显示上报参数
*/
typedef struct tagNssSurveyParam
{
    HWM_CHAR  userId[HWM_MAX_USERID_LEN];        /**< [en]Indicates conference access code. [cn]用户ID */
    HWM_CHAR  confId[HWM_MAX_CONF_ID_LEN];       /**< [en]Indicates when creating a meeting, add the create request ID in the call-id field to differentiate multiple sessions created simultaneously. [cn]在创建会议时，在call-id字段添加创建请求ID，用于区分同时创建的多个会议 */
    BasicConfRole  role;                         /**< [en]Indicates role. [cn]会议成员角色 */
    SurveySubmitType  submitType;                          /**< [en]Indicates the submit event type.*/
    HWM_CHAR  taskUuid[HWM_MAX_CONF_UUID_LEN];        /**< [en]Indicates enterprise task id. [cn] 企业级任务id*/
    SubEventType subEvent;        /**< [en]Indicates NSS subEvent. [cn]事件类型，HW_NSS(华为满意度)、CONF_NSS(会议满意度)、 CONF_NOTICE（公告） */
}NssSurveyParam;


/**
* [en]This struct is used to describe NssSurvey Notification info param.
* [cn]NSS 调查上报参数
*/
typedef struct tagNssSurveyNotifyInfo
{
    HWM_CHAR  taskUuid[HWM_MAX_SHORT_NAME_LEN];       /**< [en]Indicates when creating taskUuid. [cn]企业级任务ID */
    HWM_CHAR  taskVer[HWM_MAX_VIDEO_PROFILE_LEN];        /**< [en]Indicates event task id. [cn] 事件版本描述（取下发时的task_ver*/
    HWM_INT64  expireTime;                            /**< [en]Indicates the submit expireTime.[cn]有效时长（单位：s ），长期未显示，过期后不需要呈现*/
    HWM_UINT32  taskPriority;                         /**< [en]Indicates taskPriority. [cn]任务优先级，1最高 */
    HWM_CHAR showMoment[HWM_MAX_CONF_ID_LEN];        /**< [en]Indicates showMoment .显示时机，END_CONF(会议结束时)、TODO_SHOW（待办中呈现）*/
    HWM_CHAR apiUrl[HWM_MAX_URL_LEN];       /**< [en]Indicates the operate system name.*/
    HWM_CHAR absoluteUrl[HWM_MAX_URL_LEN];        /**< [en]Indicates  absoluteUrl. [cn] //绝对路径，可供调整打开的H5页面或反馈结果*/
    HWM_CHAR subject[HWM_MAX_URL_LEN];        /**< [en]Indicates subject . [cn] 相对路径，反馈结果到MOA服务的接口*/
    HWM_CHAR description[HWM_MAX_DESCRIPTION_LEN]; /**< [en]Indicates enterprise description. [cn] 事件描述 */

    HWM_CHAR userId[HWM_MAX_USER_ID_LEN];        /**< [en]Indicates  absoluteUrl. [cn] //绝对路径，可供调整打开的H5页面或反馈结果*/
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];        /**< [en]Indicates subject . [cn] 相对路径，反馈结果到MOA服务的接口*/
    BasicConfRole  role;                       /**< [en]Indicates role . [cn] 会议角色*/
    SubEventType subEvent;        /**< [en]Indicates NSS subEvent. [cn]事件类型，HW_NSS(华为满意度)、CONF_NSS(会议满意度)、 CONF_NOTICE（公告） */
}NssSurveyNotifyInfo;

typedef struct tagConfNoticeParam
{
    SubEventType subEvent;        /**< [en]Indicates NSS subEvent. [cn]事件类型，HW_NSS(华为满意度)、CONF_NSS(会议满意度)、 CONF_NOTICE（公告） */
    HWM_CHAR  taskVer[HWM_MAX_PROFILE_LEN];        /**< [en]Indicates event task id. [cn] 事件版本描述（取下发时的task_ver*/
    SurveySubmitType confirmResult;           /**< [en]Indicates the submit event type.*/
    HWM_INT64  reportTime;                    /**< [en]Indicates the submit ereportTime.[cn]事件上报时间戳（单位：s ）*/
    HWM_CHAR osName[HWM_MAX_OPERATE_SYSTEM_NAME_LEN];       /**< [en]Indicates the operate system name.*/
    HWM_CHAR appVersion[HWM_MAX_CLIENT_VERSION_LEN];        /**< [en]Indicates app version.*/
   
}ConfNoticeParam;

/**
* [en]This struct is used to describe ConfNotice Notification info param.
* [cn]NSS 调查上报参数
*/
typedef struct tagConfNoticeNotifyInfo
{
    
    HWM_CHAR  taskUuid[HWM_MAX_SHORT_NAME_LEN];       /**< [en]Indicates when creating taskUuid. [cn]企业级任务ID */
    HWM_INT64  expireTime;                            /**< [en]Indicates the submit expireTime.[cn]有效时长（单位：s ），长期未显示，过期后不需要呈现*/
    HWM_CHAR absoluteUrl[HWM_MAX_URL_LEN];        /**< [en]Indicates  absoluteUrl. [cn] //绝对路径，可供调整打开的H5页面或反馈结果*/
          /**< [en]Indicates role . [cn] 会议角色*/
    SubEventType  subEvent;        /**< [en]Indicates NSS subEvent. [cn]调查事件类型HW_NSS(华为满意度)、CONF_NSS(会议满意度)、 NOTICE（公告） */
}ConfNoticeNotifyInfo;

/**
* [en]
* [cn] 用于设置VOIP 语音通话的加密和解密函数地址
*/
typedef struct tagVoipEncDec
{
    HWM_LONG encryptFunc;     /**<  [en]Indicates is voip encrypt.       [cn]voip 加密*/
    HWM_LONG decryptFunc;     /**<  [en]Indicates is voip decrypt.       [cn]voip 解密*/
}VoipEncDec;

typedef struct tagVoteInfo
{
    HWM_BOOL  voteEnable;                    /**< [en]Indicates has vote. [cn]是否允许投票 */
    HWM_BOOL  hasVote;                       /**< [en]Indicates has vote. [cn]是否存在已经创建的投票 */
    HWM_CHAR  pageUrl[HWM_MAX_URL_LEN];      /**< [en]Indicates  h5 absoluteUrl. [cn]绝对路径，可供调整打开的H5页面或反馈结果*/
}VoteInfo;

/**
* [en]This enumeration is used to describe the query nonce type.
* [cn]请求Nonce类型
*/
typedef enum tagNonceType
{
    QUERY_NONCE_VOTE = 0,                /**< [en]Indicates query vote nonce type
                                         [cn]投票Noce查询*/
} NonceType;

typedef struct tagQueryNonceByTypeResult
{
    HWM_CHAR nonce[HWM_MAX_NONCE_LEN]; /**< [en]Indicates signature string. [cn]Nonce */
    HWM_CHAR returnDesc[HWM_MAX_DESCRIPTION_LEN]; /**< [en]Indicates returnDesc. [cn]请求返回描述描述 */
    HWM_INT32  returnCode;                   /**< [en]Indicates returnCode. [cn]请求nonce返回错误码 */
    NonceType  nonceType;                    /**< [en]Indicates nonceType . [cn]nonce类型 */
}QueryNonceByTypeResult;

typedef struct tagMediaFrameBuffer
{
    HWM_UCHAR *buffer;     /**< [en]Indicates media frame buffer. [cn]音视频码流缓冲区地址 */
    HWM_UINT32 dataSize; /**< [en]Indicates size of media frame buffer. [cn]音视频原始码流长度 */
    HWM_UINT32 bufferSize; /**< [length for buffer][en]Indicates size of media frame buffer. [cn]音视频码流缓冲区长度，加解密后不能超出这个长度 */
}MediaFrameBuffer;

typedef struct tagE2EEConfig
{
    HWM_BOOL enableE2EE;                   /**< [en]Indicates enableE2EE. [cn]是否开启端到端加密，开启后下面的设置项才生效 */
    HWM_CHAR libraryPath[HWM_MAX_PATH_LEN]; /**< [en]Indicates the path of dll. [cn]使用方提供包含加解密函数的dll，并将路径设置到sdk */
    HWM_CHAR audioEncrtptFuncName[HWM_MAX_FUNC_NAME_LEN]; /**< [en]Indicates the encrtpt function of audio. [cn]音频加密函数 */
    HWM_CHAR audioDecrtptFuncName[HWM_MAX_FUNC_NAME_LEN]; /**< [en]Indicates the decrtpt function of audio. [cn]音频解密函数 */
    HWM_CHAR videoEncrtptFuncName[HWM_MAX_FUNC_NAME_LEN]; /**< [en]Indicates the encrtpt function of video. [cn]视频加密函数 */
    HWM_CHAR videoDecrtptFuncName[HWM_MAX_FUNC_NAME_LEN]; /**< [en]Indicates the decrtpt function of video. [cn]视频解密函数 */
}E2EEConfig;

END_HWM_SDK_NAMESPACE
#endif /* __HWM_CONF_SERVICE_DEF_H__ */
