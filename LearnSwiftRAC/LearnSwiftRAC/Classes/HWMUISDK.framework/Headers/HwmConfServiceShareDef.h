/**
 * @file HwmConfServiceDef.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */


#ifndef __HWM_CONF_SERVICE_SHARE_DEF_H__
#define __HWM_CONF_SERVICE_SHARE_DEF_H__

#import "HwmConfServiceDef.h"

BEGIN_HWM_SDK_NAMESPACE


/**
* [en]This structure is used to describe share connect state.
* [cn]共享连接状态
*/
typedef enum tagShareConnectStatus
{
    SHARE_CONNECTED_SUCCESS,            /**< [en]Indicates The share conference is successfully connected and can use share capability. [cn]共享会议连接成功，可以使用共享能力 */
    SHARE_CONNECTING,                  /**< [en]Indicates The share conference is connecting. [cn]共享会议正在连接中 */
    SHARE_CONNECTED_FAILED              /**< [en]Indicates The share conference is connected failed, no sharing capability. [cn]共享会议连接失败 */
}ShareConnectStatus;

/**
* [en]This structure is used to describe share config.
* [cn]共享的公共配置
*/
typedef struct tagShareConfig
{
    HWM_BOOL isShareAudio;   /**< [en]Indicates whether to share audio or not. [cn]是否共享音频 */
    HWM_BOOL isFluencyFirst; /**< [en]Indicates whether fluency first or not. [cn]是否流畅性优先 */
    HWM_BOOL isOpenGpuAcceleration; /**< [en]Indicates whether to enable GPU acceleration. [cn]是否开启gpu加速 */
}ShareConfig;


/**
* [en]This structure is used to describe share type.
* [cn]共享类型
*/
typedef enum tagShareType
{
    SHARE_TYPE_SCREEN,               /**< [en]Indicates screen sharing. [cn]屏幕共享 */
    SHARE_TYPE_PROGRAM,              /**< [en]Indicates program sharing. [cn]程序共享 */
    SHARE_TYPE_WHITEBOARD            /**< [en]Indicates whiteboard sharing. [cn]白板共享 */
}ShareType;

/**
* [en]This structure is used to describe proactive sharing info.
* [cn]主动共享信息
*/
typedef struct tagSharingInfo
{
    HWM_BOOL isSharing;   /**< [en]Indicates whether is proactive sharing or not. [cn]是否正在主动共享 */
    ShareType shareType;  /**< [en]Indicates share type. [cn]共享类型 */
}SharingInfo;

/**
* [en]This structure is used to describe share status.
* [cn]观看共享状态
*/
typedef enum tagShareWatchingStatus
{
    SHARE_WATCHING_STATUS_START,               /**< [en]Indicates start to receive shares. [cn]开始观看共享 */
    SHARE_WATCHING_STATUS_RECV,                /**< [en]Indicates receiving and sharing. [cn]观看共享中 */
    SHARE_WATCHING_STATUS_STOP,                /**< [en]Indicates stop receiving shares. [cn]停止观看共享 */
    SHARE_WATCHING_STATUS_ERROR,               /**< [en]Indicates failed to receive sharing. [cn]观看共享异常 */
}ShareWatchingStatus;

/**
* [en]This structure is used to describe proactive share stop reason.
* [cn]主动共享结束原因
*/
typedef enum tagSharingStopReason
{
    TOKEN_SNATCHED,                             /**< [en]Indicates the token is snatched. [cn]token被抢 */
    NETWORK_ERROR,                              /**< [en]Indicates network error. [cn]网络异常 */
}SharingStopReason;

END_HWM_SDK_NAMESPACE
#endif /* __HWM_CONF_SERVICE_SHARE_DEF_H__ */
