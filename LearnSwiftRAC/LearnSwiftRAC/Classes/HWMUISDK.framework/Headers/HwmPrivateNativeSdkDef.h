/**
 * @file HwmSdkDef.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */


#ifndef __HWM_SDK_PRIVATE_DEF_H__
#define __HWM_SDK_PRIVATE_DEF_H__

#import "HwmSdkCommonDef.h"
#import "HwmLoginServiceDef.h"
#import "HwmNativeSdkDef.h"


BEGIN_HWM_SDK_NAMESPACE

/**
* [en]This structure is used to describe the application param.
* [cn]应用程序信息参数(私有)
* @private
*/
typedef struct tagAppInfoParamPrivate
{
    AppInfoParam appInfoParam;                              /**< [extends][en]describe the application param.
                                                            [cn]应用程序信息参数 */
    ClientType clientType;                                  /**< [en]Indicates type of client.
                                                            [cn]客户端类型 */
    HWM_BOOL isWelink;                                       /**< [en]is welink terminalType.
                                                            [cn]是否welink */
    HWM_CHAR terminalType[HWM_MAX_DEVICETYPE_LEN];          /**< [en]Indicates xxx.
                                                            [cn]终端类型 */
    HWM_CHAR appVersion[HWM_MAX_CLIENT_VERSION_LEN];        /**< [en]Indicates app version.
                                                            [cn]应用版本 */
    HWM_CHAR osName[HWM_MAX_OS_NAME_LEN];                   /**< [en]Indicates xxx.
                                                            [cn]操作系统 */
    HWM_CHAR deviceModel[HWM_MAX_DEVICETYPE_LEN];           /**< [en]Indicates xxx.
                                                            [cn]手机终端类型 */
    DevicePerformanceLevel deviceLevel;                     /**< [en]Indicates device performancelevel.
                                                            [cn]设备性能等级 */
    HWM_CHAR pcBsMoudlePath[HWM_MAX_FILE_PATH_LEN];           /**< [en]Indicates xxx.
                                                            [cn]资源路径-虚拟背景模型文件 */
    HWM_CHAR pcBsMoudleCpuPath[HWM_MAX_FILE_PATH_LEN];        /**< [en]Indicates xxx.
                                                            [cn]资源路径-虚拟背景模型文件(供CPU模式使用) */
    HWM_CHAR pcSegProcPath[HWM_MAX_FILE_PATH_LEN];            /**< [en]Indicates xxx.
                                                            [cn]资源路径-虚拟背景proc.exe文件 */
    HWM_CHAR pcSegCoordPath[HWM_MAX_FILE_PATH_LEN];           /**< [en]Indicates xxx.
                                                            [cn]资源路径-虚拟背景Coord文件 */
    HWM_CHAR virtualBackgroundPluginModelPath[HWM_MAX_FILE_PATH_LEN];    /**< [en]Indicates xxx.
                                                            [cn]资源路径-虚拟背景第三方插件模型 */
    HWM_CHAR frameworksPath[HWM_MAX_FILE_PATH_LEN];         /**< [en]Indicates xxx.
                                                            [cn]资源路径-framework路径 */
    HWM_UINT32 logKeepDays;                                 /**< [en]Indicates the log keeping days.
                                                            [cn] 配置项-日志保存天数，0为使用SDK内部策略，非0情况范围3-30 */
}AppInfoParamPrivate;

/**
* [en]This structure is used to describe the android application ability.
* [cn]android应用程序能力
* @private
* @pc:disable
* @ios:disable
*/
typedef struct tagAndroidAppAbilityPrivate
{
    HWM_BOOL supportPairServer;                     /**< [en]if support pair server.
                                                            [cn]是否扫码配对服务（被扫码） */
    HWM_BOOL supportHdSvc;                          /**< [en]if support High Definition svc.
                                                            [cn]是否支持高分辨率多流会议 */
}AndroidAppAbilityPrivate;

/**
* [en]This structure is used to describe the android application param.
* [cn]android应用程序信息参数
* @private
* @pc:disable
* @ios:disable
*/
typedef struct tagAndroidAppInfoParamPrivate
{
    AppInfoParamPrivate appInfoPrivate;                     /**< [extends][en]describe the application param.
                                                            [cn]android私有应用程序信息参数 */
    HWM_CHAR channelPartner[HWM_MAX_CHANNEL_PARTNER_LEN];   /**< [en]Indicates channel partner.
                                                            [cn]渠道商 */
    HWM_CHAR srmoudlePath[HWM_MAX_FILE_PATH_LEN];           /**< [en]Indicates xxx.
                                                            [cn]算法路径-虚拟背景 */
    HWM_CHAR bsmoudlePath[HWM_MAX_FILE_PATH_LEN];           /**< [en]Indicates xxx.
                                                            [cn]资源路径-虚拟背景 */
    HWM_BOOL enableExternalCapture;                         /**< [en]Indicates external capture.
                                                            [cn]配置项-外部采集模式 */
    HWM_BOOL enableExternalAudioCapture;                    /**< [en]Indicates external audio capture.
                                                            [cn]配置项-外部音频采集模式 */
    HWM_UINT32 sampleRate;                                    /**< [en]Indicates external audio capture sampleRate.
                                                            [cn]配置项-外部音频采集的采样率 */
    AndroidAppAbilityPrivate androidAbility;                /**< [en]android ability.
                                                            [cn]安卓能力 */
}AndroidAppInfoParamPrivate;

END_HWM_SDK_NAMESPACE

#endif /* __HWM_SDK_DEF_H__ */


