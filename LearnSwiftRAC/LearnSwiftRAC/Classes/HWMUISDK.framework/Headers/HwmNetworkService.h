/**
 * @file HwmNetworkService.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */


#ifndef __HWM_NETWORK_SERVICE_H__
#define __HWM_NETWORK_SERVICE_H__

#import "HwmNetworkServiceDef.h"
#import "HwmGlobalErrorCodeDef.h"

BEGIN_HWM_SDK_NAMESPACE
/**
    * @brief
    * [en]This class is about xxxx.
    * [cn]网络管理对象
    * @detail
    * [en]
    * [cn]获取该对象的方法NativeSDK.getNetworkApi()
    * @GetInstance HWM_SDK_NAMESPACE::HwmNativeSDK::GetNetworkApi()
    */
class IHwmNetwork
{
public:
    /**
    * @brief
    * [en]This class is about xxxx.
    * [cn]设置代理
    *
    * @mobile:disable
    *
    * @param proxyInfo [type:ProxyInfo][cs_allowNull:N]
    * [en]
    * [cn]代理信息
    * @see ProxyInfo
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    */
    virtual SDKERR SetProxy(IN const HWM_SDK_NAMESPACE::ProxyInfo* proxyInfo) = 0;

    /**
    * @brief
    * [en]This class is about xxxx.
    * [cn]设置服务器地址
    *
    * @param serverInfo [type:ServerInfo][cs_allowNull:N]
    * [en]
    * [cn]服务器信息
    * @see ServerInfo
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    */
    virtual SDKERR SetServerAddress(IN const HWM_SDK_NAMESPACE::ServerInfo* serverInfo) = 0;

    /**
    * @brief
    * [en]This interface is used to set network mode.
    * [cn]设置网络模式
    */
    virtual SDKERR SetNetworkMode(const NetWorkModeInfo* networkInfo) = 0;

};
END_HWM_SDK_NAMESPACE

#endif /* __HWM_NETWORK_SERVICE_H__ */