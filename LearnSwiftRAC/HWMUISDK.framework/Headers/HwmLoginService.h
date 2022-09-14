/**
* @file HwmLoginService.h
*
* Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
*
* @brief Xxxxxx.
*/


#ifndef __HWM_LOGIN_SERVICE_H__
#define __HWM_LOGIN_SERVICE_H__

#import "HwmLoginServiceDef.h"
#import "HwmGlobalErrorCodeDef.h"

BEGIN_HWM_SDK_NAMESPACE

/**
* @brief [en]xxxxxxxxx
*        [cn]登录操作类结果回调
*/
class HWM_API IHwmLoginResultCallback
{
public:

    /**
    * @brief [en] This interface is used to describe the result of login.
    *        [cn] 登录结果
    *
    * @param result [type:SDKERR]
    * [en]
    * [cn]错误码
    * @see SDKERR
    *
    * @param reasonDesc [type:HWM_CHAR*]
    * [cn]错误描述
    *
    * @param loginResultInfo [type:LoginResultInfo*]
    * [en]
    * [cn]登录结果信息
    * @see LoginResultInfo
    *
    * @since:v1.0
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnLoginByAppIdResult(SDKERR result, const HWM_CHAR* reasonDesc, const LoginByAppIdResultInfo* loginResultInfo) = 0;

    /**
    * @brief [en] xxxxxx
    *        [cn] 登出结果
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
    virtual HWM_VOID OnLogoutResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief [en] xxxxxx
    *        [cn] 查询Nonce结果
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
    * @param nonce [type:HWM_CHAR*]
    * [en]
    * [cn]nonce值
    *
    * @param url [type:HWM_CHAR*]
    * [en]
    * [cn]url值
    *
    * @since:v1.0
    *
    * @UTCallback
    **/
    virtual HWM_VOID OnQueryNonceResult(SDKERR result, const HWM_CHAR* reasonDesc, const HWM_CHAR* nonce, const HWM_CHAR* url) = 0;

    /**
    * @brief
    * [cn]查询用户信息结果
    * @ios:disable
    *
    * @UTCallback
    */
    virtual HWM_VOID OnQueryUserInfoResult(SDKERR result, const HWM_CHAR* reasonDesc, const QueryUserResultInfo* queryUserInfoResult) = 0;

    /**
    * @brief
    * [en]This interface is used to describe the result of cancel download upgrade file.
    * [cn]取消下载升级文件结果
    * @ios:disable
    *
    * @UTCallback
    */
    virtual HWM_VOID OnCancelDownloadUpgradeResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]This interface is used to describe the result of download upgrade file.
    * [cn]下载升级文件结果
    * @ios:disable
    *
    * @UTCallback
    */
    virtual HWM_VOID OnDownloadUpgradeFileResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]This interface is used to describe the result of firewall detect.
    * [cn]防火墙探测结果
    * @mobile:disable
    *
    * @UTCallback
    */
    virtual HWM_VOID OnFirewallDetectResult(SDKERR result, const HWM_CHAR* reasonDesc, HWM_UINT32 sn) = 0;

    /**
    * @brief
    * [en]This interface is used to describe the result of query version info.
    * [cn]查询版本信息结果
    *
    * @UTCallback
    */
    virtual HWM_VOID OnQueryVersionInfoResult(SDKERR result, const HWM_CHAR* reasonDesc, const QueryVersionInfoResult* queryResultInfo) = 0;

    /**
    * @brief
    * [en]This interface is used to describe the result of request upload info.
    * [cn]请求上传文件信息结果
    * @ios:disable
    *
    * @UTCallback
    */
    virtual HWM_VOID OnRequestUploadInfoResult(SDKERR result, const HWM_CHAR* reasonDesc, const RequestUploadInfoResult* requestResultInfo) = 0;

    /**
    * @brief
    * [en]This interface is used to describe the result of get local device info.
    * [cn]获取本地设备信息结果
    * @mobile:disable
    */
    virtual HWM_VOID OnGetDeviceInfoResult(SDKERR result, const HWM_CHAR* reasonDesc, const DeviceInfo* deviceInfo) = 0;

    /**
    * @brief
    * [en]This interface is used to describe the result of compress and upload file.
    * [cn]压缩并上传文件结果
    * @mobile:disable
    *
    * @UTCallback
    */
    virtual HWM_VOID OnCompressAndUploadFileResult(SDKERR result, const HWM_CHAR* reasonDesc) = 0;
};

/**
* @brief [en]xxxxxxxxx
*        [cn]登录通知
*/
class HWM_API IHwmLoginNotifyCallback
{
public:
    /**
    * @brief
    * [en]This class is about the login status information notification.The synchronized method is GetLoginStateInfo.
    * [cn]登录信息变更通知
    * @detail
    * [en]
    * [cn]获取登录状态信息
    *
    * @param loginStateInfo [type:LoginStateInfo*]
    * [en]
    * [cn]登录状态信息
    *
    * @since:v1.0
    *
    * @UTInterface:track
    */
    virtual HWM_VOID OnLoginStateInfoChanged(const LoginStateInfo* loginStateInfo) = 0;

    /**
    * @brief [en] xxxxxx
    *        [cn] 被踢通知
    * @detail
    * [en]
    * [cn]被踢出登录、帐号被停用、帐号过期等场景下会上报该通知
    *
    * @param reason [type:KickoutReason]
    * [en]
    * [cn]被踢原因
    * @see KickoutReason
    *
    * @param reasonDesc [type:HWM_CHAR*]
    * [en]
    * [cn]错误描述
    *
    * @since:v1.0
    **/
    virtual HWM_VOID OnKickoutNotify(KickoutReason reason, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]xxxx
    * [cn]客户企业信息变更通知
    * @detail
    * [en]
    * [cn]用户所在的企业信息有变更的场景下上报该通知，比如帐号被从企业中移除、加入新的企业组织等
    *
    * @param result [type:SDKERR]
    * [en]
    * [cn]错误码
    * @see SDKERR
    *
    * @param userCorpInfoNotifyType [type:UserCorpInfoNotifyType]
    * [en]
    * [cn]客户企业信息变更类型
    * @see UserCorpInfoNotifyType
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnUserCorpInfoNotify(SDKERR result, UserCorpInfoNotifyType userCorpInfoNotifyType) = 0;

    /**
    * @brief
    * [en]This is about login error notify.
    * [cn]登录无效通知
    * @detail
    * [en]
    * [cn]在密码被修改或者被移除当前企业等场景下收到这个通知
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
    */
    virtual HWM_VOID OnLoginInvalidNotify(SDKERR result, const HWM_CHAR* reasonDesc) = 0;

    /**
    * @brief
    * [en]This class is about a synchronous method to get support waiting room change.
    * [cn]是否支持等候室的变更通知
    * @detail
    * [en]
    * [cn]是否支持等候室，可以通过修改企业配置进行变更
    * @synchronized
    *
    * @param supportWaitingRoom [type:HWM_BOOL]
    * [en]
    * [cn]是否支持等候室
    *
    * @since:v1.0
    */
    virtual HWM_VOID OnSupportWaitingRoomChanged(HWM_BOOL supportWaitingRoom) = 0;

    /**
    * @brief
    * [en]This class is about the upload file trans progress notify.
    * [cn]上传文件进度通知
    * @mobile:disable
    */
    virtual HWM_VOID OnUploadFileTransProgressNotify(HWM_ULONG handle, HWM_UINT64 ulTotal, HWM_UINT64 ulNow) = 0;

    /**
    * @brief
    * [en]This class is about the download upgrade file progress notify.
    * [cn]下载升级文件进度通知
    * @ios:disable
    */
    virtual HWM_VOID OnDownloadUpgradeFileProgressNotify(SDKERR result, const DownloadProgressInfo* progressInfo) = 0;

    /**
    * @brief
    * [en]This class is about the stun notify.
    * [cn]stun消息通知
    * @mobile:disable
    */
    virtual HWM_VOID OnStunNotify(SDKERR result, HWM_UINT32 type) = 0;
};

/**
* @brief [en]This class is about login management object.
*        [cn]登录管理对象
* @detail
* [en]This class is about login management object.
* [cn]获取登录管理对象的方法NativeSDK.getLoginApi()
*
* @GetInstance
*        HWM_SDK_NAMESPACE::HwmNativeSDK::GetLoginApi()
*/
class IHwmLogin
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
    * @see IHwmLoginResultCallback
    *
    * @since:v1.0
    */
    virtual SDKERR SetLoginResultCallback(IHwmLoginResultCallback* callback) = 0;

    /**
    * @brief
    * [en]This class is about the global callbacks of login notifications class.
    * [cn]设置登录通知类全局回调
    *
    * @param callback [cs_allowNull:N]
    * [en]
    * [cn]登录通知类全局回调
    * @see IHwmLoginNotifyCallback
    *
    * @since:v1.0
    */
    virtual SDKERR SetLoginNotifyCallback(IHwmLoginNotifyCallback* callback) = 0;


    /**
    * @brief
    * [en]This class is about login.
    * [cn]AppId登录
    * @detail
    * [en]
    * [cn]必须在SDK初始化完成之后才能进行登录
    *
    * @param appIdAuthInfo [cs_allowNull:N]
    * [en]
    * [cn]AppId鉴权信息
    * @see AppIdAuthInfo
    * @ios:rename:Login
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR LoginByAppId(AppIdAuthInfo* appIdAuthInfo) = 0;

    /**
    * @brief
    * [en]This class is about logout.
    * [cn]注销
    * @mobile:imLogout
    *
    * @param [cs_allowNull:Y]
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR Logout(HWM_VOID) = 0;

    /**
    * @brief
    * [en]This class is about querying personal Portal login authentication credentials, which is used for application to access to Personal Portal (PC link to personal Portal page).
    * [cn]查询个人Portal登录鉴权凭证，用于应用程序访问个人portal(PC链接跳转至个人Portal页面)
    *
    * @param [cs_allowNull:Y]
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR QueryNonce(HWM_VOID) = 0;

    /**
    * @brief
    * [en]This class is about switching to foreground.
    * [cn]切前台
    * @detail
    * [en]
    * [cn]由于不同的操作系统对应用处于后台的限制不同，需要应用在切回前台运行的时候通知SDK来做对应的状态刷新，可有效避免无码流等异常情况发生
    *
    * @param [cs_allowNull:Y]
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR SwitchToForeground(HWM_VOID) = 0;

    /**
    * @brief
    * [en]This class is about switching to background.
    * [cn]切后台
    *
    * @param [cs_allowNull:Y]
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR SwitchToBackground(HWM_VOID) = 0;

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
    * @return [type:LoginStateInfo]
    * [en]
    * [cn]登录状态信息
    * @see LoginStateInfo
    *
    * @since:v1.0
    */
    virtual LoginStateInfo GetLoginStateInfo() = 0;

    /**
    * @brief
    * [en]This class is about a synchronous method to get enterprise configuration information.
    * [cn]获取企业配置信息
    * @synchronized
    *
    * @param [cs_allowNull:Y]
    *
    * @return [type:CorpConfigParam]
    * [en]
    * [cn]企业配置参数
    * @see CorpConfigParam
    *
    * @since:v1.0
    */
    virtual CorpConfigParam GetCorpConfigInfo() = 0;



    /**
    * @brief
    * [en]This class is about querying user information.
    * [cn]查询用户信息
    * @ios:disable
    *
    * @param userInfoParam[cs_allowNull:N]
    * [en]
    * [cn]查询用户信息参数
    * @see QueryUserInfoParam
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR QueryUserInfo(const QueryUserInfoParam* userInfoParam) = 0;


    /**
    * @brief
    * [en]This class is about a synchronous method to get enterprise configuration support waiting room information.
    * [cn]获取企业配置是否支持等候室信息
    * @synchronized
    *
    * @param isSupportTerminal [allowNull:N]
    * [en]
    * [cn]是否支持终端
    *
    * @return [type:HWM_BOOL]
    * [en]
    * [cn]是否支持等候室
    *
    * @since:v1.0
    */
    virtual HWM_BOOL GetSupportWaitingRoom(HWM_BOOL isSupportTerminal) = 0;

    /**
    * @brief
    * [en]This interface is used to cancel download upgrade file.
    * [cn]取消下载升级文件
    * @ios:disable
    *
    * @param [cs_allowNull:Y]
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR CancelDownloadUpgrade() = 0;

    /**
    * @brief
    * [en]This interface is used to download upgrade file.
    * [cn]下载升级文件
    * @ios:disable
    *
    * @param upgradeInfo[cs_allowNull:N]
    * [en]
    * [cn]下载版本请求信息
    * @see DownloadUpgradeInfo
    *
    * @return [type:HWM_BOOL]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR DownloadUpgradeFile(const DownloadUpgradeInfo* upgradeInfo) = 0;

    /**
    * @brief
    * [en]This interface is used for network firewall detection. User can judge whether STG traversal is needed.
    * [cn]组网防火墙探测,用户以此判断是否需要使用STG穿越
    * @mobile:disable
    *
    * @param sn[cs_allowNull:N]
    * [en]
    * [cn]
    * @param detectServer[cs_allowNull:N]
    * [en]
    * [cn]探测服务器信息
    * @see LoginDetectServer
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR FirewallDetect(HWM_UINT32 sn, const LoginDetectServer* detectServer) = 0;

    /**
    * @brief
    * [en]This interface is used to query version info.
    * [cn]查询版本信息
    *
    * @param versionInfo[cs_allowNull:N]
    * [en]
    * [cn]查询版本请求信息
    * @see VersionInfo
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR QueryVersionInfo(const VersionInfo* versionInfo) = 0;

    /**
    * @brief
    * [en]This interface is used to request upload info.
    * [cn]请求上传文件信息
    * @ios:disable
    *
    * @param uploadInfo[cs_allowNull:N]
    * [en]
    * [cn]上传文件请求信息
    * @see UploadInfo
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    *
    * @UTInterface:start
    */
    virtual SDKERR RequestUploadInfo(const UploadInfo* uploadInfo) = 0;

    /**
    * @brief
    * [en]This interface is used to get local device info.
    * [cn]获取本地设备信息
    * @mobile:disable
    */
    virtual SDKERR GetDeviceInfo() = 0;

    /**
    * @brief
    * [en]This interface is used to maxhub request pair code.
    * [cn]maxhub获取配对码
    * @mobile:disable
    */
    virtual SDKERR RequestPairCode(HWM_UINT32 codeMode) = 0;

    /**
    * @brief
    * [en]This interface is used to close pair.
    * [cn]关闭配对
    * @mobile:disable
    */
    virtual SDKERR ClosePair() = 0;

    /**
    * @brief
    * [en]This interface is used to handler access token.
    * [cn]处理accessToken
    * @mobile:disable
    */
    virtual SDKERR HandlerAccessToken() = 0;

    /**
    * @brief
    * [en]This interface is used to set has im in conf.
    * [cn]设置会议是否有im
    * @mobile:disable
    */
    virtual SDKERR SetHasImInConf(HWM_BOOL hasImInConf) = 0;

    /**
    * @brief
    * [en]This interface is used to compress and upload file.
    * [cn]压缩并上传文件
    * @mobile:disable
    *
    * @UTInterface:start
    */
    virtual SDKERR CompressAndUploadFile(const CompressAndUploadInfo* uploadInfo) = 0;

    /**
    * @brief
    * [en]This interface is used to clear cache.
    * [cn]处理accessToken
    */
    virtual HWM_VOID ClearLoginCache() = 0;
};

END_HWM_SDK_NAMESPACE
#endif /* __HWM_LOGIN_SERVICE_H__ */


