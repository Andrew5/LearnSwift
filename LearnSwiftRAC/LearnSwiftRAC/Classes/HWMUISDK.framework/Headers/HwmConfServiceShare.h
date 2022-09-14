/**
 * @file HwmConfServiceShare.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */


#ifndef __HWM_CONF_SERVICE_SHARE_H__
#define __HWM_CONF_SERVICE_SHARE_H__


#import "HwmConfServiceDef.h"
#import "HwmConfServiceShareDef.h"
BEGIN_HWM_SDK_NAMESPACE


/**
* @brief [en]This class is about xxxx.
*        [cn]会议共享操作类回调
* @mobile:interfaceOnly
* @pc:disable
* @ios:disable
*/
class HWM_API IHwmConfShareResultCallback
{
public:

    /**
    * @brief
    * [en]
    * [cn]发起屏幕共享结果回调
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
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnStartShareScreenResult(SDKERR result, const HWM_CHAR* reasonDesc) {};

};


/**
* @brief [en]This class is about xxxx.
*        [cn]会议共享通知回调
* @pc:disable
* @ios:disable
*/
class HWM_API IHwmConfShareNotifyCallback
{
public:

    /**
    * @brief
    * [en]This class is about the changes of share connection status
    * [cn]共享连接状态通知
    * @detail
    * [en]
    * [cn]状态包括连接上、连接中、连接失败，只要连接上的情况下才能发起共享
    *
    * @param state [type:ShareConnectStatus]
    * [en]
    * [cn]共享连接状态
    * @see ShareConnectStatus
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnShareConnectStatusChanged(ShareConnectStatus state) {};

 
    /**
    * @brief
    * [en]This class is about the notify of proactive sharing stopped
    * [cn]共享被结束通知
    * @detail
    * [en]
    * [cn]当被抢共享或者网络异常等场景会上报该通知
    *
    * @param reason [type:SharingStopReason]
    * [en]
    * [cn]结束原因
    * @see SharingStopReason
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnSharingStoppedNotify(SharingStopReason reason) {};

    /**
    * @brief
    * [en]This class is about the changes of receiving share type
    * [cn]接收共享类型变化通知
    *
    * @param shareType [type:ShareType]
    * [en]
    * [cn]接收共享类型
    * @see ShareType
    *
    * @since:v1.0
    * @mobile:disable
    */
    virtual HWM_VOID OnWatchingShareTypeChanged(ShareType shareType) {};

    /**
    * @brief
    * [en]This class is about the changes of receiving share status
    * [cn]接收共享状态变更通知
    * @detail
    * [en]
    * [cn]观看他人共享的状态
    *
    * @param status [type:ShareReceivingStatus]
    * [en]
    * [cn]接收共享状态
    * @see ShareReceivingStatus
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnWatchingShareStatusChanged(ShareWatchingStatus status) {};

    /**
    * @brief
    * [en]This class is about the changes of sharer info
    * [cn]共享人信息变更通知
    * @detail
    * [en]
    * [cb]包括更换其他共享人或者同一个共享人的属性变更
    *
    * @param sharer [type:AttendeeInfo]
    * [en]
    * [cn]当前共享者的人员信息
    * @see AttendeeInfo
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnSharingUserInfoChanged(AttendeeInfo sharingUser) {};

};

/**
* @brief [en]This class is about xxxx.
*        [cn]会议共享对象
*
* @detail
* [en]
* [cn]获取该对象的方法NativeSDK.getConfShareApi()
*
* @mobile:interfaceOnly
* @pc:disable
* @ios:disable
* @GetInstance
*        HWM_SDK_NAMESPACE::HwmNativeSDK::GetConfShareApi()
*/
class IHwmConfShare
{
public:

    /**
    * @brief
    * [en]This class is about setting the callback class of share operation APIs.
    * [cn]设置会议共享操作类全局回调
    *
    * @param callback [type:IHwmConfShareResultCallback*][cs_allowNull:N]
    * [en]
    * [cn] 会议共享操作类回调
    * @see IHwmConfShareResultCallback
    *
    * @since:v1.0
    */
    virtual SDKERR SetConfShareResultCallback(IHwmConfShareResultCallback* callback) = 0;

    /**
    * @brief
    * [en]This class is about setting the callback class of share notifications.
    * [cn]设置会议共享通知类全局回调
    *
    * @param callback [type:IHwmConfShareNotifyCallback*][cs_allowNull:N]
    * [en]
    * [cn] 会议共享通知类回调
    * @see IHwmConfShareNotifyCallback
    *
    * @since:v1.0
    */
    virtual SDKERR SetConfShareNotifyCallback(IHwmConfShareNotifyCallback* callback) = 0;

    /**
    * @brief
    * [en]
    * [cn]获取接收共享的View
    * @detail
    * [en]
    * [cn]此View用来渲染共享的内容，获取到此view并添加到自定义的layout中，来显示共享的内容
    *
    * @pc:disable
    * @ios:disable
    *
    * @android:replace:return:SDKERR:com.huawei.hwmsdk.common.ShareView:ShareView
    *
    * @return [type:SDKERR]
    * [en]
    * [cn]接收共享的view
    *
    * @since:v1.0
    */
    virtual SDKERR GetShareView() { return SDKERR_SUCCESS; };

    /**
    * @brief
    * [en]This class is about setting config of share.
    * [cn]设置会议共享配置
    * @mobile:disable
    * @param shareConfig [type:ShareConfig*][cs_allowNull:Y]
    * [en]
    * [cn] 会议共享配置
    * @see ShareConfig
    *
    * @since:v1.0
    */
    virtual SDKERR SetShareConfig(const ShareConfig* shareConfig) { return SDKERR_SUCCESS; };

    /**
    * @brief
    * [en]This class is about getting config of share.
    * [cn]获取会议共享配置
    * @mobile:disable
    * @synchronized
    * @paramOut
    *
    * @param shareConfig [type:ShareConfig]
    * [en]
    * [cn]会议共享配置
    * @see ShareConfig
    *
    * @since:v1.0
    */
    virtual HWM_VOID GetShareConfig(OUT ShareConfig* shareConfig) {};

    /**
    * @brief
    * [en]This class is about get do I have the ability to share.
    * [cn]获取共享连接状态
    * @detail
    * [en]
    * [cn]发起共享之前要获取该状态，只有状态为连接上，才能发起共享
    * @synchronized
    *
    * @return [type:ShareConnectStatus]
    * [en]
    * [cn]共享连接状态
    *
    * @since:v1.0
    */
    virtual ShareConnectStatus GetShareConnectStatus() { return SHARE_CONNECTED_SUCCESS; };


    /**
    * @brief
    * [en]This class is about getting proactive sharing status info.
    * [cn]获取自己的共享状态信息
    * @synchronized
    * @paramOut
    *
    * @param sharingInfo [type:SharingInfo]
    * [en]
    * [cn]主动共享状态信息
    * @see SharingInfo
    *
    * @since:v1.0
    */
    virtual HWM_VOID GetSharingInfo(OUT SharingInfo* sharingInfo) {};

    /**
    * @brief
    * [en]This class is about get receiving share type.
    * [cn]获取观看共享类型
    * @synchronized
    *
    * @return [type:ShareType]
    * [en]
    * [cn]观看共享类型
    *
    * @since:v1.0
    * @mobile:disable
    */
    virtual ShareType GetWatchingShareType() { return SHARE_TYPE_SCREEN;};

    /**
    * @brief
    * [en]This class is about get watching share status.
    * [cn]获取观看中的共享状态
    * @detail
    * [en]
    * [cn]观看中的共享，是指会中他人发起的共享
    * @synchronized
    *
    * @return [type:ShareWatchingStatus]
    * [en]
    * [cn]观看共享状态
    *
    * @since:v1.0
    */
    virtual ShareWatchingStatus GetWatchingShareStatus() { return SHARE_WATCHING_STATUS_START; };

    /**
    * @brief
    * [en]This class is about get the information of the current sharer.
    * [cn]获取共享人的信息
    * @synchronized
    * @paramOut
    *
    * @param sharer [type:AttendeeInfo*]
    * [en]
    * [cn]当前共享者的人员信息
    *
    * @since:v1.0
    */
    virtual HWM_VOID GetSharingUserInfo(OUT AttendeeInfo* sharer) {};


    /**
    * @brief
    * [en]This class is about start share screen.
    * [cn]开始屏幕共享
    *
    * @android:param:android.content.Intent:Intent:screenCaptureRequestData:0:onActivityResult result of rquest PROJECTION permission:权限确认onActivityResult的传递信息
    *
    * @param isPrimaryScreen [type:HWM_BOOL][android:disable]
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    * 
    * @UTInterface:start
    */
    virtual SDKERR StartShareScreen(HWM_BOOL isPrimaryScreen) { return SDKERR_SUCCESS; };

    /**
    * @brief
    * [en]This class is about stop share screen.
    * [cn]结束屏幕共享
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR StopShare() { return SDKERR_SUCCESS; };

};

END_HWM_SDK_NAMESPACE
#endif /* __HWM_CONF_SERVICE_SHARE_H__ */

