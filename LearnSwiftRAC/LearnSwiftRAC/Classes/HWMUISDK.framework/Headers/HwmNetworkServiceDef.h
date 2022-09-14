/**
 * @file HwmLoginServiceDef.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */


#ifndef __HWM_NETWORK_SERVICE_DEF_H__
#define __HWM_NETWORK_SERVICE_DEF_H__

#import "HwmSdkCommonDef.h"

BEGIN_HWM_SDK_NAMESPACE


/**
 * [en]This enumeration is used to describe verify mode.
 * [cn]认证模式
 */
typedef enum tagVerifyMode
{
    VERIFY_MODE_NONE = 0,                       /**< [en]Indicates no authentication.
                                                     [cn]不认证
                                                     [ios:rename:None] */
    VERIFY_MODE_SERVER,                         /**< [en]Indicates  authentication server.
                                                     [cn]认证服务端
                                                     [ios:rename:Server] */
    VERIFY_MODE_BUTT                            /**< [ios:rename:Butt] */
}VerifyMode;


/**
 * [en]This structure is used to describe the http proxy information.
 * [cn]代理信息
 */
typedef struct tagProxyInfo
{
    HWM_CHAR userName[HWM_MAX_ACCOUNT_LEN];         /**< [en]Indicates the account username.
                                                         [cn]账户用户名 
                                                         [cs_allowNull:Y][cs_length:0-128][cs_sensitive:name] */
    HWM_CHAR password[HWM_MAX_PASSWORD_LEN];        /**< [en]Indicates the account password.
                                                         [cn]账户密码 
                                                         [cs_allowNull:Y][cs_length:0-128] [cs_sensitive:hide] */
    HWM_CHAR proxyUri[HWM_MAX_URL_LEN];             /**< [en]Indicates the proxy address.
                                                         [cn]服务器地址 
                                                         [cs_allowNull:Y][cs_length:0-256] */
    HWM_UINT32 proxyPort;                           /**< [en]Indicates the proxy port.
                                                         [cn]代理服务器端口号 
                                                         [cs_allowNull:Y] */
}ProxyInfo;


/**
 * [en]This structure is used to describe login parameters.
 * [cn]登录信息参数
 */
typedef struct tagServerInfo
{
    HWM_CHAR serverAddr[HWM_MAX_URL_LEN];           /**< [en]Indicates the server address.
                                                         [cn]服务器地址，国内站或国际站，默认国内站点
                                                         [cs_allowNull:N][cs_length:1-256] */
    HWM_UINT32 serverPort;                          /**< [en]Indicates the server port.
                                                         [cn]服务器端口号，端口默认443
                                                         [cs_allowNull:N][cs_length:1-512] */
}ServerInfo;


/**
 * [en]This structure is used to describe the verify param.
 * [cn]Verify参数
 */
typedef struct tagVerifyParam
{
    VerifyMode verifyMode;                       /**< [en]Indicates the tls verify mode
                                                         [cn]认证模式
                                                         [cs_allowNull:N] */
    HWM_CHAR certPath[HWM_MAX_FILE_PATH_LEN];       /**< [en]Indicates the CA certificate path
                                                         [cn]证书存储路径 
                                                         [cs_allowNull:N] */
}VerifyParam;

typedef enum tagLoginChannelType
{
    CHANNEL_TYPE_NATIVE = 0,               /**< [en]Indicates native
                                           <br>[cn]原生模式 */
    CHANNEL_TYPE_SIGNAL_PROXY,             /**< [en]Indicates signal proxy
                                           <br>[cn]信令代理模式 */
    CHANNEL_TYPE_MIXED,                    /**< [en]Indicates mixed
                                           <br>[cn]混合模式 */
} LoginChannelType;

typedef enum tagNetworkAccessType
{
    ACCESS_TYPE_AUTO = 0,                 /**< [en]Indicates auto
                                          <br>[cn]默认值 */
    ACCESS_TYPE_INNER,                    /**< [en]Indicates inner
                                          <br>[cn]公司内网接入 */
    ACCESS_TYPE_OUTER,                    /**< [en]Indicates outter
                                          <br>[cn]公司外网接入 */
} NetworkAccessType;

typedef struct tagNetWorkModeInfo {
    NetworkAccessType accessType;                       /**< [en]Indicates network access type . [cn]网络接入类型*/
}NetWorkModeInfo;

END_HWM_SDK_NAMESPACE
#endif /* __HWM_NETWORK_SERVICE_DEF_H__ */

