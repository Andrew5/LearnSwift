/**
 * @file HwmSdk.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */


#ifndef __HWM_PRIVATE_SDK_H__
#define __HWM_PRIVATE_SDK_H__

#import "HwmPrivateNativeSdkDef.h"
#import "HwmPrivateNetworkService.h"
#import "HwmPrivateLoginService.h"
#import "HwmPrivateConfService.h"
#import "HwmPrivateUtilsService.h"
#import "HwmPrivateConfServiceShare.h"
#import "HwmPrivateConfServiceArAssist.h"
#import "HwmNativeSdk.h"
#import "HwmPrivateSecurecAudio.h"

BEGIN_HWM_SDK_NAMESPACE
/**
* @brief [en] This interface is used to describe callbacks of class json.
*        [cn] json回调类
* @private
**/
class HWM_API IHwmPrivateJsonCallback
{
public:
    virtual HWM_VOID NotifyMsgFunPtr(IN const HWM_INT32 cmd, IN const HWM_CHAR* msg) = 0;
};
    
/**
* @brief [en]This class is about Huawei Meeting SDK
*        [cn]华为会议(Huawei Meeting)SDK 接口管理类
* @mobile:privateConfChatApi
* @mobile:privateConfShareApi
* @GetInstance
*        HWM_SDK_NAMESPACE::HwmPrivateNativeSDK
* 
*/
class HWM_API HwmPrivateNativeSDK
{
public:
    /**
    * @brief [en] This interface is used to initialize SDK.
    *        [cn] 初始化SDK-Android专用(私有)
    *
    * @param [in] HwmAppInfoParam* appInfoParam            [en] Indicates application initializes param parameters
    *                                                      [cn] 应用初始化参数
    * @mac:disable
    * @ios:disable
    * @win:disable
    * @private
    **/
    static SDKERR InitPrivate(IN const AndroidAppInfoParamPrivate* appInfoParam);

    /**
    * @brief [en] This interface is used to initialize SDK.
    *        [cn] 初始化SDK-ios，mac, win(私有)
    *
    * @param [in] HwmAppInfoParam* appInfoParam            [en] Indicates application initializes param parameters
    *                                                      [cn] 应用初始化参数
    * @attention [en] NA
    *            [cn] NA
    * @see Release
    * @android:disable
	* @mac:privatePreInit
	* @ios:privatePreInit
    * @private
    **/
    static SDKERR InitPrivate(IN const AppInfoParamPrivate* appInfoParam);


    /**
    * @brief [en] This interface is used to set log parameter
    *        [cn] 设置日志参数
    *
    * @param [in] const HwmLogParam* logInfo  [en] Indicates log parameter
    *                                       [cn] 日志参数
    * @attention [en] NA
    *            [cn] NA
    * @see Init
    *
    * @private
    **/
    static SDKERR SetLog(IN const LogParam* logInfo);

    /**
    * @brief [en] This interface is used to get the log service object.
    *        [cn] 获取登录服务对象
    *
    * @retval IHwmLogin*        [en] If it's success return the pointer of class IHwmLogin.Otherwise,return HWM_NULL_PTR.
    *                           [cn] 成功返回 IHwmLogin     对象，失败返回 HWM_NULL_PTR
    * @attention [en] The "login service object" is the basic service class object of the SDK, which must be acquired and used by the application.
    *            [cn] "登录服务对象”是SDK的基础服务类对象，应用程序必需获取并使用。
    **/
    static IHwmPrivateLogin* GetPrivateLoginApi(HWM_VOID);

    /**
    * @brief [en] This interface is used to get the conference management object.
    *        [cn] 获取会议管理对象
    *
    * @retval IHwmConfMgr*         [en] If it's success return the pointer of class IHwmConfMgr.Otherwise,return HWM_NULL_PTR.
    *                                  [cn] 成功返回 IHwmConfMgr     对象，失败返回 HWM_NULL_PTR
    * @attention [en] When using a meeting management service, the application must get and use it.
    *            [cn] 在使用会议管理服务时，应用程序必需获取并使用。
    **/
    static IHwmPrivateConfMgr* GetPrivateConfMgrApi(HWM_VOID);

    /**
    * @brief [en] This interface is used to get the device management object.
    *        [cn] 获取设备管理对象
    *
    * @retval IHwmDeviceMgr*         [en] If it's success return the pointer of class IHwmDeviceMgr.Otherwise,return HWM_NULL_PTR.
    *                                  [cn] 成功返回 IHwmDeviceMgr     对象，失败返回 HWM_NULL_PTR
    * @attention [en] When using a mee service, the application must get and use it
    *            [cn] 在使用设备服务时，应用程序必需获取并使用。
    **/
    static IHwmPrivateDeviceMgr* GetPrivateDeviceMgrApi(HWM_VOID);


    /**
    * @brief [en] This interface is used to get the meeting state object.
    *        [cn] 获取会议状态对象
    *
    * @retval IHwmConfState*         [en] If it's success return the pointer of class IHwmConfState.Otherwise,return HWM_NULL_PTR.
    *                                  [cn] 成功返回 IHwmConfState     对象，失败返回 HWM_NULL_PTR
    * @attention [en] When using the conference status service, the application must get and use it.
    *            [cn] 在使用会议状态服务时，应用程序必需获取并使用。
    **/
    static IHwmPrivateConfState* GetPrivateConfStateApi(HWM_VOID);


    /**
    * @brief [en] This interface is used to get the conference control object.
    *        [cn] 获取会议控制对象
    *
    * @retval IHwmConfCtrl*         [en] If it's success return the pointer of class IHwmConfCtrl.Otherwise,return HWM_NULL_PTR.
    *                                  [cn] 成功返回 IHwmConfCtrl     对象，失败返回 HWM_NULL_PTR
    * @attention [en] When using the conference control service, the application must get and use it
    *            [cn] 在使用会议控制服务时，应用程序必需获取并使用。
    **/
    static IHwmPrivateConfCtrl* GetPrivateConfCtrlApi(HWM_VOID);

    /**
    * @brief [en] This interface is used to get the conference state object.
    *        [cn] 获取会议状态对象
    *
    * @retval IHwmConfShare*         [en] If it's success return the pointer of class IHwmConfShare.Otherwise,return HWM_NULL_PTR.
    *                                  [cn] 成功返回 IHwmConfShare     对象，失败返回 HWM_NULL_PTR
    * @attention [en] When using a conference-sharing service, the application must get it and use it
    *            [cn] 在使用会议共享服务时，应用程序必需获取并使用。
    * @mobile:disable
    *
    **/
    static IHwmPrivateConfShare* GetPrivateConfShareApi(HWM_VOID);

    /**
    * @brief [en] This interface is used to get the network service object.
    *        [cn] 获取网络服务对象
    *
    * @retval IHwmNetwork*      [en] If it's success return the pointer of class HwmNetworkService.Otherwise,return HWM_NULL_PTR.
    *                                  [cn] 成功返回 HwmNetworkService     对象，失败返回 HWM_NULL_PTR
    * @attention [en] The "Network service object" is the basic service class object of the SDK, which must be acquired and used by the application.
    *            [cn] "网络服务对象”是SDK的基础服务类对象，应用程序必需获取并使用。
    **/
    static IHwmPrivateNetwork* GetPrivateNetworkApi(HWM_VOID);

    /**
    * @brief [en] This interface is used to get the call object.
    *        [cn] 获取呼叫对象
    *
    * @retval IHwmCall*         [en] If it's success return the pointer of class IHwmCall.Otherwise,return HWM_NULL_PTR.
    *                                  [cn] 成功返回 IHwmCall     对象，失败返回 HWM_NULL_PTR
    * @attention [en] When using the calling service, the application must get and use it
    *            [cn] 在使用呼叫服务时，应用程序必需获取并使用。
    **/
    static IHwmPrivateCall* GetPrivateCallApi(HWM_VOID);

    /**
    * @brief [en] This interface is used to get the conference AR assist object.
    *        [cn] 获取会议AR协作对象
    *
    * @retval IHwmConfShare*         [en] If it's success return the pointer of class IHwmPrivateConfArAssist.Otherwise,return HWM_NULL_PTR.
    *                                  [cn] 成功返回 IHwmPrivateConfArAssist     对象，失败返回 HWM_NULL_PTR
    * @attention [en] When using a conference-ar-assist service, the application must get it and use it
    *            [cn] 在使用会议AR协作服务时，应用程序必需获取并使用。
    **/
    static IHwmPrivateConfArAssist* GetPrivateConfArAssistApi(HWM_VOID);
        
    /**
    * @brief [en] This interface is used to set the global callbacks of json.
    *        [cn] 设置json全局回调
    *
    * @private
    **/
    static SDKERR SetPrivateJsonCallback(IN IHwmPrivateJsonCallback* func);

    /**
    * @brief [en] This interface is used to send json messages.
    *        [cn] 发送json消息
    *
    * @private
    **/
    static SDKERR SendPrivateJsonMsg(HWM_INT32 cmd, const HWM_CHAR* msg);

    /**
    * @brief [en] This interface is used to get the common utilities service object.
    *        [cn] 获取公用程序服务对象
    *
    * @retval IHwmUtils*      [en] If it's success return the pointer of class HwmUtilsImpl.Otherwise,return HWM_NULL_PTR.
    *                                  [cn] 成功返回 HwmUtilsImpl     对象，失败返回 HWM_NULL_PTR
    * @attention [en] The "Common utilities service object" is the basic service class object of the SDK, which must be acquired and used by the application.
    *            [cn] "公用程序服务对象”是SDK的基础服务类对象，应用程序必需获取并使用。
    * @private
    **/
    static IHwmPrivateUtils* GetPrivateUtilsApi(HWM_VOID);

    /**
    * @brief [en] This interface is used to get the securec audio object.
    *        [cn] 获取公用程序服务对象
    *
    * @retval IHwmUtils*      [en] If it's success return the pointer of class HwmUtilsImpl.Otherwise,return HWM_NULL_PTR.
    *                                  [cn] 成功返回 HwmUtilsImpl     对象，失败返回 HWM_NULL_PTR
    * @attention [en] The "Common utilities service object" is the basic service class object of the SDK, which must be acquired and used by the application.
    *            [cn] "公用程序服务对象”是SDK的基础服务类对象，应用程序必需获取并使用。
    * @mobile:disable
    **/
    static IHwmPrivateSecurecAudioMgr* GetPrivateSecurecAudioMgr(HWM_VOID);
};

END_HWM_SDK_NAMESPACE

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */
HWM_API HWMSDK::IHwmPrivateSecurecAudioMgr* GetGlobalPrivateSecurecAudioMgr(HWM_VOID);

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif /* __HWM_SDK_H__ */

