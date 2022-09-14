/**
 * @file HwmPrivateConfServiceArAssist.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */


#ifndef __HWM_PRIVATE_CONF_SERVICE_AR_ASSIST_H__
#define __HWM_PRIVATE_CONF_SERVICE_AR_ASSIST_H__


#import "HwmPrivateConfServiceDef.h"
#import "HwmPrivateConfServiceArAssistDef.h"
BEGIN_HWM_SDK_NAMESPACE

/**
* @brief [en]This class is about xxxx.
*        [cn]会议AR协作操作类回调
* @private
*/
class HWM_API IHwmPrivateConfArAssistResultCallback
{
public:
    /**
    * @brief
    * [en]This interface is used to start AR assist.
    * [cn]发起/结束AR协作结果回调
    * @private
    *
    * @param result [type:SDKERR]
    * [en]
    * [cn]错误码
    * @see SDKERR
    *
    * @param reasonDesc [type:HWM_CHAR*]
    * [en]
    * [cn]错误描述
    *
    * @pc:disable
    * @mac:disable
    * @ios:disable
    *
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnStartArAssistResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;
};

/**
  * @brief [en]This class is about xxxx.
  *        [cn]会议AR协作通知类回调
  * @private
  */
class HWM_API IHwmPrivateConfArAssistNotifyCallback
{
public:
    /**
    * @brief
    * [en]This class is about the notify of self is AR assisting changed
    * [cn]自己当前的AR协作状态通知
    *
    * @param isArAssisting [type:HWM_BOOL]
    * [en]
    * [cn]结束原因
    * @see isArAssisting
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnSelfArAssistStateChanged(ArAssistState arAssistState) = 0;

    /**
    * @brief
    * [en]This class is about the notify of AR assist state changed
    * [cn]AR协作状态变化的通知
    * @detail
    * [en]
    * [cn]AR协作开始&结束的通知
    *
    * @param arAssistState [type:ArAssistState]
    * [en]
    * [cn]AR协作状态
    * @see ArAssistState
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnConfArAssistStateChanged(ArAssistState arAssistState) = 0;
};


/**
  * @brief [en]This class is about AR assist.
  *        [cn]会议AR协作对象
  * @private
  * @GetInstance
  *        HWM_SDK_NAMESPACE::HwmPrivateNativeSDK::GetPrivateConfArAssistApi()
  */
class IHwmPrivateConfArAssist
{
public:

    /**
    * @brief
    * [en]This class is about setting the callback class of AR assist operation APIs.
    * [cn]设置会议AR协作操作类全局回调
    *
    * @param callback [type:IHwmPrivateConfArAssistResultCallback*][cs_allowNull:N]
    * [en]
    * [cn] 会议AR协作操作类回调
    * @see IHwmPrivateConfArAssistResultCallback
    *
    * @since:v1.0
    */
    virtual SDKERR SetPrivateConfArAssistResultCallback(IHwmPrivateConfArAssistResultCallback* callback) = 0;

    /**
    * @brief
    * [en]This class is about setting the callback class of AR assist notifications.
    * [cn]设置会议AR协作通知类全局回调
    *
    * @param callback [type:IHwmPrivateConfArAssistNotifyCallback*][cs_allowNull:N]
    * [en]
    * [cn] 会议AR协作通知类回调
    * @see IHwmPrivateConfArAssistNotifyCallback
    *
    * @since:v1.0
    */
    virtual SDKERR SetPrivateConfArAssistNotifyCallback(IHwmPrivateConfArAssistNotifyCallback* callback) = 0;

    /**
    * @brief
    * [en]This class is about self is ar assisting.
    * [cn]获取自己当前的AR协作状态
    * @synchronized
    *
    * @pc:disable
    * @mac:disable
    * @ios:disable
    *
    * @return [type:ArAssistState]
    *
    * @since:v1.0
    */
    virtual ArAssistState GetSelfArAssistState() = 0;

    /**
    * @brief
    * [en]This class is about get AR assist user info.
    * [cn]获取发起AR协作的人的信息
    * @synchronized
    *
    * @return [type:AttendeeInfo]
    *
    * @since:v1.0
    */
    virtual AttendeeInfo GetArAssistUserInfo() = 0;

    /**
    * @brief
    * [en]This class is about start AR assist.
    * [cn]发起/结束AR协作
    * @pc:disable
    * @mac:disable
    * @ios:disable
    *
    * @param ArAssistState [type:ArAssistState]
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR StartArAssist(ArAssistState arAssistState) = 0;

    /**
    * @brief
    * [en]This class is about get AR assist state.
    * [cn]获取会议AR协作状态
    * @synchronized
    *
    * @return [type:ArAssistState]
    *
    * @since:v1.0
    */
    virtual ArAssistState GetConfArAssistState() = 0;

};

END_HWM_SDK_NAMESPACE
#endif /* __HWM_PRIVATE_CONF_SERVICE_AR_ASSIST_H__ */

