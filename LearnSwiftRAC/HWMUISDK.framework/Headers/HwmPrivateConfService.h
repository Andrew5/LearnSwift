/**
 * @file HwmConfService.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */

#ifndef __HWM_PRIVATE_CONF_SERVICE_H__
#define __HWM_PRIVATE_CONF_SERVICE_H__


#import "HwmPrivateConfServiceDef.h"
#import "HwmConfServiceShare.h"
#import "HwmGlobalErrorCodeDef.h"

BEGIN_HWM_SDK_NAMESPACE

/**
* @brief [en]This class is about confMgr result callback.
*        [cn]会议管理的结果回调类回调
*/
class HWM_API IHwmPrivateConfMgrResultCallback
{
public:
    /**
    * @brief
    * [en]This class is about the result of booking CTD conference..
    * [cn]预约CTD会议的结果回调
    * @private
    *
    * @UTCallback
    */
    virtual HWM_VOID OnBookCtdConfResult(SDKERR result, const HWM_CHAR* reasonDesc, const CreateConfResult* bookCtdConfResult) = 0;
    
    /**
    * @brief
    * [en]
    * [cn]匿名会议，校验滑块并获取验证码的结果回调
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
    virtual HWM_VOID OnRequestVerifycodeResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]匿名会议，刷新滑块的结果回调
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
    * @param sliderInfo [type:GetSliderResultInfo][cs_allowNull:N]
    * [en]
    * [cn]滑块结果
    * @see GetSliderResultInfo
    *
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnRefreshSliderResult(SDKERR result, const HWM_CHAR* reasonDesc, const GetSliderResultInfo* sliderInfo) = 0;

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
    * @Callback ["JoinConfByVerifyCode","JoinConfDirect","JoinConfByLink","JoinConfByNonce"]
    *
    * @UTCallback ["JoinConfByVerifyCode","JoinConfDirect","JoinConfByLink","JoinConfByNonce"]
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
    * @Callback ["JoinConfByVerifyCode","JoinConfDirect","JoinConfByLink","JoinConfByNonce"]
    *
    * @UTCallback ["JoinConfByVerifyCode","JoinConfDirect","JoinConfByLink","JoinConfByNonce"]
    */
    virtual HWM_VOID OnJoinConfFailed(SDKERR result, const HWM_CHAR* reasonDesc, const JoinConfFailedInfo* joinConfFailedInfo) = 0;

    /**
    * @brief
    * [en]
    * [cn]匿名会议，获取短信验证码的结果回调
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
    * @param sliderInfo [type:GetSliderResultInfo][cs_allowNull:N]
    * [en]
    * [cn]滑块结果
    * @see GetSliderResultInfo
    *
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnCheckNeedSliderAuthResult(SDKERR result, const HWM_CHAR* reasonDesc, const GetSliderResultInfo* sliderInfo) = 0;

    /**
    * @brief
    * [en]
    * [cn]二维码配对的结果回调
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
    virtual HWM_VOID OnStartQrCodePairResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;
    
    /**
    * @brief
    * [en]
    * [cn]强制二维码配对的结果回调
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
    virtual HWM_VOID OnStartQrCodePairForceResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;
    
    /**
    * @brief
    * [en]
    * [cn]结束二维码配对的结果回调
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
    virtual HWM_VOID OnEndQrCodePairResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]二维码入会的结果回调
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
    virtual HWM_VOID OnJoinPairConfResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
     * 查询历史会议列表，参数时间为毫秒结果
     * @mobile:disable
     *
     * @UTCallback
     */
    virtual HWM_VOID OnQueryHistoryConflistResult(SDKERR result, const HWM_CHAR* reasonDesc, const HistoryConfListInfo* confListInfo) = 0;

    /**
     * 查询历史会议与会者信息结果
     * @mobile:disable
     *
     * @UTCallback
     */
    virtual HWM_VOID OnQueryHistoryConfAttendeeResult(SDKERR result, const HWM_CHAR* reasonDesc, const HistoryConfAttendeeResult* attendeeResult) = 0;

    /** 
     * 查询录制文件结果 
     *
     * @UTCallback
     */
    virtual HWM_VOID OnQueryHistoryConfRecordFileResult(SDKERR result, const HWM_CHAR* reasonDesc, const HWM_CHAR* fileUrl) = 0;

    /**
     * 查询本地历史会议列表，参数时间为毫秒结果
     * @mobile:disable
    *
    * @UTCallback
     */
    virtual HWM_VOID OnQueryLocalHistoryConflistResult(SDKERR result, const HWM_CHAR* reasonDesc, const HistoryConfListInfo* confListInfo) = 0;

    /**
    * @brief
    * [en]
    * [cn]查询基本会议信息
    *
    * @UTCallback
    */
    virtual HWM_VOID OnQueryBasicConfInfoResult(SDKERR result, const HWM_CHAR* reasonDesc, const BasicConfInfo* confListInfo) {};

    /**
    * @brief [en] xxxxxx
    *        [cn] 查询Nonce结果
    *
    * @param result [type:SDKERR]
    * [en]
    * [cn]错误码
    * @see SDKERR
    * @param nonceType [type:NonceType]
    * [en]
    * [cn]Nonce类型
    *
    * @param reasonDesc [type:HWM_CHAR*]
    * [en]
    * [cn]错误描述
    *
    * @param nonce [type:HWM_CHAR*]
    * [en]
    * [cn]nonce值
    **/
    virtual HWM_VOID OnQueryNonceByTypeResult(SDKERR result, NonceType nonceType,const HWM_CHAR* reasonDesc, const HWM_CHAR* nonce) {};

};

/**
* @brief [en]This class is about confMgr notify callback.
*        [cn]会议管理通知类回调
*/
class HWM_API IHwmPrivateConfMgrNotifyCallback
{
public:
    /**
    * @brief
    * [en]This class is about the notification of data conference parameters.(Used by mobile terminal)
    * [cn]数据会议参数通知(移动端使用)
    * @private
    * @mobile:joinDataConf
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
    virtual HWM_VOID OnJoinShareConfParamNotify(const JoinShareConfParamInfo* joinShareConfParamInfo) = 0;

    /**
    * @brief
    * [en]This class is about pair universal info.
    * [cn]配对通用信息通知
    * @private
    * @ios:disable
    */
    virtual HWM_VOID OnPairUniversalInfoNotify(const PairUniversalInfo* pairUniversalInfo) = 0;

    /**
    * @brief
    * [en]This class is about data conf leave notify.
    * [cn]离开数据会议通知
    * @private
    * @mobile:disable
    */
    virtual HWM_VOID OnDataConfLeaveNotify() {};

    /**
    * @brief
    * [en]This class is about data conf join notify.
    * [cn]加入数据会议通知
    * @private
    * @mobile:disable
    */
    virtual HWM_VOID OnDataConfJoinNotify() {};

    /**
    * @brief
    * [en]This class is about paired or canceled.
    * [cn]配对事件通知
    * @private
    * @ios:disable
    */
    virtual HWM_VOID OnPairedOrCanceledNotify(PairEventInfo* pairEventInfo) = 0;

    /**
    * @brief
    * [en]This class is about the notification of upload key log.
    * [cn]关键日志上传通知
    *
    * @param keyLogInfo [type:UploadKeyLogInfo][cs_allowNull:N]
    * [en]
    * [cn]关键日志上传信息
    * @see UploadKeyLogInfo
    *
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnUploadKeyLogNotify(const UploadKeyLogInfo* keyLogInfo) = 0;

    /**
    * @brief
    * [en]This class is about the notification of anonymous membership account cancellation.
    * [cn]匿名入会账户注销通知
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
    * [en]This class is about paired or canceled.
    * [cn]收到配对请求通知
    * @private
    * @ios:disable
    */
    virtual HWM_VOID OnPairRequestNotify(PairReqInfo* pairReqInfo) = 0;

};

/**
* @brief [en]This class is about confstate notify callback.
*        [cn]会议状态通知类回调
*/
class HWM_API IHwmPrivateConfStateNotifyCallback
{
public:
    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 是否支持AI录制的通知回调
    *
    * @param supportAiRecord [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否支持AI录制
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnConfSupportAiRecordChanged(HWM_BOOL supportAiRecord) = 0;

    /**
    * @brief
    * [en]
    * [cn]支持投票功能的通知：返回true则为支持，返回false则认为不支持
    *
    * @param supportVote [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]支持投票通知
    *
    */
    virtual HWM_VOID OnVoteInfoNotify(const VoteInfo* voteInfo) {};

    /**
    * @brief
    * [en]
    * [cn]会议状态变更: 共享标注权限变更
    *
    * @param permission [type:AnnotationPermission][cs_allowNull:N]
    * [en]
    * [cn]共享标注权限
    *
    */
    virtual HWM_VOID OnAnnotationPermissionChanged(AnnotationPermission permission) {};
};

/**
* @brief [en]This class is about confcall result callback.
*        [cn]会议呼叫操作类回调
*/
class HWM_API IHwmPrivateConfCallResultCallback
{
public:
    /**
    * @brief
    * [cn]ctd呼叫结果
    * @private
    */
    virtual HWM_VOID OnStartCtdCallResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]This class is about accept call result callback.
    * [cn]接听呼叫回调
    *
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]接听通话操作的结果
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:Y]
    * [en]
    * [cn]结果的描述信息
    * @param acceptCallResultInfo [type:AcceptCallResultInfo*][cs_allowNull:N]
    * [en]
    * [cn]接听通话结果信息
    * @see AcceptCallResultInfo
    *
    * @since:v1.0
    *
    * @android:setAudioRouteInCall
    * @android:resetAudioRoute
    * @ios:initAudioRoute
    */
    virtual HWM_VOID OnAcceptCallResult(SDKERR result, const HWM_CHAR* reasonDesc, const AcceptCallResultInfo* acceptCallResultInfo) = 0;

    /**
    * @brief
    * [en]xxxxx
    * [cn]结束呼叫回调
    *
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]结束通话操作的结果
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:Y]
    * [en]
    * [cn]结果的描述信息
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnEndCallResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]This class is about start call result callback.
    * [cn]发起呼叫回调
    *
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]发起呼叫操作的结果
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:Y]
    * [en]
    * [cn]结果的描述信息
    * @param startCallResult [type:StartCallResult][cs_allowNull:N]
    * [en]
    * [cn]呼叫结果参数
    * @see StartCallResult
    *
    * @since:v1.0
    *
    * @android:initRender
    * @android:setAudioRouteInCall
    * @android:resetAudioRoute
    * @ios:initAudioRoute
    */
    virtual HWM_VOID OnStartCallResult(SDKERR result, const HWM_CHAR* reasonDesc, const StartCallResult* startCallResult) = 0;

    /**
    * @brief
    * [en]xxxxxx
    * [cn]2转3回调
    *
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]2转3回调操作的结果
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:Y]
    * [en]
    * [cn]结果的描述信息
    * @param createConfResult [type:CreateConfResult][cs_allowNull:N]
    * [en]
    * [cn]创建会议结果
    * @see CreateConfResult
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnCallTransferToConfResult(SDKERR result, const HWM_CHAR* reasonDesc, const CreateConfResult* createConfResult) = 0;

    /**
    * @brief
    * [en]This class is about the callback of the conversion between the audio and the video.
    * [cn]呼叫音视频转换结果回调
    *
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]呼叫音视频转换操作的结果
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:Y]
    * [en]
    * [cn]结果的描述信息
    * @param switchCallTypeResultInfo [type:SwitchCallTypeResultInfo][cs_allowNull:N]
    * [en]
    * [cn]音视频切换结果信息
    * @see SwitchCallTypeResultInfo
    *
    * @since:v1.0
    *
    * @android:initRender
    */
    virtual HWM_VOID OnSwitchCallTypeResult(SDKERR result, const HWM_CHAR* reasonDesc, const SwitchCallTypeResultInfo* switchCallTypeResultInfo) = 0;

    /**
    * @brief
    * [en]This api is about the callback for the result of audio converting to video when callees accept the call.
    * [cn]接受音频转视频请求结果回调
    *
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]接受音频转视频请求操作结果
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:Y]
    * [en]
    * [cn]结果的描述信息
    * @param acceptTransferVideoResultInfo [type:AcceptTransferVideoResultInfo][cs_allowNull:N]
    * [en]
    * [cn]接受音频转视频请求结果信息
    * @see AcceptTransferVideoResultInfo
    *
    * @since:v1.0
    *
    * @android:initRender
    */
    virtual HWM_VOID OnAcceptTransferVideoResult(SDKERR result, const HWM_CHAR* reasonDesc, const AcceptTransferVideoResultInfo* acceptTransferVideoResultInfo) = 0;

    /**
    * @brief
    * [en]This api is about the callback for get hme sample rate.
    * [cn]获取hme的音频采样率
    *
    * @param result [type:SDKERR][cs_allowNull:Y]
    * [en]
    * [cn]接受音频转视频请求操作结果
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:Y]
    * [en]
    * [cn]结果的描述信息
    * @param sampleRate [type:HWM_INT32][cs_allowNull:N]
    * [en]
    * [cn]hme音频采样频率
    * @see StartAudioMix
    *
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnStartAudioMixResult(SDKERR result, const HWM_CHAR* reasonDesc, HWM_INT32 sampleRate) {};
};


/**
* @brief [en]This class is about the notifation callbacks of conference call.
*        [cn]会议呼叫通知类回调
*/
class HWM_API IHwmPrivateConfCallNotifyCallback
{
public:
    /**
    * @brief
    * [en]This class is about the notification of the underlying media TRACE log.
    * [cn]底层媒体TRACE日志通知
    * @private
    */
    virtual HWM_VOID OnMediaTracelogNotify(HWM_CHAR* logPath) = 0;

    /**
    * @brief
    * [en]This class is about the notification of view refresh.
    * [cn]视频viev刷新通知
    *
    * @param refreshViewInfo [type:RefreshViewParamInfo][cs_allowNull:N]
    * [en]
    * [cn]视频view刷新通知信息
    * @see RefreshViewParamInfo
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnRefreshViewNotify(RefreshViewParamInfo* refreshViewInfo) = 0;

    /**
    * @brief
    * [en]This class is about the callback of decoding success message .
    * [cn]解码成功消息回调
    *
    * @param NULL [cs_allowNull:Y]
    *
    * @since:v1.0
    *
    * @android:refreshRemoteView
    */
    virtual HWM_VOID OnDecodeSuccessNotify() = 0;

    /**
    * @brief
    * [en]xxxxxxx
    * [cn]呼叫升级为视频通知
    *
    * @param result [type:HWM_INT32][cs_allowNull:N]
    * [en]
    * [cn]呼叫升级为视频的通知结果
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:Y]
    * [en]
    * [cn]结果的描述信息
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnAddVideoNotify(HWM_INT32 result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]xxxxx
    * [cn]RingBack回调
    *
    * @param callId [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]本次呼叫的ID
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnRingBackNotify(HWM_UINT32 callId) = 0;

    /**
    * @brief
    * [en]xxxxxxxx
    * [cn]结束呼叫回调
    *
    * @param callRecordInfo [type:CallEndInfo *][cs_allowNull:N]
    * [en]
    * [cn]呼叫结束信息
    * @see CallEndInfo
    *
    * @since:v1.0
    *
    * @android:uninitRender
    * @android:setAudioRouteOutCall
    * @ios:resetAudioRoute
    */
    virtual HWM_VOID OnEndCallNotify(CallRecordInfo *callRecordInfo) = 0;

    /**
    * @brief
    * [en]xxxxxxxx
    * [cn]停止呼叫响铃的回调
    *
    * @param NULL[cs_allowNull:Y]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnStopCallRingingNotify() = 0;

    /**
    * @brief
    * [en]This class is about the callback of call incoming telegram.
    * [cn]呼叫来电回调
    *
    * @param callBasicInfo[type:CallInCommingInfo][cs_allowNull:N]
    * [en]
    * [cn]来电呼叫信息
    * @see CallInCommingInfo
    *
    * @since:v1.0
    *
    * @android:initRender
    */
    virtual HWM_VOID OnCallIncomingNotify(CallInComingInfo* callBasicInfo) = 0;

    /**
    * @brief
    * [en]xxxxxxx
    * [cn]会话变更消息回调
    *
    * @param callType [type:CallType][cs_allowNull:N]
    * [en]xxxx
    * [cn]呼叫类型
    * @see CallType
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnCallSessionModifyNotify(CallType callType) = 0;

    /**
    * @brief
    * [en]This class is about the notifation callback of call connected.
    * [cn]呼叫建立回调
    *
    * @param callConnectInfo [type:CallRecordInfo][cs_allowNull:N]
    * [en]xxxx
    * [cn]呼叫记录信息体,缓存呼叫信息使用
    * @see CallRecordInfo
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    *
    * @android:setAudioRouteInCall
    * @android:resetAudioRoute
    * @ios:initAudioRoute
    */
    virtual HWM_VOID OnCallConnectedNotify(CallRecordInfo *callConnectInfo) = 0;

    /**
    * @brief
    * [en]xxxx
    * [cn]接听呼叫回调
    *
    * @param result [type:SDKERR][cs_allowNull:N]
    * [en]
    * [cn]接听呼叫的通知结果
    * @param reasonDesc [type:HWM_CHAR*][cs_allowNull:Y]
    * [en]
    * [cn]结果的描述信息
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    *
    * @android:setAudioRouteInCall
    */
    virtual HWM_VOID OnAcceptCallNotify(HWM_INT32 result, const HWM_CHAR* reasonDesc) = 0;


    /**
    * @brief
    * [en]This class is about the callback of transfering point to point call to conference.
    * [cn]点对点呼叫转会议回调
    *
    * @param confInfo [type:ConfConnectedInfo][cs_allowNull:N]
    * [en]
    * [cn]会议连接信息
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnCallTransToConfNotify(ConfConnectedInfo* confInfo) = 0;

    /**
    * @brief
    * [en]This class is about the callback of call deleting video.
    * [cn]呼叫删除视频回调
    *
    * @param NULL [cs_allowNull:Y]
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnDelVideoNotify() = 0;

};

/**
* @brief [en]This class is about the call management.
*        [cn]呼叫管理
* @GetInstance
*        HWM_SDK_NAMESPACE::HwmPrivateNativeSDK::GetPrivateCallApi()
*/
class IHwmPrivateCall
{
public:
    /**
    * @brief
    * [en]This class is about the callback  for the operating results of setting conference.
    * [cn]设置会议呼叫操作类全局回调
    *
    * @param callback [type:IHwmPrivateConfCallResultCallback][cs_allowNull:N]
    * [en]
    * [cn]会议呼叫操作类回调
    * @see IHwmPrivateConfCallResultCallback
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual SDKERR SetPrivateCallResultCallback(IHwmPrivateConfCallResultCallback* callback) = 0;

    /**
    * @brief
    * [en]This class is about the callback of setting conference call notification.
    * [cn]设置会议呼叫通知类全局回调
    *
    * @param callback [type:IHwmPrivateConfCallNotifyCallback][cs_allowNull:N]
    * [en]
    * [cn]会议呼叫通知类回调
    * @see IHwmPrivateConfCallNotifyCallback
    *
    * @return [type:HWM_VOID]
    *
    * @since:v1.0
    */
    virtual SDKERR SetPrivateCallNotifyCallback(IHwmPrivateConfCallNotifyCallback* callback) = 0;


    /**
    * @brief
    * [en]This class is about whether the conference is CTD call.
    * [cn]是否CTD呼叫
    *
    * @param NULL[cs_allowNull:Y]
    *
    * @return [type:HWM_BOOL]
    *
    * @since:v1.0
    *
    * @synchronized
    */
    virtual HWM_BOOL IsCTDCall() = 0;

    /**
    * @brief
    * [en]This class is about start CTD call.
    * [cn]发起CTD呼叫
    *
    * @param ctdCallParam[cs_allowNull:N]
    * [en]
    * [cn]ctd呼叫参数
    * @see StartCtdCallParam
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @mobile:disable
    *
    * @UTInterface:start
    */
    virtual SDKERR StartCtdCall(IN const StartCtdCallParam* ctdCallParam) = 0;

    /**
    * @brief
    * [en]xxxxx
    * [cn]发起呼叫
    *
    * @param callInfo [type:StartCallInfo *][cs_allowNull:N]
    * [en]
    * [cn]发起呼叫参数
    * @see StartCallInfo
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR StartCall(IN const StartCallInfo* callInfo) = 0;

    /**
    * @brief
    * [en]xxxxx
    * [cn]接听呼叫
    *
    * @param acceptCall [type:AcceptCallInfo *][cs_allowNull:N]
    * [en]
    * [cn]接听呼叫参数
    * @see AcceptCallInfo
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR AcceptCall(IN const AcceptCallInfo* acceptCall) = 0;

    /**
    * @brief
    * [en]xxxxx
    * [cn]呼叫音视频转换
    *
    * @param videoAndAudioInfo [type:SwitchCallTypeParamInfo *][cs_allowNull:N]
    * [en]
    * [cn]呼叫音视频转换参数
    * @see SwitchCallTypeParamInfo
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR SwitchCallType(IN const SwitchCallTypeParamInfo* videoAndAudioInfo) = 0;

    /**
    * @brief
    * [en]This class is about ending the call.
    * [cn]结束呼叫
    *
    * @param NULL[cs_allowNull:Y]
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @android:setAudioRouteOutCall
    * @android:uninitRender
    * @ios:resetAudioRoute
    * 
    * @UTInterface:start
    */
    virtual SDKERR EndCall() = 0;

    /**
    * @brief
    * [en]xxxxx
    * [cn]接听音频转视频请求
    *
    * @param acceptTransferVideoInfo [type:SwitchCallTypeParamInfo *][cs_allowNull:N]
    * [en]
    * [cn]呼叫音视频转换参数
    * @see SwitchCallTypeParamInfo
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR AcceptTransferVideo(IN const AcceptTransferVideoInfo* acceptTransferVideoInfo) = 0;


    /**
    * @brief
    * [en]This class is used to call transfer to conf.
    * [cn]点对点转会议请求
    *
    * @param createConfParam [type:CreateConfParam *][cs_allowNull:N]
    * [en]
    * [cn]创会参数
    * @see CreateConfParam
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR CallTransferToConf(IN const CreateConfParam* createConfParam) = 0;


    /**
    * @brief
    * [en]This class is about whether the call has successfully connected to the synchronization interface.
    * [cn]获取呼叫是否已经建立成功，标识和对端是否已经建立连接
    *
    * @synchronized
    *
    * @param NULL[cs_allowNull:Y]
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]呼叫是否已经连接成功
    *
    * @since:v1.0
    */
    virtual HWM_BOOL IsCallConnected() = 0;

    /**
    * @brief
    * [en]This class is about whether the conference is calling.
    * [cn]是否在呼叫中
    *
    * @synchronized
    *
    * @param NULL[cs_allowNull:Y]
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否在呼叫中
    *
    * @since:v1.0
    */
    virtual HWM_BOOL IsInCall() = 0;

    /**
    * @brief
    * [en]This class is about whether the conference is video.
    * [cn]是否视频是视频通话
    *
    * @param NULL[cs_allowNull:Y]
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否是视频
    *
    * @since:v1.0
    *
    * @synchronized
    */
    virtual HWM_BOOL IsVideoCall() = 0;

    /**
    * @brief
    * [en]This class is about getting the call information.
    * [cn]获取呼叫信息
    *
    * @synchronized
    *
    * @param NULL[cs_allowNull:Y]
    *
    * @return [type:CallRecordInfo]
    * [en]
    * [cn]呼叫记录信息体,缓存呼叫信息使用
    * @see CallRecordInfo
    *
    * @since:v1.0
    */
    virtual CallRecordInfo GetCallInfo() = 0;

    /**
    * @brief
    * [en]This class is about getting the peer end infomation.
    * [cn]获取对端信息
    *
    * @param NULL[cs_allowNull:Y]
    *
    * @return [type:CallPeerInfo]
    * [en]
    * [cn]呼叫对端信息
    * @see CallPeerInfo
    *
    * @since:v1.0
    *
    * @synchronized
    */
    virtual CallPeerInfo GetPeerInfo() = 0;

    /**
    * @brief
    * [en]This class is about set call infomation.
    * [cn]设置主被叫详情
    *
    * @param callInfo[cs_allowNull:N]
    * [en]
    * [cn]发起呼叫参数
    * @see StartCallInfo
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @mobile:disable
    */
    virtual SDKERR SetCallInfo(IN const StartCallInfo* callInfo) = 0;

};


/**
* @brief [en]This class is about confctrl result callback.
*        [cn]会议控制操作类回调
*/
class HWM_API IHwmPrivateConfCtrlResultCallback
{
public:
    /**
    * @brief
    * [en]
    * [cn]邀请硬终端的结果回调
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
    virtual HWM_VOID OnInviteHardTerminalByScanQRCodeResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]
    * [cn]处理TUP上报的AI会议纪要的结果回调
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
    * @param isOpen [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]是否上报
    *
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnAiConfRecordResult(SDKERR result, const HWM_CHAR* reasonDesc, HWM_UINT32 isOpen) = 0;

    /**
    * @brief
    * [en]
    * [cn]设置聊天权限结果回调
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
    * @param chatPermission [type:ChatPermission]
    * [en]
    * [cn]聊天权限
    *
    * @since:v1.0
    *
    * @UTCallback
    */
    virtual HWM_VOID OnSetChatPermissionResult(SDKERR result, const HWM_CHAR* reasonDesc, ChatPermission chatPermission) {};

    /**
    * @brief
    * [en]
    * [cn]延长会议时间操作结果
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
    * @UTCallback
    */
    virtual HWM_VOID OnSetExtendConfDurationResult(SDKERR result, const HWM_CHAR* reasonDesc) {};

    /**
    * @brief
    * [en]
    * [cn]设置共享标注权限结果
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
    * @UTCallback
    */
    virtual HWM_VOID OnSetAnnotationPermissionResult(SDKERR result, const HWM_CHAR* reasonDesc) {};
};

/**
* @brief [en]This class is about confctrl notify callback.
*        [cn]会议控制通知类回调
*/
class HWM_API IHwmPrivateConfCtrlNotifyCallback
{
public:

    /**
    * @brief
    * [en]xxxx
    * [cn]本地录制收到视频流
    *
    * @mobile:disable
    * @win:disable
    *
    * @param videoFrameData [type:VideoFrameData*]
    * [en]
    * [cn]视频流数据
    * @see VideoFrameData
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnLocalRecordVideoFrameNotify(VideoFrameData * videoFrameData) {};

    /**
    * @brief
    * [en]xxxx
    * [cn]本地录制收到音频流
    *
    * @mobile:disable
    * @win:disable
    *
    * @param audioFrameData [type:AudioFrameData*]
    * [en]
    * [cn]音频流数据
    * @see AudioFrameData
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnLocalRecordAudioFrameNotify(AudioFrameData * audioFrameData) {};

    /**
    * @brief
    * [en]xxxx
    * [cn]本地录制收到数据流，包括白板共享标注
    *
    * @mobile:disable
    * @win:disable
    *
    * @param dataFrameData [type:DataFrameData*]
    * [en]
    * [cn]数据流数据
    * @see DataFrameData
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnLocalRecordDataFrameNotify(VideoFrameData * dataFrameData) {};

    /**
    * @brief
    * [en]xxxx
    * [cn]本地录制收到图片流
    *
    * @mobile:disable
    * @win:disable
    *
    * @param imageFrameData [type:ImageFrameData*]
    * [en]
    * [cn]图片流数据
    * @see ImageFrameData
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnLocalRecordImageFrameNotify(VideoFrameData * imageFrameData) {};

    /**
    * @brief
    * [en]This function is about to info conf end
    * [cn]收到会议即将结束通知(会议结束前五分钟，由服务端计算)
    * @private
    */
    virtual HWM_VOID OnExtendConfNotify() {};

};


/**
* @brief [en]This class is about e2ee notify callback.
*        [cn]端到端加密通知回调
*/
class HWM_API IHwmPrivateE2EENotifyCallback
{
public:
    /**
    * @brief
    * [en]
    * [cn]端到端加解密之音频加密回调
    *
    * @param buffer [type:MediaFrameBuffer *]
    * [en]
    * [cn]编码后的音频码流
    *
    * @win:disable
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnE2EEAudioEncryptNotify(MediaFrameBuffer* buffer) {};

    /**
    * @brief
    * [en]
    * [cn]端到端加解密之音频解密回调
    *
    * @param buffer [type:MediaFrameBuffer *]
    * [en]
    * [cn]解码前的音频码流
    *
    * @win:disable
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnE2EEAudioDecryptNotify(MediaFrameBuffer* buffer) {};


    /**
    * @brief
    * [en]
    * [cn]端到端加解密之视频加密回调
    *
    * @param buffer [type:MediaFrameBuffer *]
    * [en]
    * [cn]编码后的视频码流
    *
    * @win:disable
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnE2EEVideoEncryptNotify(MediaFrameBuffer* buffer) {};

    /**
    * @brief
    * [en]
    * [cn]端到端加解密之视频解密回调
    *
    * @param buffer [type:MediaFrameBuffer *]
    * [en]
    * [cn]解码前的视频码流
    *
    * @win:disable
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnE2EEVideoDecryptNotify(MediaFrameBuffer* buffer) {};
};

/**
* @brief [en]This class is about device result callback.
*        [cn]会议设备操作类回调
*/
class HWM_API IHwmPrivateConfDeviceResultCallback
{
public:

};

/**
* @brief [en]This class is about device notify callback.
*        [cn]会议设备通知回调
*/
class HWM_API IHwmPrivateConfDeviceNotifyCallback
{
public:

};

/**
* @brief [en]This class is about conference management object.
*        [cn]会议管理对象
* @GetInstance
*        HWM_SDK_NAMESPACE::HwmPrivateNativeSDK::GetPrivateConfMgrApi()
*/
class IHwmPrivateConfMgr
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
    virtual SDKERR SetPrivateConfMgrResultCallback(IHwmPrivateConfMgrResultCallback* callback) = 0;

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
    virtual SDKERR SetPrivateConfMgrNotifyCallback(IHwmPrivateConfMgrNotifyCallback* callback) = 0;


    /**
    * @brief
    * [en]This class is about booking CTD conference.
    * [cn]预约CTD会议
    * @private
    *
    * @UTInterface:start
    */
    virtual SDKERR BookCtdConf(IN const BookConfParam *bookConfParam) = 0;


    /**
    * @brief
    * [en]This class is about starting QR code pairing.
    * [cn]开始二维码配对
    * @private
    *
    * @UTInterface:start
    */
    virtual SDKERR StartQrCodePair(IN const StartPairParam* pairParam) = 0;

    /**
    * @brief
    * [en]This class is about forcing QR code pairing.
    * [cn]强制二维码配对
    * @private
    *
    * @UTInterface:start
    */
    virtual SDKERR StartQrCodePairForce(IN const StartPairParam* pairParam) = 0;

    /**
    * @brief
    * [en]
    * [cn]验证码入会:匿名入会中间调用接口
    *
    * @param verifyCode [type:HWM_CHAR*][cs_allowNull:N]
    * [en]
    * [cn]验证码
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR JoinConfByVerifyCode(IN const HWM_CHAR* verifyCode, IN AutoRegisterMode autoRegMode = STATE_DISABLED) = 0;

    /**
    * @brief
    * [en]This class is about ending QR code pairing.
    * [cn]结束二维码配对
    * @private
    */
    virtual SDKERR EndQrCodePair() = 0;

    /**
    * @brief
    * [en]This class is about joining the paring conference.
    * [cn]加入配对会议
    * @private
    *
    * @UTInterface:start
    */
    virtual SDKERR JoinPairConf(IN const HWM_CHAR* confId) = 0;

    /**
    * @brief
    * [en]This class is about the api of verifying the slider and getting verification code for anonymous conferences.
    * [cn]匿名会议 校验滑块并获取验证码接口
    * 
    * @private
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR RequestVerifycode(IN HWM_UINT32 sliderPointX, IN HWM_UINT32 costSlideTime) = 0;

    /**
    * @brief
    * [en]This class is about the api of refreshing slider for anonymous conferences.
    * [cn]匿名会议 刷新滑块接口
    * 
    * @private
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR RefreshSlider() = 0;

    /**
    * @brief
    * [en]
    * [cn]会议列表直接入会
    *
    * @param joinConfParam [type:JoinConfParam][cs_allowNull:N]
    * [en]
    * [cn]直接入会的参数体
    * @see JoinConfParam
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR JoinConfDirect(IN const JoinConfParam *joinConfParam) = 0;

    /**
    * @brief
    * [en]
    * [cn]通过会议链接加入会议
    *
    * @param joinConfParam [type:ConfJoinByLinkParam][cs_allowNull:N]
    * [en]
    * [cn]通过会议链接加入会议的参数体
    * @see ConfJoinByLinkParam
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR JoinConfByLink(IN const ConfJoinByLinkParam *joinConfParam) = 0;

    /**
    * @brief
    * [en]This class is about the api of getting the SMS verification code for anonymous conferences.(SMS :Short Message Service)
    * [cn]匿名会议 获取短信验证码接口
    * 
    * @private
    * 
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR CheckNeedSliderAuth(IN const HWM_CHAR* phoneNumber, IN const HWM_CHAR* countryCode) = 0;


    /**
    * @brief
    * [en]This class is about getting the pair state.
    * [cn]同步获取会议二维码配对状态
    * @synchronized
    * 
    * @private
    * 
    * @since:v1.0
    */
    virtual ConfPairState GetConfPairState(HWM_VOID) = 0;


    /**
    * @brief
    * [en]
    * [cn]获取会议id的相关信息
    * @synchronized
    * @paramOut
    *
    * @param confId [type:const HWM_CHAR*][cs_allowNull:N]
    * @param confBaseInfo [type:ConfBaseInfo*]
    *
    * @see ConfBaseInfo
    *
    * @private
    *
    * @since:v1.0
    */
    virtual HWM_VOID GetConfBaseInfo(IN const HWM_CHAR* confId, OUT ConfBaseInfo* confBaseInfo) {}

    /**
    * @brief
    * [en]This class is about the api of set upload key log
    * [cn]设置上传关键日志
    * 
    * @private
    * 
    * @since:v1.0
    */
    virtual SDKERR SetUploadKeyLog(IN HWM_BOOL isUpload) = 0;

    /**
    * @brief
    * [en]This class is about init pair server.
    * [cn]初始化配对服务
    * @private
    * @ios:disable
    */
    virtual SDKERR InitPairServer(IN PairRoleType pairRole, IN HWM_UINT32 maxPairNum, IN HWM_UINT32 codeMode) = 0;

    /**
    * @brief
    * [en]This class is about accept pair request.
    * [cn]是否准许配对
    * @private
    * @ios:disable
    */
    virtual SDKERR AcceptPairRequest(IN const CallPairAcceptInfo* pairAcceptInfo) = 0;

    /**
    * @brief
    * [en]This class is about cancel pair.
    * [cn]是否准许配对
    * @private
    * @ios:disable
    */
    virtual SDKERR CancelPair(IN HWM_INT64 pairId, IN CallPairReasonType reasonCode) = 0;

    /**
    * @brief
    * [en]This class is about pair send join conf info.
    * [cn]发送入会结果
    * @private
    * @ios:disable
    */
    virtual SDKERR PairSendJoinconfInfo(IN HWM_INT64 pairId, IN HWM_UINT32 joinResult) = 0;

    /**
    * @brief
    * [en]This class is about uninit pair server.
    * [cn]配对去初始化
    * @private
    * @ios:disable
    */
    virtual SDKERR UninitPairServer() = 0;

    /**
    * @brief
    * [en]This class is query history conference list.
    * [cn]查询历史会议列表，参数时间为毫秒
    * @private
    * @mobile:disable
    *
    * @UTInterface:start
    */
    virtual SDKERR QueryHistoryConflist(IN HWM_UINT64 beginTime, IN HWM_UINT64 endTime) = 0;

    /**
    * @brief
    * [en]This class is about query history conference attendee infomation.
    * [cn]查询历史会议与会者信息
    * @private
    * @mobile:disable
    *
    * @UTInterface:start
    */
    virtual SDKERR QueryHistoryConfAttendee(IN const HWM_CHAR* confUuid) = 0;

    /**
    * @brief
    * [en]This class is about query history conference record file.
    * [cn]查询录制文件
    * @private
    * @mobile:disable
    *
    * @UTInterface:start
    */
    virtual SDKERR QueryHistoryConfRecordFile(IN const HWM_CHAR* confUuid) = 0;

    /**
    * @brief
    * [en]This class is about query local history conference list.
    * [cn]查询本地历史会议列表，参数时间为毫秒
    * @private
    * @mobile:disable
    *
    * @UTInterface:start
    */
    virtual SDKERR QueryLocalHistoryConflist(IN HWM_UINT64 beginTime, IN HWM_UINT64 endTime) = 0;

    /**
    * @brief
    * [en]This class is about join conf by nonce.
    * [cn]根据随机数加入会议
    * @private
    *
    * @UTInterface:start
    */
    virtual SDKERR JoinConfByNonce(IN const NonceJoinConfParam* joinConfParam) = 0;

    /**
    * @brief
    * [en]
    * [cn]根据会议Id和密码获取会议的基本信息
    *
    * @param confId  password
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR QueryBasicConfInfo(IN const HWM_CHAR* confId, IN const HWM_CHAR* password) = 0;

    /**
    * @brief
    * [en]
    * [cn]修改历史会议中数据库的本地录制文件路径
    * @private
    * @mobile:disable
    * @win:disable
    * @param historyConfInfo
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR UpdateHistoryConfInfo(IN HistoryConfInfoParam* historyConfInfo) = 0;

    /**
    * @brief
    * [en]
    * [cn]获取
    *
    * @param nonceType [type:NonceType]
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR QueryNonceByType(NonceType nonceType) { return SDKERR_SUCCESS; };
    
};


/**
* @brief [en]This class is about the object of conference control operation.
*        [cn]会议控制操作对象
* @GetInstance
*        HWM_SDK_NAMESPACE::HwmPrivateNativeSDK::GetPrivateConfCtrlApi()
*/
class IHwmPrivateConfCtrl
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
    virtual SDKERR SetPrivateConfCtrlResultCallback(IHwmPrivateConfCtrlResultCallback* callback) = 0;

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
    virtual SDKERR SetPrivateConfCtrlNotifyCallback(IHwmPrivateConfCtrlNotifyCallback* callback) = 0;


    /**
    * @brief
    * [en]This class is about invite hardterminal user by scan QR Code.
    * [cn]扫码邀请硬终端用户入会
    * @private
    *
    * @UTInterface:start
    */
    virtual SDKERR InviteHardTerminalByScanQRCode(IN const InviteHardTerminalParam* inviteHardTerminalParam) = 0;



    /**
    * @brief
    * [en]This class is about dealing with the result notification of AI conference record reported by TUP.
    * [cn]处理TUP上报的AI会议纪要结果通知
    * @private
    *
    * @UTInterface:start
    */
    virtual SDKERR AiConfRecord(IN HWM_BOOL isOpen) = 0;

    /**
    * @brief
    * [en]This class is about setting chat permission.
    * [cn]主席会控：控制聊天权限
    *
    * @param chatPermission [type:ChatPermission][cs_allowNull:N]
    *
    * @state:inConf
    *
    * [en]
    * [cn]聊天权限
    *
    * @return [type:SDKERR]
    *
    */
    virtual SDKERR SetChatPermission(IN ChatPermission chatPermission) { return SDKERR_SUCCESS; };

    /**
    * @brief
    * [en]This class is about data share window
    * [cn]数据会议共享界面观看情况
    * @param isWatching [type:HWM_BOOL]
    * [en] indicate user is watching data share window or not
    * [cn] 是否在看数据会议共享界面
    * @param resolutionLevel [type:GeneralWatchResolutionLevel]
    * [en] indicate resolution level of data share window
    * [cn]选看数据会议窗口分辨率
    * @see GeneralWatchResolutionLevel
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR SetDataShareWatchParam(IN HWM_BOOL isWatching, IN GeneralWatchResolutionLevel resolutionLevel) = 0;

    /**
    * @brief
    * [en]This class is about extending conf duration.
    * [cn]设置会议延长时间
    *
    * @param type [type:ExtendConfType][cs_allowNull:N]
    * @param duration [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]手动自动设置会议延长时间
    *
    * @return [type:SDKERR]
    *
    * @UTInterface:start
    */
    virtual SDKERR SetExtendConfDuration(IN HWM_UINT32 duration) { return SDKERR_SUCCESS; };

    /**
    * @brief
    * [en]This class is about setting LabelPermission when sharing or as a host.
    * [cn]控制共享标注权限
    *
    * @param permissionType [type:AnnotationPermission][cs_allowNull:N]
    * [en]
    * [cn]手动自动设置会议延长时间
    *
    * @return [type:SDKERR]
    *
    * @UTInterface:start
    */
    virtual SDKERR SetAnnotationPermission(IN AnnotationPermission permissionType) { return SDKERR_SUCCESS; };
};


/**
* @brief [en]This class is about the object of conference state infomation.
*        [cn]会议状态信息对象
* @GetInstance
*        HWM_SDK_NAMESPACE::HwmPrivateNativeSDK::GetPrivateConfStateApi()
*/
class IHwmPrivateConfState
{
public:
    /**
    * @brief
    * [en]This class is about the notifications callback of conference state.
    * [cn]设置会议状态通知类全局回调
    * 
    * @param callback [type:IHwmPrivateConfStateNotifyCallback][cs_allowNull:N]
    * [en]
    * [cn]回调方法
    * @see IHwmPrivateConfStateNotifyCallback
    * 
    * @since:v1.0
    */
    virtual SDKERR SetPrivateConfStateNotifyCallback(IHwmPrivateConfStateNotifyCallback* callback) = 0;

    

    /**
    * @brief
    * [en]This class is about getting the conference state: whether the conference supports the AI recording.
    * [cn]获取会议状态:是否支持AI录制
    * @synchronized
    * @private
    */
    virtual HWM_BOOL GetConfSupportAiRecord() = 0;

    /**
    * @brief
    * [en]This class is about getting the conference state: whether the conference supports set Annotation permission.
    * [cn]获取会议状态:是否支持共享标志权限控制
    * @synchronized
    * @private
    */
    virtual HWM_BOOL GetSupportAnnotationPermission() { return HWM_FALSE; };

    /**
    * @brief
    * [en]This class is about getting the conference state: whether the conference supports set Annotation permission.
    * [cn]获取会议状态:获取共享标注权限
    * @synchronized
    * @private
    */
    virtual AnnotationPermission GetAnnotationPermission() { return ANNOTATION_PERMISSION_ALL; };
};


/**
* @brief [en]This class is about getting the object of device management.
*        [cn]获取设备管理对象
* @GetInstance
*        HWM_SDK_NAMESPACE::HwmPrivateNativeSDK::GetPrivateDeviceMgrApi()
*/
class IHwmPrivateDeviceMgr
{
public:
    /**
    * @brief
    * [en]This class is about setting the callback class of device operation APIs.
    * [cn]设置会议设备操作类全局回调
    *
    * @param callback [type:IHwmPrivateConfDeviceResultCallback*][cs_allowNull:N]
    * [en]
    * [cn] 会议设备操作类回调
    * @see IHwmPrivateConfDeviceResultCallback
    *
    * @since:v1.0
    */
    virtual SDKERR SetPrivateConfDeviceResultCallback(IHwmPrivateConfDeviceResultCallback* callback) = 0;

    /**
    * @brief
    * [en]This class is about setting the callback class of device notifications.
    * [cn]设置会议设备操作类全局回调
    *
    * @param callback [type:IHwmPrivateConfDeviceNotifyCallback*][cs_allowNull:N]
    * [en]
    * [cn] 会议设备通知回调
    * @see IHwmPrivateConfDeviceNotifyCallback
    *
    * @since:v1.0
    */
    virtual SDKERR SetPrivateConfDeviceNotifyCallback(IHwmPrivateConfDeviceNotifyCallback* callback) = 0;

    /**
    * @brief
    * [en]This class is about setting the callback class of e2ee notifications.
    * [cn]设置端到端加密全局回调
    *
    * @param callback [type:IHwmPrivateE2EENotifyCallback*][cs_allowNull:N]
    * [en]
    * [cn] 端到端加密全局回调
    * @see IHwmPrivateE2EENotifyCallback
    *
    * @since:v1.0
    */
    virtual SDKERR SetPrivateE2EENotifyCallback(IHwmPrivateE2EENotifyCallback* callback) = 0;

    /**
    * @brief
    * [en]This api is about video control.
    * [cn]视频控制(这个接口有点难理解，需讨论优化成易理解使用的接口)
    *
    * @param videoControl [type:VideoControlParam][cs_allowNull:N]
    * [en]
    * [cn]视频控制参数
    * @see VideoControlParam
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @private
    */
    virtual SDKERR VideoControl(IN const VideoControlParam* videoControl) = 0;

    /**
    * @brief
    * [en]
    * [cn]第三方音频数据采集
    *
    * @param data [type:HWM_UCHAR *][cs_allowNull:N]
    * [en]
    * [cn]第三方音频数据
    *
    * @param dataLene [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]数据的长度
    *
    * @pc:disable
    * @ios:disable
    *
    * @since:v1.0
    */
    virtual SDKERR SetAudioCaptureInput(HWM_UCHAR *data, HWM_UINT32 dataLene) = 0;

    /**
    * @brief
    * [en]This api is about opening or closing the automatic routing of audio.
    * [cn]开启或关闭音频底层自动路由
    *
    * @param isOpen [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否开启音频底层自动路由，isOpen-True:开启，isOpen-False:不开启
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    */
    virtual SDKERR SwitchAudioAutoRouter(IN HWM_BOOL isOpen) = 0;

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
    * [cn]第三方视频数据采集
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
    * [en]This api is about operating audio preview window.
    * [cn]操作音频预览窗口
    * @private
    * @mobile:disable
    */
    virtual SDKERR OperateAudioPreview(HWM_BOOL isOpen) = 0;

    /**
    * @brief
    * [en]This api is about setting the folding state of device interface.
    * [cn]设置设备界面的折叠状态
    *
    * @param deviceFoldedStateType [type:DeviceFoldedStateType][cs_allowNull:N]
    * [en]
    * [cn] 设备折叠状态类型
    * @see DeviceFoldedStateType
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR SetDeviceFoldedState(IN const DeviceFoldedStateType deviceFoldedStateType) = 0;


    /**
    * @brief
    * [en]This api is used to remove all video window for ios.
    * [cn]ios移除所有的窗口句柄
    * @private
    * @pc:disable
    * @android:disable
    */
    virtual SDKERR RemoveAllVideoWindow() = 0;

    /**
    * @brief
    * [en]This class is used to enable/disable virtual camera
    * [cn]启用/禁用虚拟摄像头
    *
    * @param enable [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn] 是否启用虚拟摄像头 enable-True:启用虚拟摄像头 enable-False:禁用虚拟摄像头
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    * @ios:disable
    * @pc:disable
    */
    virtual SDKERR EnableVirtualCamera(IN HWM_BOOL enable) = 0;

    /**
    * @brief
    * [en]This api is about setting video resolution mode.
    * [cn]设置视频分辨率模式
    *
    * @param videoResolutionMode [type:VideoResolutionMode][cs_allowNull:N]
    * [en]
    * [cn] 视频分辨率类型
    * @see VideoResolutionMode
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR SetVideoResolutionMode(IN const VideoResolutionMode videoResolutionMode) = 0;

    /**
    * @brief
    * [en]This api is about setting AI model param.
    * [cn]设置AI模型参数
    *
    * @param modelParam [type:AiModelParam*][cs_allowNull:N]
    * [en]
    * [cn]AI模型参数
    * @see AiModelParam
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR SetAiModelParam(IN const AiModelParam* modelParam) = 0;

    /**
    * @brief
    * [en]This api is about opening or closing the encryption of audio stream chip.
    * [cn]开启或关闭音频流芯片加密
    *
    * @param isOpen [type:HWM_BOOL][cs_allowNull:N]
    * [en]
    * [cn]是否开启音频流芯片加密，isOpen-True:开启，isOpen-False:不开启
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    */
    virtual SDKERR SwitchAudioChipEncrypt(IN HWM_BOOL isOpen) = 0;

    /**
    * @brief
    * [en]This api is about setting the virtual background.
    * [cn]设置虚拟背景
    *
    * @param virtualBackgroundInfo [type:VirtualBackgroundInfo][cs_allowNull:N]
    * [en]
    * [cn]设置虚拟背景参数
    * @see VirtualBackgroundInfo
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    */
    virtual SDKERR SetVirtualBackground(const VirtualBackgroundInfo* virtualBackgroundInfo) = 0;

    /**
    * @brief
    * [en]This api is about setting the virtual background memory.
    * [cn]设置虚拟背景位图内存
    *
    * @param virtualBackgroundInfo [type:VirtualBackgroundInfo][cs_allowNull:N]
    * [en]
    * [cn]设置虚拟背景参数
    * @see VirtualBackgroundInfo
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    */
    virtual SDKERR SetVirtualBackgroundMemory(VirtualBackgroundMode mode, HWM_UCHAR* imageBuffer, HWM_UINT32 width, HWM_UINT32 height) = 0;

    /**
    * @brief
    * [en]This api is about getting AI algorithms capability.
    * [cn]获取AI算法能力
    *
    * @param NULL [cs_allowNull:Y]
    *
    * @return [type:AICapability]
    * [en]
    * [cn]AI算法能力
    * @AICapability
    *
    * @since:v1.0
    *
    * @synchronized
    */
    virtual AICapability GetAICapability() = 0;

    /**
    * @brief
    * [en]This api is about getting hme backgroud process result.
    * [cn]获取hme背景虚化或者背景替换的结果
    *
    * @param NULL [cs_allowNull:Y]
    *
    * @return [type:BgTypeErr]
    * [en]
    * [cn]hme背景虚化或者背景替换的结果
    * @BackgroudProgressResult
    *
    * @since:v1.0
    *
    * @synchronized
    * @mobile:disable
    * @mac:disable
    */
    virtual BgTypeErr GetBackgroudProgressResult() = 0;

    /**
    * @brief
    * [en]This api is about getting the information about hardware encoder and decoder.
    * [cn]获取硬编解码器能力信息
    *
    * @synchronized
    * @paramOut
    *
    * @param hdCapInfo [type:HardwareAccelerateCap*]
    * [en]
    * [cn]硬编解码器加速信息
    * @see HardwareAccelerateCap
    *
    * @since:v1.0
    */
    virtual HWM_VOID GetHardwareAccelerateCapInfo(OUT HardwareAccelerateCap* hardwareAccelerateCap) = 0;

    /**
    * @brief
    * [en]This api is about whether the super resolution is supported.
    * [cn]手机是否提供视频超级分辨率功能
    *
    * @param NULL [cs_allowNull:Y]
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn] true-手机提供视频超级分辨率功能，false-手机不提供视频超级分辨率功能
    *
    * @since:v1.0
    */
    virtual HWM_BOOL GetIsEnableSuperResolution() = 0;


    /**
    * @brief
    * [en]This api is used to setting video window.
    * [cn]设置视频窗口
    * @private
    */
    virtual SDKERR SetVideoWindow(IN HWM_UINT32 wndCount, IN const VideoWndBasicInfo* videoWndInfo) = 0;

    /**
    * @brief
    * [en]This api is used to setting attributes of video display window.
    * [cn]设置视频显示窗口属性----废弃掉
    * @private
    * @mobile:disable
    */
    virtual SDKERR SetVideoRender(IN const VideoRenderInfo* videoRenderInfo) = 0;

    /**
    * @brief
    * [en]This api is used to setting attributes of video display window.
    * [cn]设置视频显示--远端窗口属性(render字段, 此版本不生效)
    * @private
    */
    virtual SDKERR SetRemoteVideoRender(IN const RemoteVideoRenderInfo* videoRenderInfo) = 0;

    /**
    * @brief
    * [en]This api is used to setting attributes of video display window.
    * [cn]设置窗口渲染模式
    * @private
    */
    virtual SDKERR SetVideoDisplayMode(IN const VideoRenderDisplayModeInfo* displayModeInfo) = 0;

    /**
    * @brief
    * [en]This api is used to setting extended attributes of video display window.
    * [cn]设置视频显示窗口扩展属性
    * @private
    * @mobile:disable
    */
    virtual SDKERR SetVideoRenderEx(IN const VideoRenderInfo* videoRenderInfo) = 0;

    /**
    * @brief
    * [en]This api is about setting terminal type
    * [cn]设置终端类型
    * @private
    */
    virtual SDKERR SetTerminalType(IN const HWM_CHAR* terminalType) = 0;

    /**
    * @brief
    * [en]This api is about setting user setting info
    * [cn]用户设置相关信息
    * @private
    * @mobile:disable
    */
    virtual SDKERR SetUserSettingInfo(IN const UserSettingInfo* settingParam) = 0;

    /**
    * @brief
    * [en]This api is about media open audio preview
    * [cn]开始音频预览
    * @private
    * @mobile:disable
    * @paramOut
    */
    virtual SDKERR OpenAudioPreview(OUT HWM_UINT32* sessionId) = 0;

    /**
    * @brief
    * [en]This api is about media stop audio preview
    * [cn]停止音频预览
    * @private
    * @mobile:disable
    */
    virtual SDKERR StopAudioPreview(IN HWM_UINT32 sessionId) = 0;

    /**
    * @brief
    * [en]This api is about media get device volume
    * [cn]获取设备音量
    * @private
    * @mobile:disable
    * @synchronized
    * @paramOut
    */
    virtual SDKERR GetDeviceVolume(IN const DeviceType deviceType, OUT HWM_UINT32* volume) = 0;

    /**
    * @brief
    * [en]This api is about media set device volume
    * [cn]设置设备音量
    * @private
    * @mobile:disable
    */
    virtual SDKERR SetDeviceVolume(IN const DeviceType deviceType, IN HWM_UINT32 volume) = 0;

    /**
    * @brief
    * [en]This api is about media set mic auto volume
    * [cn]设置是否自动调节麦克风音量
    * @private
    * @mobile:disable
    */
    virtual SDKERR SetMicAutoVolume(IN HWM_BOOL isOpen) = 0;

    /**
    * @brief
    * [en]This api is about set high resolution
    * [cn]设置1080P
    * @private
    * @mobile:disable
    */
    virtual SDKERR SetHighResolution(IN HWM_BOOL enableHighResolution) = 0;

    /**
    * @brief
    * [en]This api is about set high resolution priority
    * [cn]设置高清优先
    * @private
    * @mobile:disable
    */
    virtual SDKERR SetHighResolutionPriority(IN HWM_BOOL enableHighResolutionPriority) = 0;

    /**
    * @brief
    * [en]This api is about set up audio tnr
    * [cn]设置瞬时噪音抑制开关
    * @private
    * @mobile:disable
    */
    virtual SDKERR SetUpAudioTnr(IN HWM_BOOL enable) = 0;

    /**
    * @brief
    * [en]This api is about set up active origin sound
    * [cn]设置启用原始声音
    * @private
    * @ios:disable
    */
    virtual SDKERR SetActiveOriginSound(IN HWM_BOOL enable) = 0;

    /**
    * @brief
    * [en]This api is about set windows board audio optimize
    * [cn]windows大屏音频优化
    * @private
    * @mobile:disable
    * @mac:disable
    */
    virtual SDKERR SetWinBoardAudioOptimize(IN HWM_BOOL enable) = 0;

    /**
    * @brief
    * [en]This api is about start audio mix.
    * [cn]开始混音
    * @private
    * @pc:disable
    *
    * @UTInterface:start
    */
    virtual SDKERR StartAudioMix() = 0;

    /**
    * @brief
    * [en]This api is about stop audio mix.
    * [cn]停止混音
    * @private
    * @pc:disable
    */
    virtual SDKERR StopAudioMix() = 0;

    /**
    * @brief
    * [en]This api is about send share audio mix data.
    * [cn]发送共享的音频混音数据
    * @param buf [type:HWM_UCHAR][cs_allowNull:N]
    * [en]
    * [cn]存储音频数据的data地址
    * @param buffLen [type:HWM_UINT32][cs_allowNull:N]
    * [en]
    * [cn]音频数据的长度（需要是show int 的整数倍）
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @private
    * @pc:disable
    *
    * @UTInterface:disable
    */
    virtual SDKERR SendShareAudioMixData(IN HWM_UCHAR *buf, IN HWM_UINT32 buffLen) = 0;

    /**
    * @brief
    * [en]This api is about set cpu level
    * [cn]设置cpu等级
    * @private
    * @mobile:disable
    */
    virtual HWM_VOID SetCpuLevel(CpuLevel level) = 0;

    /**
    * @brief
    * [en]This api is about set cpu usage
    * [cn]设置cpu使用率
    * @private
    * @mobile:disable
    * 
    * @UTInterface:disable
    */
    virtual HWM_VOID SetCpuUsage(HWM_UINT32 value) = 0;

    /**
    * @brief
    * [en]This api is about set cpu threshold
    * [cn]设置cpu阈值
    * @private
    * @mobile:disable
    */
    virtual HWM_VOID SetCpuThreshold(HWM_UINT32 above, HWM_UINT32 belowSlow, HWM_UINT32 belowQuick) = 0;

    /**
    * @brief
    * [en]This api is about set super resolution model path.
    * [cn]配置超分模型路径
    * @private
    * @pc:disable
    * @ios:disable
    */
    virtual SDKERR SetSuperResolutionModelPath(IN const HWM_CHAR*modelPath) = 0;

    /**
    * @brief
    * [en]This class is about setting the VOIP voice data encrypt function and decrype function.
    * [cn]设置VOIP语言数据加密解密回调函数。
    *
    * @param voipEncDec [type:VoipEncDec*][cs_allowNull:N]
    * [en]
    * [cn] 加密解密回调函数地址
    * @see SetVoipEncDecWithIOS
    * @android:disable
    * @pc:disable
    * @mac:disable
    *
    * @since:v1.0
    */
    virtual SDKERR SetVoipEncDecWithIOS(VoipEncDec* voipEncDec) { return SDKERR_SUCCESS; };

    /**
    * @brief
    * [en]This api is about enable debug mode hook frames.
    * [cn]启用Debug模式Hook码流。
    *
    * @android:disable
    * @ios:disable
    * @mac:disable
    *
    * @since:v1.0
    */
    virtual SDKERR EnableHookFrames(IN const HWM_CHAR * params) { return SDKERR_SUCCESS; }

    /**
    * @brief
    * [en]This api is about enable e2ee.
    * [cn]启用/关闭端到端加密。
    *
    * @win:disable
    *
    * @since:v1.0
    */
    virtual SDKERR EnableE2EE(IN HWM_BOOL enable) = 0;


    /**
    * @brief
    * [en]This api is about set e2ee config.
    * [cn]e2ee配置，给win使用，win进程间通讯，不利于码流传输，使用动态加载dll方式在sdk线程处理。
    *
    * @android:disable
    * @ios:disable
    * @mac:disable
    *
    * @since:v1.0
    */
    virtual SDKERR SetE2EEConfig(IN const E2EEConfig * params) = 0;
};


END_HWM_SDK_NAMESPACE
#endif /* __HWM_CONF_SERVICE_H__ */