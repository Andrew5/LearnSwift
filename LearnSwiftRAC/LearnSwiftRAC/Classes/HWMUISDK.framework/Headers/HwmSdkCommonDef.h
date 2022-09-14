/**
 * @file HwmSdkCommonDef.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */


#ifndef __HWM_SDK_COMMON_DEF_H__
#define __HWM_SDK_COMMON_DEF_H__

#define HWM_SDK_NAMESPACE HWMSDK
#define BEGIN_HWM_SDK_NAMESPACE namespace HWM_SDK_NAMESPACE {
#define END_HWM_SDK_NAMESPACE };
#define USING_HWM_SDK_NAMESPACE using namespace HWM_SDK_NAMESPACE;


#define HWM_SDK_VERSION   "Huawei Meeting SDK 20.1.0"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif /* __cplusplus */
#include <stdint.h>

#if defined (OS_WIN32) || (WIN32)
#ifdef HWM_API
#undef HWM_API
#endif

#ifdef HWM_EXPORT
#define HWM_API __declspec(dllexport)
#else
#define HWM_API __declspec(dllimport)
#endif
#else /*Not WIN32*/
#define HWM_API  __attribute__ ((__visibility__ ("default")))
#endif



#ifdef __LP64__
    typedef long long HWM_PTR;
    typedef uint64_t HWM_UPTR;
    typedef unsigned long HWM_SIZE;
#else
    typedef int HWM_PTR;
    typedef unsigned int HWM_UPTR;
    typedef unsigned int HWM_SIZE;
#endif

#ifndef HWM_TRUE
#define HWM_TRUE 1
#endif

#ifndef HWM_FALSE
#define HWM_FALSE 0
#endif

    typedef void                    HWM_VOID;
    typedef unsigned char           HWM_UCHAR;
    typedef char                    HWM_CHAR;
    typedef unsigned char           HWM_UINT8;
    typedef char                    HWM_INT8;

    typedef unsigned short          HWM_UINT16;
    typedef signed short            HWM_INT16;

    typedef unsigned int            HWM_UINT32;
    typedef signed int              HWM_INT32;
	//typedef unsigned int            HWM_UINT;     

    typedef uint64_t                HWM_UINT64;
    typedef int64_t                 HWM_INT64;
    typedef unsigned long           HWM_ULONG;
    typedef signed long             HWM_LONG;

    typedef float                   HWM_FLOAT;

    typedef HWM_UINT32              HWM_BOOL;

    typedef HWM_UPTR                HWM_HWND;
    typedef HWM_INT32               HWM_RESULT;

#if defined (OS_WIN32) || (WIN32)
    typedef wchar_t                 HWM_WCHAR;
#else 
    typedef char                    HWM_WCHAR;
#endif

#ifndef IN
#define IN
#endif

#ifndef OUT
#define OUT
#endif

#ifndef IO
#define IO
#endif


#ifndef FALSE
#define FALSE           false
#endif

#ifndef TRUE
#define TRUE            true
#endif


#define HWM_NULL_PTR   (0)
#define HWM_SUCCESS    (0)
#define HWM_FAIL       (1)

#ifndef HWM_UINT32_MAX
#define HWM_UINT32_MAX (0xFFFFFFFF)
#endif


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

/*
 * 说明：HWM_MAX_XXXX_LEN，如无特殊说明，对应的最大字符串长度均包含结束符"\0".
 */

//错误码分段取值后继根据需要再进行规范，当前开发阶段只是个设计样例
#define HWM_COMMON_ERR_BEGIN_VAL                    (0)         /**< [en]Indicates the xxxx.
                                                                     [cn]通用错误初始取值 */

#define HWM_NETWORK_ERR_BEGIN_VAL                   (1000)      /**< [en]Indicates the xxxx.
                                                                     [cn]登录服务错误初始取值 */

#define HWM_LOGIN_ERR_BEGIN_VAL                     (2000)      /**< [en]Indicates the xxxx.
                                                                     [cn]登录服务错误初始取值 */

#define HWM_CONF_ERR_BEGIN_VAL                      (3000)      /**< [en]Indicates the xxxx.
                                                                     [cn]会议服务错误初始取值 */

#define HWM_MAX_DB_VALUE_LEN                        (1960)      /**< [en]Indicates the max length of db. 
                                                                     [cn]数据库储存最大长度*/

#define HWM_MAX_CONF_URI_LEN                        (256)
#define HWM_MAX_CONF_SERVER_ADDR_LEN                (256)
#define HWM_MAX_FILE_PATH_LEN                       (512)       /**< [en]Indicates the maximum length of the log path.
                                                                     [cn]文件路径最大长度 */

#define HWM_MAX_DEVICE_NUM                          (32)        /**< [en]Indicates the maximum num of device.
                                                                     [cn]最大设备数 */

#define HWM_INVALID_DEVICE_INDEX                    (0xFFFF)    /**< [en]Indicates the invalid index of device.
                                                                     [cn]无效设备索引 */

#define HWM_MAX_ACCOUNT_LEN                         (128)       /**< [en]Indicates the maximum length of the account.
                                                                     [cn]最大帐号长度 */

#define HWM_MAX_COUNTRY_CODE_LEN                    (64)       /**< [en]Indicates the maximum length of the country code.
                                                                     [cn]国家码 */

#define HWM_MAX_USERID_LEN                          (256)       /**< [en]Indicates the maximum length of the userId.
                                                                     [cn]最大userId长度 */

#define HWM_MAX_NONCE_LEN                           (128)       /**< [en]Indicates the maximum length of the nonce.
                                                                     [cn]最大随机字符串长度 */
#define HWM_MAX_APPID_EMAIL_LEN                     (256)      /**< [en]Indicates the maximum length of the email.
                                                                     [cn]appID用户邮箱长度 */
#define HWM_MAX_PHONE_LEN                           (32)      /**< [en]Indicates the maximum length of the phone.
                                                                     [cn]appID用户手机号码长度 */
#define HWM_MAX_PASSWORD_LEN                        (128)       /**< [en]Indicates the maximum length of the password.
                                                                     [cn]最大密码长度 */

#define HWM_MAX_CLIENT_VERSION_LEN                  (128)       /**< [en]Indicates the maximum length of the client version.
                                                                     [cn]最大客户端版本长度 */

#define HWM_MAX_APPID_LEN                           (128)       /**< [en]Indicates the maximum length of app ID.
                                                                     [cn]最大APP ID长度 */

#define HWM_MAX_APPKEY_LEN                          (128)       /**< [en]Indicates the maximum length of app key.
                                                                     [cn]最大APP Key值长度 */

#define HWM_MAX_APPNAME_LEN                         (128)       /**< [en]Indicates the maximum length of app name.
                                                                     [cn]最大APP name长度 */

#define HWM_MAX_CHN_USERNAME_LEN                    (192)       /**< [en]Indicates the maximum length of chinese name.
                                                                     [cn]最大中文用户名长度 */

#define HWM_MAX_CORPID_LEN                          (32)        /**< [en]Indicates the maximum length of corp id.
                                                                     [cn]最大企业ID长度 */

#define HWM_MAX_TICKET_LEN                          (2048)      /**< [en]Indicates the maximum length of ticket.
                                                                     [cn]最大ticket字串长度 */
#define HWM_MAX_AUTH_CODE_LEN                       (512)       /**< [en]Indicates the maximum length of auth code.
                                                                     [cn]最大授权码长度 */
#define HWM_MAX_VERIFY_CODE_LEN                     (32)       /**< [en]Indicates the maximum length of verify code.
                                                                     [cn]最大验证码长度 */
#define HWM_MAX_REGISTER_TOKEN_LEN                  (256)       /**< [en]Indicates the maximum length of register token.
                                                                     [cn]最大token长度 */
#define HWM_MAX_DEVICEID_LEN                        (128)       /**< [en]Indicates the maximum length of deviceId.
                                                                     [cn]最大设备id长度 */
#define HWM_MAX_TOKEN_LEN                           (128)       /**< [en]Indicates the maximum length of token
                                                                     [cn]最大token长度  */
#define HWM_MAX_LANGUAGE_LEN                        (64)        /**< [en]Indicates the maximum length of language
                                                                     [cn]最大语言  */
#define HWM_MAX_TENANT_ID_LEN                       (256)       /**< [en]Indicates the maximum length of tenant Id
                                                                     [cn]最大中台租户ID长度  */

#define HWM_MAX_SUBJECT_LEN                         (385)       /**< [en]Indicates the maximum length of conf subject
                                                                     [cn]会议主题最大长度  */

#define HWM_MAX_CONF_PASSWORD_LEN                   (32)        /**< [en]Indicates the maximum length of conf password
                                                                     [cn]最大会议密码长度  */

#define HWM_MAX_CONF_ID_LEN                         (16)        /**< [en]Indicates the maximum length of conference id
                                                                     [cn]最大会议ID长度  */

#define HWM_MAX_HOSTKEY_LEN                         (32)        /**< [en]Indicates the maximum length of host key
                                                                     <br>[cn]主持人入会密码最大长度 */
#define HWM_MAX_AUTHKEY_LEN                         (64)        /**< [en]Indicates the maximum length of authentication password
                                                                     <br>[cn]会议鉴权密码最大长度 */
#define HWM_MAX_LANGUAGE_NAME_LENGTH                (256)       /**< [en]Indicates the maximum length of language name
                                                                     [cn]语音名称 */
#define HWM_MAX_SIM_INTERPRETER_LANGUAGE_NUM        (31)        /**< [en]Indicates the maximum length of language num
                                                                     [cn]同声传译语言个数 */

#define HWM_MAX_CONF_LINK_PREFIX_LEN                (256)        /**< [en]Indicates the maximum length of conference link prefix
                                                                     [cn]最大会议链接前缀长度  */

#define HWM_MAX_CONF_ACCESS_LEN                     (64)        /**< [en]Indicates the maximum length of conference access code
                                                                     [cn]最大会议接入码长度*/

#define HWM_MAX_NUMBER_LEN                          (128)       /**< [en]Indicates the maximum length of the number
                                                                     [cn]最大号码长度  */
#define HWM_MAX_NAME_LEN                            (256)
#define HWM_MAX_ACCOUNT_ID_LEN                      (129)         /**< [en]Indicates the maximum number of account id<br>[cn]与会者account id最大长度 */

#define HWM_MAX_SHORT_NAME_LEN                      (64)        /**< [en]Indicates the maximum length of short name
                                                                     <br>[cn]短名称最大长度  */
#define HWM_MAX_REASON_LEN                          (256)        /**< [en]Indicates the maximum length of the reason
                                                                     [cn]最大原因长度  */
#define HWM_MAX_TIME_FORMATE_LEN                    (32)        /**< [en]Indicates the maximum length of format time
                                                                     [cn]最大时间格式长度  */
#define HWM_MAX_ACCESS_NUM_LEN                      (128)       /**< [en]Indicates the maximum length of access number
                                                                     <br>[cn]最大会议接码长度  */
#define HWM_MAX_GROUP_URI_LEN                       (128)       /**< [en]Indicates the maximum length of uri
                                                                     [cn]最大群组URI长度  */
#define HWM_MAX_SECURE_CONF_NUM_LEN                 (128)       /**< [en][en]Indicates the maximum number of secure conference num
                                                                     <br>[cn]与会者安全会议号最大长度 */
#define HWM_MAX_ORG_ID_LENGTH                       (32)        /**< [en]Indicates the maximum length of org
                                                                     [cn]最大企业id长度  */
#define HWM_MAX_EMAIL_LEN                           (96)        /**< [en]Indicates the maximum length of email
                                                                     [cn]最大email长度  */

#define HWM_MAX_DISPLAY_NAME_LEN                    (256)       /**< [en]Indicates the maximum length of dispaly name
                                                                     [cn]最大显示名称长度  */
#define HWM_MAX_CHANNEL_PARTNER_LEN                 (128)       /**< [en]Indicates the maximum length of channel partner
                                                                     [cn]最大渠道商长度  */
#define HWM_MAX_URL_LEN                             (256)       /**< [en]Indicates the maximum length of the common URL.
                                                                     [cn]最大URL长度 */

#define HWM_MAX_SPEAKER_NUM                         (5)         /**< [en]Indicates the maximum number of speaker
                                                                     [cn]最大发言方数  */

#define HWM_MAX_IP_ADDRESS_LEN                      (64)        /**< [en]Indicates the maximum length of the common URL.
                                                                     [cn]最大IP地址长度 */
#define HWM_MAX_ACCESS_LEN                      (16)            /**< [en]Indicates the maximum length of the access desc as：2G/3G/4G/Wifi/cable/other.
                                                                     [cn]接入信息长度，如：2G/3G/4G/Wifi/cable/other */

#define HWM_MAX_VER_CODE_LEN                        (256)       /**< [en]Indicates the maximum length of the verification code.
                                                                     [cn]最大验证码长度 */

#define HWM_MAX_CORP_ID_LEN                         (64)        /**< [en]Indicates the maximum length of the corp id.
                                                                     [cn]最大企业ID长度 */

#define HWM_MAX_CODEC_DESCRPTION_LEN                (128)       /**< [en]Indicates the maximum length of the codec description.
                                                                     [cn]最大编解码描述长度 */

#define HWM_MAX_FRAME_SIZE_DESCRPTION_LEN           (31)        /**< [en]Indicates the maximum length of the codec description.
                                                                     [cn]最大分辨率描述长度 */

#define HWM_MAX_RECV_SVC_STREAM_NUM                 (24)        /**< [en]Maximum number of xxxxx
                                                                     [cn]最大并发接收SVC流数 */

#define HWM_MAX_SEND_SVC_STREAM_NUM                 (4)         /**< [en]Maximum number of xxxxx
                                                                     [cn]最大并发发送SVC流数 */

#define HWM_MAX_RANDOM_LEN                          (128)       /**< [en]Indicates the maximum length of random
                                                                     [cn]最大随机数字串长度*/

#define HWM_MAX_USERAGENT_LEN                       (256)       /**< [en]Indicates the maximum length of user-agent
                                                                     [cn]最大user-agent字串长度*/

#define HWM_MAX_PROFILE_LEN                         (8)         /**< [en]Indicates the maximum length of profile description
                                                                     [cn]最大profile描述长度*/

#define HWM_MAX_FRAMESIZE_LEN                       (32)        /**< [en]Indicates the maximum length of frame size description
                                                                     [cn]最大分辨率长度*/

#define HWM_MAX_REASON_LEN                          (256)       /**< [en]Indicates the maximum length of reason description
                                                                     [cn]最大原因描述长度*/

#define HWM_MAX_VIEW_MODE_NUM                       (16)        /**< [en]Indicates the maximum num of view mode
                                                                     [cn]最大视图模式数 */

#define HWM_MAX_WND_NUM                             (32)        /**< [en]Indicates the maximum num of window
                                                                     [cn]最大窗口数 */

#define HWM_MAX_SENSITIVE_WORD_LEN                  (4096)      /**< [en]Indicates the maximum length of sensitive word
                                                                     [cn]最大敏感词长度 */
#define HWM_MAX_SENSITIVE_WORD_OTHER_LEN (16)            /**< 敏感词来源及语言最大字符长度*/

#define HWM_MAX_SIP_NUMBER_LENGTH                  (256)        /**< [en]Indicates the maximum length of SIP number.
                                                                     [cn]sip号码的最大长度 */

#define HWM_MAX_VMR_ID_LEN                          (128)       /**< [en]Indicates the maximum length of VMR ID
                                                                     [cn]最大VMR ID长度 */

#define HWM_MAX_DEVICE_UUID_LEN                     (128)       /**< [en]Indicates the maximum length of device uuid
                                                                     [cn]最大设备UUID长度 */

#define HWM_MAX_CONF_NUM                            (128)       /**< [en]Indicates the maximum number of conference
                                                                     [cn]最大会议数 */

#define HWM_MAX_SPECIFY_VMR_NUM                     (16)        /**< [en]Indicates the maximum number of specify VMR
                                                                     [cn]最大专用VMR数 */

#define HWM_MAX_ATTENDEE_NUM                        (2000)      /**< [en]Indicates the maximum number of attendee, xxxxx
                                                                     [cn]会议中的最大与会者数，当前实际支持最大400，2000为预留扩展 */

#define HWM_MAX_APP_WND_TITLE_LEN                   (512)      /**< [en]Indicates the maximum length of app window title
                                                                     [cn]最大应用程序窗口标题长度  */

#define HWM_MAX_APP_WND_NUM                         (64)        /**< [en]Indicates the maximum number of app window
                                                                     [cn]最大应用程序窗口数 */

#define HWM_MAX_ANNOTATION_NUM                      (1024)      /**< [en]Indicates the maximum number of annotation
                                                                     [cn]最大标注数 */

#define HWM_MAX_PRIVACY_VERSION_LEN                 (256)       /**< [en]Indicates the maximum length of privacy version
                                                                     [cn]隐私申明版本号最大长度 */

#define HWM_MAX_DEVICETYPE_LEN                       (64)       /**< [en]Indicates the maximum length of the device type.
                                                                     [cn]设备类型最大长度 */

#define HWM_MAX_DEPT_NAME_LEN                       (256)       /**< [en]Indicates the maximum length of the dept name.
                                                                     [cn]部门名称最大长度 */

#define HWM_MAX_SIGNATURE_NAME_LEN                  (256)       /**< [en]Indicates the maximum length of signature.
                                                                     [cn]鉴权信息最大长度 */

#define HWM_MAX_TITLE_NAME_LEN                      (256)       /**< [en]Indicates the maximum length of the title.
                                                                     [cn]职位名称最大长度 */

#define HWM_MAX_DESCRIPTION_LEN                     (512)       /**< [en]Indicates the maximum length of dot data error description.
                                                                     [cn]打点信息错误描述最大长度*/

#define HWM_MAX_USER_ID_LEN                         (256)       /**< [en]Indicates the maximum length of the user id
                                                                     [cn]用户ID最大长度*/

#define HWM_MAX_USER_TYPE_LENGTH                    (32)       /**<  [en]Indicates the maximum length of user type.
                                                                     [cn]用户类型最大长度 */

#define HWM_MAX_USER_LANGUAGE_LEN                   (64)       /**<  [en]Indicates the maximum length of language type.
                                                                     [cn]语言类型最大长度 */

#define HWM_MAX_INVITE_ID_LEN                       (64)        /**< [en]Indicates XXX.
                                                                     [cn]企业邀请Id最大长度 */

#define HWM_MAX_INVITE_CODE_LEN                     (256)       /**< [en]Indicates XXX.
                                                                     [cn]企业邀请码最大长度 */

#define HWM_MAX_APPID_LEN                           (128)       /**< [en]Indicates XXX.
                                                                     [cn]appid最大长度 */

#define HWM_MAX_OS_NAME_LEN                         (192)       /**< [en]Indicates XXX.
                                                                     [cn]操作系统名称最大长度 */

#define HWM_MAX_IP_STR_LEN                          (64)        /**< [en]Indicates XXX.
                                                                     [cn]IP地址字符串最大长度 */

#define HWM_MAX_CONF_ID_PREFIX_LEN                  (32)        /**< [en]Indicates XXX.
                                                                     [cn]会议前缀最大长度 */
#define HWM_MAX_PARTICIPANTID_LEN                   (128)       /**< [en]Indicates the maximum length of participantId.
                                                                     [cn] 与会者列表唯一标识最大长度*/

#define HWM_MAX_AUDIO_ENCODE_NUMBER                  (1)        /**< [en]Indicates XXX.
                                                                     [cn]音频编码数 */

#define HWM_MAX_AUDIO_DECODE_NUMBER                  (17)       /**< [en]Indicates XXX.
                                                                     [cn]音频解码数 */

#define HWM_MAX_VIDEO_ENCODE_NUMBER                  (4)        /**< [en]Indicates XXX.
                                                                     [cn]视频编码数 */

#define HWM_MAX_VIDEO_DECODE_NUMBER                  (24)       /**< [en]Indicates XXX.
                                                                     [cn]视频解码数 */

#define HWM_MAX_CODEC_NAME_LEN                       (31)       /**< [en]Indicates the length of audio and video codec name
                                                                     [cn]音视频编解码名称长度 */

#define HWM_MAX_RESOLUTION_LEN                       (32)       /**< [en]Indicates the length of resolution
                                                                     [cn]分辨率长度 */

#define HWM_MAX_CODEC_LIST_LEN                        127       /**< [en]Indicates the maximum length of audio codec list,separate by comma
                                                                     [cn]音频编解码名称链最大长度，以逗号分割*/

#define HWM_MAX_PROTOCOL_LENGTH                       30        /**< [en]Indicates the maximum length of protocol string
                                                                     [cn]协议名字字符串最大长度 */

#define HWM_MAX_VIDEO_PROFILE_LEN                      8        /**< [en]Indicates the length of video codec format
                                                                     [cn]视频编解码格式长度*/

#define HWM_MAX_SVC_WATCH_CONF_NUM                     25       /**< [en]Maximum number of svc watch conf number
                                                                     [cn] 多流选看最多窗口个数 */

#define HWM_MAX_ACCESS_NUM_LEN                      (128)     /**< [en]Indicates the maximum length of access number
                                                                     [cn]最大会议接码长度  */
#define HWM_MAX_CORP_NAME_LEN                       (256)     /**< [en]Indicates the maximum length of corp name
                                                                     [cn]最大企业名长度  */
#define HWM_MAX_TIME_ZONE_LEN                       (32)
#define HWM_MAX_VMR_CONF_ID_LEN                     (128)
#define HWM_MAX_CONF_PASWD_LEN                      (32)
#define HWM_MAX_VERSION_LEN                         (16)
#define HWM_MAX_DEVICE_ID_LEN                       (128)
#define HWM_MAX_BRAND_LEN                           (64)
#define HWM_MAX_DEVICE_MODEL_LEN                    (64)
#define HWM_MAX_CPU_INFO_LEN                        (256)
#define HWM_MAX_RESOLUTION_LEN                      (32)
#define HWM_MAX_APP_ID_LEN                          (64)
#define HWM_UTILS_MAX_LANGUAGE_LEN                  (16)
#define HWM_MAX_OPERATE_SYSTEM_NAME_LEN             (16)
#define HWM_MAX_OPERATE_SYSTEM_VERSION_LEN          (256)
#define HWM_MAX_CARRIER_NAME_LEN                    (32)
#define HWM_MAX_ACCESS_INFO_LEN                     (16)
#define HWM_MAX_ACCESS_SUB_TYPE_LEN                 (16)
#define HWM_MAX_MAX_TENANT_ID_LEN                   (128)
#define HWM_MAX_GPU_INFO_LEN                        (256)
#define HWM_UTILS_MAX_DEVICE_GUID_LEN               (256)

#define HWM_MAX_IMGROUP_ID_LENGTH                      (24)     /**< [en]Indicates the maximum length waiting room im group id
                                                                     <br>[cn]等候室聊天群组ID  */
#define HWM_MAX_WAITING_ROOM_NOTICE_LEN                (512)    /**< [en]Indicates the maximum length waiting room notice
                                                                     <br>[cn]等候室欢迎信息最大长度  */
#define HWM_MAX_ADD_TIME_LENGTH                        (32)     /**< [en]Indicates the maximum length add time
                                                                     <br>[cn]与会者加入时间  */

#define HWM_MAX_DETECT_SERVER_NUM                   (4)
#define HWM_MAX_PRODUCT_NAME_LEN                    (256)       /**< [en]Indicates the maximum length of the product name.
                                                                     <br>[cn]最大产品名称长度 */
#define HWM_MAX_SOFTWARE_VER_LEN                    (128)       /**< [en]Indicates the maximum length of the software version.
                                                                     <br>[cn]最大软件版本长度 */
#define HWM_MAX_VERSION_DESCRIPTION_LEN             (2048)      /**< [en]Indicates the maximum number of verdion description information length.
                                                                     <br>[cn]版本描述信息最大长度*/
#define HWM_MAX_DOMAIN_LENGTH                       (256)       /**< [en]Indicates the maximum length of domain.
                                                                     <br>[cn]最大域名长度 */
#define HWM_MAX_VERSION_DOWNLOAD_URL_LEN            (512)       /**< [en]Indicates the maximum number of verdion download url length.
                                                                     <br>[cn]版本下载url最大长度*/
#define HWM_MAX_PATH_LEN                            (256)       /**< [en]Indicates the maximum length of the path.
                                                                     <br>[cn]最大路径长度 */
#define HWM_OBS_URL_LENGTH                          (1024)

#define HWM_SSO_URL_LENGTH                          (1024)
#define HWM_MAX_SSO_CODE_LEN                        (1024)
#define HWM_MAX_SSO_DOMAIN_LEN                      (1024)
#define HWM_MAX_SSO_AUTHSERVERTYPE_LEN              (256)

#define HWM_CONTENT_TYPE_LEN                        (256)
#define HWM_MAX_FILE_NAME_LEN                       (128)       /**< [en]Indicates the maximum length of the file name.
                                                                     <br>[cn]最大文件名长度 */
#define HWM_MAX_FUNC_NAME_LEN                       (128)       /**< [en]Indicates the maximum length of the function name.
                                                                     <br>[cn]最大函数名长度 */
#define HWM_MAX_PROJECTION_CODE_LEN                 (32)        /**< [en]Indicates the maximum length of projection code.
                                                                     <br>[cn]最大投影码长度 */
#define HWM_MAX_KEY_LEN                             (128)       /**< [en]Indicates the maximum length of key.
                                                                     <br>[cn]最大key值长度 */
#define HWM_MAX_VALUE_LEN                           (256)       /**< [en]Indicates the maximum length of value.
                                                                     <br>[cn]最大value值长度 */
#define HWM_MAX_COMPRESS_FILE_PATH_LEN              (1024)
#define HWM_MAX_FEED_BACK_CONTENT_LEN               (1024)
#define HWM_MAX_MAC_LEN                             (32)        /**< [en]Indicates the maximum length of the MAC address.
                                                                     <br>[cn]MAC地址长度 */
#define HWM_MAX_CPUID_LEN                           (64)
#define HWM_UTILS_MAX_DATA_KEY_LEN                  (1024)
#define HWM_UTILS_MAX_DATA_VALUE_LEN                (2048)
#define HWM_UTILS_MAX_DATE_LEN                      (128)
#define HWM_UTILS_MAX_HEADER_LEN                    (256)
#define HWM_UTILS_MAX_ACTIVE_INFO_BODY_LEN          (1024)
#define HWM_UTILS_MAX_REG_GUID_LEN                  (1024)
#define HWM_UTILS_MAX_REG_THEME_LEN                 (1024)
#define HWM_UTILS_MAX_REG_PROXY_SERVER_LEN          (1024)
#define HWM_UTILS_MAX_REG_PROXY_OVERRIDE_LEN        (2048)
#define HWM_MAX_CONF_UUID_LEN                       (256)      /**< [en]Indicates conference uuid. [cn]会议uuid */
#define HWM_MAX_SUBTITLE_LEN                        (2048)      /**< 最大字幕长度*/
#define HWM_MAX_MSG_ID_LEN                          (64)        /**< 消息ID最大长度*/
#define HWM_MAX_BIOS_VENDOR_LEN                     (32)
#define HWM_MAX_MULTI_INFO_LENGTH                   (64)
#define HWM_UT_GLOBAL_ERROR_CODE_BEGIN              (416000000)
#define HWM_UTILS_MAX_BATCH_COUNT                   (256)
#define HWM_MAX_PAIR_KEY_LEN                        (32)
#define HWM_MAX_PAIR_UNIVERSAL_LEN                  (512)   /**< 配对通用信息最大长度*/
#define HWM_MAX_PAIR_UNIVERSAL_COMMAND_LEN          (512)   /**< 配对指令信息最大长度*/
#define HWM_MAX_LOG_LEN                             (1024)
#define HWM_RESOLVE_LEN                             (128)
#define HWM_MAX_CONF_POINTS_LENGTH                  (128)
#define HWM_MAX_SUB_CONF_SIZE                       (50)
#define HWM_MAX_NAME_LENGTH                         (128)
#define HWM_MAX_USERID_LENGTH                       (128)
#define HWM_MAX_APPLICANT_DESCRIPTION_LEN           (256)
#define HWM_MAX_LOGIN_SN_LEN                        (32)        /**< SN最大长度  */
#define HWM_MAX_LOGIN_DEVICE_LEN                    (32)        /**< 设备类型最大长度  */
#define HWM_MAX_LOGIN_ACTIVE_CODE_LEN               (30)        /**< 激活码最大长度  */
#define HWM_MAX_LOGIN_DEVICE_NAME_LEN               (192)       /**< 设备名称最大长度  */
#define HWM_MAX_LOGIN_DEVICE_VER_LEN                (128)       /**< 设备版本最大长度  */
#define HWM_MAX_LOGIN_CHANNEL_LEN                   (20)        /**< 渠道类型最大长度  */

BEGIN_HWM_SDK_NAMESPACE

template<class T>
class HwmList
{
public:
    virtual ~HwmList() {};
    virtual HWM_UINT32 GetSize() = 0;
    virtual bool GetItem(HWM_UINT32 index, T& val) = 0;
    virtual void PushBack(const T& val) = 0;
    static HwmList<T>* CreateList();
    static void DestroyList(HwmList<T>* list);
};

END_HWM_SDK_NAMESPACE

#endif /* __HWM_SDK_COMMON_DEF_H__ */