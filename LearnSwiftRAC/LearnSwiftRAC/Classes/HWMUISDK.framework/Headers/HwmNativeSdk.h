/**
 * @file HwmSdk.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */


#ifndef __HWM_SDK_H__
#define __HWM_SDK_H__

#import "HwmNativeSdkDef.h"
#import "HwmNetworkService.h"
#import "HwmLoginService.h"
#import "HwmConfService.h"

BEGIN_HWM_SDK_NAMESPACE

    
/**
* @brief [en]This class is about Huawei Meeting SDK
*        [cn]nativeSDK接口管理对象
* @mobile:confShareApi
* @GetInstance
*        HWM_SDK_NAMESPACE::HwmNativeSDK
* 
*/
class HWM_API HwmNativeSDK
{
public:
    /**
    * @brief [en] This interface is used to initialize SDK.
    *        [cn] 初始化SDK
    *
    * @param appInfoParam [type:AppInfoParam*][cs_allowNull:N]           
    * [en] Indicates application initializes param parameters
    * [cn] 应用程序信息参数
    * @see AppInfoParam
    *
    * @attention [en] NA
    *            [cn] NA
    * @see Release
    * @android:needApplication
    * @android:sdkPreInit
    * @android：disable
	* @ios:preInit
	* @mac:preInit
    *
    * @since:v1.0
    **/
    static SDKERR Init(IN const AppInfoParam* appInfoParam);


    /**
    * @brief [en] This interface is used to initialize SDK.
    *        [cn] 释放(去初始化)SDK
    *
    * @attention [en] NA
    *            [cn] NA
    *
    * @android:disable
	* @ios:releaseInstance
	* @mac:releaseInstance
    * @see Init
    **/
    static HWM_VOID Release(HWM_VOID);


    /**
    * @brief [en] This interface is used to get sdk version
    *        [cn] 获取sdk信息
    * @synchronized
    * @paramOut
    *
    * @param sdkInfo [type:SdkInfo]  
    * [en] xxxxx
    * [cn] sdk版本信息
    * @see SdkInfo
    *
    * @since:v1.0
    **/
    static HWM_VOID GetSdkInfo(OUT SdkInfo* sdkInfo);


    /**
    * @brief [en] This interface is used to get the log service object.
    *        [cn] 获取登录服务对象
    *
    * @param NULL [cs_allowNull:Y]
    *
    * @retval IHwmLogin*        [en] If it's success return the pointer of class IHwmLogin.Otherwise,return HWM_NULL_PTR.
    *                           [cn] 成功返回 IHwmLogin     对象，失败返回 HWM_NULL_PTR
    * @attention [en] The "login service object" is the basic service class object of the SDK, which must be acquired and used by the application.
    *            [cn] "登录服务对象”是SDK的基础服务类对象，应用程序必需获取并使用。
    *
    * @since:v1.0
    **/
    static IHwmLogin* GetLoginApi(HWM_VOID);

    /**
    * @brief [en] This interface is used to get the conference management object.
    *        [cn] 获取会议管理对象
    *
    * @param NULL [cs_allowNull:Y]
    *
    * @retval IHwmConfMgr*         [en] If it's success return the pointer of class IHwmConfMgr.Otherwise,return HWM_NULL_PTR.
    *                                  [cn] 成功返回 IHwmConfMgr     对象，失败返回 HWM_NULL_PTR
    * @attention [en] When using a meeting management service, the application must get and use it.
    *            [cn] 在使用会议管理服务时，应用程序必需获取并使用。
    *
    * @since:v1.0
    **/
    static IHwmConfMgr* GetConfMgrApi(HWM_VOID);

    /**
    * @brief [en] This interface is used to get the device management object.
    *        [cn] 获取设备管理对象
    *
    * @param NULL [cs_allowNull:Y]
    *
    * @retval IHwmDeviceMgr*         [en] If it's success return the pointer of class IHwmDeviceMgr.Otherwise,return HWM_NULL_PTR.
    *                                  [cn] 成功返回 IHwmDeviceMgr     对象，失败返回 HWM_NULL_PTR
    * @attention [en] When using a mee service, the application must get and use it
    *            [cn] 在使用设备服务时，应用程序必需获取并使用。
    *
    * @since:v1.0
    **/
    static IHwmDeviceMgr* GetDeviceMgrApi(HWM_VOID);


    /**
    * @brief [en] This interface is used to get the meeting state object.
    *        [cn] 获取会议状态对象
    *
    * @param NULL [cs_allowNull:Y]
    *
    * @retval IHwmConfState*         [en] If it's success return the pointer of class IHwmConfState.Otherwise,return HWM_NULL_PTR.
    *                                  [cn] 成功返回 IHwmConfState     对象，失败返回 HWM_NULL_PTR
    * @attention [en] When using the conference status service, the application must get and use it.
    *            [cn] 在使用会议状态服务时，应用程序必需获取并使用。
    *
    * @since:v1.0
    **/
    static IHwmConfState* GetConfStateApi(HWM_VOID);


    /**
    * @brief [en] This interface is used to get the conference control object.
    *        [cn] 获取会议控制对象
    *
    * @param NULL [cs_allowNull:Y]
    *
    * @retval IHwmConfCtrl*         [en] If it's success return the pointer of class IHwmConfCtrl.Otherwise,return HWM_NULL_PTR.
    *                                  [cn] 成功返回 IHwmConfCtrl     对象，失败返回 HWM_NULL_PTR
    * @attention [en] When using the conference control service, the application must get and use it
    *            [cn] 在使用会议控制服务时，应用程序必需获取并使用。
    *
    * @since:v1.0
    **/
    static IHwmConfCtrl* GetConfCtrlApi(HWM_VOID);


    /**
    * @brief [en] This interface is used to get the network service object.
    *        [cn] 获取网络服务对象
    *
    * @param NULL [cs_allowNull:Y]
    *
    * @retval IHwmNetwork*      [en] If it's success return the pointer of class HwmNetworkService.Otherwise,return HWM_NULL_PTR.
    *                                  [cn] 成功返回 HwmNetworkService     对象，失败返回 HWM_NULL_PTR
    * @attention [en] The "Network service object" is the basic service class object of the SDK, which must be acquired and used by the application.
    *            [cn] "网络服务对象”是SDK的基础服务类对象，应用程序必需获取并使用。
    *
    * @since:v1.0
    **/
    static IHwmNetwork* GetNetworkApi(HWM_VOID);

    /**
    * @brief [en] This interface is used to get the render object.
    *        [cn] 获取窗口对象
    *
    * @param NULL [cs_allowNull:Y]
    *
    * @retval IHwmRender*         [en] If it's success return the pointer of class IHwmRender.Otherwise,return HWM_NULL_PTR.
    *                                  [cn] 成功返回 IHwmRender     对象，失败返回 HWM_NULL_PTR
    * @attention [en] When using the calling service, the application must get and use it
    *            [cn] 目前仅为android生成上层建筑使用。
    * @ios:disable
    * @mac:disable
    *
    * @since:v1.0
    **/
    static IHwmRender* GetRenderApi(HWM_VOID);

    
};

END_HWM_SDK_NAMESPACE

#endif /* __HWM_SDK_H__ */

