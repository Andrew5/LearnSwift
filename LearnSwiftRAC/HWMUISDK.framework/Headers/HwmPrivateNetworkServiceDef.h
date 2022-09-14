/**
 * @file HwmLoginServiceDef.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */


#ifndef __HWM_PRIVATE_NETWORK_SERVICE_DEF_H__
#define __HWM_PRIVATE_NETWORK_SERVICE_DEF_H__
#import "HwmNetworkServiceDef.h"
#import "HwmSdkCommonDef.h"

BEGIN_HWM_SDK_NAMESPACE

/**
* [en]This structure is used to describe url parameters.
* [cn]url信息参数
*/
typedef struct tagUrlInfo
{
    HWM_CHAR url[HWM_MAX_URL_LEN];           /**< [en]Indicates the url.
                                             [cn]地址 */
}UrlInfo;

/**
* [en]This structure is used to describe the access info.
* [cn]Access参数
*/
typedef struct tagAccessInfo
{
    HWM_CHAR ip[HWM_MAX_IP_ADDRESS_LEN];
    HWM_CHAR access[HWM_MAX_ACCESS_LEN];
} AccessInfo;

END_HWM_SDK_NAMESPACE
#endif /* __HWM_NETWORK_SERVICE_DEF_H__ */

