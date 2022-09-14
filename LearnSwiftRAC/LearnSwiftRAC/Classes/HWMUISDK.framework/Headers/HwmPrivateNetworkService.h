/**
 * @file HwmNetworkService.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */


#ifndef __HWM_PRIVATE_NETWORK_SERVICE_H__
#define __HWM_PRIVATE_NETWORK_SERVICE_H__

#import "HwmPrivateNetworkServiceDef.h"
#import "HwmGlobalErrorCodeDef.h"

BEGIN_HWM_SDK_NAMESPACE
/**
    * @brief
    * [en]This class is about xxxx.
    * [cn]网络服务管理对象
    * @GetInstance HWM_SDK_NAMESPACE::HwmPrivateNativeSDK::GetPrivateNetworkApi()
    */
class IHwmPrivateNetwork
{
public:

    /**
    * @brief
    * [en]This class is about xxxx.
    * [cn]设置服务器地址，usg地址和中台地址
    * @private
    * @mobile:disable
    */
    virtual SDKERR SetServerAddressExt(IN const HWM_SDK_NAMESPACE::ServerInfo* serverInfo, IN const HWM_SDK_NAMESPACE::ServerInfo* middleGroundInfo) = 0;

    /**
    * @brief
    * [en]This class is about xxxx.
    * [cn]获取svn url
    * @synchronized
    * @paramOut
    * @private
    */
    virtual HWM_VOID GetSvnUrl(OUT UrlInfo* svnUrl) = 0;

    /**
    * @brief
    * [en]This class is about xxxx.
    * [cn]获取ms url
    * @private
    * @paramOut
    * @synchronized
    */
    virtual HWM_VOID GetMsUrl(OUT UrlInfo* msUrl) = 0;

    /**
    * @brief
    * [en]This class is about xxxx.
    * [cn]设置Tls认证
    *
    * @param verifyParam [type:VerifyParam][cs_allowNull:N]
    * [en]
    * [cn]认证参数
    * @see VerifyParam
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    */
    virtual SDKERR SetTlsVerify(IN const HWM_SDK_NAMESPACE::VerifyParam* verifyParam) = 0;

    /**
    * @brief
    * [en]This class is about xxxx.
    * [cn]设置本地ip
    *
    * @param localIp [cs_allowNull:Y]
    * [en]
    * [cn]IP地址
    *
    * @since:v1.0
    */
    virtual SDKERR SetLocalIp(IN const HWM_CHAR* localIp) = 0;

    /**
    * @brief
    * [en]This class is about xxxx.
    * [cn]更新Access描述
    *
    * @param paramList [cs_allowNull:Y]
    * [en]Access description
    * [cn]Access描述
    *
    * @since:v1.0  
    */
    virtual SDKERR UpdateAccessDesc(IN HwmList<AccessInfo>* paramList) = 0;

    /**
    * @brief
    * [en]set signal proxy
    * [cn]设置信令代理地址
    *
    * @param urlAndPort [cs_allowNull:N]
    * [en]Access description
    * [cn]Access描述
    *
    * @since:v1.0
    */
    virtual SDKERR SetSignalProxy(IN const HWM_CHAR* urlAndPort) = 0;
};
END_HWM_SDK_NAMESPACE

#endif /* __HWM_NETWORK_SERVICE_H__ */