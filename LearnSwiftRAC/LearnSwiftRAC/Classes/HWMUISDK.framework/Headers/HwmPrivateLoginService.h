/**
* @file HwmLoginService.h
*
* Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
*
* @brief Xxxxxx.
*/


#ifndef __HWM_PRIVATE_LOGIN_SERVICE_H__
#define __HWM_PRIVATE_LOGIN_SERVICE_H__

#import "HwmPrivateLoginServiceDef.h"
#import "HwmGlobalErrorCodeDef.h"

BEGIN_HWM_SDK_NAMESPACE

class HWM_API IHwmPrivateLoginResultCallback
{
public:
    /**
    * @brief [en] This interface is used to describe the result of login.
    *        [cn] 登录结果(私有)
    * @private
    * @Callback ["LoginPrivate","LoginByAccount","LoginByMiddleToken","LoginByRegister","LoginByUsgToken","LoginByVerifyCode","LoginByWechat","LoginBySSO","LoginByAuthCode","LoginByAppIdPrivate","LoginByNonce"]
    * 
    * @UTCallback ["LoginPrivate","LoginByAccount","LoginByMiddleToken","LoginByRegister","LoginByUsgToken","LoginByVerifyCode","LoginByWechat","LoginBySSO","LoginByAuthCode","LoginByAppIdPrivate","LoginByNonce"]
    *
    **/
    virtual HWM_VOID OnLoginPrivateResult(SDKERR result, const HWM_CHAR* reasonDesc, const LoginPrivateResultInfo* loginResultInfo) = 0;

    /**
    * @brief [en] This interface is used to describe the result of active.
    *        [cn] 激活结果
    * @private
    * @ios:disable
    * @pc:disable
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnActiveByCodeResult(SDKERR result, const HWM_CHAR* errorCode, const ActiveByCodeReturnInfo* loginActiveRetInfo) {};
    
    
    /**
    * @brief [en] This interface is used to describe the result of get qr code.
    *        [cn] 获取激活码结果
    * @private
    * @ios:disable
    * @pc:disable
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnQueryActiveQrCodeResult(SDKERR result, const HWM_CHAR* errorCode, const ActiveQrCodeInfo* loginPrivateQrCodeInfo) {};

    /**
    * @brief [en] This interface is used to describe the result of get qr code.
    *        [cn] 获取二维码激活结果成功
    * @private
    * @ios:disable
    * @pc:disable
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnQueryActiveQrCodeDetailSuccess(const ActiveQrCodeDetailInfo* loginQrActiveRetInfo) {};

    /**
    * @brief [en] This interface is used to describe the fail of get qr code.
    *        [cn] 获取二维码激活结果失败
    * @private
    * @ios:disable
    * @pc:disable
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnQueryActiveQrCodeDetailFailed(SDKERR result, const HWM_CHAR* errorCode, const ActiveQrCodeDetailInfo* loginQrActiveRetInfo) {};

    /**
    * @brief [en] xxxxxx
    *        [cn] 密码管理：请求验证码结果——成功
    *
    * @param verifyCodeResultInfo [type:ReqVerifyCodeResultInfo*]
    * [en]
    * [cn]请求验证码结果信息
    * @see ReqVerifyCodeResultInfo
    *
    * @since:v1.0
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnSendReqVerifyCodeSuccess(const ReqVerifyCodeResultInfo* verifyCodeResultInfo) = 0;

    /**
    * @brief [en] xxxxxx
    *        [cn] 密码管理：请求验证码结果——失败
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
    * @param verifyCodeResultInfo [type:ReqVerifyCodeResultInfo*]
    * [en]
    * [cn]请求验证码结果信息
    * @see ReqVerifyCodeResultInfo
    *
    * @since:v1.0
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnSendReqVerifyCodeFailed(SDKERR result, const HWM_CHAR* reasonDesc, const ReqVerifyCodeResultInfo* verifyCodeResultInfo) = 0;

    /**
    * @brief [en] xxxxxx
    *        [cn] 请求滑块结果
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
    * @param sliderInfoResult [type:RequestSliderInfoResult*]
    * [en]
    * [cn]请求滑块结果
    * @see RequestSliderInfoResult
    *
    * @since:v1.0
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnRequestSliderResult(SDKERR result, const HWM_CHAR* reasonDesc, const RequestSliderInfoResult* sliderInfoResult) = 0;

    /**
    * @brief [en] xxxxxx
    *        [cn] 校验滑块结果
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
    * @param checkResultInfo [type:CheckSliderResult*]
    * [en]
    * [cn]请求滑块结果
    * @see CheckSliderResult
    *
    * @since:v1.0
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnCheckSliderResult(SDKERR result, const HWM_CHAR* reasonDesc, const CheckSliderResult* checkResultInfo) = 0;

    /**
    * @brief [en] xxxxxx
    *        [cn] 重置密码结果
    *
    * @private
    *
    * @UTCallback
    */
    virtual HWM_VOID OnResetPasswordResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief [en] This interface is used to describe the result of change user info.
    *        [cn] 修改用户信息结果
    * @private
    * @ios:disable
    * @pc:disable
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnChangeUserInfoResult(SDKERR result, const HWM_CHAR* reasonDesc) {};

    /**
    * @brief
    * [en]This interface is used to describe the result of bind wechat message.
    * [cn]微信绑定结果上报
    * @private
    *
    * @UTCallback
    */
    virtual HWM_VOID OnBindAccountByWeChatResult(SDKERR result, const HWM_CHAR* reasonDesc, const BindAccountInfo* bindInfo) = 0;

    /**
    * @brief [en] xxxxxx
    *        [cn] 注册企业结果
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
    * @param corpId [type:HWM_CHAR*]
    * [en]
    * [cn]注册企业ID
    *
    * @since:v1.0
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnRegisterCorpResult(SDKERR result, const HWM_CHAR* reasonDesc, const HWM_CHAR* corpId) = 0;

    /**
    * @brief [en] xxxxxx
    *        [cn] 密码管理：校验验证码结果
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
    * @param checkVerifyCodeResult [type:CheckVerifyCodeResult*]
    * [en]
    * [cn]校验验证码结果信息
    * @see CheckVerifyCodeResult
    *
    * @since:v1.0
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnCheckVerifyCodeResult(SDKERR result, const HWM_CHAR* reasonDesc, CheckVerifyCodeResult* checkVerifyCodeResult) = 0;

    /**
    * @brief [en] xxxxxx
    *        [cn] 用户注册结果
    * @param result [type:SDKERR]
    * [en]
    * [cn]错误码
    * @see SDKERR
    *
    * @param reasonDesc [type:HWM_CHAR*]
    * [en]
    * [cn]错误描述
    *
    * @param token [type:HWM_CHAR*]
    * [en]
    * [cn]token值
    *
    * @since:v1.0
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnUserRegisterResult(SDKERR result, const HWM_CHAR* reasonDesc, const HWM_CHAR* token) = 0;

    /**
    * @brief [en] xxxxxx
    *        [cn] 用户注册前置校验结果
    * @param result [type:SDKERR]
    * [en]
    * [cn]错误码
    * @see SDKERR
    *
    * @param reasonDesc [type:HWM_CHAR*]
    * [en]
    * [cn]错误描述
    *
    * @param preVerifyResult [type:PreVerifyResult*]
    * [en]
    * [cn]前置校验结果
    * @see PreVerifyResult
    *
    * @since:v1.0
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnUserRegisterPreVerifyResult(SDKERR result, const HWM_CHAR* reasonDesc, const PreVerifyResult* preVerifyResult) = 0;

    /**
    * @brief [en] xxxxxx
    *        [cn] 请求注册验证码结果——成功
    * @private
    *
    * @param expire [type:HWM_UINT32]
    * [en]
    * [cn]验证码过期时间
    *
    * @since:v1.0
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnRegisterRequestVerifyCodeSuccess(HWM_UINT32 expire) = 0;

    /**
    * @brief [en] xxxxxx
    *        [cn] 请求注册验证码结果——失败
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
    * @param expire [type:HWM_UINT32]
    * [en]
    * [cn]验证码过期时间
    *
    * @since:v1.0
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnRegisterRequestVerifyCodeFailed(SDKERR result, const HWM_CHAR* reasonDesc, HWM_UINT32 expire) = 0;

    /**
    * @brief [en] xxxxxx
    *        [cn] 修改注册时的密码结果
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
    * @since:v1.0
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnChangeRegisterPwdResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief [en] xxxxxx
    *        [cn] 取消企业结果
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
    * @param expire [type:HWM_UINT32]
    * [en]
    * [cn]过期时间
    *
    * @since:v1.0
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnCancelCorpResult(SDKERR result, const HWM_CHAR* reasonDesc, const HWM_UINT32 expire) = 0;

    /**
    * @brief [en] remove device binding result
    *        [cn] 解除设备绑定结果
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
    * @since:v1.0
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnRemoveDeviceBindingResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]This interface is used to describe the result of sso authorize url result.
    * [cn]获取sso authorize url结果
    * @private
    */
    virtual HWM_VOID OnGetSSOAuthorizeUrlResult(SDKERR result, const HWM_CHAR* reasonDesc, const HWM_CHAR* ssoAuthorizeUrl) {};

    /**
    * @brief [en] get invitation code
    *        [cn] 获取邀请码
    *
    * @param result [type:SDKERR]
    * [en]
    * [cn]错误码
    * @see SDKERR
    *
    * @param reasonDesc [type:InvitationCodeInfo*]
    * [en] invitation code
    * [cn]邀请码
    *
    * @since:v1.0
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnQueryInvitationCodeResult(SDKERR result, const HWM_CHAR* reasonDesc, const InvitationCodeInfo* invitationCode) {};

    /**
    * @brief [en] This interface is used to describe the result of Query Corp Applicant List .
    *        [cn] 获取企业申请人员列表结果
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
    * @param content [type:CorpApplicantList*]
    * [en] Corp Applicant List
    * [cn]企业申请人员列表
    *
    * @since:v1.0
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnQueryCorpApplicantListResult(SDKERR result, const HWM_CHAR* reasonDesc, const CorpApplicantList* content) {};

    /**
    * @brief [en] This interface is used to describe the result of accept corp applicant .
    *        [cn] 企业申请审核同意结果
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
    **/
    virtual HWM_VOID OnAcceptCorpApplicantResult(SDKERR result, const HWM_CHAR* reasonDesc) {};

    /**
    * @brief [en] This interface is used to describe the result of reject corp applicant .
    *        [cn] 企业申请审核拒绝结果
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
    **/
    virtual HWM_VOID OnRejectCorpApplicantResult(SDKERR result, const HWM_CHAR* reasonDesc) {};

    /**
    * @brief [en] This interface is used to describe the result of accept corp all applicant .
    *        [cn] 企业申请审核全部同意结果
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
    **/
    virtual HWM_VOID OnAcceptCorpApplicantAllResult(SDKERR result, const HWM_CHAR* reasonDesc) {};

    /**
    * @brief [en] This interface is used to describe the result of reject corp all applicant .
    *        [cn] 企业申请审核全部拒绝结果
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
    **/
    virtual HWM_VOID OnRejectCorpApplicantAllResult(SDKERR result, const HWM_CHAR* reasonDesc) {};
};


class HWM_API IHwmPrivateLoginNotifyCallback
{
public:
    /**
    * @brief
    * [en]This class is about the notifications of the login status information containing the private information.
    * [cn]登录状态信息通知,包含私有信息
    * @mobile:imLogin
    */
    virtual HWM_VOID OnLoginPrivateStateInfoChanged(const LoginPrivateStateInfo* loginStatusInfo) = 0;

    /**
    * @brief
    * [en]This class is about the downloaded configuration information report.The synchronized method is GetConfigInfo.
    * [cn]下载的配置信息上报 同步方法GetConfigInfo
    * @private
    */
    virtual HWM_VOID OnConfigInfoChanged(const HWM_CHAR*  config) = 0;

    /**
    * @brief
    * [en]This class is about the enterprise configuration change.The synchronized method is GetCorpConfigInfo.
    * [cn]企业配置变更 同步方法GetCorpConfigInfo
    * @private
    */
    virtual HWM_VOID OnCorpConfigInfoChanged(const CorpConfigParam* config) = 0;

    /**
    * @brief
    * [en]This class is about the vmr configuration change.The synchronized method is GetUserVmrConfigInfo.
    * [cn]用户vmr信息变化 同步方法GetUserVmrConfigInfo
    * @private
    */
    virtual HWM_VOID OnUserVmrConfigInfoChanged(const UserVmrConfigInfo* vmrConfigInfo) = 0;

    /**
    * @brief
    * [en]This class is about the Nss info Notification..
    * [cn]会议结束后，推送满意度消息
    * @private
    */
    virtual HWM_VOID OnNssSurveyNotify(const LoginNssSurveyNotifyInfo* loginNssInfo) {};


    /**
    * @brief
    * [en]This class is about the  confnotice info Notification.
    * [cn]usg 推送会议公告信息到客户端
    * @private
    */
    virtual HWM_VOID OnConfNoticeNotify(const LoginConfNoticeNotifyInfo*  conNoticeInfo) {};
	
    /**
    * @brief
    * [en]Notify pair code change.
    * [cn]通知配对码变化
    * @ios:disable
    * @private
    */
    virtual HWM_VOID OnRequestPairCodeNotify(const ProjectionCodeInfo* pairCodeResult) = 0;
    /**
    * @brief
    * [en]This class is about the notifications of join corp auditing
    * [cn] 加入企业申请通知
    * @private
    */
    virtual HWM_VOID OnJoinCorpAuditing() {};

    /**
    * @brief
    * [en]This class is about the notifications of corp invitation setting changed
    * [cn] 企业邀请设置变更通知
    * @private
    */
    virtual HWM_VOID OnInvitationSettingChanged(const HWM_BOOL isCorpEnableInvitation) {};

};

/**
* @brief [en]This class is about login management object.
*        [cn]登录管理对象
* @GetInstance
*        HWM_SDK_NAMESPACE::HwmPrivateNativeSDK::GetPrivateLoginApi()
*/
class IHwmPrivateLogin
{
public:
    /**
    * @brief
    * [en]This class is about the global callbacks of setting login operations class.
    * [cn]设置登录操作类全局回调
    *
    * @param callback [cs_allowNull:N]
    * [en]
    * [cn]登录操作类全局回调
    * @see IHwmPrivateLoginResultCallback
    *
    * @since:v1.0
    */
    virtual SDKERR SetPrivateLoginResultCallback(IHwmPrivateLoginResultCallback* callback) = 0;

    /**
    * @brief
    * [en]This class is about the global callbacks of login notifications class.
    * [cn]设置登录通知类全局回调
    *
    * @param callback [cs_allowNull:N]
    * [en]
    * [cn]登录通知类全局回调
    * @see IHwmPrivateLoginNotifyCallback
    *
    * @since:v1.0
    */
    virtual SDKERR SetPrivateLoginNotifyCallback(IHwmPrivateLoginNotifyCallback* callback) = 0;

    /**
    * @brief
    * [en] This is about set client type.
    * [cn] 设置客户端类型
    * @private
    */
    virtual SDKERR SetClientType(IN const ClientInfo* clientInfo) { return SDKERR_SUCCESS; }

    /**
    * @brief
    * [en]This class is about login.
    * [cn]登录
    * @private
    * 
    * @UTInterface:start
    */
    virtual SDKERR LoginPrivate(LoginInfoPrivate* loginInfo) = 0;
    
    /**
    * @brief
    * [en] This is about login by accunt auth info.
    * [cn] 账号鉴权
    * @private
    * @ios:rename:Login
    *  
    * @UTInterface:start
    */
    virtual SDKERR LoginByAccount(IN const AccountAuthInfo* accountAuthInfo) { return SDKERR_SUCCESS; }

    /**
    * @brief
    * [en] This is about login by MiddleTokenAuthInfo.
    * [cn] 中台token鉴权
    * @private
    * @ios:rename:Login
    *   
    * @UTInterface:start
    */
    virtual SDKERR LoginByMiddleToken(IN const MiddleTokenAuthInfo* middleTokenAuthInfo) { return SDKERR_SUCCESS; }

    /**
    * @brief
    * [en] This is about login by AuthCodeAuthInfo.
    * [cn] 智慧屏鉴权
    * @private
    * @ios:rename:Login
    * 
    * @UTInterface:start
    */
    virtual SDKERR LoginByAuthCode(IN const AuthCodeAuthInfo* authCodeAuthInfo) { return SDKERR_SUCCESS; }
    /**
    * @brief
    * [en] This is about login by RegisterAuthInfo.
    * [cn] 注册鉴权
    * @private
    * @ios:rename:Login
    *  
    * @UTInterface:start
    */
    virtual SDKERR LoginByRegister(IN const RegisterAuthInfo* registerAuthInfo) { return SDKERR_SUCCESS; }
    /**
    * @brief
    * [en] This is about login by UsgTokenAuthInfo.
    * [cn] usg长token鉴权
    * @private
    * @ios:rename:Login
    *  
    * @UTInterface:start
    */
    virtual SDKERR LoginByUsgToken(IN const UsgTokenAuthInfo* usgTokenAuthInfo) { return SDKERR_SUCCESS; }

    /**
    * @brief
    * [en] This is about login by VerifyCodeAuthInfo.
    * [cn] 验证码鉴权
    * @private
    * @ios:rename:Login
    *  
    * @UTInterface:start
    */
    virtual SDKERR LoginByVerifyCode(IN const VerifyCodeAuthInfo* verifyCodeAuthInfo) { return SDKERR_SUCCESS; }
    /**
    * @brief
    * [en] This is about login by WechatAuthInfo.
    * [cn] 微信登录鉴权
    * @private
    * @ios:rename:Login
    *  
    * @UTInterface:start
    */
    virtual SDKERR LoginByWechat(IN const WechatAuthInfo* weChatAuthInfo) { return SDKERR_SUCCESS; }
    /**
    * @brief
    * [en] This is about login by SSOAuthInfo.
    * [cn] sso code鉴权
    * @private
    * @ios:rename:Login
    *  
    * @UTInterface:start
    */
    virtual SDKERR LoginBySSO(IN const SSOAuthInfo* ssoAuthInfo) { return SDKERR_SUCCESS; }
    /**
    * @brief
    * [en] This is about login by AppIdAuthInfo.
    * [cn] AppId鉴权
    * @private
    *  
    * @UTInterface:start
    */
    virtual SDKERR LoginByAppIdPrivate(IN const AppIdAuthInfo* appIdAuthInfo) { return SDKERR_SUCCESS; }

    /**
    * @brief
    * [en] This is about login by NonceAuthInfo.
    * [cn] Nonce鉴权
    * @private
    * 
    * @UTInterface:start
    */
    virtual SDKERR LoginByNonce(IN const NonceAuthInfo* nonceAuthInfo) { return SDKERR_SUCCESS; }
	
    /**
    * @brief
    * [en] This is about active code to active.
    * [cn] 激活码激活
    * @private
    * @ios:disable
    * @pc:disable
    *
    * @UTInterface:start
    */
    virtual SDKERR ActiveByCode(IN const DeviceActiveInfo* codeActiveInfo) { return SDKERR_SUCCESS; }

    /**
    * @brief
    * [en] This is about get QR code
    * [cn] 获取扫码激活二维码
    * @private
    * @ios:disable
    * @pc:disable
    *
    * @UTInterface:start
    */
    virtual SDKERR QueryActiveQrCode(IN const DeviceActiveInfo* codeActiveInfo) { return SDKERR_SUCCESS; }

    /**
    * @brief
    * [en] This is about get QR active result
    * [cn] 获取扫码激活结果
    * @private
    * @ios:disable
    * @pc:disable
    *
    * @UTInterface:start
    */
    virtual SDKERR QueryActiveQrCodeDetail(IN const HWM_CHAR* activeToken) { return SDKERR_SUCCESS; }

    /**
    * @brief
    * [en]This class is about a synchronous method to get login information.
    * [cn]获取登录信息
    * @detail
    * [en]
    * [cn]包括登录状态、用户名称、三方帐号等信息
    * @synchronized
    *
    * @param [cs_allowNull:Y]
    *
    * @return [type:LoginPrivateStateInfo]
    * [en]
    * [cn]登录状态信息
    * @see LoginPrivateStateInfo
    *
    * @since:v1.0
    */
    virtual LoginPrivateStateInfo GetLoginPrivateStateInfo() = 0;


    /**
    * @brief
    * [en]This class is about changing register password.
    * [cn]修改注册时的密码
    *
    * @private
    *
    * @param param[cs_allowNull:N]
    * [en]
    * [cn]修改密码参数
    * @see RegisterPwdParam
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR ChangeRegisterPwd(RegisterPwdParam* param) = 0;

    /**
    * @brief
    * [en]This class is about changing user info.
    * [cn]修改用户信息
    *
    * @private
    * @ios:disable
    * @pc:disable
    * @param param[cs_allowNull:N]
    * [en]
    * [cn]修改用户参数
    * @see UserInfoParam
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR ChangeUserInfo(IN const UserInfoParam* param) { return SDKERR_SUCCESS; }

    /**
    * @brief
    * [en]This class is about resetting the password.
    * [cn]重置密码
    *
    * @private
    *
    * @param param[cs_allowNull:N]
    * [en]
    * [cn]重置密码请求参数
    * @see ResetPasswordParam
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR ResetPassword(IN const ResetPasswordParam* resetPasswordParam) = 0;

    /**
    * @brief
    * [en]
    * [cn]用户注册前置校验
    * @private
    *
    * @param param[cs_allowNull:N]
    * [en]
    * [cn]用户注册前置校验参数
    * @see PreVerifyParam
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR UserRegisterPreVerify(IN const PreVerifyParam* preVerifyParam) = 0;

    /**
    * @brief
    * [en]This class is about user registration.
    * [cn]用户注册
    * @private
    *
    * @param param[cs_allowNull:N]
    * [en]
    * [cn]用户注册参数
    * @see UserRegParam
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR UserRegister(IN const UserRegParam* userRegisterParam) = 0;

    /**
    * @brief
    * [en]This class is about a synchronous method to get login configuration information.
    * [cn]获取登录配置信息
    * @synchronized
    *
    * @param [cs_allowNull:Y]
    *
    * @return [type:HWM_CHAR*]
    * [en]
    * [cn]登录配置信息
    *
    * @since:v1.0
    */
    virtual const HWM_CHAR* GetConfigInfo() = 0;


    /**
    * @brief
    * [en]This class is about Request verification code.
    * [cn]请求验证码
    * @private
    *
    * @param reqVerifyCodeParam[cs_allowNull:N]
    * [en]
    * [cn]请求验证码参数信息
    * @see ReqVerifyCodeParam
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR SendReqVerifyCode(const ReqVerifyCodeParam* reqVerifyCodeParam) = 0;

    /**
    * @brief
    * [en]This class is about Check verification code.
    * [cn]校验验证码
    * @private
    *
    * @param checkVerifyCodeParam[cs_allowNull:N]
    * [en]
    * [cn]校验验证码参数信息
    * @see CheckVerifyCodeParam
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR CheckVerifyCode(const CheckVerifyCodeParam* checkVerifyCodeParam) = 0;

    /**
    * @brief
    * [en]This class is about registering enterprise .
    * [cn]注册企业
    * @private
    *
    * @param regCorpParam[cs_allowNull:N]
    * [en]
    * [cn]注册企业参数
    * @see RegisterCorpParam
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR RegisterCorp(const RegisterCorpParam* regCorpParam) = 0;

    /**
    * @brief
    * [en]This class is about cancelling enterprise.
    * [cn]注销企业
    * @private
    *
    * @param param[cs_allowNull:N]
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR CancelCorp(const HWM_CHAR* param) = 0;


    /**
    * @brief
    * [en]This class is about request verification code used for registration .
    * [cn]注册时请求验证码
    * @private
    *
    * @param registerVerifyInfo[cs_allowNull:N]
    * [en]
    * [cn]注册请求验证码入参
    * @see RegisterVerifyInfo
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR RegisterRequestVerifyCode(const RegisterVerifyInfo* registerVerifyInfo) = 0;

    /**
    * @brief
    * [en]This class is about request slider block.
    * [cn]请求滑块
    * @private
    *
    * @param requestSliderInfo[cs_allowNull:N]
    * [en]
    * [cn]请求滑块入参
    * @see RequestSliderInfo
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR RequestSlider(const RequestSliderInfo* requestSliderInfo) = 0;

    /**
    * @brief
    * [en]This class is about verifying slider block.
    * [cn]校验滑块
    * @private
    *
    * @param checkSliderInfo[cs_allowNull:N]
    * [en]
    * [cn]校验滑块入参
    * @see CheckSliderInfo
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR CheckSlider(const CheckSliderInfo* checkSliderInfo) = 0;

    /**
    * @brief
    * [en]This class is about refreshing middleground token.
    * [cn]刷新中台token
    * @private
    */
    virtual SDKERR RefreshMiddleGroundToken(HWM_VOID) = 0;

    /**
    * @brief
    * [en]This class is about a synchronous method to get new accessToken.
    * [cn]获取新的accessToken
    *
    * @param [cs_allowNull:Y]
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR RefreshAccessToken() = 0;

    /**
    * @brief
    * [en]This interface is used to bind WeChat account.
    * [cn]绑定微信帐号
    *
    * @private
    *
    * @param wechatMessage[cs_allowNull:N]
    * [en]
    * [cn]微信登录绑定手机号邮箱
    * @see BindWechat
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR BindAccountByWeChat(const BindWechatInfo*  wechatMessage) = 0;

    /**
    * @brief
    * [en]This class is about a synchronous method to remove device binding.
    * [cn]解除设备绑定
    *
    * @param [cs_allowNull:Y]
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR RemoveDeviceBinding() = 0;

    /**
    * @brief
    * [en]Get SSO Authorize Url.
    * [cn]获取SSO鉴权url
    *
    * @private
    *
    * @param domain [cs_allowNull:N]
    * @since:v1.0
    */
    virtual SDKERR GetSSOAuthorizeUrl(IN const HWM_CHAR *domain) { return SDKERR_SUCCESS; };

    /**
    * @brief
    * [en]This class is about getting the list of all the vmr info.
    * [cn]获取所有的与会者
    * @synchronized
    * @paramOut
    *
    * @param vmrInfoList [type:HwmList<VmrInfo>*]
    * [en]
    * [cn]vmr信息列表
    * @see GetVmrInfoList
    *
    * @since:v1.0
    */
    virtual HWM_VOID GetVmrInfoList(OUT HwmList<VmrInfo>*  vmrInfoList) = 0;

    /**
    * @brief
    * [en]This class is about query invitation code.
    * [cn]获取邀请码
    *
    * @param channelPartner [cs_allowNull:N]
    *
    * @return [type:SDKERR]
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR QueryInvitationCode(IN const HWM_CHAR* channelPartner) = 0;

  
    /**
    * @brief
    * [en]This class is about a synchronous method to get conf notice information.
    * [cn]获取会议公告新鲜
    * @detail
    * [en]
    * [cn]是否已读，uuid等
    * @synchronized
    *
    * @param [cs_allowNull:Y]
    *
    * @return [type:LoginConfNoticeNotifyInfo]
    * [en]
    * [cn]会议公告信息
    * @see LoginConfNoticeNotifyInfo
    *
    * @since:v1.0
    */
    virtual LoginConfNoticeNotifyInfo GetLatestConfNoticeInfo() = 0;


    /**
    * @brief
    * [en]Get conf notice.
    * [cn]获取conf notice信息
    *
    * @param NULL [cs_allowNull:N]
    *
    * @return [type:SDKERR]
    * @since:v1.0
    */
    virtual SDKERR SetLatestConfNoticeChecked() { return SDKERR_SUCCESS; };


    /**
    * @brief
    * [en]
    * [cn]上报呈现满意度调查
    *
    * @param NssSurveyParam
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR SubmitShowNssSurvey(IN const LoginNssSurveyParam*  nssShowPara) { return SDKERR_SUCCESS; };


    /**
    * @brief
    * [en]
    * [cn]上报满意调查结果
    *
    * @param NssSurveyParam
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR SubmitNssSurveyResult(IN const LoginNssSurveyParam* nssResultPara) { return SDKERR_SUCCESS; };

    /**
    * @brief
    * [en] This class is about query corp applicant list
    * [cn] 获取企业申请人员列表
    *
    * @param param [cs_allowNull:N]
    *
    * @return [type:SDKERR]
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR QueryCorpApplicantList(IN const QueryCorpApplicantListParam* param) = 0;

    /**
    * @brief
    * [en] This class is about accept corp applicant
    * [cn] 企业申请审核同意
    *
    * @param userid [cs_allowNull:N]
    *
    * @return [type:SDKERR]
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR AcceptCorpApplicant(IN const HWM_CHAR* userid) = 0;

    /**
    * @brief
    * [en] This class is about reject corp applicant
    * [cn] 企业申请审核拒绝
    *
    * @param userid [cs_allowNull:N]
    *
    * @return [type:SDKERR]
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR RejectCorpApplicant(IN const HWM_CHAR* userid) = 0;

    /**
    * @brief
    * [en] This class is about accept all corp applicant
    * [cn] 企业申请审核全部同意
    *
    * @param param [cs_allowNull:N]
    *
    * @return [type:SDKERR]
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR AcceptCorpApplicantAll() = 0;

    /**
    * @brief
    * [en] This class is about reject corp all applicant
    * [cn] 企业申请审核全部拒绝
    *
    * @param param [cs_allowNull:N]
    *
    * @return [type:SDKERR]
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR RejectCorpApplicantAll() = 0;

};

END_HWM_SDK_NAMESPACE
#endif /* __HWM_PRIVATE_LOGIN_SERVICE_H__ */


