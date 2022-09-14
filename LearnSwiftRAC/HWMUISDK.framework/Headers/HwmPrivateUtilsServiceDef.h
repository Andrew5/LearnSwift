/**
 * @file HwmLoginServiceDef.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */


#ifndef __HWM_PRIVATE_UTILS_SERVICE_DEF_H__
#define __HWM_PRIVATE_UTILS_SERVICE_DEF_H__

#import "HwmSdkCommonDef.h"
#import "HwmUtilsServiceDef.h"

BEGIN_HWM_SDK_NAMESPACE

/**
* [en]This structure is used to describe the custom parameter.
* [cn]通用参数
*/
typedef struct tagUtilsCustomParam
{
    HWM_BOOL uploadSwitch;                /**< [en]Indicates the upload switch.
                                                         [cn]上传开关 
                                                         [cs_allowNull:N] */
    HWM_UINT32 uploadCount;               /**< [en]Indicates the maximum data count per upload action.
                                                         [cn]单次上传打点数据最大数量 
                                                         [cs_allowNull:N] */
    HWM_UINT32 timeInterval;              /**< [en]Indicates the upload interval.
                                                         [cn]上传时间间隔 
                                                         [cs_allowNull:N] */
}UtilsCustomParam;

/**
* [en]This structure is used to describe the public parameter.
* [cn]公共参数
*/
typedef struct tagUtilsPublicParam
{
    HWM_CHAR version[HWM_MAX_VERSION_LEN];                      /**< [en]Indicates the software version.
                                                                     [cn]终端软件版本号 
                                                                     [cs_allowNull:Y][cs_length:1-16] */
    HWM_CHAR deviceId[HWM_MAX_DEVICE_ID_LEN];                   /**< [en]Indicates the device ID.
                                                                     [cn]设备序列号，PAD/手机/PC不填，话机填写序列号 
                                                                     [cs_allowNull:Y][cs_length:1-128] */
    HWM_CHAR brand[HWM_MAX_BRAND_LEN];                          /**< [en]Indicates the device brand.
                                                                     [cn]设备品牌，仅手机和PAD上报，如：HuaWei 
                                                                     [cs_allowNull:Y][cs_length:1-64] */
    HWM_CHAR deviceModel[HWM_MAX_DEVICE_MODEL_LEN];             /**< [en]Indicates the device mode;.
                                                                     [cn]设备型号，仅手机和PAD上报，如：Mate20 
                                                                     [cs_allowNull:Y][cs_length:1-64] */
    HWM_CHAR cpu[HWM_MAX_CPU_INFO_LEN];                         /**< [en]Indicates the cpu info.
                                                                     [cn]CPU信息：如：Hisilicon Kirin 980,没有就不填写
                                                                     [cs_allowNull:Y][cs_length:0-256] */
    HWM_CHAR resolution[HWM_MAX_RESOLUTION_LEN];                /**< [en]Indicates the resolution.
                                                                     [cn]分辨率，如1920*1080 
                                                                     [cs_allowNull:Y][cs_length:1-32] */
    HWM_CHAR appId[HWM_MAX_APP_ID_LEN];                         /**< [en]Indicates the app id.
                                                                     [cn]应用标识，服务器提供平台绑定应用，目前服务器暂不支持，所以暂时填充应用名称，具体为：应用名称 华为会议设置为CloudLink、workplace这边设置为WeLink、opensdk集成使用集成商提供的名称+SDK类型 例如：正集源OKODM：AndroidNativeSDK, AndroidUISDK, iOSNativeSDK, iOSUISDK, WindowsNativeSDK, WindowsUISDK, WebSDK 
                                                                     [cs_allowNull:Y][cs_length:1-64] */
    HWM_CHAR language[HWM_UTILS_MAX_LANGUAGE_LEN];              /**< [en]Indicates the language.
                                                                     [cn]使用语言，如：CN（待确认值、统一使用预定义的其中一个，不自动生成，防止取值碎片化）
                                                                     [cs_allowNull:Y][cs_length:1-16] */
    HWM_CHAR osName[HWM_MAX_OPERATE_SYSTEM_NAME_LEN];           /**< [en]Indicates the operate system name.
                                                                     [cn]系统名称 
                                                                     [cs_allowNull:Y][cs_length:1-16] */
    HWM_CHAR osVersion[HWM_MAX_OPERATE_SYSTEM_VERSION_LEN];     /**< [en]Indicates the operate system version.
                                                                     [cn]系统版本号 
                                                                     [cs_allowNull:Y][cs_length:1-256] */
    HWM_CHAR carrier[HWM_MAX_CARRIER_NAME_LEN];                 /**< [en]Indicates the carrier.
                                                                     [cn]运营商 
                                                                     [cs_allowNull:Y][cs_length:1-32] */
    HWM_CHAR access[HWM_MAX_ACCESS_INFO_LEN];                   /**< [en]Indicates the access infomation.
                                                                     [cn]接入信息，如：2G/3G/4G/Wifi/cable/other   
                                                                     [cs_allowNull:Y][cs_length:1-16] */
    HWM_CHAR accessSubtype[HWM_MAX_ACCESS_SUB_TYPE_LEN];        /**< [en]Indicates the access subtype.
                                                                     [cn]接入网络子类型，如WCDMA、Unknow，wifi填写Unknow 
                                                                     [cs_allowNull:Y][cs_length:1-16] */
    HWM_CHAR tenantId[HWM_MAX_TENANT_ID_LEN];                   /**< [en]Indicates the tenant ID.
                                                                     [cn]租户id，用于welink 
                                                                     [cs_allowNull:Y][cs_length:1-256] */
    HWM_CHAR channelId[HWM_MAX_DEVICE_ID_LEN];                  /**< [en]Indicates the channel ID.
                                                                     [cn]渠道id 
                                                                     [cs_allowNull:Y][cs_length:1-128] */
    HWM_CHAR gpu[HWM_MAX_GPU_INFO_LEN];                         /**< [en]Indicates the GPU information.
                                                                     [cn]GPU信息 
                                                                     [cs_allowNull:Y][cs_length:1-256] */
}UtilsPublicParam;

typedef struct tagUtilsSmartRoomParam
{
    HWM_CHAR macAddr[HWM_MAX_MAC_LEN];                         /**< [en]Indicates the mac address information.
                                                                     [cn]Mac地址信息 
                                                                     [cs_allowNull:Y][cs_length:1-32] */
}UtilsSmartRoomParam;


/**
* [en]This structure is used to describe the special parameter.
* [cn]特殊参数
*/
typedef struct tagUtilSpecialParam
{
    HWM_CHAR eventId[HWM_MAX_EVENT_ID_LEN];                      /**< [en]Indicates the event ID.
                                                                      [cn]预定义的事件ID 
                                                                      [cs_allowNull:N][cs_length:1-16] */
    HWM_CHAR arg1[HWM_MAX_ARG1_LEN];                             /**< [en]Indicates the first argument.
                                                                      [cn]单个事件中需要快速提取进行统计的字段(需要各个打点事件根据实际情况使用，不一定需要用到)
                                                                      [cs_allowNull:Y][cs_length:0-256] */
    HWM_CHAR arg2[HWM_MAX_ARG2_LEN];                             /**< [en]Indicates the second argument.
                                                                      [cn]单个事件中需要快速提取进行统计的字段(需要各个打点事件根据实际情况使用，不一定需要用到) 
                                                                      [cs_allowNull:Y][cs_length:0-256] */
    HWM_CHAR arg3[HWM_MAX_ARG3_LEN];                             /**< [en]Indicates the third argument.
                                                                      [cn]单个事件中需要快速提取进行统计的字段(需要各个打点事件根据实际情况使用，不一定需要用到) 
                                                                      [cs_allowNull:Y][cs_length:0-256] */
    HWM_CHAR args[HWM_MAX_ARG_LEN];                              /**< [en]Indicates the other argument.
                                                                      [cn]事件中其他字段，内容为json体,key跟value自定义(需要各个打点事件根据实际情况使用，不一定需要用到) 
                                                                      [cs_allowNull:Y][cs_length:0-8192] */
    HWM_UINT32 maxIntervalMs;                                     /**<[en]max interval for finishEvent.
                                                                      [cn]统计时长的最大时间间隔，单位为毫秒，FinishEvent传递该值，如果统计超过该时间间隔则不打点 */
}UtilSpecialParam;

/**
* [en]This structure is used to describe the cpu information.
* [cn]CPU信息
* @mobile:disable
*/
typedef struct tagUtilsCpuAndMemoryParam
{
    HWM_UINT32 cpuCoreCount;                                    /**< [en]Indicates the number of CPU core.
                                                                     [cn]Cpu核数 */
    HWM_UINT32 cpuThreadCount;                                  /**< [en]Indicates the number of CPU thread.
                                                                     [cn]Cpu线程数 */
    HWM_UINT32 cpuFrequency;                                    /**< [en]Indicates the CPU frequency.
                                                                     [cn]Cpu频率 */
    HWM_CHAR cpuProcessName[HWM_MAX_CPU_PROCESS_NAME_LEN];      /**< [en]Indicates the CPU process name.
                                                                     [cn]Cpu型号*/
}UtilsCpuAndMemoryParam;

typedef struct tagUtilsNetDetectSrvs
{
    HWM_CHAR internetSrv[HWM_MAX_URL_LEN];                      /**< [en]Indicates the internet server.
                                                                     [cn]外网地址 */
    HWM_CHAR middleSrv[HWM_MAX_URL_LEN];                        /**< [en]Indicates the middle server.
                                                                     [cn]中台地址 */
    HWM_CHAR msSrv[HWM_MAX_URL_LEN];                            /**< [en]Indicates the ms server.
                                                                     [cn]ms地址 */
    HWM_CHAR sbcSrv[HWM_MAX_URL_LEN];                           /**< [en]Indicates the sbc server.
                                                                     [cn]sbc地址 */
}UtilsNetDetectSrvs;

typedef enum tagUtilsNetDetectQos
{
    UTILS_NET_DETECT_QOS_GOOD,                                  /**< [en]Indicates the net quality is excellent.
                                                                     [cn]网络质量优秀
                                                                     [ios:rename:Good] */
    UTILS_NET_DETECT_QOS_NORMAL,                                /**< [en]Indicates the net quality is good.
                                                                     [cn]网络质量一般
                                                                     [ios:rename:Normal] */
    UTILS_NET_DETECT_QOS_BAD,                                   /**< [en]Indicates the net quality is bad.
                                                                     [cn]网络质量差
                                                                     [ios:rename:Bad] */
    UTILS_NET_DETECT_QOS_DISCONNECT,                            /**< [en]Indicates could not connect.
                                                                     [cn]网络无法链接
                                                                     [ios:rename:Disconnect] */
    UTILS_NET_DETECT_QOS_BUTT                                   /**< [en]Indicates the invalid value.
                                                                     [cn]无效值
                                                                     [ios:rename:Butt] */
} UtilsNetDetectQos;

typedef struct tagUtilsNetDetectResult
{
    HWM_UINT32        sn;                                       /**< [en]Indicates the detect sn number.
                                                                     [cn]本次探测sn号，用于应用层将探测命令和探测结果消息对应起来 */
    HWM_UINT32        currentState;                             /**< [en]Indicates the current state.
                                                                     [cn]当前返回结果所处的阶段 */
    HWM_UINT32        totalState;                               /**< [en]Indicates the total state number.
                                                                     [cn]检测总共阶段数 */
    UtilsNetDetectQos result;                                   /**< [en]Indicates the really detect result.
                                                                     [cn]最终返回给应用层的探测结果 */
    HWM_UINT32        averageDelay;                             /**< [en]Indicates the average delay.
                                                                     [cn]平均时延 */
    HWM_UINT32        maxDelay;                                 /**< [en]Indicates the maximum delay.
                                                                     [cn]最大时延 */
    HWM_UINT32        minDelay;                                 /**< [en]Indicates the minimum delay.
                                                                     [cn]最小时延 */
    HWM_UINT32        discard;                                  /**< [en]Indicates the discard.
                                                                     [cn]丢包率 */
    HWM_BOOL         isProxy;                                   /**< [en]Indicates whether has a proxy.
                                                                     [cn]是否配置有prxoy, APP需要根据这个字段做不同提示文案 */
    HWM_BOOL         isReturn;                                  /**< [en]Indicates whether has a detect result.
                                                                     [cn]探测结果是否返回，该参数在检测对象内部使用，APP不涉及 */
    HWM_BOOL         isReported;                                /**< [en]Indicates whether report the detect result.
                                                                     [cn]探测结果是否上报通知，该参数在检测对象内部使用，APP不涉及 */
} UtilsNetDetectResult;

typedef struct tagUtilsDeviceGuid
{
    HWM_CHAR deviceGuid[HWM_UTILS_MAX_DEVICE_GUID_LEN];             /**< [en]Indicates the device GUID.
                                                                         [cn]设置GUID */
}UtilsDeviceGuid;

/**
* [en]This structure is used to config cache.
* [cn]配置数据结构
* @mobile:disable
*/
typedef struct tagUtilsConfigCache
{
    HWM_INT32 autoId;                               /**< [en]Indicates the data auto id. [cn]数据ID（主键，如果为0则会自增）*/
    HWM_CHAR key[HWM_UTILS_MAX_DATA_KEY_LEN];       /**< [en]Indicates the data key. [cn]数据key */
    HWM_CHAR value[HWM_UTILS_MAX_DATA_VALUE_LEN];   /**< [en]Indicates the data value. [cn]key对应的value */

}UtilsConfigCache;

/**
* [en]This structure is board active infos.
* [cn]激活信息数据结构
* @mobile:disable
*/
typedef struct tagUtilsBoardActiveInfos
{
    HWM_CHAR header[HWM_UTILS_MAX_HEADER_LEN];
    HWM_CHAR date[HWM_UTILS_MAX_DATE_LEN];
    HWM_CHAR userAccount[HWM_MAX_ACCOUNT_LEN];
    HWM_CHAR userName[HWM_MAX_NAME_LEN];
    HWM_CHAR macAddress[HWM_MAX_MAC_LEN];
    HWM_CHAR body[HWM_UTILS_MAX_ACTIVE_INFO_BODY_LEN];
    HWM_CHAR biosVendor[HWM_MAX_BIOS_VENDOR_LEN];
    HWM_BOOL isWhiteBoard;
}UtilsBoardActiveInfos;

/**
* [en]This structure is regster infos.
* [cn]注册信息数据结构
* @mobile:disable
*/
typedef struct tagUtilsRegInfos
{
    HWM_CHAR deviceValue[HWM_UTILS_MAX_REG_GUID_LEN];
    HWM_CHAR currentTheme[HWM_UTILS_MAX_REG_THEME_LEN];
    HWM_CHAR proxyserver[HWM_UTILS_MAX_REG_PROXY_SERVER_LEN];
    HWM_CHAR proxyOverride[HWM_UTILS_MAX_REG_PROXY_OVERRIDE_LEN];
    HWM_INT64 proxyEnable;
}UtilsRegInfos;

/**
* [en]This structure is country or region infos.
* [cn]国家或者区域信息数据结构
* @mobile:disable
* @mac:disable
*/
typedef struct tagCountryOrRegionInfos
{
    HWM_INT32 geoId;
    wchar_t geoName[HWM_UTILS_MAX_BATCH_COUNT];
}CountryOrRegionInfos;

END_HWM_SDK_NAMESPACE
#endif /* __HWM_UTILS_SERVICE_DEF_H__ */

