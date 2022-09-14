/**
 * @file HwmSdkDef.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */


#ifndef __HWM_SDK_DEF_H__
#define __HWM_SDK_DEF_H__

#import "HwmSdkCommonDef.h"
#import "HwmLoginServiceDef.h"

#define HWM_SDK_LOG_FILE_NAME   "hwm_sdk.txt"
#define HWM_SDK_LOG_SIZE_DEFAULT   (5120)
#define HWM_SDK_LOG_FILE_CONUT_DEFAULT   (2)



BEGIN_HWM_SDK_NAMESPACE

/**
 * [en]This enumeration is used to describe the log level
 * [cn]日志级别
 */
typedef enum tagLogLevel
{
    LOG_ERROR = 0,                              /**< [en]Indicates the error level
                                                        [cn]错误级别
                                                        [ios:rename:Error] */
    LOG_WARNING,                                /**< [en]Indicates the warning level
                                                         [cn]警告级别
                                                         [ios:rename:Warning] */
    LOG_INFO,                                   /**< [en]Indicates the info level
                                                         [cn]信息(一般)级别
                                                         [ios:rename:Info] */
    LOG_DEBUG,                                  /**< [en]Indicates the debug level
                                                         [cn]调试级别
                                                         [ios:rename:Debug] */
    LOG_LEVEL_BUTT                              /**< [ios:rename:Butt] */
}LogLevel;

/**
* [en]xxxx
* [cn]sdk版本信息
*/
typedef struct tagSdkInfo
{
    HWM_CHAR version[HWM_MAX_CLIENT_VERSION_LEN];           /**< [en]Indicates sdk version.
                                                                 [cn]sdk版本号 */
}SdkInfo;


/**
 * [en]This structure is used to describe the log param.
 * [cn]日志参数
 */
typedef struct tagLogParam
{
    LogLevel level;                                 /**< [en]Indicates log level。
                                                         [cn]日志级别 
                                                         [cs_allowNull:N] */
    HWM_CHAR path[HWM_MAX_FILE_PATH_LEN];           /**< [en]Indicates directory for storing log files.
                                                         [cn]日志存放路径 
                                                         [cs_allowNull:N][cs_length:1-512] */
    HWM_INT32 logSize;                              /**< [en]Indicates xxx.
                                                         [cn]日志文件大小 
                                                         [cs_allowNull:N]*/
    HWM_INT32 fileCount;                            /**< [en]Indicates xxx.
                                                         [cn]日志文件个数 
                                                         [cs_allowNull:N]*/
}LogParam;

/**
* [en]This structure is used to describe the application param.
* [cn]应用程序信息参数
*/
typedef struct tagAppInfoParam
{
    HWM_CHAR userDataFolderPath[HWM_MAX_FILE_PATH_LEN];     /**< [en]Indicates directory for user data path.
                                                            [cn]SDK生成的用户数据文件存放路径。为空时使用默认路径
                                                            [cs_allowNull:Y][cs_length:0-512]
                                                            [cs_default_windows:windows下的默认路径为"%appdata%\HuaweiMeetingSDK\Data"] 
                                                            [cs_default_android:安卓下的默认路径为"/data/data/包名/files"]
                                                            [cs_default_mac:Mac下的默认路径为"~/Library/Containers/com.huawei.cloud.welinkmeeting/Data/Library/Application Support/WeLinkMeeting/Data/DB"] 
                                                            [cs_default_ios:iOS下的默认路径为"~/Library"] */
    HWM_CHAR logFolderPath[HWM_MAX_FILE_PATH_LEN];          /**< [en]Indicates directory for log files.
                                                            [cn]日志存放路径。为空时使用默认路径
                                                            [cs_allowNull:Y][cs_length:0-512]
                                                            [cs_default_windows:windows下的默认路径为"%appdata%\HuaweiMeetingSDK\Log"] 
                                                            [cs_default_android:安卓下的默认路径为"/data/data/包名/files"]
                                                            [cs_default_mac:Mac下的默认路径为"~/Library/Containers/com.huawei.cloud.welinkmeeting/Data/Library/Application Support/WeLinkMeeting/Logs"] 
                                                            [cs_default_ios:iOS下的默认路径为"~/Library/log"] */
    HWM_CHAR ringFolderPath[HWM_MAX_FILE_PATH_LEN];         /**< [en]Indicates directory for ring file.
                                                            [cn]提示音文件存放路径，提示音文件(目前只支持wav格式）：1.dingdong.wav：入会提示音“叮咚声”文件  2.mute.wav：会中被静音时的提示音文件  
                                                            3.unmute.wav：会中被解除静音时的提示音文件，实际使用时需要从demo中将wav文件复制到app对应的路径下
                                                            [cs_allowNull:N][cs_length:0-512]*/
    HWM_CHAR defaultAvatarFilePath[HWM_MAX_FILE_PATH_LEN];  /**< [en]Indicates default avatar file path.
                                                            [cn]图片文件存放路径, 默认图片文件是default_camera.bmp(传给hme渲染默认头像）,实际使用时需要从demo中将bmp文件复制到app对应的路径下
                                                            [cs_allowNull:N][cs_length:0-512]*/

    HWM_CHAR appId[HWM_MAX_APPID_LEN];                  /**< [en]Indicates the app ID.
                                                             [cn]APP ID
                                                             [cs_allowNull:N][cs_length:1-128] */
}AppInfoParam;


END_HWM_SDK_NAMESPACE

#endif /* __HWM_SDK_DEF_H__ */


