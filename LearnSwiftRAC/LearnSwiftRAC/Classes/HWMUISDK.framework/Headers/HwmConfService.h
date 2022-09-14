/**
 * @file HwmConfService.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */

#ifndef __HWM_CONF_SERVICE_H__
#define __HWM_CONF_SERVICE_H__


#include "HwmConfServiceDef.h"
#include "HwmConfServiceShare.h"
#include "HwmGlobalErrorCodeDef.h"

BEGIN_HWM_SDK_NAMESPACE

/**
* @brief [en]This class is about confMgr result callback.
*        [cn]会议管理的结果回调类回调
*/
class HWM_API IHwmConfMgrResultCallback
{
public:

    /**
    * @brief
    * [en]
    * [cn]查询VMR信息的结果回调
    *
    * @detail
    * [en]
    * [cn]返回个人会议室信息和云会议室列表信息，对应的查询VMR信息的接口为QueryVmrInfo
    * 
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]错误码
    * @see SDKERR
    * 
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]错误描述
    * 
    * @param personalVmrInfo [type:VmrInfo][cs_allowNull:N]
    * [en]
    * [cn]个人会议室
    * @see VmrInfo
    * 
    * @param cloudVmrList [type:VmrInfoList][cs_allowNull:N]
    * [en]
    * [cn]云会议室列表
    * @see VmrInfoList
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnQueryVmrInfoResult(SDKERR result, const HWM_CHAR* reasonDesc, const VmrInfo* personalVmrInfo,  const VmrInfoList* cloudVmrList) = 0;

    /**
    * @brief
    * [en]
    * [cn]查询会议详情的结果回调
    *
    * @detail
    * [en]
    * [cn]返回会议详情信息，对应的查询会议详情信息的接口为QueryConfInfo
    * 
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]错误码
    * @see SDKERR
    * 
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]错误描述
    * 
    * @param confDetailInfo [type:ConfDetail][cs_allowNull:N]
    * [en]
    * [cn]会议详情
    * @see ConfDetail
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnQueryConfInfoResult(SDKERR result, const HWM_CHAR* reasonDesc, const ConfDetail* confDetailInfo) = 0;
   
    /**
    * @brief
    * [en]This class is about the result of creating common conference.
    * [cn]创建会议的结果回调
    * @android:initRender
    * @android:setAudioRouteInCall
    * @android:resetAudioRoute
	* @ios:initAudioRoute
    *
    * @detail
    * [en]
    * [cn]返回创建会议的结果信息，结果包含会议id、会议主题、密码等会议信息，对应的创建会议接口为CreateConf
    * 
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]错误码
    * @see SDKERR
    * 
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]错误描述
    * 
    * @param createConfResult [type:CreateConfResult][cs_allowNull:N]
    * [en]
    * [cn]创建会议结果
    * @see CreateConfResult 
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnCreateConfResult(SDKERR result, const HWM_CHAR* reasonDesc, const CreateConfResult* createConfResult) = 0;

    /**
    * @brief
    * [en]
    * [cn]预约会议的结果回调
    * 
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]错误码
    * @see SDKERR
    * 
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]错误描述
    * 
    * @param bookConfResult [type:CreateConfResult*][cs_allowNull:N]
    * [en]
    * [cn]预约会议的结果
    * @see CreateConfResult
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnBookConfResult(SDKERR result, const HWM_CHAR* reasonDesc, const CreateConfResult* bookConfResult) = 0;


    /**
    * @brief
    * [en]
    * [cn]编辑会议的结果回调
    * 
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]错误码
    * @see SDKERR
    * 
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]错误描述
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnModifyConfResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;


    /**
    * @brief
    * [en]
    * [cn]修改VMR信息的结果回调
    * 
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]错误码
    * @see SDKERR
    * 
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]错误描述
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnModifyVmrInfoResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;


    /**
    * @brief
    * [en]
    * [cn]取消会议的结果回调
    * 
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]错误码
    * @see SDKERR
    * 
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]错误描述
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnCancelConfResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]拒绝会议的的结果回调
    * 
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]错误码
    * @see SDKERR
    * 
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]错误描述
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
	virtual HWM_VOID OnRejectConfResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;
    
    /**
    * @brief
    * [en]This class is about the result of accept conf.
    * [cn]接听会议的结果回调
    * @android:resetAudioRoute
	* @ios:initAudioRoute
    * 
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]错误码
    * @see SDKERR
    * 
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]错误描述
    * 
    * @param acceptConfResultInfo [type:AcceptConfResultInfo][cs_allowNull:N]
    * [en]
    * [cn]会议的接听结果
    * @see AcceptConfResultInfo 
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
	virtual HWM_VOID OnAcceptConfResult(SDKERR result, const HWM_CHAR* reasonDesc, const AcceptConfResultInfo* acceptConfResultInfo) = 0;
    
    /**
    * @brief
    * [en]This class is about the result of joining a conference successfully.
    * [cn]加入会议成功的的结果回调
    *
    * @param joinConfResultInfo [type:JoinConfResultInfo][cs_allowNull:N]
    * [en]
    * [cn]加入会议成功的结果
    * @see JoinConfResultInfo
    *
    * @since:v1.0
    *
    * @android:initRender
    * @android:setAudioRouteInCall
    * @android:resetAudioRoute
	* @ios:initAudioRoute
    * @Callback ["JoinConfById","JoinConfAnonymouslyById"]
    *
    * @UTCallback ["JoinConfById","JoinConfAnonymouslyById"]
    */
    virtual HWM_VOID OnJoinConfSuccess(const JoinConfResultInfo* joinConfResultInfo) = 0;

    /**
    * @brief
    * [en]This class is about the the result of failing to join a conference.
    * [cn]加入会议失败的的结果回调
    *
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]错误码
    * @see SDKERR
    *
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]错误描述
    *
    * @param joinConfFailedInfo [type:JoinConfFailedInfo][cs_allowNull:N]
    * [en]
    * [cn]加入会议失败的结果
    * @see JoinConfFailedInfo
    *
    * @since:v1.0
    *
    * @android:uninitRender
    * @mobile:leaveDataConf
    * @android:setAudioRouteOutCall
	* @ios:resetAudioRoute
    * @Callback ["JoinConfById","JoinConfAnonymouslyById"]
    * 
    * @UTCallback ["JoinConfById","JoinConfAnonymouslyById"]
    */
    virtual HWM_VOID OnJoinConfFailed(SDKERR result, const HWM_CHAR* reasonDesc, const JoinConfFailedInfo* joinConfFailedInfo) = 0;

    /**
    * @brief
    * [en]
    * [cn]创建周期会议的结果回调
    *
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]错误码
    * @see SDKERR
    *
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]错误描述
    *
    * @param bookConfResult [type:CreateConfResult*][cs_allowNull:N]
    * [en]
    * [cn]预约会议的结果
    * @see CreateConfResult
    *
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnBookCycleConfResult(SDKERR result, const HWM_CHAR* reasonDesc, const CreateConfResult* bookConfResult) {};

    /**
    * @brief
    * [en]
    * [cn]编辑周期会议的结果回调
    *
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]错误码
    * @see SDKERR
    *
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]错误描述
    *
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnModifyCycleConfResult(SDKERR result, const HWM_CHAR* reasonDesc) {};

    /**
    * @brief
    * [en]
    * [cn]编辑周期子会议的结果回调
    *
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]错误码
    * @see SDKERR
    *
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]错误描述
    *
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnModifySubCycleConfResult(SDKERR result, const HWM_CHAR* reasonDesc) {};

    /**
    * @brief
    * [en]
    * [cn]取消周期会议的结果回调
    *
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]错误码
    * @see SDKERR
    *
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]错误描述
    *
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnCancelCycleConfResult(SDKERR result, const HWM_CHAR* reasonDesc) {};

    /**
    * @brief
    * [en]
    * [cn]取消周期子会议的结果回调
    *
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]错误码
    * @see SDKERR
    *
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]错误描述
    *
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnCancelSubCycleConfResult(SDKERR result, const HWM_CHAR* reasonDesc) {};
};


/**
* @brief [en]This class is about confMgr notify.
*        [cn]会议管理通知
*/
class HWM_API IHwmConfMgrNotifyCallback
{
public:
    /**
    * @brief
    * [en]This class is about the notification of conference connection.
    * [cn]会议连接成功的通知
    * @android:setAudioRouteInCall
    * 
    * @param confConnectedInfo[type:ConfConnectedInfo*]
    * [en]
    * [cn]连接上的会议信息
    * @see ConfConnectedInfo 
    * 
    * @since:v1.0
    * 
    * @UTInterface:track
    */
    virtual HWM_VOID OnConfConnectedNotify(const ConfConnectedInfo* confConnectedInfo) = 0;

    /**
    * @brief
    * [en]This class is about the notification of an ended conference.
    * [cn]会议结束的通知
    * @detail
    * [en]
    * [cn]根据SDKERR类型的result参数来判断离会还是会议结束等场景，SDKERR.SDK_CONFCTRL_CONF_END_LEAVE_CONF表示离开会议，SDKERR.SDK_CONFCTRL_CONF_END_STOP_CONF 或 SDKERR.SDK_CONFCTRL_CONF_END_SELF_END表示会议结束，SDKERR.SDK_CONFCTRL_CONF_END_CHAIR_HANGUP表示被主持人移出会场
    * [cn_ios]根据HWMSDKERR类型的result参数来判断离会还是会议结束等场景，HWMSDKSdkConfctrlConfEndLeaveConf表示离开会议，HWMSDKSdkConfctrlConfEndStopConf或HWMSDKSdkConfctrlConfEndSelfEnd表示会议结束，HWMSDKSdkConfctrlConfEndChairHangup表示被主持人移出会场
    *
    * @android:uninitRender
    * @mobile:leaveDataConf
    * @android:setAudioRouteOutCall
	* @ios:resetAudioRoute
    * 
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]错误码
    * @see SDKERR
    * 
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]错误描述
    * 
    * @param confEndInfo [type:ConfEndInfo][cs_allowNull:N]
    * [en]
    * [cn]已结束的会议信息
    * @see ConfEndInfo
    * 
    * @since:v1.0
    * 
    * @UTInterface:track
    */
    virtual HWM_VOID OnConfEndedNotify(SDKERR result, const HWM_CHAR* reasonDesc, const ConfEndInfo* confEndInfo) = 0;

    /**
    * @brief
    * [en]This class is about conference incoming call notification.
    * [cn]会议来电的通知
    * @android:initRender
	* @ios:initAudioRoute
    * 
    * @param confIncomingInfo [type:ConfIncomingInfo][cs_allowNull:N]
    * [en]
    * [cn]会议来电信息
    * @see ConfIncomingInfo
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnConfIncomingNotify(const ConfIncomingInfo* confIncomingInfo) = 0;

    /**
    * @brief
    * [en]
    * [cn]会议来电异常的通知
    * 
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]错误码
    * @see SDKERR
    * 
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]错误描述
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnConfIncomingErrorNotify(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]This class is about the notification of conference list change.Synchronized methods is GetConfListInfo.
    * [cn]会议列表变更
    * @detail
    * [en]
    * [cn]获取会议列表变化
    * 
    * @param confListParam [type:ConfListInfo][cs_allowNull:N]
    * [en]
    * [cn]会议列表信息
    * @see ConfListInfo
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnConfListInfoChanged(const ConfListInfo* confListParam) = 0;

    /**
    * @brief
    * [en]This class is about the notification of anonymous membership account cancellation.
    * [cn]匿名入会账户注销
    * @mobile:imLogout
    * 
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]错误码
    * @see SDKERR
    * 
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]错误描述
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnAnonyJoinConfLogoutNotify(SDKERR result, const HWM_CHAR* reasonDesc) = 0;


    /**
    * @brief
    * [en]This class is about the notification of rejoining the conference without code stream.
    * [cn]会议无码流重新入会的通知
    * @mobile:leaveDataConf
    * 
    * @param reJoinConfReason [type:LeaveConfMode][cs_allowNull:N]
    * [en]
    * [cn]重新入会原因
    * @see LeaveConfMode
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnStartReJoinConfNotify(LeaveConfMode reJoinConfReason) = 0;

    /**
    * @brief
    * [en]This class is about the notification of reconnect status.
    * [cn]重连状态
    * @mobile:disable
    */
    virtual HWM_VOID OnReconnectStatusNotify(ReconnectStatusMode reconnectStatus) = 0;

    /**
    * @brief
    * [en]This class is about the notification of rejoining the conference without code stream successfully.
    * [cn]会议无码流重新入会成功的通知
    * 
    * @param reJoinConfReason [type:LeaveConfMode][cs_allowNull:N]
    * [en]
    * [cn]重新入会原因
    * @see LeaveConfMode
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnReJoinConfSuccessNotify(const LeaveConfMode reJoinConfReason) = 0;

    /**
    * @brief
    * [en]This class is about the notification of leaving the conference without code stream.
    * [cn]会议无码流离会的通知
    * @mobile:leaveDataConf
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnNoStreamLeaveConfNotify() = 0;

    /**
    * @brief
    * [en]This class is about the notification of waiting room info.
    * [cn]等候室信息的通知
    * 
    * @param waitingRoomInfo [type:WaitingRoomInfo][cs_allowNull:N]
    * [en]
    * [cn]等候室信息
    * @see WaitingRoomInfo
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnWaitingRoomInfoNotify(const WaitingRoomInfo* waitingRoomInfo) = 0;

    /**
    * @brief
    * [en]This class is about recording info after conf end.
    * [cn]会议结束时上报录播信息通知
    * @mobile:disable
    */
    virtual HWM_VOID OnConfRecordInfoNotify(ConfRecordInfo* confRecordInfo) = 0;

};

/**
* @brief [en]This class is about confstate notify callback.
*        [cn]会议状态通知
*/
class HWM_API IHwmConfStateNotifyCallback
{
public:
    /**
    * @brief
    * [en]
    * [cn]会议基本信息更新通知
    *
    * @param meetingInfo [MeetingInfo*]
    * [en]
    * [cn]会中信息
    * @see MeetingInfo
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnMeetingInfoChanged(const MeetingInfo* meetingInfo) = 0;

////////////////////////////////////////////////////////////////////////////////////////////////

    /**
    * @brief
    * [en]
    * [cn]我的状态变更: 是否举手的通知
    * 
    * @param isHandup [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否举手
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnSelfHandupChanged(HWM_BOOL isHandup) = 0;

    /**
    * @brief
    * [en]
    * [cn]我的状态变更: 我的名字的通知
    * 
    * @param name [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]名字
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnSelfNameChanged(const HWM_CHAR* name) = 0;

    /**
    * @brief
    * [en]
    * [cn]我的状态变更: 我的角色的通知
    * 
    * @param confRole [type:ConfRole][cs_allowNull:N]
    * [en]
    * [cn]会议角色
    * @see ConfRole
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnSelfRoleChanged(ConfRole confRole) = 0;


    /**
    * @brief
    * [en]
    * [cn]我的状态变更: 是否有云上录播权限的通知
    * 
    * @param hasRecordPermission [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否有云上录播权限
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnSelfHasCloudRecordPermissionChanged(HWM_BOOL hasRecordPermission) = 0;

    /**
    * @brief
    * [en]
    * [cn]我的状态变更: 是否有客户端本地录制权限的通知
    * 
    * @param hasRecordPermission [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否有客户端本地录制权限
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnSelfHasLocalRecordPermissionChanged(HWM_BOOL hasRecordPermission) = 0;

    /**
    * @brief
    * [en]
    * [cn]我的状态变更: 本地录播状态变更
    *
    * @param localRecordState [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否正在本地录制
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnSelfLocalRecordStateChanged(LocalRecordState localRecordState) = 0;
    /**
    * @brief
    * [en]
    * [cn]我的状态变更: 共享状态变更的通知
    * 
    * @param isShare [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否在共享
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnSelfShareStateChanged(HWM_BOOL isShare) = 0;

    /**
    * @brief
    * [en]
    * [cn]我的状态变更: 被邀请共享变更的通知
    * 
    * @param isInviteShare [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否被邀请共享
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnSelfIsInviteShareChanged(HWM_BOOL isInviteShare) = 0;

    /**
    * @brief
    * [en]
    * [cn]我的状态变更: 是否支持共享功能
    * @pc:disable
    *
    * @param shareMode [type:ConfShareMode][cs_allowNull:N]
    * [en]
    * [cn]会议共享模式
    *
    * @since:v1.0
    */
    virtual HWM_VOID  OnSelfShareModeChanged(HWMSDK::ConfShareMode shareMode) {};


////////////////////////////////////////////////////////////////////////////////////////////////
    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 会议模式变化
    * @param confModeType [type:ConfModeType][cs_allowNull:N]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnConfModeTypeChanged(ConfModeType confModeType) = 0;

    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 是否有主席的通知
    * 
    * @param hasHost [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]会中是否有主席
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnConfHasHostChanged(HWM_BOOL hasHost) = 0;

    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 广播的通知
    * 
    * @param broadcastInfo [type:BroadcastInfo][cs_allowNull:N]
    * [en]
    * [cn]广播信息
    * @see BroadcastInfo
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnConfBroadcastInfoChanged(const BroadcastInfo* broadcastInfo) = 0;

    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 点名的通知
    * 
    * @param rollCallInfo [type:RollCallInfo][cs_allowNull:N]
    * [en]
    * [cn]点名信息
    * @see RollCallInfo
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnConfRollCallInfoChanged(const RollCallInfo* rollCallInfo) = 0;

    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 是否全场静音的通知
    * 
    * @param isAllMuted [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]会议是否全场静音
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnConfIsAllMutedChanged(HWM_BOOL isAllMuted) = 0;

    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 是否支持字幕的通知
    * 
    * @param isSupportSubtitle [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]会议是否支持字幕
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnConfIsSupportSubtitleChanged(HWM_BOOL isSupportSubtitle) = 0;

    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 是否允许解除静音的通知
    * 
    * @param allowUnmute [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]会议是否允许解除静音
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnConfIsAllowUnmuteChanged(HWM_BOOL allowUnmute) = 0;

    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 会议是否锁定的通知
    * 
    * @param isLocked [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]会议是否锁定
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnConfIsLockedChanged(HWM_BOOL isLocked) = 0;

    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 是否共享锁定的通知
    * 
    * @param isShareLocked [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]会议是否共享锁定
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnConfIsShareLockedChanged(HWM_BOOL isShareLocked) = 0;

    /**
    * @brief
    * [en]
    * [cn]聊天权限变更通知
    *
    * @param chatPermission [type:ChatPermission][cs_allowNull:N]
    * [en]
    * [cn]枚举权限
    *
    */
    virtual HWM_VOID OnChatPermissionChanged(ChatPermission chatPermission) {};

    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 是否暂停的通知
    * 
    * @param isPaused [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]会议是否暂停
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnConfIsPausedChanged(HWM_BOOL isPaused) = 0;

    /* 会议状态变更: 是否开启水印 */
    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 是否开启水印的通知
    * 
    * @param supportWatermark [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否开启水印
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnConfSupportWatermarkChanged(HWM_BOOL supportWatermark) = 0;

    /* 会议状态变更: 是否支持联席主持人 */
    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 是否支持联席主持人的通知
    * 
    * @param supportCohost [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否支持联席主持人
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnConfSupportCohostChanged(HWM_BOOL supportCohost) = 0;

    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 与会者人数(包括在线的视频和音频会场人数)的通知
    * 
    * @param attendeeSizeInfo [type:AttendeeSizeInfo][cs_allowNull:N]
    * [en]
    * [cn]与会者人数信息
    * @see AttendeeSizeInfo
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnConfAttendeeSizeChanged(const AttendeeSizeInfo* attendeeSizeInfo) = 0;

    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 举手信息的通知
    * 
    * @param handupInfo [type:ConfHandupInfo][cs_allowNull:N]
    * [en]
    * [cn]举手信息
    * @see ConfHandupInfo
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnConfHandupInfoChanged(const ConfHandupInfo* handupInfo) = 0;

    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 本地录制信息变更的通知
    * 
    * @param localRecordInfo [type:LocalRecordInfo][cs_allowNull:N]
    * [en]
    * [cn]本地录制信息
    * @see LocalRecordInfo
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnConfLocalRecordChanged(const LocalRecordInfo* localRecordInfo) = 0;

    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 云上录制状态变更的通知
    * 
    * @param cloudRecordInfo [type:CloudRecordInfo][cs_allowNull:N]
    * [en]
    * [cn]云上录制信息
    * @see CloudRecordInfo
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnConfCloudRecordChanged(const CloudRecordInfo* cloudRecordInfo) = 0;

    /**
    * @brief
    * [en]This class is about the notification of no code stream for the conference.
    * [cn]会议无码流的通知
    *
    * @param noStreamSeconds [type:HWM_INT32][cs_allowNull:N]
    * [en]
    * [cn]无码流时长，单位秒
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnConfNoStreamNotify(HWM_INT32 noStreamSeconds) = 0;

    /**
    * @brief
    * [en]
    * [cn]与会者列表变更: 全量的与会者列表的通知
    * 
    * @param attendeeList [type:AttendeeList][cs_allowNull:N]
    * [en]
    * [cn]与会者列表
    * @see AttendeeList
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnAttendeeListChanged(const AttendeeList* attendeeList) = 0;

    /**
    * @brief
    * [en]
    * [cn]与会者列表变更: 视频与会者列表的通知
    * 
    * @param attendeeList [type:AttendeeList][cs_allowNull:N]
    * [en]
    * [cn]与会者列表
    * @see AttendeeList
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnVideoAttendeeListChanged(const AttendeeList* attendeeList) = 0;

    /**
    * @brief
    * [en]
    * [cn]与会者列表变更: 发言人变更的通知
    * 
    * @param speakerList [type:SpeakerList][cs_allowNull:N]
    * [en]
    * [cn]发言人列表
    * @see SpeakerList
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnSpeakerListChanged(const SpeakerList* speakerList) = 0;

    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 允许入会范围的通知
    * 
    * @param allowJoinType [type:ConfAllowJoinUserType][cs_allowNull:N]
    * [en]
    * [cn]允许入会范围
    * @see ConfAllowJoinUserType
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnConfAllowJoinTypeChanged(ConfAllowJoinUserType allowJoinType) = 0;

    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 是否支持邀请共享的通知
    * 
    * @param supportInviteShare [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否支持邀请共享
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnConfSupportInviteShareChanged(HWM_BOOL supportInviteShare) = 0;

	/**
	* @brief
	* [en]
	* [cn]会议状态变更: 是否支持取消共享的通知
	*
	* @param enableCancelShare [type:HWM_BOOL][cs_allowNull:N]
	* [en]
	* [cn]是否支持取消共享
	*
	* @since:v1.0
	*/
	virtual HWM_VOID OnConfEnableCancelShareChanged(HWM_BOOL enableCancelShare) {};

    /**
    * @brief
    * [en]This class is about custom multi picture notify.
    * [cn]广播多画面通知
    * @ios:disable
    *
    * @param customMultiPicInfo [type:CustomMultiPicInfo][cs_allowNull:N]
    * [en]
    * [cn]广播多画面信息
    * @see CustomMultiPicInfo
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnCustomMultiPictureInfoChanged(const CustomMultiPicInfo* customMultiPicInfo) = 0;

    /**
    * @brief
    * [en]This class is about commercial status change notify.
    * [cn]商用资源状态变化通知
    *
    * @param statusType [type:CommercialStatusType][cs_allowNull:N]
    * [en]
    * [cn]状态类型
    * @see CommercialStatusType
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnCommercialStatusChanged(const CommercialStatusType statusType) = 0;

    /**
    * @brief
    * [en]
    * [cn]主画面userId变化的结果回调
    *
    * @param userId [type:HWM_UINT32]
    * [en]
    * [cn]用户ID
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnMainVideoUserIdChanged(HWM_UINT32 userId) = 0;

    /**
    * @brief
    * [en]
    * [cn]被主持人邀请 打开/关闭 麦克风
    *
    * @param isOpen [type:HWM_BOOL]
    * [en]
    * [cn]是否打开
    *
    * @param openType [type:InviteOpenMicType]
    * [en]
    * [cn]邀请类型
    *
    * @param inviterUserId [type:HWM_UINT32]
    * [en]
    * [cn]邀请者ID
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnInviteOpenMicNotify(HWM_BOOL isOpen, InviteOpenMicType openType, HWM_UINT32 inviterUserId) = 0;

    /**
    * @brief
    * [en]
    * [cn]主持人收到邀请者拒绝开启麦克风通知
    *
    * @param userId [type:HWM_UINT32]
    * [en]
    * [cn]拒绝者Id
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnRefuseOpenMicNotify(HWM_UINT32 userId) = 0;

    /**
    * @brief
    * [en]
    * [cn]被主持人邀请 打开/关闭 摄像头
    *
    * @param isOpen [type:HWM_BOOL]
    * [en]
    * [cn]摄像头是否打开
    *
    * @param inviterUserId [type:HWM_UINT32]
    * [en]
    * [cn]邀请者ID
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnInviteOpenCameraNotify(HWM_BOOL isOpen, HWM_UINT32 inviterUserId) = 0;

    /**
    * @brief
    * [en]
    * [cn]主持人收到邀请者拒绝开启摄像头通知
    *
    * @param userId [type:HWM_UINT32]
    * [en]
    * [cn]拒绝者Id
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnRefuseOpenCameraNotify(HWM_UINT32 userId) = 0;

    /**
    * @brief
    * [en]
    * [cn]功能开关：主持人是否邀请与会人开启麦克风变化通知
    *
    * @param isInvite [type:HWM_BOOL]
    * [en]
    * [cn]是否邀请与会人开启麦克风
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnInviteOpenMicChanged(HWM_BOOL isInvite) = 0;

    /**
    * @brief
    * [en]
    * [cn]是否允许改名变化通知
    *
    * @param isAllow [type:HWM_BOOL]
    * [en]
    * [cn]是否允许
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnConfIsAllowRenameChanged(HWM_BOOL isAllow) {};

    /**
    * @brief
    * [en]
    * [cn]功能开关：主持人是否能够强制关闭与会人摄像头通知
    *
    * @param enable [type:HWM_BOOL]
    * [en]
    * [cn]是否能够强制关闭与会人摄像头
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnEnableForceCloseCameraChanged(HWM_BOOL enable) = 0;

    /**
    * @brief
    * [en]
    * [cn]功能开关：主持人设置与会人自行开启摄像头状态变化通知
    *
    * @param enable [type:HWM_BOOL]
    * [en]
    * [cn]是否支持设置与会人自行开启摄像头
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnEnableAllowOpenCameraChanged(HWM_BOOL enable) = 0;

	/**
	* @brief
	* [en]
	* [cn]等候室：会议状态变更: 是否支持等候室的通知
	*
	* @param supportWaitingRoom [type:HWM_BOOL][cs_allowNull:N]
	* [en]
	* [cn]是否支持等候室
	*
	* @since:v1.0
	*/
	virtual HWM_VOID OnConfSupportWaitingRoomChanged(HWM_BOOL supportWaitingRoom) = 0;

	/**
	* @brief
	* [en]
	* [cn]等候室：会议状态变更: 等候室开启状态的通知
	*
	* @param isOpenWaitingRoom [type:HWM_BOOL][cs_allowNull:N]
	* [en]
	* [cn]会议等候室是否开启
	*
	* @since:v1.0
	*/
	virtual HWM_VOID OnConfIsOpenWaitingRoomChanged(HWM_BOOL isOpenWaitingRoom) = 0;

	/**
	* @brief
	* [en]
	* [cn]等候室：等候室成员列表变更的通知
	*
	* @param waitingInfoList [type:AttendeeList][cs_allowNull:N]
	* [en]
	* [cn]等候室成员列表
	* @see AttendeeList
	*
	* @since:v1.0
	*/
	virtual HWM_VOID OnWaitingListChanged(const AttendeeList* waitingInfoList) = 0;

	/**
	* @brief
	* [en]
	* [cn]网络研讨会：我的状态变更: 是否允许说话的通知
	* @detail
	* [en]
	* [cn]网络研讨会相关
	*
	* @param isAllowSpeak [type:HWM_BOOL][cs_allowNull:N]
	* [en]
	* [cn]是否允许说话
	*
	* @since:v1.0
	*/
	virtual HWM_VOID OnSelfAllowSpeakChanged(HWM_BOOL isAllowSpeak) = 0;

	/**
	* @brief
	* [en]
	* [cn]网络研讨会：我的状态变更: 是否可以转成观众
	*
	* @param canSwitchAudience [type:HWM_BOOL][cs_allowNull:N]
	* [en]
	* [cn]是否可以转成观众
	*
	* @since:v1.0
	*/
	virtual HWM_VOID OnSelfCanSwitchToAudienceChanged(HWM_BOOL canSwitchAudience) = 0;

	/**
	* @brief
	* [en]
	* [cn]网络研讨会：会议状态变更: 观众个数的通知
	*
	* @param audienceSize [type:HWM_UINT32][cs_allowNull:N]
	* [en]
	* [cn]观众个数
	*
	* @since:v1.0
	*/
	virtual HWM_VOID OnConfAudienceSizeChanged(HWM_UINT32 audienceSize) = 0;

	/**
	* @brief
	* [en]
	* [cn]网络研讨会：会议状态变更: 观众的观看视频模式的通知
	*
	* @param audienceLayoutType [type:AudienceLayoutType][cs_allowNull:N]
	* [en]
	* [cn]观众的观看视频模式
	* @see AudienceLayoutType
	*
	* @since:v1.0
	*/
	virtual HWM_VOID OnConfAudienceVideoLayoutChanged(AudienceLayoutType audienceLayoutType) = 0;

	/**
	* @brief
	* [en]
	* [cn]网络研讨会：会议状态变更: 是否允许观众入会的通知
	*
	* @param isAllowJoin [type:HWM_BOOL][cs_allowNull:N]
	* [en]
	* [cn]会议是否允许观众加入

	*
	* @since:v1.0
	*/
	virtual HWM_VOID OnConfIsAllowAudienceJoinChanged(HWM_BOOL isAllowJoin) = 0;

	/**
	* @brief
	* [en]
	* [cn]网络研讨会：观众与会者列表变更的通知
	*
	* @param audienceList [type:AttendeeList][cs_allowNull:N]
	* [en]
	* [cn]与会者列表
	* @see AttendeeList
	*
	* @since:v1.0
	*/
	virtual HWM_VOID OnAudienceListChanged(const AttendeeList* audienceList) = 0;

	/**
	* @brief
	* [en]This class is about the notification of audience changed.Synchronized methods is GetAudienceSizeInfo.
	* [cn]网络研讨会：观众人数变化通知
	*
	* @detail
	* [en]
	* [cn]获取观众人数变化
	*
	* @param showAudienceInfo [type:ShowAudienceSizeInfo*]
	* [en]
	* [cn]观众人数信息
	* @see ShowAudienceSizeInfo
	*
	* @return [type:HWM_VOID]
	*
	* @since:v1.0
	*/
	virtual HWM_VOID OnAudienceInfoSizeChanged(ShowAudienceSizeInfo* showAudienceInfo) = 0;

	/**
	* @brief
	* [en]
	* [cn]同声传译：会议状态变更: 同声传译的通知
	*
	* @param simuInterpretInfo [type:SimuInterpretInfo][cs_allowNull:N]
	* [en]
	* [cn]同声传译信息
	* @see SimuInterpretInfo
	*
	* @since:v1.0
	*/
	virtual HWM_VOID OnConfSimuInterpretChanged(const SimuInterpretInfo* simuInterpretInfo) = 0;

	/**
	* @brief
	* [en]
	* [cn]同声传译：会议状态变更: 是否开启同声传译的通知
	*
	* @param isSimuInterpretOpened [type:HWM_BOOL][cs_allowNull:N]
	* [en]
	* [cn]会议是否开启同声传译
	*
	* @since:v1.0
	*/
	virtual HWM_VOID OnConfIsSimuInterpretOpenedChanged(HWM_BOOL isSimuInterpretOpened) = 0;

	/**
	* @brief
	* [en]
	* [cn]同声传译：我的状态变更: 同声传译的通知
	*
	* @param selfInterpreterInfo [type:InterpreterInfo][cs_allowNull:N]
	* [en]
	* [cn]同声传译信息
	* @see InterpreterInfo
	*
	* @since:v1.0
	*/
	virtual HWM_VOID OnSelfInterpreterChanged(const InterpreterInfo* selfInterpreterInfo) = 0;

	/**
	* @brief
	* [en]
	* [cn]同声传译：与会者支持选择收听原声频道变化通知
	*
	* @param enable [type:HWM_BOOL]
	* [en]
	* [cn]是否支持
	*
	* @return [type:HWM_VOID]
	*
	* @since:v1.0
	*/
	virtual HWM_VOID OnEnableOriginVoiceChanged(HWM_BOOL enable) {};

    /**
    * @brief
    * [en]
    * [cn]状态变更：是否允许与会人自行开启摄像头状态变化通知
    *
    * @param isAllow [type:HWM_BOOL]
    * [en]
    * [cn]是否允许与会人自行开启摄像头
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnIsAllowOpenCameraChanged(HWM_BOOL isAllow) {};

    /**
    * @brief
    * [en]
    * [cn]会议敏感词信息更新通知
    *
    * @param sensitiveWordLists [type:SensitiveWordList*]
    * [en]
    * [cn]会中敏感词信息
    * @see SensitiveWordInfo
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnSensitiveWordChanged(const SensitiveWordList* sensitiveWordLists) {};

    /* 会议状态变更: 是否支持标注权限控制 */
    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 是否支持标注权限控制
    *
    * @param supportAnnotationPermission [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否支持标注权限控制
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnSupportAnnotationPermissionChanged(HWM_BOOL supportAnnotationPermission) {};
    /**
    * @brief
    * [en]
    * [cn]会前状态信息变更
    * @mobile:leaveDataConfWithParam
    *
    * @param joinStatus [type:JoinStatusType]
    * [en]
    * [cn]会前状态信息
    * @see JoinStatusType
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnJoinStatusChanged(const JoinStatusType joinStatus) {}

    /**
    * @brief
    * [en]
    * [cn]来宾会前等待信息变更
    *
    * @param guestWaitingBeforeConfInfo [type:GuestWaitingBeforeConfInfo]
    * [en]
    * [cn]来宾会前等待信息
    * @see GuestWaitingBeforeConfInfo
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnGuestWaitingBeforeConfInfoChanged(const GuestWaitingBeforeConfInfo* guestWaitingBeforeConfInfo) {};

    /**
    * @brief
    * [en]
    * [cn]观众等待信息变更
    *
    * @param audienceWaitingInfo [type:AudienceWaitingInfo]
    * [en]
    * [cn]观众等待信息
    * @see AudienceWaitingInfo
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnAudienceWaitingInfoChanged(const AudienceWaitingInfo* audienceWaitingInfo) {};
};

/**
* @brief [en]This class is about confctrl result.
*        [cn]会议控制操作类
*/
class HWM_API IHwmConfCtrlResultCallback
{
public:

    /**
    * @brief
    * [en]
    * [cn]设置观众观看视频模式的结果回调
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
    virtual HWM_VOID OnSetAudienceVideoLayoutResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]挂断与会者的结果回调
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
    virtual HWM_VOID OnHangupAttendeeResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]移除与会者的结果回调
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
    virtual HWM_VOID OnRemoveAttendeeResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]添加与会者的结果回调
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
    virtual HWM_VOID OnAddAttendeeResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]锁定会议的结果回调
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
	virtual HWM_VOID OnLockConfResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]锁定会议共享的结果回调
    * 
    * @param result [type:SDKERR]
    * [en]
    * [cn]错误码
    * @see SDKERR
    * 
    * @param reasonDesc [type:HWM_CHAR*]
    * [cn]错误描述
    *
    * @param isLock [type:HWM_BOOL]
    * [en]
    * [cn]是否锁定会议共享
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
	virtual HWM_VOID OnLockShareResult(SDKERR result, const HWM_CHAR* reasonDesc, HWM_BOOL isLock) = 0;

    /**
    * @brief
    * [en]
    * [cn]同声传译：传译员确认的结果回调
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
	virtual HWM_VOID OnInterpreterConfirmResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]同声传译：设置语言频道的结果回调
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
    * @param languageChannelType [type:SetLanguageChannelType]
    * [en]
    * [cn]设置的语言频道类型
    * @see SetLanguageChannelType
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
	virtual HWM_VOID OnSetLanguageChannelResult(SDKERR result, const HWM_CHAR* reasonDesc, SetLanguageChannelType languageChannelType) = 0;

    /**
    * @brief
    * [en]
    * [cn]授权或禁止某人录制的结果回调
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
    * @param grantAttendRecordResult [type:GrantAttendRecordResult*]
    * [en]
    * [cn]授权或禁止某人录制的结果
    * @see GrantAttendRecordResult
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
	virtual HWM_VOID OnLocalRecordGrantAttendeeResult(SDKERR result, const HWM_CHAR* reasonDesc, GrantAttendRecordResult* grantAttendRecordResult) = 0;

    /**
    * @brief
    * [en]
    * [cn]设置录制权限范围的结果回调
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
    * @param type [type:ClientRecordMode]
    * [en]
    * [cn]授权或禁止某人录制的结果
    * @see ClientRecordMode
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
	virtual HWM_VOID OnSetLocalRecordModeResult(SDKERR result, const HWM_CHAR* reasonDesc, ClientRecordMode type) = 0;

    /**
    * @brief
    * [en]
    * [cn]角色转换的结果回调
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
    * @param switchRoleResult [type:SwitchRoleResult*]
    * [en]
    * [cn]授权或禁止某人录制的结果
    * @see SwitchRoleResult
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
	virtual HWM_VOID OnSwitchRoleByHostResult(SDKERR result, const HWM_CHAR* reasonDesc, const SwitchRoleResult* switchRoleResult) = 0;

    /**
    * @brief
    * [en]
    * [cn]云端录制的结果回调
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
    * @param isStartRecord [type:HWM_BOOL]
    * [en]
    * [cn]是否开始录制
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
	virtual HWM_VOID OnOperateCloudRecordResult(SDKERR result, const HWM_CHAR* reasonDesc, HWM_BOOL isStartRecord) = 0;

    /**
    * @brief
    * [en]
    * [cn]广播的结果回调
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
    * @param isBroadcast [type:HWM_BOOL]
    * [en]
    * [cn]是否广播
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnBroadcastAttendeeResult(SDKERR result, const HWM_CHAR* reasonDesc, HWM_BOOL isBroadcast) = 0;

    /**
    * @brief
    * [en]
    * [cn]允许观众入会的结果回调
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
    * @param isAllow [type:HWM_BOOL]
    * [en]
    * [cn]是否允许观众入会
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnAllowAudienceJoinResult(SDKERR result, const HWM_CHAR* reasonDesc, HWM_BOOL isAllow) = 0;

    /**
    * @brief
    * [en]
    * [cn]允许观众说话的结果回调
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
    * @param isAllow [type:HWM_BOOL]
    * [en]
    * [cn]是否允许观众说话
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnAllowAudienceSpeakResult(SDKERR result, const HWM_CHAR* reasonDesc, HWM_BOOL isAllow) = 0;

    /**
    * @brief
    * [en]
    * [cn]全场静音与取消静音的结果回调
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
    * @param isMute [type:HWM_BOOL]
    * [en]
    * [cn]是否静音
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnMuteAllAttendeeResult(SDKERR result, const HWM_CHAR* reasonDesc, HWM_UINT32 isMute) = 0;

    /**
    * @brief
    * [en]
    * [cn]请求主席权限的结果回调
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
    virtual HWM_VOID OnRequestHostRoleResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]释放主席权限的结果回调
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
    virtual HWM_VOID OnReleaseHostRoleResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]设置与会者为主席的结果回调
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
    virtual HWM_VOID OnGrantHostRoleResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]与会者举手的结果回调
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
    * @param isHandUp [type:HWM_BOOL]
    * [en]
    * [cn]与会者是否举手
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnAttendeeHandsupResult(SDKERR result, const HWM_CHAR* reasonDesc, HWM_BOOL isHandUp) = 0;

    /**
    * @brief
    * [en]
    * [cn]静音或取消静音与会者的结果回调
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
    * @param isMute [type:HWM_BOOL]
    * [en]
    * [cn]是否静音与会者
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnMuteAttendeeResult(SDKERR result, const HWM_CHAR* reasonDesc, HWM_BOOL isMute) = 0;

    /**
    * @brief
    * [en]
    * [cn]设置是否允许与会者自己解除静音的结果回调
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
    * @param isAllow [type:HWM_BOOL]
    * [en]
    * [cn]是否允许与会者自己解除静音 
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnAllowAttendeeUnMuteResult(SDKERR result, const HWM_CHAR* reasonDesc, HWM_BOOL isAllow) = 0;

    /**
    * @brief
    * [en]
    * [cn]设置或撤销联席主持人的结果回调
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
    * @param setCohostResultInfo [type:SetCohostResult]
    * [en]
    * [cn]设置联席主持人结果
    * @see SetCohostResult
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnSetCohostRightResult(SDKERR result, const HWM_CHAR* reasonDesc, SetCohostResult* setCohostResultInfo) = 0;

    /**
    * @brief
    * [en]
    * [cn]改名的结果回调
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
    virtual HWM_VOID OnRenameResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]是否允许改名结果回调
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
    virtual HWM_VOID OnAllowAttendeeRenameResult(SDKERR result, const HWM_CHAR* reasonDesc, HWM_BOOL isAllow) {};

    /**
    * @brief
    * [en]
    * [cn]主持人启动/暂停会议的结果回调
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
    * @param isPause [type:HWM_UINT32]
    * [en]
    * [cn]是否暂停
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnPauseConfResult(SDKERR result, const HWM_CHAR* reasonDesc, HWM_BOOL isPause) = 0;


    /**
    * @brief
    * [en]
    * [cn]发起/取消共享邀请的结果回调
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
    * @param setShareResultInfo [type:SetShareResult*]
    * [en]
    * [cn]发起/取消共享邀请的结果
    * @see SetShareResult
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnInviteShareResult(SDKERR result, const HWM_CHAR* reasonDesc, const InviteShareResult *inviteShareShareResultInfo) = 0;

    /**
    * @brief
    * [en]
    * [cn]接收/拒绝共享邀请的结果回调
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
    * @param setShareResultInfo [type:SetShareResult *]
    * [en]
    * [cn]设置共享的结果
    * @see SetShareResult
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnAnswerInviteShareResult(SDKERR result, const HWM_CHAR* reasonDesc, const InviteShareResult *setShareResultInfo) = 0;

    /**
    * @brief
    * [en]
    * [cn]允许等候者入会的结果回调
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
    virtual HWM_VOID OnAllowWaitingAttendeeEnterResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]允许所有等候者入会结果通知的结果回调
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
    virtual HWM_VOID OnAllowAllWaitingAttendeeEnterResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]设置来宾允许入会范围的结果回调
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
    * @param type [type:ConfAllowJoinUserType]
    * [en]
    * [cn]允许加入会议的用户类型
    * @see ConfAllowJoinUserType
    * 
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnUpdateAllowJoinUserTypeResult(SDKERR result, const HWM_CHAR* reasonDesc, ConfAllowJoinUserType type) = 0;

    /**
    * @brief
    * [en]
    * [cn]结束会议结果
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
    virtual HWM_VOID OnEndConfResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]开关字幕结果
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
    * @param isOpen [type:HWM_BOOL]
    * [en]
    * [cn]是否开启字幕
    *
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnOpenSubtitleResult(SDKERR result, const HWM_CHAR* reasonDesc, HWM_BOOL isOpen) = 0;

    /**
    * @brief
    * [en]
    * [cn]离开会议的结果回调
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
    virtual HWM_VOID OnLeaveConfResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]拒绝打开麦克风结果回调
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
    virtual HWM_VOID OnRefuseOpenMicResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]邀请打开摄像头结果回调
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
    virtual HWM_VOID OnInviteOpenCameraResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]拒绝打开摄像头结果回调
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
    virtual HWM_VOID OnRefuseOpenCameraResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]是否允许参会者开启视频结果回调
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
    virtual HWM_VOID OnAllowAttendeeOpenCameraResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

	/**
	* @brief
	* [en]
	* [cn]等候室：移除等候室成员的结果回调
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
	virtual HWM_VOID OnRemoveWaitingAttendeeResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

	/**
	* @brief
	* [en]
	* [cn]等候室：移除全部等候室成员的结果回调
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
	virtual HWM_VOID OnRemoveAllWaitingAttendeeResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

	/**
	* @brief
	* [en]
	* [cn]等候室：移入等候室的结果回调
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
	virtual HWM_VOID OnMoveToWaitingRoomResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

	/**
	* @brief
	* [en]
	* [cn]等候室：启用或关闭等候室的结果回调
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
	* @param isOpen [type:HWM_BOOL]
	* [en]
	* [cn]是否启用等候室
	*
	* @since:v1.0
    *
    * @UTCallback
	*/
	virtual HWM_VOID OnOpenWaitingRoomResult(SDKERR result, const HWM_CHAR* reasonDesc, HWM_BOOL isOpen) = 0;

};

/**
* @brief [en]xxxxxxxxx
*        [cn]视频信息通知回调
*/
class HWM_API IHwmVideoInfoNotifyCallback
{
public:
    /**
    * @brief
    * [en]xxxxx
    * [cn]视频窗口信息变更:名称
    *
    * @param userId [type:HWM_UINT32]
    * [en]
    * [cn]用户的唯一标识ID
    * @param name [type:HWM_CHAR*]
    * [en]
    * [cn]用户名
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnVideoNameChanged(HWM_UINT32 userId, const HWM_CHAR* name) = 0;

    /**
    * @brief
    * [en]xxxxx
    * [cn]视频窗口信息变更:静音
    *
    * @param userId [type:HWM_UINT32]
    * [en]
    * [cn]用户的唯一标识ID
    * @param isMute   [type:HWM_BOOL]
    * [en]
    * [cn]是否静音
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnVideoIsMuteChanged(HWM_UINT32 userId, HWM_BOOL isMute) = 0;

    /**
    * @brief
    * [en]xxxxx
    * [cn]视频窗口信息变更:举手
    *
    * @param userId [type:HWM_UINT32] 
    * [en]
    * [cn]用户的唯一标识ID
    * @param isHandup   [type:HWM_BOOL] 
    * [en]
    * [cn]是否举手
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnVideoIsHandupChanged(HWM_UINT32 userId, HWM_BOOL isHandup) = 0;

    /**
    * @brief
    * [en]xxxxx
    * [cn]视频是否是最大发言人
    *
    * @param userId [type:HWM_UINT32] 
    * [en]
    * [cn]用户的唯一标识ID
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnVideoIsMaxSpeakerChanged(HWM_UINT32 userId) = 0;

    /**
    * @brief
    * [en]xxxxx
    * [cn]视频是否在加载
    *
    * @param userId [type:HWM_UINT32] 
    * [en]
    * [cn]用户的唯一标识ID
    * @param isLoading   [type:HWM_BOOL] 
    * [en]
    * [cn]视频是否在加载
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnVideoIsLoadingChanged(HWM_UINT32 userId, HWM_BOOL isLoading) = 0;

    /**
    * @brief
    * [en]xxxxx
    * [cn]视频流的变化通知
    *
    * @param userId [type:HWM_UINT32] 
    * [en]
    * [cn]用户的唯一标识ID
    * @param streamType [type:StreamType] 
    * [en]
    * [cn]流类型
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnVideoStreamTypeChanged(HWM_UINT32 userId, StreamType streamType) = 0;

    /**
    * @brief
    * [en]xxxxx
    * [cn]视频窗口信息变更:信号格
    *
    * @param userId [type:HWM_UINT32] 
    * [en]
    * [cn]用户的唯一标识ID
    * @param level [type:HWM_UINT32] 
    * [en]
    * [cn]信号强度等级
    * @detail
    * [en]
    * [cn]level的取值范围是0-4，4是信号最强
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnVideoNetQualityChanged(HWM_UINT32 userId, HWM_UINT32 level) = 0;
};

/**
* @brief [en]This class is about confctrl notify callback.
*        [cn]会议控制通知回调
*/
class HWM_API IHwmConfCtrlNotifyCallback
{
public:

    /**
    * @brief
    * [en]
    * [cn]角色切换的通知
    * 
    * @param switchRoleInfo [type:SwitchRoleInfo] 
    * [en]
    * [cn]用户角色
    * @see SwitchRoleInfo 
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnSwitchRoleNotify(SwitchRoleInfo* switchRoleInfo) = 0;

    /**
    * @brief
    * [en]
    * [cn]邀请/取消共享的通知
    * 
    * @param isShare [type:HWM_BOOL] 
    * [en]
    * [cn]是否共享
    *
    * @return [type:HWM_VOID]
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnInviteShareNotify(HWM_BOOL isShare) = 0;

    /**
    * @brief
    * [en]
    * [cn]接受/拒绝共享的通知
    * 
    * @param userId [type:HWM_UINT32] 
    * [en]
    * [cn]用户ID
    * 
    * @param result [type:SDKERR] 
    * [en]
    * [cn]错误码
    * @see SDKERR
    *
    * @return [type:HWM_VOID]
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnAnswerShareNotify(HWM_UINT32 userId, SDKERR result) = 0;

    

    /**
    * @brief
    * [en]
    * [cn]会议结束时录制结果的通知
    * 
    * @param recordInfo [type:RecordNotifyWhenConfEndInfo*] 
    * [en]
    * [cn]录制结果
    * @see RecordNotifyWhenConfEndInfo 
    *
    * @return [type:HWM_VOID]
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnRecordWhenEndConfNotify(RecordNotifyWhenConfEndInfo* recordInfo) = 0;


    /**
    * @brief
    * [en]This class is about subtitile info notify.
    * [cn]字幕消息实时通知
    * @mobile:disable
    *
    * @param subtitleInfo [type:RealTimeSubtitle *] 
    * [en]
    * [cn]实时字幕
    * @see RealTimeSubtitle
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnRealTimeSubtitleInfoNotify(RealTimeSubtitle *realTimeSubtitle) = 0;

    /**
    * @brief
    * [en]This class is about subtitile info notify.
    * [cn]字幕记录消息通知
    * @mobile:disable
    * 
    * @param subtitleInfo [type:SubtitleRecordInfo*] 
    * [en]
    * [cn]字幕记录信息
    * @see SubtitleRecordInfo
    *
    * @return [type:HWM_VOID]
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnSubtitleRecordNotify(SubtitleRecordInfo* subtitleInfo) = 0;

    /**
    * @brief
    * [en]This class is about the notification of local record stop.
    * [cn]本地录制停止通知
    * @mobile:disable
    * @since:v1.0
    */
    virtual HWM_VOID OnStopLocalRecordReasonNotify(StopLocalRecordReason reason) = 0;

    /**
    * @brief
    * [en]xxxx
    * [cn]异步推送新增与会者结果
    * 
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]错误码
    * @see SDKERR
    * 
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]错误描述
    * 
    * @since:v1.0
    */
    virtual HWM_VOID OnAsynAddAttendeeNotify(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

	/**
	* @brief
	* [en]xxxx
	* [cn]通知主动选看人员已经离开会议
	*
	* @param userId [type:HWM_UINT32]
	* [en]
	* [cn]用户的唯一标识ID
	*
	* @since:v1.0
	*/
	virtual HWM_VOID OnSpecifiedAttendeeLeaveNotify(HWM_UINT32 userId) {};

    /**
    * @brief
    * [en]xxxx
    * [cn]本地录制状态变化，上报操作类型
    *
    * @mobile:disable
    *
    * @param operation [type:LocalRecordOperation]
    * [en]
    * [cn]录制操作类型
    * @see LocalRecordOperation
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnSelfLocalRecordStateNotify(LocalRecordOperation operation) = 0;
};

/**
* @brief [en]This class is about device result callback.
*        [cn]会议设备操作类回调
*/
class HWM_API IHwmConfDeviceResultCallback
{
public:

};

/**
* @brief [en]This class is about device notify callback.
*        [cn]会议设备通知回调
*/
class HWM_API IHwmConfDeviceNotifyCallback
{
public:
    /**
    * @brief
    * [en]This class is about video device status change. Synchronized Method is GetCameraState.
    * [cn]视频设备状态变化
    *
    * @param status [type:DeviceStatus]
    * [en]
    * [cn]摄像头设备状态参数
    * @see DeviceStatus
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnCameraStateChanged(DeviceStatus status) = 0;

    /**
    * @brief
    * [en]This class is about the changes of microphone mute status,TRUE - micOn;FALSE - micOff. Synchronized Method is GetMicState
    * [cn]麦克风静音状态变化
    *
    * @param isOn [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]麦克风状态变化参数
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnMicStateChanged(HWM_BOOL isOn) = 0;

    /**
    * @brief
    * [en]This class is about the changes of speak mute status,TRUE - micOn;FALSE - micOff. Synchronized Method is GetSpeakState
    * [cn]扬声器静音状态变化
    * @detail
    * [en]
    * [cn]isOn：TRUE - speakOn;FALSE - speakOff
    *
    */
    virtual HWM_VOID OnSpeakStateChanged(HWM_BOOL isOn) = 0;

    /**
    * @brief
    * [en]]This API is about the changes of camera devices. 
    * [cn]获取摄像头设备变化信息
    * @mobile:disable
    */
    virtual HWM_VOID OnCameraDevicesChanged(CameraDeviceInfo* camDeviceInfo) = 0;

    /**
    * @brief
    * [en]This API is about the changes of microphone devices. 
    * [cn]获取麦克风设备变化信息
    * @mobile:disable
    */
    virtual HWM_VOID OnMicDevicesChanged(MicDeviceInfo* micDetailInfo) = 0;

    /**
    * @brief
    * [en]This API is about the changes of speaker devices.
    * [cn]获取扬声器设备变化信息
    * @mobile:disable
    */
    virtual HWM_VOID OnSpeakerDevicesChanged(SpkDeviceInfo* spkDeviceInfo) = 0;

    /**
    * @brief
    * [en]This class is about the callback of howl status detection.
    * [cn]啸叫状态回调
    *
    * @param howlstate [type:HowlStatus][cs_allowNull:N]
    * [en]
    * [cn]啸叫状态参数
    * @see HowlStatus
    *
    * @since:v1.0
    */
	virtual HWM_VOID OnDevicesHowlStatusNotify(HowlStatus howlstate) = 0;

    /**
    * @brief
    * [en]xxxxxx
    * [cn]系统麦克风是否被静音
    * @mobile:disable
    */
    virtual HWM_VOID OnSysMicIsMutedNotify(HWM_BOOL isMute) = 0;

    /**
    * @brief
    * [en]xxxxxx
    * [cn]系统扬声器是否被静音
    * @mobile:disable
    */
    virtual HWM_VOID OnSysSpkIsMutedNotify(HWM_BOOL isMute) {};

    /**
    * @brief
    * [en]This class is about the callback of microphone input status change.
    * [cn]麦克风输入状态变化
    *
    * @param result [type:HWM_INT32][cs_allowNull:N]
    * [en]
    * [cn]麦克风输入音量级别,result的取值范围是0-10
    *
    * @since:v1.0
    */
	virtual HWM_VOID OnMicInputLevelNotify(HWM_INT32 result) = 0;

    /**
    * @brief
    * [en]This class is about the callback of speak out level change.
    * [cn]扬声器音量级别变化变化
    * @mobile:disable
    */
    virtual HWM_VOID OnSpeakOutputLevelChangeNotify(HWM_UINT32 level) = 0;

    /**
    * @brief
    * [en]This class is about the callback of voice detection.
    * [cn]人声检测回调
    * @detail
    * [en]
    * [cn]该接口的使用场景为，用户在已静音场景下讲话，会弹框提示用户已被静音
    *
    * @param NULL [cs_allowNull:Y]
    *
    * @since:v1.0
    */
	virtual HWM_VOID OnVoiceDetectNotify() = 0;

    /**
    * @brief
    * [en]This class is about audio routing variation.Synchronous acquisition method is GetAudioRoute.
    * [cn]音频路由变化
    *
    * @param audioRouteType [type:AudioRouteType][cs_allowNull:N]
    * [en]
    * [cn]音频路由类型
    * @see AudioRouteType
    *
    * @since:v1.0
    */
	virtual HWM_VOID OnAudioRouteChanged(AudioRouteType audioRouteType) = 0;
    
    /**
    * @brief
    * [en]This class is about the notification of low quality network.
    * [cn]弱网提示通知
    *
    * @param lowNetWorkType [type:LowNetWorkType][cs_allowNull:N]
    * [en]
    * [cn]弱网类型
    * @see LowNetWorkType
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnPoorNetworkQualityNotify(LowNetWorkType lowNetWorkType) = 0;

    /**
    * @brief
    * [en]This class is about the notification of switching camera because of bandwidth fluctuations.
    * [cn]带宽波动切换摄像头通知
    * @detail
    * [en]This class is about the notification of switching camera because of bandwidth fluctuations.
    * [cn]网络抖动TMMBR值上报
    *
    * @param netJitterTMMBRMsgType [type:TMMBRMsgType][cs_allowNull:N]
    * [en]
    * [cn]网络抖动情况下TMMBR消息类型
    * @see TMMBRMsgType
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnNetJitterTMMBRNotify(TMMBRMsgType netJitterTMMBRMsgType) = 0;

    /**
    * @brief
    * [en]This class is about the notification of camera start error.
    * [cn]打开摄像头错误通知
    * @mobile:disable
    * @mac:disable
    * @since:v1.0
    */
    virtual HWM_VOID OnCameraStartErrorNotify(CameraStartErrorType cameraStartErrorType) = 0;

    /**
    * @brief
    * [en]This class is about the notification of audio device error.
    * [cn]音频设备系统接口错误通知
    * @mobile:disable
    * @mac:disable
    * @since:v1.0
    */
    virtual HWM_VOID OnAudioDeviceSysApiErrorNotify(AudioErrorNotifyInfo * audioErrorNotifyInfo) = 0;


    /**
    * @brief
    * [en]This class is about the notification of cpu too high.
    * [cn]CPU占用过高通知
    * @mobile:disable
    * @mac:disable
    * @since:v1.0
    */
    virtual HWM_VOID OnCPUUsageTooHighNotify(CPUTooHighType cpuTooHighType) = 0;

    /**
    * @brief
    * [en]This class is about the notification of BP result.
    * [cn]hme处理虚拟背景错误上报
    * @since:v1.0
    */
    virtual HWM_VOID OnVirtualBackgroundErrorNotify(BgTypeErr cameraStartErrorType) {};

    /**
    * @brief
    * [en]This class is about the raw data of audio frame.
    * [cn]音频裸码流上报(SetAudioRawDataOutputConfig传值为true时,才会上报)
    * @mobile:disable
    * @since:v1.0
    */
    virtual HWM_VOID OnAudioFrameNotify(AudioFrameData* pFrame) {};

	
};

/**
* @brief [en]This class is about conference management object.
*        [cn]会议管理对象
*
* @detail
* [en]
* [cn]获取会议管理对象的方法NativeSDK.getConfMgrApi()
*
* @InitConfCtr
* @InitConfState
* @InitConfDevice
* @GetInstance
*        HWM_SDK_NAMESPACE::HwmNativeSDK::GetConfMgrApi()
*/
class IHwmConfMgr
{
public:
    /**
    * @brief
    * [en]This class is about the global callback for the operating results of conference management.
    * [cn]设置会议管理操作类全局回调
    * 
    * @param callback [cs_allowNull:N]
    * [en]
    * [cn]会议管理操作类全局回调
    * 
    * @since:v1.0
    */
    virtual SDKERR SetConfMgrResultCallback(IHwmConfMgrResultCallback* callback) = 0;

    /**
    * @brief
    * [en]This class is about the global callback for the notifications of conference management.
    * [cn]设置会议管理通知类全局回调
    * 
    * @param callback [cs_allowNull:N]
    * [en]
    * [cn]会议管理通知类全局回调
    * 
    * @since:v1.0
    */
    virtual SDKERR SetConfMgrNotifyCallback(IHwmConfMgrNotifyCallback* callback) = 0;

    /**
    * @brief
    * [en]
    * [cn]当前是否在会议中
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否在会议中
    * 
    * @since:v1.0
    */
    virtual HWM_BOOL IsInConf(HWM_VOID) = 0;

    /**
    * @brief
    * [en]This class is about querying the detailed information of vmr conference.
    * [cn]查询VMR会议详情
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR QueryVmrInfo(HWM_VOID) = 0;

    /**
    * @brief
    * [en]
    * [cn]查询会议详情
    * 
    * @param confId [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]会议Id
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR QueryConfInfo(IN const HWM_CHAR* confId) = 0;

    /**
    * @brief
    * [en]
    * [cn]创建会议
    * 
    * @param createConfParam [type:CreateConfParam][cs_allowNull:N]
    * [en]
    * [cn]创建会议的参数体
    * @see CreateConfParam
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR CreateConf(IN const CreateConfParam* createConfParam) = 0;

    /**
    * @brief
    * [en]
    * [cn]预约会议
    * 
    * @param bookConfParam [type:BookConfParam][cs_allowNull:N]
    * [en]
    * [cn]预约会议的参数体
    * @see BookConfParam
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR BookConf(IN const BookConfParam *bookConfParam) = 0;


    /**
    * @brief
    * [en]This class is about getting the conference list synchronously.
    * [cn]同步获取会议列表
    * @synchronized
    * @paramOut
    * 
    * @param confList [type:HwmList<ConfListItem>*]
    * [en]
    * [cn]会议列表
    * @see ConfListItem
    * 
    * @since:v1.0
    */
    virtual HWM_VOID GetConfListInfo(OUT HwmList<ConfListItem>* confList) = 0;

    /**
    * @brief
    * [en]
    * [cn]编辑会议 
    * 
    * @param modifyConfParam [type:ModifyConfParam][cs_allowNull:N]
    * [en]
    * [cn]编辑会议的参数体
    * @see ModifyConfParam
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR ModifyConf(IN const ModifyConfParam *modifyConfParam) = 0;


    /**
    * @brief
    * [en]
    * [cn]修改VMR信息
    * @detail
    * [en]
    * [cn]支持修改VMR主题、密码
    *  
    * @param modifyVmrParam [type:ModifyVmrParam][cs_allowNull:N]
    * [en]
    * [cn]修改VMR信息的参数体
    * @see ModifyVmrParam
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR ModifyVmrInfo(IN const ModifyVmrParam* modifyVmrParam) = 0;

    /**
    * @brief
    * [en]
    * [cn]取消会议 
    * 
    * @param cancelConfParam [type:CancelConfParam][cs_allowNull:N]
    * [en]
    * [cn]取消会议的参数体
    * @see CancelConfParam
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR CancelConf(IN const CancelConfParam *cancelConfParam) = 0;


    /**
    * @brief
    * [en]
    * [cn]通过会议ID加入会议
    *  
    * @param joinConfParam [type:JoinConfByIdParam][cs_allowNull:N]
    * [en]
    * [cn]通过会议ID加入会议的参数体
    * @see JoinConfByIdParam
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR JoinConfById(IN const JoinConfByIdParam* joinConfParam) = 0;

    /**
    * @brief
    * [en]
    * [cn]通过会议ID匿名加入会议
    *  
    * @param joinConfParam [type:AnonymousJoinConfParam][cs_allowNull:N]
    * [en]
    * [cn]通过会议ID匿名加入会议的参数体
    * @see AnonymousJoinConfParam
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR JoinConfAnonymouslyById(IN const AnonymousJoinConfParam* joinConfParam) = 0;

    /**
    * @brief
    * [en]
    * [cn]接受会议邀请
    * 
    * @param acceptConfParam [type:AcceptConfParam][cs_allowNull:N]
    * [en]
    * [cn]接受会议邀请的参数体
    * @see AcceptConfParam
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR AcceptConf(IN const AcceptConfParam* acceptConfParam) = 0;

    /**
    * @brief
    * [en]This class is about rejecting the conference.
    * [cn]拒绝会议邀请
    * @android:uninitRender
    * @android:setAudioRouteOutCall
	* @ios:resetAudioRoute
    * 
    * @param confHandle [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]会议句柄
    * 
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR RejectConf(IN HWM_UINT32 confHandle) = 0;
    /**
    * @brief
    * [en]
    * [cn]ui设置终端的能力集
    * 
    * @param SupportCapability [type:HWM_BOOL][cs_allowNull:T]
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR SetClientCapability(IN const SupportCapability *supportCapability) = 0;

    /**
    * @brief
    * [en]
    * [cn]预约周期会议
    *
    * @param bookCycleConfParam [type:BookCycleConfParam][cs_allowNull:N]
    * [en]
    * [cn]预约周期会议的参数体
    * @see BookCycleConfParam
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR BookCycleConf(IN const BookCycleConfParam* bookCycleConfParam) { return SDKERR_SUCCESS; }

    /**
    * @brief
    * [en]
    * [cn]编辑周期会议
    *
    * @param modifyParam [type:ModifyCycleConfParam][cs_allowNull:N]
    * [en]
    * [cn]编辑周期会议的参数体
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR ModifyCycleConf(IN const ModifyCycleConfParam* modifyParam) { return SDKERR_SUCCESS; }

    /**
    * @brief
    * [en]
    * [cn]编辑周期子会议
    *
    * @param modifySubCycleConfParam [type:ModifySubCycleConfParam][cs_allowNull:N]
    * [en]
    * [cn]编辑周期会议的参数体
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR ModifySubCycleConf(IN const ModifySubCycleConfParam* modifySubCycleConfParam) { return SDKERR_SUCCESS; }

    /**
    * @brief
    * [en]
    * [cn]取消周期会议
    *
    * @param cancelCycleConfParam [type:CancelCycleConfParam][cs_allowNull:N]
    * [en]
    * [cn]取消周期会议参数
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR CancelCycleConf(IN const CancelCycleConfParam* cancelCycleConfParam) { return SDKERR_SUCCESS; }

    /**
    * @brief
    * [en]
    * [cn]取消周期子会议
    *
    * @param cancelSubCycleConfParam [type:CancelSubCycleConfParam][cs_allowNull:N]
    * [en]
    * [cn]取消周期子会议参数
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR CancelSubCycleConf(IN const CancelSubCycleConfParam* cancelSubCycleConfParam) { return SDKERR_SUCCESS; }

    /**
    * @brief
    * [en]
    * [cn]清空会议相关缓存
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID ClearConfCache() {};
};


/**
* @brief [en]This class is about the object of conference control operation.
*        [cn]会议控制操作对象
* @detail
* [en]
* [cn]获取该对象的方法NativeSDK.getConfCtrlApi()
* @GetInstance
*        HWM_SDK_NAMESPACE::HwmNativeSDK::GetConfCtrlApi()
*
*/
class IHwmConfCtrl
{
public:

    /**
    * @brief
    * [en]This class is about the global callback for the operating results of setting the conference control.
    * [cn]设置会议控制操作类全局回调
    * 
    * @param callback [type:IHwmConfCtrlResultCallback][cs_allowNull:N]
    * [en]
    * [cn]会议控制操作类全局回调
    * @see IHwmConfCtrlResultCallback
    * 
    * @since:v1.0
    */
    virtual SDKERR SetConfCtrlResultCallback(IHwmConfCtrlResultCallback* callback) = 0;

    /**
    * @brief
    * [en]This class is about the global callback for the notifications of conference control.
    * [cn]设置会议控制通知类全局回调
    * 
    * @param callback [type:IHwmConfCtrlNotifyCallback][cs_allowNull:N]
    * [en]
    * [cn]会议控制通知类全局回调
    * @see IHwmConfCtrlNotifyCallback
    * 
    * @since:v1.0
    */
    virtual SDKERR SetConfCtrlNotifyCallback(IHwmConfCtrlNotifyCallback* callback) = 0;

    /**
    * @brief
    * [en]This class is about ending the conference.
    * [cn]主席会控：结束会议
    * @android:uninitRender
    * @mobile:leaveDataConf
    * @android:setAudioRouteOutCall
	* @ios:resetAudioRoute
    *
    * @state:inConf
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR EndConf(HWM_VOID) = 0;
    
    /**
    * @brief
    * [en]This class is used to add attendee.
    * [cn]主席会控：添加与会者
    *
    * @state:inConf
    * 
    * @param addAttendeeSet [type:AddAttendeeList*][cs_allowNull:N]
    * [en]
    * [cn]与会者列表
    * @see AddAttendeeList
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR AddAttendee(IN const AddAttendeeList* addAttendeeList) = 0;


    /**
    * @brief
    * [en]This class is used to hangup attendee.
    * [cn]主席会控：挂断与会者
    *
    * @state:inConf
    * 
    * @param userId [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]用户ID
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR HangupAttendee(IN const HWM_UINT32 userId) = 0;

    /**
    * @brief
    * [en]This class is used to remove attendee.
    * [cn]主席会控：移除与会者
    *
    * @state:inConf
    * 
    * @param userId [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]用户ID
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR RemoveAttendee(IN const HWM_UINT32 userId) = 0;

    /**
    * @brief
    * [en]This class is used to broadcast/cancel broadcast  attendee.
    * [cn]主席会控：广播或取消广播与会者
    *
    * @state:inConf
    * 
    * @param userId [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]用户ID
    * 
    * @param isBroadcast [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否广播
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR BroadcastAttendee(IN const HWM_UINT32 userId, IN HWM_BOOL isBroadcast) = 0;

    /**
    * @brief
    * [en]This class is used to release host role.
    * [cn]主席会控：释放本人的主席权限
    *
    * @state:inConf
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR ReleaseHostRole(HWM_VOID) = 0;

    /**
    * @brief
    * [en]This class is used to grant someone host role.
    * [cn]主席会控：授予与会者为主席
    *
    * @state:inConf
    * 
    * @param userId [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]用户ID
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR GrantHostRole(IN const HWM_UINT32 userId) = 0;

    /**
    * @brief
    * [en]This class is used to allow someone to unmute himself.
    * [cn]主席会控：允许与会者自己解除静音
    *
    * @state:inConf
    * 
    * @param isAllow [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否允许与会者自己解除静音
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR AllowAttendeeUnMute(IN HWM_BOOL isAllow) = 0;

    /**
    * @brief
    * [en]This class is used to lock conf.
    * [cn]主席会控：锁定会议
    *
    * @state:inConf
    * 
    * @param isLock [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否锁定会议
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR LockConf(IN HWM_BOOL isLock) = 0;

    /**
    * @brief
    * [en]This class is used to lock share,nobody can start share but host.
    * [cn]主席会控：会议锁定共享
    *
    * @state:inConf
    * 
    * @param isLockShare [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否锁定共享
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
	virtual SDKERR LockShare(IN HWM_BOOL isLockShare) = 0;

    /**
    * @brief
    * [en]This class is used to grant/revoke attendee the local record permission.
    * [cn]主席会控：授予/回收与会者本地录制权限
    *
    * @state:inConf
    * 
    * @param userId [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]用户ID
    * 
    * @param enable [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否授予
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
	virtual SDKERR LocalRecordGrantAttendee(IN HWM_UINT32 userId, IN HWM_BOOL enable) = 0;

    /**
    * @brief
    * [en]This class is used to set the mode of local record permission.
    * [cn]主席会控：设置本地录制权限模式
    *
    * @state:inConf
    * 
    * @param type [type:ClientRecordMode][cs_allowNull:N]
    * [en]
    * [cn]录制权限模式
    * @see ClientRecordMode
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
	virtual SDKERR SetLocalRecordMode(IN ClientRecordMode type) = 0;

    /**
    * @brief
    * [en]This class is used to switch attendee role.
    * [cn]主席会控：切换角色
    *
    * @state:inConf
    * 
    * @param userId [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]用户ID
    * 
    * @param confRole [type:ConfRole][cs_allowNull:N]
    * [en]
    * [cn]会议角色
    * @see ConfRole
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
	virtual SDKERR SwitchRoleByHost(IN HWM_UINT32 userId, IN ConfRole confRole) = 0;

    /**
    * @brief
    * [en]This class is used to turn on/off cloud record.
    * [cn]主席会控：开启关闭云端录制
    *
    * @state:inConf
    * 
    * @param cloudRecordType [type:CloudRecordType][cs_allowNull:N]
    * [en]
    * [cn]云端录制类型
    * @see CloudRecordType
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
	virtual SDKERR OperateCloudRecord(IN CloudRecordType cloudRecordType) = 0;

    /**
    * @brief
    * [en]This class is about setting audience video layout.
    * [cn]主席会控：设置观众选看视频模式
    * @mobile:disable
    *
    * @state:inConf
    * 
    * @param audienceLayoutType [type:AudienceLayoutType][cs_allowNull:N]
    * [en]
    * [cn]观众选看视频模式
    * @see AudienceLayoutType
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR SetAudienceVideoLayout(IN const AudienceLayoutType audienceLayoutType) = 0;

    /**
    * @brief
    * [en]This class is about allowing the audience to speak
    * [cn]主席会控：允许观众说话
    *
    * @state:inConf
    * 
    * @param userId [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]用户ID
    * 
    * @param isAllow [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否允许说话
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR AllowAudienceSpeak(IN HWM_UINT32 userId, IN HWM_BOOL isAllow) = 0;

    /**
    * @brief
    * [en]This class is about allowing the audience to join
    * [cn]主席会控：允许观众入会
    *
    * @state:inConf
    * 
    * @param isAllow [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否允许入会
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR AllowAudienceJoin(IN HWM_BOOL isAllow) = 0;

    /**
    * @brief
    * [en]This class is about setting or removing co-hosts
    * [cn]主席会控：设置或撤销联席主持人
    *
    * @state:inConf
    * 
    * @param userId [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]用户ID
    * 
    * @param isSetCoHost [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]设置或撤销
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR SetCohostRight(IN HWM_UINT32 userId, IN HWM_BOOL isSetCoHost) = 0;

    /**
    * @brief
    * [en]This class is about the chairman modifying other member names.
    * [cn]主席会控：主席修改其他成员名称
    *
    * @state:inConf
    * 
    * @param userId [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]用户ID
    * 
    * @param newName [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]新名称
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR Rename(IN HWM_UINT32 userId, IN const HWM_CHAR* newName) = 0;

    /**
    * @brief
    * [en]This class is about the attendee allow rename.
    * [cn]主席会控：设置是否允许用户改名
    *
    * @state:inConf
    *
    * @param isAllow [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]是否允许改名
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR AllowAttendeeRename(IN HWM_BOOL isAllow) {return SDKERR_SUCCESS;}

    /**
    * @brief
    * [en]This class is about muting all attendees or not.
    * [cn]主席会控：全场静音与取消静音
    *
    * @state:inConf
    * 
    * @param isMute [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否静音
    * 
    * @param allowUnmute [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否允许取消静音
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR MuteAllAttendee(IN HWM_BOOL isMute, IN HWM_BOOL allowUnmute) = 0;



    /**
    * @brief
    * [en]This class is about allow waiting attendee enter
    * [cn]主席会控：允许等候者入会
    *
    * @state:inConf
    * 
    * @param userId [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]用户ID
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR AllowWaitingAttendeeEnter(IN HWM_INT32 userId) = 0;

    /**
    * @brief
    * [en]This class is about allow all waiting attendee enter
    * [cn]主席会控：允许所有的等候者入会
    *
    * @state:inConf
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR AllowAllWaitingAttendeeEnter() = 0;

	/**
   * @brief
   * [en]This class is set call in restriction
   * [cn]主席会控：设置允许入会的来宾类型
   *
    * @state:inConf
   *
   * @param allowJoinUserType [type:ConfAllowJoinUserType][cs_allowNull:Y]
   * [en]
   * [cn]允许入会的来宾类型
   * @see ConfAllowJoinUserType
   *
   * @return [type:SDKERR]
   *
   * @since:v1.0
    *
    * @UTInterface:start
   */
	virtual SDKERR UpdateAllowJoinUserType(IN ConfAllowJoinUserType allowJoinUserType) = 0;


	/**
	* @brief
	* [en]This class is about the host invites or cancels inviting attendees to share the applications or screens.
	* [cn]主席会控：主持人邀请/取消邀请与会者共享应用程序或屏幕
    *
    * @state:inConf
	*
	* @param userId [type:HWM_UINT32][cs_allowNull:N]
	* [en]
	* [cn]用户ID
	*
	* @param isShare [type:HWM_BOOL][cs_allowNull:N]
	* [en]
	* [cn]邀请或取消邀请
	*
	* @return [type:SDKERR]
	*
	* @since:v1.0
    *
    * @UTInterface:start
	*/
	virtual SDKERR InviteShare(IN HWM_UINT32 userId, IN HWM_BOOL isShare) = 0;

	/**
	* @brief
	* [en]This class is used to invite open camera.
	* [cn]主席会控：邀请与会者 开启/关闭 摄像头
    *
    * @state:inConf
	*
	* @return [type:SDKERR]
	*
	* @param userId [type:HWM_UINT32][cs_allowNull:N]
	* [en]
	* [cn]用户ID
	*
	* @param isOpen [type:HWM_BOOL][cs_allowNull:N]
	* [en]
	* [cn]邀请打开或关闭
	*
	* @return [type:SDKERR]
	*
	* @since:v1.0
    *
    * @UTInterface:start
	*/
	virtual SDKERR InviteOpenCamera(HWM_INT32 userId, HWM_BOOL isOpen) = 0;

	/**
	* @brief
	* [en]This class is used to descrip is allow open camera.
	* [cn]主席会控：是否允许参会者开启视频
    *
    * @state:inConf
	*
	* @return [type:SDKERR]
	*
	* @param isAllow [type:HWM_BOOL][cs_allowNull:N]
	* [en]
	* [cn]是否允许
	*
	* @return [type:SDKERR]
	*
	* @since:v1.0
    *
    * @UTInterface:start
	*/
	virtual SDKERR AllowAttendeeOpenCamera(HWM_BOOL isAllow) = 0;


	/**
	* @brief
	* [en]This class is used to request host role.
	* [cn]普通与会者会控：申请主席
    *
    * @state:inConf
	*
	* @param confPwd [type:HWM_CHAR*][cs_allowNull:N][cs_sensitive:hide]
	* [en]
	* [cn]主席密码
	*
	* @return [type:SDKERR]
	*
	* @since:v1.0
    *
    * @UTInterface:start
	*/
	virtual SDKERR RequestHostRole(IN const HWM_CHAR* confPwd) = 0;

    /**
    * @brief
    * [en]This class is about leaving the conference and this class is private.
    * [cn]普通与会者会控：离开会议
    * @android:uninitRender
    * @mobile:leaveDataConf
    * @android:setAudioRouteOutCall
    * @ios:resetAudioRoute
    *
    * @state:inConf
    *
    * [en]
    * [cn]离会模式
    * @see LeaveConfMode
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR LeaveConf(HWM_VOID) = 0;
	
	/**
    * @brief
    * [en]This class is about general watch
    * [cn]普通与会者会控：选看
    * @android:processHandle
    *
    * @state:inConf
    *
    * @param generalWatchList [type:HwmList<GeneralWatchItemParam>][cs_allowNull:N]
    * [en]
    * [cn]选看列表
    * @see GeneralWatchItemParam
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    */
    virtual SDKERR GeneralWatch(IN HwmList<GeneralWatchItemParam>* generalWatchList) = 0;

    /**
    * @brief
    * [en]This class is used to mute/unmute  attendee.
    * [cn]普通与会者会控：静音/取消静音自己或主席取消静音/取消静音与会者
    *
    * @state:inConf
    *
    * @param userId [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]用户ID
    *
    * @param isMute [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否静音
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR MuteAttendee(IN const HWM_UINT32 userId, IN HWM_BOOL isMute) = 0;


    /**
    * @brief
    * [en]This class is used to turn on local record.
    * [cn]普通与会者会控：开启本地录制
    * @mobile:disable
    *
    * @state:inConf
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR StartLocalRecord() = 0;

    /**
    * @brief
    * [en]This class is used to finsh local record.
    * [cn]普通与会者会控：结束本地录制
    * @mobile:disable
    *
    * @state:inConf
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR EndLocalRecord() = 0;

    /**
    * @brief
    * [en]This class is used to pause local record.
    * [cn]普通与会者会控：暂停本地录制
    * @mobile:disable
    *
    * @state:inConf
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR PauseLocalRecord() = 0;

    /**
    * @brief
    * [en]This class is used to resume local record.
    * [cn]普通与会者会控：恢复本地录制
    * @mobile:disable
    *
    * @state:inConf
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR ResumeLocalRecord() = 0;

    /**
    * @brief
    * [en]This class is about attendees raising hands.
    * [cn]普通与会者会控：与会者举手
    *
    * @state:inConf
    *
    * @param userId [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]用户ID
    *
    * @param isHanding [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否举手
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR AttendeeHandsup(IN HWM_UINT32 userId, IN HWM_BOOL isHanding) = 0;

    /**
    * @brief
    * [en]This class is about accepting or rejecting the share invitation.
    * [cn]普通与会者会控：接受/拒绝共享邀请
    *
    * @state:inConf
    *
    * @param isAccept [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]接受或拒绝
    *
    * @param rejectReason [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]拒绝原因
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR AnswerInviteShare(IN HWM_BOOL isAccept, IN HWM_UINT32 rejectReason) = 0;

	/**
	* @brief
	* [en]This class is used refuse open camera.
	* [cn]普通与会者会控：拒绝开启摄像头
    *
    * @state:inConf
	*
	* @param inviterUserId [type:HWM_INT32][cs_allowNull:N]
	* [en]
	* [cn]邀请者ID
	*
	* @return [type:SDKERR]
	*
	* @since:v1.0
    *
    * @UTInterface:start
	*/
	virtual SDKERR RefuseOpenCamera(HWM_INT32 inviterUserId) = 0;

	/**
	* @brief
	* [en]This class is used refuse open mic.
	* [cn]普通与会者会控：拒绝开启麦克风
    *
    * @state:inConf
	*
	* @param inviterUserId [type:HWM_INT32][cs_allowNull:N]
	* [en]
	* [cn]邀请者ID
	*
	* @return [type:SDKERR]
	*
	* @since:v1.0
    *
    * @UTInterface:start
	*/
	virtual SDKERR RefuseOpenMic(HWM_INT32 inviterUserId) = 0;

    /**
    * @brief
    * [en]This class is used to set the local record path.
    * [cn]普通与会者会控：设置本地录制文件路径
    * @mac:setLocalRecordPath
    * @mobile:disable
    *
    * @state:inConf
    *
    * @param recordPath [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]文件路径
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR SetLocalRecordPath(IN const HWM_CHAR* recordPath) = 0;

    /**
    * @brief
    * [en]This class is used set subtitle.
    * [cn]普通与会者会控：开关字幕
    * @mobile:disable
    *
    * @state:inConf
    * 
    * @param isOpen [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否开启
    * 
    * @return [type:SDKERR]
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR OpenSubtitle(IN HWM_BOOL isOpen) = 0;

    /**
    * @brief
    * [en]This class is used set subtitle.
    * [cn]普通与会者会控：订阅翻译目标语言
    * @mobile:disable
    *
    * @state:inConf
    *
    * @param isOpen [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR SubscribeSubtitleLang(IN  TargetLanguageType dstLanType) = 0;

	/**
	* @brief
	* [en]This class is used to confirm the role of interpreter.
	* [cn]同声传译：普通与会者会控：传译员确认
    *
    * @state:inConf
	*
	* @param isAccept [type:HWM_BOOL][cs_allowNull:N]
	* [en]
	* [cn]是否确认
	*
	* @return [type:SDKERR]
	*
	* @since:v1.0
    *
    * @UTInterface:start
	*/
	virtual SDKERR InterpreterConfirm(IN HWM_BOOL isAccept) = 0;

	/**
	* @brief
	* [en]This class is used to set language channel.
	* [cn]同声传译：普通与会者会控：设置语言频道
    *
    * @state:inConf
	*
	* @param channelParam [type:LanguageChannelParam][cs_allowNull:N]
	* [en]
	* [cn]语言频道
	* @see LanguageChannelParam
	*
	* @return [type:SDKERR]
	*
	* @since:v1.0
    *
    * @UTInterface:start
	*/
	virtual SDKERR SetLanguageChannel(IN const LanguageChannelParam* channelParam) = 0;

	/**
	* @brief
	* [en]This class is about remove waiting attendee
	* [cn]等候室：主席会控：移除等候室成员
    *
    * @state:inConf
	*
	* @param userId [type:HWM_UINT32][cs_allowNull:N]
	* [en]
	* [cn]用户ID
	*
	* @return [type:SDKERR]
	*
	* @since:v1.0
    *
    * @UTInterface:start
	*/
	virtual SDKERR RemoveWaitingAttendee(IN HWM_INT32 userId) = 0;

	/**
	* @brief
	* [en]This class is about remove all waiting attendee
	* [cn]等候室：主席会控：移出全部等候室成员
    *
    * @state:inConf
	*
	* @return [type:SDKERR]
	*
	* @since:v1.0
    *
    * @UTInterface:start
	*/
	virtual SDKERR RemoveAllWaitingAttendee() = 0;

	/**
	* @brief
	* [en]This class is move to waiting room
	* [cn]等候室：主席会控：移入等候室
    *
    * @state:inConf
	*
	* @param userId [type:HWM_UINT32][cs_allowNull:N]
	* [en]
	* [cn]用户ID
	*
	* @return [type:SDKERR]
	*
	* @since:v1.0
    *
    * @UTInterface:start
	*/
	virtual SDKERR MoveToWaitingRoom(IN HWM_INT32 userId) = 0;

	/**
	* @brief
	* [en]This class is open or close waiting room
	* [cn]等候室：主席会控：启用或关闭等候室
    *
    * @state:inConf
	*
	* @param isOpen [type:HWM_BOOL][cs_allowNull:N]
	* [en]
	* [cn]启用或关闭
	*
	* @return [type:SDKERR]
	*
	* @since:v1.0
    *
    * @UTInterface:start
	*/
	virtual SDKERR OpenWaitingRoom(IN HWM_BOOL isOpen) = 0;

	/**
	* @brief
	* [en]This class is about host suspending conference.
	* [cn]网络研讨会：主席会控：主持人启动/暂停会议
    *
    * @state:inConf
	*
	* @param isPause [type:HWM_BOOL][cs_allowNull:N]
	* [en]
	* [cn]是否暂停网络研讨会
	*
	* @return [type:SDKERR]
	*
	* @since:v1.0
    *
    * @UTInterface:start
	*/
	virtual SDKERR PauseConf(IN HWM_BOOL isPause) = 0;

};


/**
* @brief [en]This class is about the object of conference state infomation.
*        [cn]会议状态信息对象
*
* @detail
* [en]
* [cn]获取该对象的方法NativeSDK.getConfStateApi()
*
* @GetInstance
*        HWM_SDK_NAMESPACE::HwmNativeSDK::GetConfStateApi()
*
*/
class IHwmConfState
{
public:
    /**
    * @brief
    * [en]This class is about the notifications callback of conference state.
    * [cn]设置会议状态通知类全局回调
    * 
    * @param callback [type:IHwmConfStateNotifyCallback][cs_allowNull:N]
    * [en]
    * [cn]回调方法
    * @see IHwmConfStateNotifyCallback
    * 
    * @since:v1.0
    */
    virtual SDKERR SetConfStateNotifyCallback(IHwmConfStateNotifyCallback* callback) = 0;

    /**
    * @brief
    * [en]This class is about the notifications callback of local video settings.
    * [cn]设置本地视频通知回调
    *
    * @param localVideoInfoNotifyCallback [type:IHwmVideoInfoNotifyCallback][cs_allowNull:N]
    * [en]
    * [cn]本地视频通知回调
    * @see IHwmVideoInfoNotifyCallback
    *
    * @since:v1.0
    */
    virtual SDKERR SetLocalVideoInfoNotifyCallback(IHwmVideoInfoNotifyCallback* localVideoInfoNotifyCallback) = 0;

    /**
    * @brief
    * [en]This class is about the notifications callback of setting major video,
    * [cn]设置主视频通知回调
    * @detail
    * [en]xxxxxxxx
    * [cn]设置主视频通知回调,比如选看的watchType为AUTO_MAX_SPEAKER或者SPECIFIED_SELECTION
    *
    * @param majorVideoInfoNotifyCallback [type:IHwmVideoInfoNotifyCallback][cs_allowNull:N]
    * [en]
    * [cn]视频通知回调
    * @see IHwmVideoInfoNotifyCallback
    *
    * @since:v1.0
    */
    virtual SDKERR SetMajorVideoInfoNotifyCallback(IHwmVideoInfoNotifyCallback* majorVideoInfoNotifyCallback) = 0;

    /**
    * @brief
    * [en]This class is about the notifications callback of setting normal video.
    * [cn]设置普通视频通知回调
    *
    * @param normalVideoInfoNotifyCallback [type:IHwmVideoInfoNotifyCallback][cs_allowNull:N]
    * [en]
    * [cn]视频通知回调
    * @see IHwmVideoInfoNotifyCallback
    *
    * @since:v1.0
    */
    virtual SDKERR SetNormalVideoInfoNotifyCallback(IHwmVideoInfoNotifyCallback* normalVideoInfoNotifyCallback) = 0;

    /**
    * @brief
    * [en]This class is about the synchronized method for getting the basic information of the conference state.
    * [cn]获取会议中基本信息
    * @synchronized
    * 
    * @return [type:MeetingInfo]
    * [en]
    * [cn]会议信息
    * @see MeetingInfo
    * 
    * @since:v1.0
    */
    virtual MeetingInfo GetMeetingInfo() = 0;

    /**
    * @brief
    * [en]This class is about getting the basic information of myself,including some fixed information like userId, orgId number, etc.
    * [cn]获取自己的固定信息
    * @synchronized
    * @detail
    * [en]
    * [cn]获取自己的固定信息:包括userId, orgId number等固定的信息
    *
    * @detail
    * [en]
    * [cn]自己的基本信息:包括userId, 企业id, 号码等固定的信息
    * 
    * @return [type:SelfConstantInfo]
    * [en]
    * [cn]自己的固定信息
    * @see SelfConstantInfo
    * 
    * @since:v1.0
    */
    virtual SelfConstantInfo GetSelfConstantInfo() = 0;

    /**
    * @brief
    * [en]This class is about getting my information that whether I have raised hand or not.
    * [cn]获取我的信息:是否举手
    * @synchronized
    * 
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否举手
    * 
    * @since:v1.0
    */
    virtual HWM_BOOL GetSelfHandup() = 0;

    /**
    * @brief
    * [en]This class is about getting my information：what my name is.
    * [cn]获取我的信息:我的名称
    * @synchronized
    * 
    * @return [type:NameInfo]
    * [en]
    * [cn]我的名称
    * @see NameInfo
    * 
    * @since:v1.0
    */
    virtual NameInfo GetSelfName() = 0;

    /**
    * @brief
    * [en]This class is about getting my information：what my role is.
    * [cn]获取我的信息:我的角色
    * @synchronized
    * 
    * @return [type:ConfRole]
    * [en]
    * [cn]我的角色
    * @see ConfRole
    * 
    * @since:v1.0
    */
    virtual ConfRole GetSelfRole() = 0;

    /**
    * @brief
    * [en]This class is about my infomation of simultaneous interpretation.
    * [cn]获取我的信息:同声传译信息
    * @synchronized
    * 
    * @return [type:InterpreterInfo]
    * [en]
    * [cn]同声传译信息
    * @see InterpreterInfo
    * 
    * @since:v1.0
    */
    virtual InterpreterInfo GetSelfInterpreter() = 0;

    /**
    * @brief
    * [en]This class is about getting my information that whether I have recording permissions on the cloud.
    * [cn]获取我的信息:是否有云上录播权限
    * @synchronized
    * 
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否有云上录播权限
    * 
    * @since:v1.0
    */
    virtual HWM_BOOL GetSelfHasCloudRecordPermission() = 0;

    /**
    * @brief
    * [en]This class is about getting my information that whether I have local recording permissions.
    * [cn]获取我的信息:是否有本地录播权限
    * @synchronized
    * 
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否有本地录播权限
    * 
    * @since:v1.0
    */
    virtual HWM_BOOL GetSelfHasLocalRecordPermission() = 0;


    /**
    * @brief
    * [en]This class is about my share status.
    * [cn]获取我的信息:共享状态
    * @synchronized
    * 
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]自己是否共享中
    * 
    * @since:v1.0
    */
    virtual HWM_BOOL GetSelfShareState() = 0;

    /**
    * @brief
    * [en]This class is about getting my information that whether I have been invited or not.
    * [cn]获取我的信息:自己是否被邀请共享
    * @synchronized
    * 
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否被邀请
    * 
    * @since:v1.0
    */
    virtual HWM_BOOL GetSelfIsInvitedShare() = 0;


    /**
    * @brief
    * [en]This class is about getting my share mode.
    * [cn]获取我的信息:自己的共享模式
    * @synchronized
    *
    * @return [type:ConfShareMode]
    * [en]
    * [cn]会议共享模式
    * @see ConfShareMode
    *
    * @since:v1.0
    */
    virtual ConfShareMode GetSelfShareMode() = 0;

    /**
    * @brief
    * [en]This class is about getting the conference state: conf mode type.
    * [cn]获取会议状态:会议模式
    * @synchronized
    * 
    * @return [type:ConfModeType]
    * [en]
    * [cn]会议模式
    * @see ConfModeType
    * 
    * @since:v1.0
    */
    virtual ConfModeType GetConfModeType() = 0;

    /**
    * @brief
    * [en]This class is about getting the conference state: broadcast information.
    * [cn]获取会议状态:广播信息
    * @synchronized
    * 
    * @return [type:BroadcastInfo]
    * [en]
    * [cn]广播信息
    * @see BroadcastInfo
    * 
    * @since:v1.0
    */
    virtual BroadcastInfo GetConfBroadcastInfo() = 0;

    /**
    * @brief
    * [en]This class is about getting the conference state: roll call information.
    * [cn]获取会议状态:点名信息
    * @synchronized
    * 
    * @return [type:RollCallInfo]
    * [en]
    * [cn]点名信息
    * @see RollCallInfo
    * 
    * @since:v1.0
    */
    virtual RollCallInfo GetConfRollCallInfo() = 0;

    /**
    * @brief
    * [en]This class is about getting the conference state: whether all the audiences in conference are muted .
    * [cn]获取会议状态:是否全场静音
    * @synchronized
    * 
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否全场静音
    * 
    * @since:v1.0
    */
    virtual HWM_BOOL GetConfIsAllMuted() = 0;

    /**
    * @brief
    * [en]This class is about getting the conference state: whether the conference supports subtitles.
    * [cn]获取会议状态:是否支持字幕
    * @synchronized
    * @mobile:disable
    * 
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否支持字幕
    * 
    * @since:v1.0
    */
    virtual HWM_BOOL GetConfIsSupportSubtitle() = 0;


    /**
    * @brief
    * [en]This class is about getting the conference state: the information of subtitle src language ability.
    * [cn]获取会议状态:获取字幕翻译源语言能力
    * @synchronized
    * @paramOut
    *
    * @param confSubtitleLanguageSrc [typeHwmList<ConfLanguageChannelInfo>*]
    * [en]
    * [cn]会议语言频道信息
    * @see ConfLanguageChannelInfo
    *
    * @since:v1.0
    */
    virtual HWM_VOID GetConfSubtitleLanguageSrc(OUT HwmList<ConfLanguageChannelInfo>* confSubtitleLanguageSrc) {};

    /**
    * @brief
    * [en]This class is about getting the conference state: the information of subtitle dst language ability.
    * [cn]获取会议状态:获取字幕翻译目标语言能力
    * @synchronized
    * @paramOut
    *
    * @param confSubtitleLanguageDst [typeHwmList<ConfLanguageChannelInfo>*]
    * [en]
    * [cn]会议语言频道信息
    * @see ConfLanguageChannelInfo
    *
    * @since:v1.0
    */
    virtual HWM_VOID GetConfSubtitleLanguageDst(OUT HwmList<ConfLanguageChannelInfo>* confSubtitleLanguageDst) {};

    /**
    * @brief
    * [en]This class is about getting the conference state: whether the conference is allowed to be unmuted.
    * [cn]获取会议状态:是否允许解除静音
    * @synchronized
    * 
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否允许解除静音
    * 
    * @since:v1.0
    */
    virtual HWM_BOOL GetConfIsAllowUnmute() = 0;

    /**
    * @brief
    * [en]This class is about getting the conference state: whether the conference is locked.
    * [cn]获取会议状态:是否锁定
    * @synchronized
    * 
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否锁定
    * 
    * @since:v1.0
    */
    virtual HWM_BOOL GetConfIsLocked() = 0;

    /**
    * @brief
    * [en]This class is about getting the conference state: whether the conference shares lock.
    * [cn]获取会议状态:是否共享锁定
    * @synchronized
    * 
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否共享锁定
    * 
    * @since:v1.0
    */
    virtual HWM_BOOL GetConfIsShareLocked() = 0;

    /**
    * @brief
    * [en]This class is about getting the conference state:permission type of chat.
    * [cn]获取会议状态:聊天权限
    * @synchronized
    *
    * @return [type:ChatPermission]
    * [en]
    * [cn]聊天权限
    *
    * @since:v1.0
    */
    virtual ChatPermission GetChatPermission() { return CHAT_PERMISSION_FORBIDDEN_ALL; };

    /**
    * @brief
    * [en]This class is about getting the conference state: whether the conference is paused.
    * [cn]获取会议状态:是否暂停
    * @synchronized
    * 
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否暂停
    * 
    * @since:v1.0
    */
    virtual HWM_BOOL GetConfIsPaused() = 0;

    /**
    * @brief
    * [en]This class is about getting the conference state: whether the watermark is opened.
    * [cn]获取会议状态:是否开启水印
    * @synchronized
    * 
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否开启水印
    * 
    * @since:v1.0
    */
    virtual HWM_BOOL GetConfSupportWatermark() = 0;

    /**
    * @brief
    * [en]This class is about getting the conference state: whether the conference supports the co-host function.
    * [cn]获取会议状态:是否支持联席主持人
    * @synchronized
    * 
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否支持联席主持人
    * 
    * @since:v1.0
    */
    virtual HWM_BOOL GetConfSupportCohost() = 0;

    /**
    * @brief
    * [en]This class is about getting the conference state: whether the conference supports the inviteshare function.
    * [cn]获取会议状态:是否支持邀请共享
    * @synchronized
    * 
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否支持邀请共享
    * 
    * @since:v1.0
    */
    virtual HWM_BOOL GetConfSupportInviteShare() = 0;

	/**
	* @brief
	* [en]This class is about getting the conference state: whether the conference supports the cancel share function.
	* [cn]获取会议状态:是否支持取消共享
	* @synchronized
	*
	* @return [type:HWM_BOOL]
	* [en]
	* [cn]是否支持取消邀请
	*
	* @since:v1.0
	*/
	virtual HWM_BOOL GetConfEnableCancelShare() = 0;

    /**
    * @brief
    * [en]This class is about getting the conference state: the number of online attendees.
    * [cn]获取会议状态:在线与会者个数
    * @synchronized
    * 
    * @return [type:AttendeeSizeInfo]
    * [en]
    * [cn]在线与会者个数
    * @see AttendeeSizeInfo
    * 
    * @since:v1.0
    */
    virtual AttendeeSizeInfo GetConfAttendeeSize() = 0;

    /**
    * @brief
    * [en]This class is about getting the conference state: the information of raising hands.
    * [cn]获取会议状态:举手信息
    * @synchronized
    * 
    * @return [type:ConfHandupInfo]
    * [en]
    * [cn]举手信息
    * @see ConfHandupInfo
    * 
    * @since:v1.0
    */
    virtual ConfHandupInfo GetConfHandupInfo() = 0;

    /**
    * @brief
    * [en]This class is about getting the conference state: whether the simultaneous interpretation has been opened.
    * [cn]同声传译：获取会议状态:是否开启同声传译
    * @synchronized
    * 
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否开启同声传译
    * 
    * @since:v1.0
    */
    virtual HWM_BOOL GetConfIsSimuInterpretOpened() = 0;

    /**
    * @brief
    * [en]This class is about getting the conference state: the information of simultaneous interpretation.
    * [cn]同声传译：获取会议状态:同声传译信息
    * @synchronized
    * @paramOut
    *
    * @param confLanguageChannelList [typeHwmList<ConfLanguageChannelInfo>*]
    * [en]
    * [cn]会议语言频道信息
    * @see ConfLanguageChannelInfo
    * 
    * @since:v1.0
    */
    virtual HWM_VOID GetConfSimuInterpret(OUT HwmList<ConfLanguageChannelInfo>* confLanguageChannelList) = 0;

    /**
    * @brief
    * [en]This class is about getting the conference state: the information of local recording .
    * [cn]获取会议状态:本地录制信息
    * @synchronized
    * 
    * @return [type:LocalRecordInfo]
    * [en]
    * [cn]本地录制信息
    * @see LocalRecordInfo
    * 
    * @since:v1.0
    */
    virtual LocalRecordInfo GetConfLocalRecord() = 0;

    /**
    * @brief
    * [en]This class is about getting the conference state: the information of cloud recording.
    * [cn]获取会议状态:云上录制信息
    * @synchronized
    * 
    * @return [type:CloudRecordInfo]
    * [en]
    * [cn]云上录制信息
    * @see CloudRecordInfo
    * 
    * @since:v1.0
    */
    virtual CloudRecordInfo GetConfCloudRecord() = 0;


    /**
    * @brief
    * [en]This class is about getting the conference state: whether there is a host in the conference.
    * [cn]获取会议状态:会议是否有主持人
    * @synchronized
    * 
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]会议是否有主持人
    * 
    * @since:v1.0
    */
    virtual HWM_BOOL GetConfHasHost() = 0;

    /**
    * @brief
    * [en]This class is about getting the conference state:  whether the conference has been connected.
    * [cn]获取会议状态:会议是否连接
    * @synchronized
    * 
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]会议是否连接
    * 
    * @since:v1.0
    */
    virtual HWM_BOOL GetConfIsConnected() = 0;

    /**
    * @brief
    * [en]This class is about getting the list of all the attendees.
    * [cn]获取所有的与会者
    * @synchronized
    * @paramOut
    * 
    * @param attendeeList [type:HwmList<AttendeeInfo>*]
    * [en]
    * [cn]与会人列表
    * @see AttendeeInfo
    * 
    * @since:v1.0
    */
    virtual HWM_VOID GetAttendeeList(OUT HwmList<AttendeeInfo>* attendeeList) = 0;

    /**
    * @brief
    * [en]This class is about getting the list of all the attendees of online video.
    * [cn]获取在线视频与会者
    * @synchronized
    * @paramOut
    * 
    * @param attendeeList [type:HwmList<AttendeeInfo>*]
    * [en]
    * [cn]与会人列表
    * @see AttendeeInfo
    * 
    * @since:v1.0
    */
    virtual HWM_VOID GetVideoAttendeeList(OUT HwmList<AttendeeInfo>* attendeeList) = 0;

    /**
    * @brief
    * [en]This class is about getting the speaker list.
    * [cn]获取最大发言人
    * @synchronized
    * @paramOut
    * 
    * @param speakerList [type:HwmList<ConfSpeaker>*][cs_allowNull:N]
    * [en]
    * [cn]发言人列表
    * @see ConfSpeaker
    * 
    * @since:v1.0
    */
    virtual HWM_VOID GetSpeakerList(OUT HwmList<ConfSpeaker>* speakerList) = 0;

    /**
    * @brief
    * [en]This class is about getting attendees by userId.
    * [cn]通过userId获取与会人信息
    * @synchronized
    * @paramOut
    * 
    * @param userId [type:HWM_INT32][cs_allowNull:N]
    * [en]
    * [cn]用户ID
    * 
    * @param attendeeInfo [type:AttendeeInfo*]
    * [en]
    * [cn]与会人信息
    * @see AttendeeInfo
    * 
    * @since:v1.0
    */
    virtual HWM_VOID GetAttendeeByUserId(IN HWM_INT32 userId, OUT AttendeeInfo *attendeeInfo) = 0;


    /**
    * @brief
    * [en]This class is about the conference status :the type of users allowed to join the conference .
    * [cn]获取会议状态:允许入会范围
    * @synchronized
    * 
    * @return [type:ConfAllowJoinUserType]
    * [en]
    * [cn]允许入会范围
    * @see ConfAllowJoinUserType
    * 
    * @since:v1.0
    */
    virtual ConfAllowJoinUserType GetConfAllowJoinUserType() = 0;

    /**
    * @brief
    * [en]This class is about my status: whether the information of in conference is anonymous.
    * [cn]获取我的信息:是否匿名入会
    * @synchronized
    * 
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否匿名入会
    * 
    * @since:v1.0
    */
    virtual HWM_BOOL GetSelfIsAnonymous() = 0;

    /**
    * @brief
    * [en]This api is about getting custom multi info
    * [cn]获取广播多画面信息
    * @detail
    * [en]
    * [cn]portal后台可以配置广播多画面，用户可以自定义画面排版，通过OnCustomMultiPictureInfoChanged消息下发。该接口是获取画面信息相关的缓存。
    * @synchronized
    * @paramOut
    * @ios:disable
    *
    * @param customMultiPicInfo [type:CustomMultiPicInfo]
    * [en]
    * [cn]广播多画面信息
    * @see CustomMultiPicInfo
    *
    * @since:v1.0
    */
    virtual HWM_VOID GetCustomMultiPictureInfo(OUT CustomMultiPicInfo* customMultiPicInfo) = 0;

    /**
    * @brief
    * [en]This class is about getting commercial status.
    * [cn]获取商用资源是否激活
    *
    * @return [type:CommercialStatusType]
    * [en]
    * [cn]商用资源状态
    *
    * @since:v1.0
    */
    virtual CommercialStatusType GetCommercialStatus() = 0;


    /**
    * @brief
    * [en]This class is about getting the QOS information of conference audio stream.
    * [cn]获取会议音频流QOS信息
    * @synchronized
    * @paramOut
    *
    * @param audioQOSInfoList [type:HwmList<AudioStatsInfo>* ]
    * [en]
    * [cn]音频流QOS信息列表
    * @see AudioStatsInfo
    *
    * @since:v1.0
    */
    virtual HWM_VOID GetAudioQOSInfo(OUT HwmList<AudioStatsInfo>* audioQOSInfoList) = 0;

    /**
    * @brief
    * [en]This class is about getting the QOS information of conference video stream.
    * [cn]获取会议视频流QOS信息
    * @synchronized
    * @paramOut
    *
    * @param videoQOSInfoList [type:HwmList<VideoStatsInfo>*]
    * [en]
    * [cn]视频流QOS信息列表
    * @see VideoStatsInfo
    *
    * @since:v1.0
    */
    virtual HWM_VOID GetVideoQOSInfo(OUT HwmList<VideoStatsInfo>* videoQOSInfoList) = 0;

    /**
    * @brief
    * [en]This class is about getting the QOS information of data conference.
    * [cn]获取数据会议QOS信息
    * @synchronized
    * @paramOut
    * @mobile:disable
    *
    * @param dataConfQosInfo [type:HwmList<DataConfQosInfo>]
    * [en]
    * [cn]数据会议QOS信息列表
    * @see DataConfQosInfo
    *
    * @since:v1.0
    */
    virtual HWM_VOID GetDataConfQOSInfo(OUT DataConfQosInfo* dataConfQosInfo) = 0;

    /**
    * @brief
    * [en]This class is about getting the user's window name.
    * [cn]通过用户ID获取会场名称
    * @synchronized
    *
    * @param userId [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]用户ID
    *
    * @param isMajorVideo [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否是大画面
    *
    * @return [type:NameInfo]
    * [en]
    * [cn]姓名信息
    * @see NameInfo
    *
    * @since:v1.0
    */
    virtual NameInfo GetVideoNameByUserId(IN HWM_UINT32 userId, IN HWM_BOOL isMajorVideo) = 0;

    /**
    * @brief
    * [en]This class is about getting whether the user's window is mute.
    * [cn]获取用户窗口是否静音
    * @synchronized
    *
    * @param userId [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]用户ID
    *
    * @param isMajorVideo [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否是大画面
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否静音
    *
    * @since:v1.0
    */
    virtual HWM_BOOL GetVideoIsMuteByUserId(IN HWM_UINT32 userId, IN HWM_BOOL isMajorVideo) = 0;

    /**
    * @brief
    * [en]This class is about getting whether the user's window has hands raised.
    * [cn]获取用户窗口是否举手
    * @synchronized
    *
    * @param userId [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]用户ID
    *
    * @param isMajorVideo [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否是大画面
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否举手
    *
    * @since:v1.0
    */
    virtual HWM_BOOL GetVideoIsHandupByUserId(IN HWM_UINT32 userId, IN HWM_BOOL isMajorVideo) = 0;

    /**
    * @brief
    * [en]This class is about getting whether the user's window is max speaker.
    * [cn]获取用户窗口是否是最大发言人
    * @synchronized
    *
    * @param userId [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]用户ID
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否是最大发言人
    *
    * @since:v1.0
    */
    virtual HWM_BOOL GetVideoIsMaxSpeakerByUserId(IN HWM_UINT32 userId) = 0;

    /**
    * @brief
    * [en]This class is about getting whether the user's video is loading.
    * [cn]获取用户视频是否在加载中
    * @synchronized
    *
    * @param userId [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]用户ID
    *
    * @param isMajorVideo [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否是大画面
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否在加载中
    *
    * @since:v1.0
    */
    virtual HWM_BOOL GetVideoIsLoadingByUserId(IN HWM_UINT32 userId, IN HWM_BOOL isMajorVideo) = 0;

    /**
    * @brief
    * [en]This class is about getting whether the user's video has camera stream.
    * [cn]获取用户窗口是否有摄像头流
    * @synchronized
    *
    * @param userId [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]用户ID
    *
    * @param isMajorVideo [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否是主画面
    *
    * @return [type:StreamType]
    * [en]
    * [cn]是否有摄像头流
    *
    * @since:v1.0
    */
    virtual StreamType GetVideoStreamTypeByUserId(IN HWM_UINT32 userId, IN HWM_BOOL isMajorVideo) = 0;

    /**
    * @brief
    * [en]This class is about getting the network quality of user's window.
    * [cn]获取用户窗口网络质量
    * @synchronized
    *
    * @param userId [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]用户ID
    *
    * @param isMajorVideo [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否是大画面
    *
    * @return [type:HWM_UINT32]
    * [en]
    * [cn]网络质量
    *
    * @since:v1.0
    */
    virtual HWM_UINT32 GetVideoNetQualityByUserId(IN HWM_UINT32 userId, IN HWM_BOOL isMajorVideo) = 0;

    /**
    * @brief
    * [en]This class is about getting the name of local video window.
    * [cn]获取本地视频窗口名称
    * @synchronized
    *
    * @return [type:NameInfo]
    * [en]
    * [cn]名称
    * @see NameInfo
    *
    * @since:v1.0
    */
    virtual NameInfo GetLocalVideoName() = 0;

    /**
    * @brief
    * [en]This class is about getting whether the local video window is muted.
    * [cn]获取本地视频窗口是否静音
    * @synchronized
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否静音
    *
    * @since:v1.0
    */
    virtual HWM_BOOL GetLocalVideoIsMute() = 0;

    /**
    * @brief
    * [en]This class is about getting whether there are raised hands in the local window.
    * [cn]获取本地视频窗口是否举手
    * @synchronized
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否举手
    *
    * @since:v1.0
    */
    virtual HWM_BOOL GetLocalVideoIsHandup() = 0;

    /**
    * @brief
    * [en]This class is about getting whether the local video window is highlighted.
    * [cn]获取本地视频窗口是否高亮
    * @synchronized
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否高亮
    *
    * @since:v1.0
    */
    virtual HWM_BOOL GetLocalVideoIsHighLight() = 0;

    /**
    * @brief
    * [en]This class is about getting whether the local video window is dealing with circling.
    * [cn]获取本地视频窗口是否转圈
    * @synchronized
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否转圈
    *
    * @since:v1.0
    */
    virtual HWM_BOOL GetLocalVideoIsLoading() = 0;

    /**
    * @brief
    * [en]This class is about getting whether the local video window covers the default picture.
    * [cn]获取本地视频窗口是否遮挡默认图片
    * @synchronized
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否遮挡默认图片
    *
    * @since:v1.0
    */
    virtual HWM_BOOL GetLocalVideoIsCoverImage() = 0;

    /**
    * @brief
    * [en]This class is about getting network quality of the local video window.
    * [cn]获取本地视频窗口网络质量
    * @synchronized
    *
    * @return [type:HWM_UINT32]
    * [en]
    * [cn]网络质量
    *
    * @since:v1.0
    */
    virtual HWM_UINT32 GetLocalVideoNetQuality() = 0;

    /**
    * @brief
    * [en]This class is about getting user id of major video.
    * [cn]获取主视频画面人员id
    * @synchronized
    *
    * @return [type:HWM_UINT32]
    * [en]
    * [cn]用户ID
    *
    * @since:v1.0
    */
    virtual HWM_UINT32 GetMajorVideoUserId() = 0;

    /**
    * @brief
    * [en]This class is used to get is allow open camera.
    * [cn]会议状态：获取是否允许参会者开启视频
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否允许开启
    * @since:v1.0
    */
    virtual HWM_BOOL GetIsAllowOpenCamera() = 0;


    /**
    * @brief
    * [en]This class is used to descrip is need invite open mic.
    * [cn]功能开关：是否需要主持人邀请开启麦克风   
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否需要邀请(true:邀请开启   false:直接开启)
    * @since:v1.0
    */
    virtual HWM_BOOL GetIsInviteOpenMic() = 0;


    /**
    * @brief
    * [en]This class is used to descrip support invite mic.
    * [cn]功能开关：主持人邀请开启与会人麦克风
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否支持
    * @since:v1.0
    */
    virtual HWM_BOOL GetSupportInviteMic() = 0;

    /**
    * @brief
    * [en]This class is used to descrip support invite camera.
    * [cn]功能开关：主持人邀请开启与会人摄像头
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否支持
    * @since:v1.0
    */
    virtual HWM_BOOL GetSupportInviteCamera() = 0;

    /**
    * @brief
    * [en]This class is used to descrip enable force close camera.
    * [cn]主席会控：获取主持人能否强制关闭与会人摄像头
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否支持
    * @since:v1.0
    */
    virtual HWM_BOOL GetEnableForceCloseCamera() = 0;

    /**
    * @brief
    * [en]This class is used to descrip enable allow open camera.
    * [cn]主席会控：主持人是否允许与会人自行开启摄像头
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否支持
    * @since:v1.0
    */
    virtual HWM_BOOL GetEnableAllowOpenCamera() = 0;

    /**
    * @brief
    * [en]This class is used to get cycle conf end time.
    * [cn]获取周期会议结束时间戳
    *
    * @param cycleConfParam [type:CycleConfParam][cs_allowNull:N]
    * [en]
    * [cn]周期会议信息参数
    *
    * @return [type:HWM_UINT64]
    * [en]
    * [cn]周期会议结束时间戳
    * @since:v1.0
    */
    virtual HWM_UINT64 GetCycleConfEndTime(IN const CycleConfParam* cycleConfParam) { return SDKERR_SUCCESS; }

    /**
    * @brief
    * [en]This class is used to get cycle conf end time.
    * [cn]根据会议总数获取周期会议结束时间戳
    *
    * @param cycleConfParam [type:CycleConfParam][cs_allowNull:N]
    * [en]
    * [cn]周期会议信息参数
    *
    * @param totalConfNum [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]会议总数
    *
    * @return [type:HWM_UINT64]
    * [en]
    * [cn]周期会议结束时间戳
    * @since:v1.0
    */
    virtual HWM_UINT64 GetCycleConfEndTimeByTotalConf(IN const CycleConfParam* cycleConfParam, IN HWM_UINT32 totalConfNum) { return SDKERR_SUCCESS; }

    /**
    * @brief
    * [en]This class is used to get cycle conf total number.
    * [cn]获取周期会议场次
    *
    * @param cycleConfParam [type:CycleConfParam][cs_allowNull:N]
    * [en]
    * [cn]周期会议信息参数
    *
    * @return [type:HWM_UINT32]
    * [en]
    * [cn]周期会议场次
    * @since:v1.0
    */
    virtual HWM_UINT32 GetCycleConfTotalNumber(IN const CycleConfParam* cycleConfParam) { return SDKERR_SUCCESS; }

	/**
	* @brief
	* [en]This class is used to get enable origin voice.
	* [cn]获取与会者支持选择收听原声频道
	*
	* @return [type:HWM_BOOL]
	* [en]
	* [cn]是否支持
	* @since:v1.0
	*/
	virtual HWM_BOOL GetEnableOriginVoice() { return HWM_TRUE; };

    /**
    * @brief
    * [en]This class is about the attendee allow rename.
    * [cn]会中查询是否允许用户改名
    *
    * @return [type:HWM_BOOL]
    *
    * @since:v1.0
    */
    virtual HWM_BOOL GetConfIsAllowRename() { return HWM_TRUE; }

    /**
    * @brief
    * [en]This class is about the conference status that whether the barrage switch is on.
    * [cn]获取会议状态:弹幕开关
    * @synchronized
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]弹幕开关
    *
    * @since:v1.0
    */
    virtual HWM_BOOL GetConfBarrageSwitch() = 0;

	/**
	* @brief
	* [en]This class is about the conference status that whether the waiting room is supported.
	* [cn]等候室：获取会议状态:是否支持等候室
	* @synchronized
	*
	* @return [type:HWM_BOOL]
	* [en]
	* [cn]是否支持等候室
	*
	* @since:v1.0
	*/
	virtual HWM_BOOL GetConfSupportWaitingRoom() = 0;

	/**
	* @brief
	* [en]This class is about the conference status that whether the waiting room will be opened..
	* [cn]等候室：获取会议状态:是否开启等候室
	* @synchronized
	*
	* @return [type:HWM_BOOL]
	* [en]
	* [cn]是否开启等候室
	*
	* @since:v1.0
	*/
	virtual HWM_BOOL GetConfIsOpenWaitingRoom() = 0;

	/**
	* @brief
	* [en]This class is about getting the list of members in waiting room.
	* [cn]等候室：获取等候室成员列表
	* @synchronized
	* @paramOut
	*
	* @param waitingList [type:HwmList<AttendeeInfo>]
	* [en]
	* [cn]等候室成员列表
	* @see AttendeeInfo
	*
	* @since:v1.0
	*/
	virtual HWM_VOID GetWaitingList(OUT HwmList<AttendeeInfo>* waitingList) = 0;

	/**
	* @brief
	* [en]This class is about getting the information of waiting room.
	* [cn]等候室：获取等候室信息
	* @synchronized
	* @paramOut
	*
	* @param waitingRoomInfo [type:WaitingRoomInfo*]
	* [en]
	* [cn]等候室信息
	* @see WaitingRoomInfo
	*
	* @since:v1.0
	*/
	virtual HWM_VOID GetWaitingRoomInfo(OUT WaitingRoomInfo* waitingRoomInfo) = 0;

	/**
	* @brief
	* [en]This class is about getting the conference state: the number of waiting attendees.
	* [cn]等候室：获取会议状态:等候室成员个数
	* @synchronized
	*
	* @return [type:HWM_UINT32]
	* [en]
	* [cn]等候室成员个数
	*
	* @since:v1.0
	*/
	virtual HWM_UINT32 GetWaitingAttendeeSize() = 0;

	/**
	* @brief
	* [en]This class is about getting my information that whether I am allowed to speak or not.
	* [cn]网络研讨会：获取我的信息:是否允许说话
	* @synchronized
	*
	* @return [type:HWM_BOOL]
	* [en]
	* [cn]是否允许说话
	*
	* @since:v1.0
	*/
	virtual HWM_BOOL GetSelfAllowSpeak() = 0;

	/**
	* @brief
	* [en]This class is about getting my information that whether I can be turned into audience.
	* [cn]网络研讨会：获取我的信息:是否可以转成观众
	* @synchronized
	*
	* @return [type:HWM_BOOL]
	* [en]
	* [cn]是否可以转成观众
	*
	* @since:v1.0
	*/
	virtual HWM_BOOL GetSelfCanSwitchToAudience() = 0;

	/**
	* @brief
	* [en]This class is about getting the conference state: the number of audiences.
	* [cn]网络研讨会：获取会议状态:观众个数
	* @synchronized
	*
	* @return [type:HWM_UINT32]
	* [en]
	* [cn]观众个数
	*
	* @since:v1.0
	*/
	virtual HWM_UINT32 GetConfAudienceSize() = 0;

	/**
	* @brief
	* [en]This class is about getting the conference state: the viewing mode of the audience.
	* [cn]网络研讨会：获取会议状态:观众的观看视频模式
	* @synchronized
	*
	* @return [type:AudienceLayoutType]
	* [en]
	* [cn]观众的观看视频模式
	* @see AudienceLayoutType
	*
	* @since:v1.0
	*/
	virtual AudienceLayoutType GetConfAudienceVideoLayout() = 0;

	/**
	* @brief
	* [en]This class is about getting the conference state: whether the audiences are allowed to join the conference.
	* [cn]网络研讨会：获取会议状态:是否允许观众入会
	* @synchronized
	*
	* @return [type:HWM_BOOL]
	* [en]
	* [cn]是否允许观众入会
	*
	* @since:v1.0
	*/
	virtual HWM_BOOL GetConfIsAllowAudienceJoin() = 0;

	/**
	* @brief
	* [en]This class is about getting the list of all the audiences.
	* [cn]网络研讨会：获取所有的观众
	* @synchronized
	* @paramOut
	*
	* @param audienceList [type:HwmList<AttendeeInfo>*]
	* [en]
	* [cn]观众列表
	* @see AttendeeInfo
	*
	* @since:v1.0
	*/
	virtual HWM_VOID GetAudienceList(OUT HwmList<AttendeeInfo>* audienceList) = 0;

	/**
	* @brief
	* [en]This class is about getting the audience information.
	* [cn]网络研讨会：获取观众信息
	* @synchronized
	*
	* @return [type:ShowAudienceSizeInfo]
	* [en]
	* [cn]观众信息
	* @see ShowAudienceSizeInfo
	*
	* @since:v1.0
	*/
	virtual ShowAudienceSizeInfo GetAudienceSizeInfo() = 0;

    /**
    * @brief
    * [en]This class is about the synchronized method for getting the sensitive word information of the conference state.
    * [cn]获取会议中敏感词信息
    * @synchronized
    * @paramOut
    *
    * @param sensitiveWordInfos [type:HwmList<SensitiveWordInfo>*]
    * [en]
    * [cn]会中敏感词信息
    * @see SensitiveWordList
    *
    * @since:v1.0
    */
    virtual HWM_VOID GetSensitiveWordInfo(OUT HwmList<SensitiveWordInfo>* sensitiveWordInfos) {};

    /**
    * @brief
    * [en]This class is about the synchronized method for getting join status.
    * [cn]获取会前状态
    * @synchronized
    *
    * @return [type:JoinStatusType]
    * [en]
    * [cn]会前状态
    * @see JoinStatusType
    *
    * @since:v1.0
    */
    virtual JoinStatusType GetJoinStatus() { return JoinStatusType::JOIN_STATUS_NOT_INCONF; }

    /**
    * @brief
    * [en]This class is about the synchronized method for getting guest waiting before conf info.
    * [cn]获取来宾会前等待信息
    * @synchronized
    *
    * @return [type:GuestWaitingBeforeConfInfo]
    * [en]
    * [cn]来宾会前等待信息
    * @see GuestWaitingBeforeConfInfo
    *
    * @since:v1.0
    */
    virtual GuestWaitingBeforeConfInfo GetGuestWaitingBeforeConfInfo() { return {}; }

    /**
    * @brief
    * [en]This class is about the synchronized method for getting audience waiting info.
    * [cn]获取观众等待信息
    * @synchronized
    *
    * @return [type:AudienceWaitingInfo]
    * [en]
    * [cn]观众等待信息
    * @see AudienceWaitingInfo
    *
    * @since:v1.0
    */
    virtual AudienceWaitingInfo GetAudienceWaitingInfo() { return {}; };
};


/**
* @brief [en]This class is about getting the object of device management.
*        [cn]设备管理对象
* @detail
* [en]
* [cn]获取该对象的方法NativeSDK.getDeviceMgrApi()
*
* @GetInstance
*        HWM_SDK_NAMESPACE::HwmNativeSDK::GetDeviceMgrApi()
*/
class IHwmDeviceMgr
{
public:
    /**
    * @brief
    * [en]This class is about setting the callback class of device operation APIs.
    * [cn]设置会议设备操作类全局回调
    *
    * @param callback [type:IHwmConfDeviceResultCallback*][cs_allowNull:N]
    * [en]
    * [cn] 会议设备操作类回调
    * @see IHwmConfDeviceResultCallback
    *
    * @since:v1.0
    */
    virtual SDKERR SetConfDeviceResultCallback(IHwmConfDeviceResultCallback* callback) = 0;

    /**
    * @brief
    * [en]This class is about setting the callback class of device notifications.
    * [cn]设置会议设备操作类全局回调
    *
    * @param callback [type:IHwmConfDeviceNotifyCallback*][cs_allowNull:N]
    * [en]
    * [cn] 会议设备通知回调
    * @see IHwmConfDeviceNotifyCallback
    *
    * @since:v1.0
    */
    virtual SDKERR SetConfDeviceNotifyCallback(IHwmConfDeviceNotifyCallback* callback) = 0;

    /**
    * @brief
    * [en]This api is about changing audio router.
    * [cn]改变音频路由
    *
    * @param NULL [cs_allowNull:Y]
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @synchronized
    * @android:changeAudioRouter
    * @mac:disable
    */
    virtual SDKERR ChangeAudioRouter() = 0;

    /**
    * @brief
    * [en]This api is used to playing the audio files.
    * [cn]开始播放音频文件
    * @mobile:disable
    * @synchronized
    * @paramOut
    */
    virtual SDKERR StartPlayFile(IN HWM_UINT32 loopTimes, IN const HWM_CHAR* filePath, OUT HWM_INT32* playHandle) = 0;

    /**
    * @brief
    * [en]This api is used to stop playing audio files.
    * [cn]停止播放音频文件
    * @mobile:disable
    */
    virtual SDKERR StopPlayFile(IN HWM_INT32 playHandle) = 0;

	/**
	* @brief
	* [en]This api is about getting the camera list.
	* [cn]获取摄像头设备列表
    *
    * @synchronized
    * @paramOut
    *
    * @param camDetailInfoList [type:HwmList<CameraDetailInfo>*]
    * [en]
    * [cn]摄像头详情信息列表
    * @see CameraDetailInfo
    *
    * @since:v1.0
	*/
	virtual HWM_VOID GetCameraDevices(OUT HwmList<CameraDetailInfo>* camDetailInfoList) = 0;

	/** 
	* @brief
	* [en]This api is about getting the microphone list.
	* [cn]获取麦克风设备列表
    *
    * @mobile:disable
    * @synchronized
    * @paramOut
    *
    * @param micDetailInfoList [type:HwmList<MicDetailInfo>*]
    * [en]
    * [cn] 麦克风详情信息列表
    * @see MicDetailInfo
    *
    * @since:v1.0
	*/
	virtual HWM_VOID GetMicDevices(OUT HwmList<MicDetailInfo>* micDetailInfoList) = 0;

	/**
	* @brief
	* [en]This api is about getting the speaker list.
	* [cn]获取扬声器设备列表
    *
    * @mobile:disable
    * @synchronized
    * @paramOut
    *
    * @param spkDetailInfoList [type:HwmList<SpkDetailInfo>*]
    * [en]
    * [cn] 麦克风详情信息列表
    * @see SpkDetailInfo
    *
    * @since:v1.0
	*/
	virtual HWM_VOID GetSpeakerDevices(OUT HwmList<SpkDetailInfo>* spkDetailInfoList) = 0;

    /**
    * @brief
    * [en]This api is about setting the index of using cameras.
    * [cn]设置使用的摄像头设备序号
    *
    * @mobile:disable
    * @param index [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn] 摄像头设备序号
    *
    * @since:v1.0
    */
    virtual SDKERR ModifyCameraIndex(IN HWM_UINT32 index) = 0;

    /**
    * @brief
    * [en]This api is about turning on or off the camera.
    * [cn]设置本地摄像头开启或关闭
    * @detail
    * [en]
    * [cn]参数isOpen为True时是开启摄像头，为False时是关闭摄像头
    *
    * @param isOpen [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]开启或关闭摄像头参数
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR OpenCamera(HWM_BOOL isOpen) = 0;

    /**
    * @brief
    * [en]This api is about front and rear cameras switching.
    * [cn]前后摄像头切换
    *
    * @param NULL [cs_allowNull:Y]
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR SwitchCamera(HWM_VOID) = 0;

    /**
    * @brief
    * [en]This api is about setting the camera orientation.
    * [cn]设置摄像头方向
    *
    * @param orient [type:DeviceOrient][cs_allowNull:N]
    * [en]
    * [cn] 摄像头方向类型
    * @see DeviceOrient
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR ModifyCameraOrient(DeviceOrient orient) = 0;

    /**
    * @brief
    * [en]This class is used to enable/disable virtual camera
    * [cn]设置本地render的镜像策略
    *
    * @param position [type:CameraPosition][cs_allowNull:N]
    * [en]
    * [cn]前后置摄像头枚举
    * @see CameraPosition
    * @param mirrorType [type:CameraMirrorType][cs_allowNull:N]
    * [en]
    * [cn]镜像类型
    * @see CameraMirrorType
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR SetCameraMirrorType(IN CameraPosition position, IN CameraMirrorType mirrorType) = 0;

    /**
    * @brief
    * [en]This api is used to get the using camera position.
    * [cn]获取摄像头的使用情况
    * @synchronized
    * @android:GetUsingCameraPosition
    *
    * @return [type:CameraPosition]
    * [en]
    * [cn] 前后置摄像头枚举
    * @see CameraPosition
    *
    * @since:v1.0
    */
    virtual CameraPosition GetUsingCameraPosition() = 0;

    /**
    * @brief
    * [en]This class is used to deal with sim call in.
    * [cn]sim来电处理
    *
    * @param phase [type:SimCallPhase][cs_allowNull:N]
    * [en]
    * [cn] Sim卡来电各个阶段
    * @see SimCallPhase
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
	virtual SDKERR DealSimCall(IN SimCallPhase phase) = 0;

    /**
    * @brief
    * [en]This class is used to enable/disable the input or output of local audio.
    * [cn]开启、关闭音频输入输出
    *
    * @param audioIOType [type:AudioIOType][cs_allowNull:N]
    * [en]
    * [cn] 音频输入输出类型
    * @see AudioIOType
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR EnableLocalAudio(IN AudioIOType audioIOType, IN HWM_BOOL enable) = 0;

    /**
    * @brief
    * [en]This api is about muting the speaker or not.
    * [cn]设置(或取消)扬声器静音
    * @detail
    * [en]
    * [cn]参数isMute为True时是设置扬声器静音，为False时是取消扬声器静音
    *
    * @param isMute [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn] 是否静音扬声器
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    */
    virtual SDKERR MuteSpeaker(IN HWM_BOOL isMute) = 0;

    /**
    * @brief
    * [en]This api is about setting the index of using speakers.
    * [cn]设置使用的扬声器设备序号
    * @mobile:disable
    * @param index [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn] 扬声器设备序号
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @mobile:disable
    */
    virtual SDKERR ModifySpeakerIndex(IN HWM_UINT32 index) = 0;


    /**
    * @brief
    * [en]This api is about setting speaker volume.   
    * [cn]设置输出音量大小
    *
    * @param volume [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]音量大小，取值范围[0, 100]
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @mobile:disable
    */
    virtual SDKERR ModifySpeakerVolume(IN HWM_UINT32 volume) = 0;


    /**
    * @brief
    * [en]This api is about muting the microphone.
    * [cn]设置麦克风静音
    * @detail
    * [en]
    * [cn]参数isMute为True时是静音麦克风，为False时是不静音麦克风
    *
    * @param isMute [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否静音麦克风
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    */
    virtual SDKERR MuteMicrophone(IN HWM_BOOL isMute) = 0;

    /**
    * @brief
    * [en]This api is about setting the index of using microphones.
    * [cn]设置使用的麦克风设备序号
    *
    * @mobile:disable
    * @param index [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]麦克风设备序号
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @mobile:disable
    */
    virtual SDKERR ModifyMicrophoneIndex(IN HWM_UINT32 index) = 0;

    /**
    * @brief
    * [en]This api is about setting microphone volume.
    * [cn]设置输入音量
    *
    * @param volume [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]麦克风音量值，取值范围[0, 100]
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @mobile:disable
    */
    virtual SDKERR ModifyMicrophoneVolume(IN HWM_UINT32 volume) = 0;

    /**
    * @brief
    * [en]This api is uesd to get whether the speaker is mute.
    * [cn]获取扬声器是否系统静音
    * @mobile:disable
    * @paramOut
    */
    virtual SDKERR GetSpeakerMute(OUT HWM_BOOL* isMute) = 0;

    /**
    * @brief
    * [en]This api is uesd to get whether the microphone is mute.
    * [cn]获取麦克风是否系统静音
    * @mobile:disable
    * @paramOut
    */
    virtual SDKERR GetMicrophoneMute(OUT HWM_BOOL* isMute) = 0;


    /**
    * @brief
    * [en]This api is about beautifying face.
    * [cn]美颜
    * @detail
    * [en]
    * [cn]参数enable为True时是开启美颜，为False时是不开启美颜
    *
    * @param enable [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否开启美颜
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR EnableBeauty(IN HWM_BOOL enable) = 0;

    /**
    * @brief
    * [en]This api is about howling detection(The default setting is turning on the howling detection).
    * [cn]啸叫检测
    * @detail
    * [en]
    * [cn]enable-True:开启啸叫检测，enable-False:不开启啸叫检测
    *
    * @param enable [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否开启啸叫检测
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    */
    virtual SDKERR EnableHowlingDetection(IN HWM_BOOL enable) = 0;

    /**
    * @brief
    * [en]This api is about howling suppression(The default setting is turning on the howling suppression).
    * [cn]啸叫抑制
    * @detail
    * [en]
    * [cn]enable-True:开启啸叫抑制，enable-False:不开启啸叫抑制
    *
    * @param enable [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否开启啸叫抑制
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    */
    virtual SDKERR EnableHowlingSuppression(IN HWM_BOOL enable) { return SDKERR_SUCCESS; };

    /**
    * @brief
    * [en]This api is about set audio 3A model.
    * [cn]设置音频3A模式
    *
    * @param enable [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]设置音频3A模式
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @mobile:disable
    * @mac:disable
    */
    virtual SDKERR SetAudioVqeMode(IN AudioVqeMode model) = 0;

    /**
    * @brief
    * [en]This api is about using other audio devices.
    * [cn]启用其他音频设备(默认设备外的设备)
    * @detail
    * [en]
    * [cn]其他音频设备为默认设备外的设备
    *
    * @param enable [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否启用其他音频设备，enable-True:启用，enable-False:不启用
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @mobile:disable
    */
    virtual SDKERR EnableOtherAudioDevice(IN HWM_BOOL enable) = 0;

    /**
    * @brief
    * [en]This api is about opening preview.
    * [cn]打开预览
    *
    * @param handle [type:HWM_UPTR][cs_allowNull:N]
    * [en]
    * [cn]窗口句柄
    * @param cameraIndex [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]摄像头索引
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @mobile:disable
    */
    virtual SDKERR OpenPreview(HWM_UPTR handle, HWM_UINT32 cameraIndex) = 0;
    
    /**
    * @brief
    * [en]This api is about closing preview.
    * [cn]关闭预览
    *
    * @param NULL [cs_allowNull:Y]
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @mobile:disable
    */
    virtual SDKERR ClosePreview() = 0;

    /**
    * @brief
    * [en]This api is about the enable third-party data acquisition .
    * [cn]启用第三方视频数据采集
    *
    * @param frame [type:VideoFrameParam][cs_allowNull:N]
    * [en]
    * [cn]是否启用
    * @param enable [type:HWM_BOOL][cs_allowNull:N]
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @pc:disable
    * @ios:disable
    */
    virtual SDKERR EnableExternalVideoCapture(IN HWM_BOOL enable) = 0;

    /**
    * @brief
    * [en]This api is about the third-party data acquisition .
    * [cn]第三方数据采集
    *
    * @param frame [type:VideoFrameParam][cs_allowNull:N]
    * [en]
    * [cn]视频帧参数
    * @see VideoFrameParam
    * @param data [type:HWM_UCHAR][cs_allowNull:N]
    * [en]
    * [cn]存储视频数据的data地址
    * @param dataLen [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]视频数据的长度
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @pc:disable
    * @ios:disable
    */
    virtual SDKERR SetVideoCaptureInput(IN VideoFrameParam* frame, IN HWM_UCHAR *data, IN HWM_UINT32 dataLen) = 0;

    /**
    * @brief
    * [en]This api is used to get the camera state.
    * [cn]获取视频设备状态
    *
    * @param NULL [cs_allowNull:Y]
    *
    * @return [type: HWM_BOOL]
    * [en]
    * [cn]视频设备是否处于开启状态
    *
    * @since:v1.0
    *
    * @synchronized
    */
    virtual DeviceStatus GetCameraState() = 0;

    /**
    * @brief
    * [en]This api is used to get the microphone state.
    * [cn]获取麦克风设备开启状态
    *
    * @param NULL [cs_allowNull:Y]
    *
    * @return [type: HWM_BOOL]
    * [en]
    * [cn]麦克风是否处于开启状态
    *
    * @since:v1.0
    *
    * @synchronized
    */
    virtual HWM_BOOL GetMicState() = 0;

    /**
    * @brief
    * [en]This api is used to get the Speaker state.
    * [cn]获取扬声器状态
    *
    * @param NULL [cs_allowNull:Y]
    *
    * @return [type: HWM_BOOL]
    * [en]
    * [cn]扬声器是否处于开启状态
    *
    * @since:v1.0
    *
    * @synchronized
    */
    virtual HWM_BOOL GetSpeakState() = 0;

    /**
    * @brief
    * [en]This api is used to get the type of audio routing.
    * [cn]获取音频路由类型
    *
    * @param NULL [cs_allowNull:Y]
    *
    * @return [type: AudioRouteType]
    * [en]
    * [cn]音频路由类型
    * @see AudioRouteType
    *
    * @since:v1.0
    *
    * @synchronized
    * @android:getAudioRoute
    * @mac:disable
    */
    virtual AudioRouteType GetAudioRoute() = 0;

    /**
    * @brief
    * [en]This api is used to get extended attributes of video render mode.
    * [cn]获取hme视频渲染模式(opengl, Metal)
    * @private
    * @win:disable
    * @android:disable
    */
    virtual RenderMode GetVideoRenderMode() = 0;
};


/**
* @brief [en]This class is about render object.
*        [cn]窗口管理对象
* @detail
* [en]
* [cn]获取该对象的方法NativeSDK.getRenderApi()
*
* @pc:disable
* @ios:disable
* @mobile:interfaceOnly
* @GetInstance
*        HWM_SDK_NAMESPACE::HwmNativeSDK::GetRenderApi()
*/
class IHwmRender
{
public:

    /**
    * @brief
    * [en]This class is get local surfaceView.
    * [cn]获取本地的surfaceView
    * @detail
    * [en]
    * [cn]获取本地的SurfaceView，当需要显示本地画面时将其加载到界面布局里，调用SetLocalVideoInfoNotifyCallback监听状态变化
    * @pc:disable
    * @ios:disable
    * @mac:disable
    * @android:replace:return:HWM_VOID:android.view.SurfaceView:SurfaceView
    * @return [type:HWM_VOID]
    * @synchronized
    * @since:v1.0
    */
    virtual HWM_VOID GetLocalView() {};

    /**
    * @brief
    * [en]This class is get remote surfaceView.
    * [cn]获取远端的surfaceView
    * @detail
    * [en]
    * [cn]获取远端的SurfaceView，适用场景为需要显示最大发言人或者特定选看的人，调用SetMajorVideoInfoNotifyCallback监听状态变化
    * @pc:disable
    * @ios:disable
    * @mac:disable
    * @android:replace:return:HWM_VOID:android.view.SurfaceView:SurfaceView
    * @return [type:HWM_VOID]
    * @synchronized
    * @since:v1.0
    */
    virtual HWM_VOID GetRemoteMajorView() {};

    /**
    * @brief
    * [en]This class is get remote normal surfaceView.
    * [cn]获取远端的surfaceView
    * @detail
    * [en]
    * [cn]获取远端的SurfaceView，适用场景为需要显示多个远端画面时，调用GeneralWatch接口将SurfaceView和用户绑定，调用SetNormalVideoInfoNotifyCallback监听状态变化
    * @param userId [cs_allowNull:N]
    * [en]
    * [cn]与会者唯一标识
    * @pc:disable
    * @ios:disable
    * @mac:disable
    * @android:replace:return:HWM_VOID:android.view.SurfaceView:SurfaceView
    * @return [type:HWM_VOID]
    * @synchronized
    * @since:v1.0
    */
    virtual HWM_VOID GetRemoteNormalView(HWM_UINT32 userId) {};

};

END_HWM_SDK_NAMESPACE
#endif /* __HWM_CONF_SERVICE_H__ */