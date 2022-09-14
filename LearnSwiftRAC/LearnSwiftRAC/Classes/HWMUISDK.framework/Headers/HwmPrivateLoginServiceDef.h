/**
 * @file HwmLoginServiceDef.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */


#ifndef __HWM_PRIVATE_LOGIN_SERVICE_DEF_H__
#define __HWM_PRIVATE_LOGIN_SERVICE_DEF_H__

#import "HwmSdkCommonDef.h"
#import "HwmLoginServiceDef.h"

BEGIN_HWM_SDK_NAMESPACE


/**
* [en]This enumeration is used to describe the type of authentication.
* [cn]鉴权类型
* @private
*/
typedef enum tagAuthTypePrivate
{
    AUTH_ACCOUNT_PRIVATE,                                   /**< [en]Indicates account+password authentication.
                                                                 [cn]帐号鉴权
                                                                 [ios:rename:Account] */
    AUTH_MIDDLE_TOKEN_PRIVATE,                              /**< [en]Indicates the ticket authentication.
                                                                 [cn]中台toke登录usg
                                                                 [ios:rename:MiddleToken] */
    AUTH_APPID_PRIVATE,                                     /**< [en]Indicates the app ID authentication.
                                                                 [cn]应用ID鉴权
                                                                 [ios:rename:APPID] */
    AUTH_AUTHCODE_PRIVATE,                                  /**< [en]Indicates the android smart auth type.
                                                                 [cn]安卓智慧屏
                                                                 [ios:rename:AuthCode] */
    AUTH_REGISTER_TOKEN_PRIVATE,                            /**< [en]Indicates the register token auth type.
                                                                 [cn]注册时鉴权
                                                                 [ios:rename:RegisterToken] */
    AUTH_VERIFYCODE_PRIVATE,                                /**< [en]Indicates the verifycode auth type.
                                                                 [cn]验证码登录
                                                                 [ios:rename:VerifyCode] */
    AUTH_WECHAT_PRIVATE,                                    /**< [en]Indicates the wechat auth type.
                                                                 [cn]微信登录验证
                                                                 [ios:rename:WeChat] */
    AUTH_USG_TOKEN_PRIVATE,                                 /**< [en]Indicates the refresh token auth type.
                                                                 [cn]usg长token登录usg
                                                                 [ios:rename:USGToken] */
    AUTH_SSO_PRIVATE,                                       /**< [en]Indicates the sso auth type.
                                                                 [cn]sso登录验证*/
    AUTH_NONCE_PRIVATE,                                     /**< [en]Indicates the nonce auth type.
                                                                 [cn]nonce登录验证*/
    AUTH_TYPE_BUTT_PRIVATE                                  /**< [ios:rename:Butt] */
    
}AuthTypePrivate;

/**
* [en]This enumeration is used to describe user status.
* [cn]用户状态
* @private
*/
typedef enum tagUserStatus
{
    USER_STATUS_ENABLE,                                     /**< [en]Indicates user status enable.
                                                                 [cn]用户状态-启用
                                                                 [ios:rename:userEnable] */
    USER_STATUS_DISABLE,                                    /**< [en]Indicates user status disable..
                                                                 [cn]用户状态-禁用
                                                                 [ios:rename:userDisable] */
}UserStatus;

/**
* [en]This structure is used to describe login parameters.
* [cn]登录信息参数
* @private
*/
typedef struct tagLoginInfoPrivate
{
    AuthTypePrivate authType;                                /**< [en]Indicates the type of authentication.
                                                                  [cn]鉴权类型 */
    ClientType clientType;                                   /**< [en]client type.
                                                                  [cn]客户端类型 */
    HWM_BOOL isWelink;                                       /**< [en]is welink.
                                                                  [cn]是否为welink */
    AccountAuthInfo accountAuthInfo;                         /**< [en]Indicates xxxx.
                                                                  [cn]帐号鉴权信息，鉴权类型为 HWM_AUTH_ACCOUNT 时填写 */
    AppIdAuthInfo appIdAuthInfo;                             /**< [en]Indicates xxxx.
                                                                  [cn]APP ID 鉴权信息，鉴权类型为 HWM_AUTH_APPID 时填写 */
    MiddleTokenAuthInfo middleTokenAuthInfo;                 /**< [en]Indicates xxxx.
                                                                  [cn]中台token信息，鉴权类型为 HWM_AUTH_MIDDLE_TOKEN 时填写 */
    AuthCodeAuthInfo authCodeAuthInfo;                       /**< [en]Indicates auth code.
                                                                  [cn]智慧屏鉴权信息，鉴权类型为 HWM_AUTH_AUTHCODE 时填写 */
    RegisterAuthInfo registerAuthInfo;                       /**< [en]Indicates register auth
                                                                  [cn]注册鉴权信息，鉴权类型为 HWM_AUTH_REGISTER_TOKEN 时填写 */
    UsgTokenAuthInfo usgTokenAuthInfo;                       /**< [en]Indicates usg token auth
                                                                  [cn]usg长token信息，鉴权类型为 HWM_AUTH_USG_TOKEN 时填写 */
    VerifyCodeAuthInfo verifyCodeAuthInfo;                   /**< [en]Indicates verify code auth
                                                                  [cn]验证码信息，鉴权类型为 HWM_AUTH_VERIFYCODE 时填写 */
    WechatAuthInfo weChatAuthInfo;                           /**< [en]Indicates wechat auth
                                                                  [cn]微信登录，鉴权类型为AUTH_WECHAT 时填写 */
    SSOAuthInfo    ssoAuthInfo;                              /**< [en]Indicates sso auth
                                                                  [cn]sso登录，鉴权类型为AUTH_SSO 时填写 */
}LoginInfoPrivate;

/**
* [en]This structure is used to describe login result.
* [cn]登录结果信息(私有)
* @private
*/
typedef struct tagLoginPrivateResultInfo
{
    HWM_CHAR uuid[HWM_MAX_DEVICE_UUID_LEN];              /**< [en]Indicates UUID.
                                                             [cn]UUID, (由系统分配的真实的唯一用户标识) */
    HWM_UINT32 ucStatus;                                 /**< [en]Indicates uc status.
                                                         [cn]智慧屏登录状态 */
    HWM_INT32 isBindMobile;                             /**< [en]Indicates xxxx.
                                                        [cn]智慧屏是否绑定手机号码 */
    HWM_INT32 bindType;                                 /**< [en]Indicates xxxx.
                                                        [cn]绑定类型 */
    HWM_CHAR freeAccount[HWM_MAX_ACCOUNT_LEN];          /**< [en]Indicates free account.
                                                        [cn]智慧屏免费帐号[cs_sensitive:account] */
    HWM_CHAR freePassword[HWM_MAX_PASSWORD_LEN];        /**< [cs_sensitive:hide][en]Indicates free password.
                                                        [cn]智慧屏免费密码[cs_sensitive:hide] */
    HWM_BOOL isFreeUser;                                /**< [en]Indicates xxxx.
                                                        [cn]是否免费用户 */
    HWM_CHAR paidAccount[HWM_MAX_ACCOUNT_LEN];          /**< [en]Indicates free account.
                                                        [cn]智慧屏付费帐号 */
    HWM_CHAR paidPassword[HWM_MAX_PASSWORD_LEN];        /**< [cs_sensitive:hide][en]Indicates free password.
                                                        [cn]智慧屏付费密码 */
    HWM_BOOL isGrayUser;                                /**< [en]Indicates gray user.
                                                        [cn]是否灰度帐号 */
    HWM_CHAR bindToken[HWM_MAX_TOKEN_LEN];              /**< [en]Indicates bind token.
                                                        [cn]绑定token值[cs_sensitive:hide] */
    HWM_CHAR usgToken[HWM_MAX_TOKEN_LEN];               /**< [en]Indicates usg token.
                                                        [cn]登录token值[cs_sensitive:hide] */
    HWM_CHAR refreshToken[HWM_MAX_TOKEN_LEN];           /**< [en]Indicates refresh token.
                                                        [cn]refresh token[cs_sensitive:hide] */
    HWM_CHAR siteDomain[HWM_MAX_DOMAIN_LENGTH];         /**< [en]Indicates refresh token.
                                                        [cn]refresh token[cs_sensitive:hide] */
    AuthTypePrivate authType;                           /**< [en]Indicates the type of authentication.
                                                        [cn]本次登录鉴权类型 */
    HWM_BOOL isFirstLogin;                              /**< [en]Indicates xxx.
                                                        [cn]是否账户第一次登录 */
    HWM_CHAR thirdAccount[HWM_MAX_ACCOUNT_LEN];         /**< [en]third account.
                                                        [cs_sensitive:name][cn]第三方帐号  */
    HWM_BOOL firstSuccessLogin;                          /**< [en]Indicates firstr success login.
                                                        [cn]是否为第1次登录(周期体验会议)*/
}LoginPrivateResultInfo;



/**
* [en]This structure is used to describe xxx
* [cn]用户状态信息
**/
typedef struct tagLoginPrivateStateInfo
{

    LoginStateInfo loginStateInfo;                /**< [extends][en]Indicates login state info.
                                                        [cn]用户登录状态 */
    HWM_BOOL isUsgEnable;                         /**< [en]Indicates xxxx.
                                                        [cn]usg是否登录上，0未登录，1已经登录 */
    HWM_BOOL isConfImEnable;                      /**< [en]Indicates xxxx.
                                                        [cn]会中IM是否开启 */
    HWM_CHAR refreshToken[HWM_MAX_TOKEN_LEN];     /**< [en]Indicates refresh token.
                                                        [cn]刷新token字符串[cs_sensitive:hide] */
    HWM_BOOL isFreeUser;                          /**< [en]Indicates xxxx.
                                                        [cn]是否免费用户 */
    HWM_CHAR confServerAddr[HWM_MAX_URL_LEN];     /**< [en]Indicates xxxx.
                                                        [cn]会议服务器地址[cs_sensitive:ip] */
    HWM_CHAR pushServerUrl[HWM_MAX_URL_LEN];      /**< [en]Indicates xxxx.
                                                        [cn]push服务推送地址[cs_sensitive:ip] */
    HWM_CHAR ctdServerUrl[HWM_MAX_URL_LEN];       /**< [en]Indicates xxxx.
                                                        [cn]CTD服务器地址[cs_sensitive:ip] */
    HWM_UINT32 ctdPort;                           /**< [en]Indicates xxxx.
                                                        [cn]CTD服务器端口 */
    HWM_INT32 loginIntent;                        /**< [en]Indicates xxxx.
                                                        [cn]用于代表当前是否要登录 */
    HWM_BOOL isBindPhone;                         /**< [en]Indicates xxxx.
                                                        [cn]智慧屏是否绑定手机号 */
    HWM_CHAR privacyVersion[HWM_MAX_PRIVACY_VERSION_LEN]; /**< [en]Indicates xxxx.
                                                               [cn]隐私协议版本号 */
    HWM_CHAR maaUri[HWM_MAX_URL_LEN];                     /**< [en]Indicates xxxx.
                                                               [cn]maa地址信息[cs_sensitive:address] */
    HWM_BOOL isGrayUser;                                  /**< [en]Indicates xxxx.
                                                               [cn]是否灰度企业 */
    LoginCorpType corpType;                               /**< [en]Indicates xxxx.
                                                               [cn]企业类型 */
    HWM_CHAR weChatName[HWM_MAX_ACCOUNT_LEN];             /**< [en]Indicates the wechat username.
                                                               [cn]微信名[cs_sensitive:name] */
    UserStatus userStatus;                                /**< [en]Indicates the user status.
                                                                [cn]用户状态 */  
    HWM_BOOL firstSuccessLogin;                                /**< [en]Indicates xxx.
                                                               [cn]是否为第1次登录(周期体验会议) */
}LoginPrivateStateInfo;

/**
* [en]This structure is used to describe modify password param.
* [cn]修改密码参数
*/
typedef struct tagRegisterPwdParam
{
    HWM_CHAR loginAccount[HWM_MAX_ACCOUNT_LEN];         /**< [en]Indicates the login account.
                                                        [cn]登录帐号
                                                        [cs_allowNull:N][cs_length:1-128][cs_sensitive:account] */
    HWM_CHAR oldLoginPwd[HWM_MAX_PASSWORD_LEN];         /**< [en]Indicates the original password.
                                                        [cn]原密码
                                                        [cs_allowNull:N][cs_length:1-128][cs_sensitive:hide] */
    HWM_CHAR newLoginPwd[HWM_MAX_PASSWORD_LEN];         /**< [en]Indicates the new password.
                                                        [cn]新密码
                                                        [cs_allowNull:N][cs_length:1-128][cs_sensitive:hide] */
    HWM_CHAR userNumber[HWM_MAX_PHONE_LEN];             /**< [en]Indicates the number.
                                                        [cn]号码
                                                        [cs_allowNull:Y][cs_length:1-32][cs_sensitive:phone] */
}RegisterPwdParam;

/**
* [en]This structure is used to describe the xxxx
* [cn]重置密码请求参数
**/
typedef struct tagResetPasswordParam
{
    HWM_CHAR userName[HWM_MAX_ACCOUNT_LEN];             /**< [en]Indicates account.
                                                        [cn]帐号
                                                        [cs_allowNull:N][cs_length:1-128][cs_sensitive:name] */
    HWM_CHAR newPassword[HWM_MAX_PASSWORD_LEN];         /**< [en]Indicates new password.
                                                        [cn]新密码
                                                        [cs_allowNull:N][cs_length:1-128][cs_sensitive:hide] */
    PasswordType passWordType;                          /**< [en]Indicates the password type.
                                                        [cn]密码类型
                                                        [cs_allowNull:N] */
    HWM_CHAR authToken[HWM_MAX_TOKEN_LEN];              /**< [en]Indicates the token.
                                                        [cn]token
                                                        [cs_allowNull:N][cs_length:1-128][cs_sensitive:hide] */
}ResetPasswordParam;

/**
* [en]This structure is used to describe the xxxx
* [cn]用户注册前置校验参数
**/
typedef struct tagPreVerifyParam
{
    HWM_CHAR account[HWM_MAX_ACCOUNT_LEN];              /**< [en]Indicates account.
                                                        [cn]用户身份信息（手机号码或邮箱帐号或用户真实帐号）
                                                        [cs_allowNull:N][cs_length:1-128]][cs_sensitive:account]  */
    HWM_CHAR countryCode[HWM_MAX_COUNTRY_CODE_LEN];     /**< [en]Indicates xxx.
                                                        [cn]国家码
                                                        [cs_allowNull:N][cs_length:1-64] */
    LoginClientType clientType;                         /**< [en]Indicates xxx.
                                                        [cn]登录客户端类型
                                                        [cs_allowNull:N] */
    HWM_CHAR verifyCode[HWM_MAX_VERIFY_CODE_LEN];       /**< [en]Indicates verify code.
                                                        [cn]验证码
                                                        [cs_allowNull:N][cs_length:1-32]][cs_sensitive:hide] */
}PreVerifyParam;

/**
* [en]This structure is used to describe the xxxx
* [cn]用户注册参数
**/
typedef struct tagUserRegParam
{
    HWM_CHAR account[HWM_MAX_ACCOUNT_LEN];              /**< [en]Indicates account.
                                                        [cn]用户身份信息（手机号码或邮箱帐号或用户真实帐号）
                                                        [cs_allowNull:N][cs_length:1-128][cs_sensitive:account]  */
    HWM_CHAR countryCode[HWM_MAX_COUNTRY_CODE_LEN];     /**< [en]Indicates country code.
                                                        [cn]国家码
                                                        [cs_allowNull:N][cs_length:1-64] */
    HWM_CHAR name[HWM_MAX_DISPLAY_NAME_LEN];                 /**< [en]Indicates name.
                                                             [cn]用户名
                                                             [cs_allowNull:N][cs_length:1-256][cs_sensitive:name]  */
    HWM_CHAR password[HWM_MAX_PASSWORD_LEN];            /**< [en]Indicates new password.
                                                        [cn]密码
                                                        [cs_allowNull:N][cs_length:1-128][cs_sensitive:hide]  */
    HWM_CHAR country[HWM_MAX_COUNTRY_CODE_LEN];         /**< [en]Indicates country.
                                                        [cn]国家
                                                        [cs_allowNull:Y][cs_length:0-64] */
    HWM_CHAR inviteId[HWM_MAX_INVITE_ID_LEN];           /**< [en]Indicates invite id.
                                                        [cn]企业邀请Id
                                                        [cs_allowNull:Y][cs_length:0-64][cs_sensitive:hide] */
    HWM_CHAR inviteCode[HWM_MAX_INVITE_CODE_LEN];       /**< [en]Indicates invite code.
                                                        [cn]企业邀请码
                                                        [cs_allowNull:Y][cs_length:0-256][cs_sensitive:hide] */
    HWM_CHAR language[HWM_MAX_USER_LANGUAGE_LEN];       /**< [en]Indicates language.S
                                                        [cn]语言 中文：zh-CN, 英文：en-US
                                                        [cs_allowNull:N][cs_length:1-64] */
    HWM_CHAR channelPartner[HWM_MAX_CHANNEL_PARTNER_LEN]; /**< [en]Indicates channel partner.
                                                               [cn]渠道商
                                                               [cs_allowNull:Y][cs_length:1-64] */
}UserRegParam;

/**
* [en]This structure is used to describe verifycode param
* [cn]请求验证码参数信息
**/
typedef struct tagReqVerifyCodeParam
{
    HWM_CHAR account[HWM_MAX_ACCOUNT_LEN];              /**< [en]Indicates has record permission.
                                                        [cn]用户身份信息（手机号码或邮箱帐号或用户真实帐号）
                                                        [cs_allowNull:N][cs_length:1-128][cs_sensitive:account] */
    HWM_CHAR token[HWM_MAX_REGISTER_TOKEN_LEN];         /**< [en]Indicates enable Pstn.
                                                        [cn]滑块校验通过后的Token
                                                        [cs_allowNull:N][cs_length:1-256][cs_sensitive:hide] */
    HWM_CHAR language[HWM_MAX_USER_LANGUAGE_LEN];       /**< [en]Indicates language type.
                                                        [cn]语言 中文：zh-CN, 英文：en-US
                                                        [cs_allowNull:N][cs_length:1-64] */
}ReqVerifyCodeParam;

/**
* [en]This structure is used to describe check verifycode param
* [cn]校验验证码参数信息
**/
typedef struct tagCheckVerifyCodeParam
{
    HWM_CHAR account[HWM_MAX_ACCOUNT_LEN];              /**< [en]Indicates has record permission.
                                                        [cn]用户身份信息（手机号码或邮箱帐号或用户真实帐号）
                                                        [cs_allowNull:N][cs_length:1-128][cs_sensitive:account]*/
    HWM_CHAR verifyCode[HWM_MAX_VERIFY_CODE_LEN];       /**< [en]Indicates verify code.
                                                        [cn]验证码
                                                        [cs_allowNull:N][cs_length:1-32][cs_sensitive:hide]*/
}CheckVerifyCodeParam;

/**
* [en]This structure is used to describe xxx
* [cn]注册企业参数
**/
typedef struct tagRegisterCorpParam
{
    HWM_CHAR authToken[HWM_MAX_REGISTER_TOKEN_LEN];    /**< [en]Indicates xxx.
                                                       [cn]鉴权Token
                                                       [cs_allowNull:N][cs_length:1-256][cs_sensitive:hide] */
    HWM_CHAR corpName[HWM_MAX_ACCOUNT_LEN];            /**< [en]Indicates xxx.
                                                       [cn]企业名称
                                                       [cs_allowNull:N][cs_length:1-128][cs_sensitive:name] */
    EnterpriseScale corpScale;                         /**< [en]Indicates xxx.
                                                       [cn]企业规模
                                                       [cs_allowNull:Y] */
    HWM_CHAR corpAddress[HWM_MAX_URL_LEN];             /**< [en]Indicates xxx.
                                                       [cn]企业地址
                                                       [cs_allowNull:N][cs_length:1-256][cs_sensitive:address] */
    EnterpriseIndustry corpIndustry;                   /**< [en]Indicates xxx.
                                                       [cn]企业所在行业
                                                       [cs_allowNull:Y] */
    HWM_CHAR channelPartner[HWM_MAX_CHANNEL_PARTNER_LEN]; /**< [en]Indicates channel partner.
                                                          [cn]渠道商
                                                          [cs_allowNull:Y][cs_length:1-128][cs_sensitive:hide] */
}RegisterCorpParam;

/**
* [en]This structure is used to describe xxx
* [cn]注册请求验证码入参
**/
typedef struct tagRegisterVerifyInfo
{
    HWM_CHAR account[HWM_MAX_ACCOUNT_LEN];            /**< [en]Indicates xxx.
                                                      [cn]用户（手机号码或邮箱）
                                                      [cs_allowNull:N][cs_length:1-128][cs_sensitive:account] */
    HWM_CHAR countryCode[HWM_MAX_COUNTRY_CODE_LEN];   /**< [en]Indicates xxx.
                                                      [cn]国家码
                                                      [cs_allowNull:N][cs_length:1-64] */
    VerifyType verifyType;                              /**< [en]Indicates xxx.
                                                        [cn]验证类型 0：手机邮箱注册或登录
                                                        [cs_allowNull:N] */
    HWM_CHAR sliderToken[HWM_MAX_TOKEN_LEN];           /**< [en]Indicates xxx.
                                                       [cn]滑块验证码校验通过后的token
                                                       [cs_allowNull:Y][cs_length:1-128][cs_sensitive:hide] */
    HWM_CHAR language[HWM_MAX_LANGUAGE_LEN];           /**< [en]Indicates xxx.
                                                       [cn]语言 中文：zh-CN, 英文：en-US
                                                       [cs_allowNull:N][cs_length:1-64] */
}RegisterVerifyInfo;

/**
* [en]This structure is used to describe xxx
* [cn]请求滑块入参
**/
typedef struct tagRequestSliderInfo
{
    HWM_CHAR account[HWM_MAX_ACCOUNT_LEN];            /**< [en]Indicates xxx.
                                                      [cn]用户（手机号码或邮箱）
                                                      [cs_allowNull:N][cs_length:1-128][cs_sensitive:account] */
    HWM_CHAR countryCode[HWM_MAX_COUNTRY_CODE_LEN];   /**< [en]Indicates xxx.
                                                      [cn]国家码
                                                      [cs_allowNull:Y][cs_length:0-64]*/
    LoginClientType clientType;                       /**< [en]Indicates xxx.
                                                      [cn]登录客户端类型
                                                      [cs_allowNull:N] */
    SliderCheckType checkType;                        /**< [en]Indicates xxx.
                                                      [cn]校验类型
                                                      [cs_allowNull:N]*/
}RequestSliderInfo;

/**
* [en]This structure is used to describe xxx
* [cn]校验滑块入参
**/
typedef struct tagCheckSliderInfo
{
    HWM_CHAR account[HWM_MAX_ACCOUNT_LEN];            /**< [en]Indicates xxx.
                                                      [cn]用户（手机号码或邮箱）
                                                      [cs_allowNull:N][cs_length:1-128][cs_sensitive:account] */
    HWM_CHAR countryCode[HWM_MAX_COUNTRY_CODE_LEN];   /**< [en]Indicates xxx.
                                                      [cn]国家码
                                                      [cs_allowNull:N][cs_length:1-64] */
    LoginClientType clientType;                       /**< [en]Indicates xxx.
                                                      [cn]登录客户端类型
                                                      [cs_allowNull:N] */
    SliderCheckType checkType;                        /**< [en]Indicates xxx.
                                                      [cn]校验类型
                                                      [cs_allowNull:N] */
    HWM_CHAR token[HWM_MAX_TOKEN_LEN];                /**< [en]Indicates xxx.
                                                      [cn]验证码token字符串
                                                      [cs_allowNull:N][cs_length:1-128][cs_sensitive:hide] */
    HWM_INT32 pointX;                                 /**< [en]Indicates xxx.
                                                      [cn]抠图X轴座标
                                                      [cs_allowNull:N] */
    HWM_INT32 slideTime;                              /**< [en]Indicates xxx.
                                                      [cn]滑动时间，单位ms
                                                      [cs_allowNull:N] */

}CheckSliderInfo;

/**
* [en]
* [cn]微信登录绑定手机号邮箱
*/
typedef struct tagBindWechatInfo
{
    HWM_CHAR bindToken[HWM_MAX_TOKEN_LEN];              /**< [en]Indicates bind token.
                                                        [cn]绑定token[cs_sensitive:hide] */
    HWM_CHAR userName[HWM_MAX_ACCOUNT_LEN];             /**< [en]Indicates the account username.
                                                        [cn]帐户用户名[cs_sensitive:name] */
    HWM_CHAR userMessage[HWM_MAX_APPID_EMAIL_LEN];      /**< [en]Indicates the account email or phone.
                                                        [cn]用户邮箱地址或手机号[cs_sensitive:phone] */
    HWM_CHAR verifyCode[HWM_MAX_VERIFY_CODE_LEN];       /**< [en]Indicates the auth code.
                                                        [cn]验证码[cs_sensitive:hide] */
    HWM_CHAR channelPartner[HWM_MAX_CHANNEL_PARTNER_LEN]; /**< [en]Indicates channel partner.
                                                          [cn]渠道商 */
}BindWechatInfo;

/**
* [en]This structure is used to describe verifycode result info
* [cn]请求验证码结果信息
**/
typedef struct tagReqVerifyCodeResultInfo
{
    HWM_CHAR bindEmail[HWM_MAX_APPID_EMAIL_LEN];              /**< [en]Indicates bind email.
                                                              [cn]用户绑定的邮箱帐号[cs_sensitive:name]  */
    HWM_CHAR bindPhone[HWM_MAX_PHONE_LEN];                    /**< [en]Indicates bind phone num.
                                                              [cn]用户绑定的手机号[cs_sensitive:phone]  */
    HWM_INT32 expire;                                         /**< [en]Indicates the expire of verify code.
                                                              [cn]验证码有效时间，单位s */
}ReqVerifyCodeResultInfo;

/**
* [en]This structure is used to request slider result.
* [cn]请求滑块结果
*/
typedef struct tagRequestSliderInfoResult
{
    HWM_UINT32 shadowImageLen;                  /**< [en][length for shadowImage].
                                                [cn]shadowImage字符串的长度 */
    HWM_UINT32  cutImageLen;                    /**< [en][length for cutImage].
                                                [cn]cutImage字符串的长度 */
    HWM_CHAR* shadowImage;                      /**< [en]Original image after cropping.
                                                [cn]抠图后的原图 */
    HWM_CHAR* cutImage;                         /**< [en]Indicates the cut image.
                                                [cn]抠图 */
    HWM_CHAR token[HWM_MAX_REGISTER_TOKEN_LEN]; /**< [en]Indicates the verify code token.
                                                [cn]验证码token字符串[cs_sensitive:hide]*/
    HWM_UINT32 pointY;                          /**< [en]Indicates the Y-axis coordinate.
                                                [cn]抠图Y轴座标*/
    HWM_UINT32 expire;                          /**< [en]Indicates the validity period of a verification code, in seconds..
                                                [cn]验证码有效时间，单位s */
    HWM_CHAR siteDomain[HWM_MAX_DOMAIN_LENGTH]; /**< [en]Indicates
                                                [cn] */
}RequestSliderInfoResult;

/**
* [en]
* [cn]微信登录绑定手机号邮箱
*/
typedef struct tagBindAccountInfo
{
    BindStatus bindStatus;                           /**< [en]Indicates bind type.
                                                     [cn]先前绑定类型 */
    HWM_CHAR userName[HWM_MAX_ACCOUNT_LEN];             /**< [en]Indicates the account username.
                                                        [cn]帐户用户名[cs_sensitive:name] */
}BindAccountInfo;


/**
* [en]This structure is used to describe user vmr config
* [cn]用户VMR配置信息
**/
typedef struct tagUserVmrConfigInfo
{
    HWM_UINT32 userVmrConfigSize;  /**< [length for userVmrConfigList]
                                   [en]Indicates the number of user vmr config.
                                   [cn]用户VMR配置信息列表个数 */
    VmrInfo* userVmrConfigList;    /**< [en]Indicates the user vmr config.
                                   [cn]用户VMR配置信息列表 */
}UserVmrConfigInfo;

/**
* [en]This structure is used to describe inviteation code info
* [cn]邀请码
**/
typedef struct tagInvitationCodeInfo
{
    HWM_CHAR invitationCode[HWM_MAX_USERID_LEN];         /**< [en]Indicates invitation code.
                                                         [cn]邀请码 */
    HWM_CHAR invitationLink[HWM_MAX_URL_LEN];            /**< [en]Indicates invitation link.
                                                         [cn]邀请链接 */
    HWM_INT64 expirationTime;                           /**< [en]Indicates invitation code expiration time.
                                                         [cn]邀请码到期时间戳*/
}InvitationCodeInfo;

/**
* [en]This structure is used to describe inviteation code info
* [cn]查询企业审核人员列表
**/
typedef struct tagQueryCorpApplicantListParam
{
    HWM_UINT32 offset;            /**< [en]Indicates  offset
                                       [cn] 偏移量 */
    HWM_UINT32 limit;             /**< [en]Indicates 限制数量
                                       [cn] limit */
    CorpApplicantStatus status;   /**< [en]Indicates status
                                       [cn] 状态 */
}QueryCorpApplicantListParam;

/**
* [en]This structure is used to describe
* [cn]
**/
typedef struct tagCorpApplicantUserDetail
{
    HWM_CHAR id[HWM_MAX_USERID_LENGTH];            /**< [en]Indicates id
                                                        [cn] 记录ID */
    HWM_CHAR inviteeName[HWM_MAX_NAME_LEN];        /**< [en]Indicates invitee Name
                                                        [cn] 申请人姓名 */
    HWM_CHAR deptFullName[HWM_MAX_DEPT_NAME_LEN];  /**< [en]Indicates deptFullName
                                                        [cn] 申请的部门 */ 
    HWM_CHAR inviteeContact[HWM_MAX_VALUE_LEN];    /**< [en]Indicates inviteeContact
                                                        [cn] 申请人联系方式 */ 
    HWM_INT64 applicationTime;                     /**< [en]Indicates applicationTime
                                                        [cn] 申请时间 UTC时间戳 */ 
    CorpApplicantStatus status;                    /**< [en]Indicates status
                                                        [cn] 申请状态 1-待审核 2-拒绝 */
    HWM_CHAR descript[HWM_MAX_APPLICANT_DESCRIPTION_LEN]; /**< [en]Indicates descript
                                                               [cn] 申请说明 */ 
    HWM_CHAR auditor[HWM_MAX_NAME_LEN];            /**< [en]Indicates auditor
                                                        [cn] 审核人 */ 
    HWM_INT64 auditTime;                           /**< [en]Indicates auditTime
                                                        [cn] 审核时间 */
    HWM_CHAR inviterName[HWM_MAX_NAME_LEN];        /**< [en]Indicates inviterName
                                                        [cn] 邀请人姓名 */
}CorpApplicantUserDetail;

/**
* [en]This structure is used to describe  
* [cn] 
**/
typedef struct tagCorpApplicantList
{
    HWM_UINT32 offset;         /**< [en]Indicates offset
                                    [cn] 页面起始页 */
    HWM_UINT32 limit;          /**< [en]Indicates limit
                                    [cn] 数量 */
    HWM_UINT32 count;          /**< [en]Indicates count
                                    [cn] 总数量 */
    HwmList<CorpApplicantUserDetail>* users; /**< [en]Indicates user detail
                                                  [cn] 申请人详细数据 */
}CorpApplicantList;

/**
* [en]This structure is used to describe active info.
* [cn]激活码激活信息
* @private
* @pc:disable
* @ios:disable
*/
typedef struct tagDeviceActiveInfo
{
    HWM_CHAR activeCode[HWM_MAX_LOGIN_ACTIVE_CODE_LEN];  /**< [en]active code
                                                              [cn]激活码 */
    HWM_CHAR sn[HWM_MAX_LOGIN_SN_LEN];              /**< [en]SN.
                                                         [cn]SN */
    HWM_CHAR deviceModel[HWM_MAX_LOGIN_DEVICE_LEN]; /**< [en]device model
                                                         [cn]设备型号 */
    HWM_CHAR deviceName[HWM_MAX_LOGIN_DEVICE_NAME_LEN + 1];  /**< [en]device name
                                                              [cn]设备名称 */
    HWM_CHAR deviceVersion[HWM_MAX_LOGIN_DEVICE_VER_LEN + 1];  /**< [en]device version
                                                                    [cn]设备版本 */
    HWM_UINT32 deviceSize;                                     /**< [en]device size
                                                                    [cn]设备尺寸 */
    HWM_CHAR deviceChannel[HWM_MAX_LOGIN_CHANNEL_LEN];         /**< [en]purchase channel
                                                                    [cn]购买渠道 */
    HWM_BOOL isQueryTwoPlatformQrCode;                         /**< [en]is query 2 platform qr code
                                                                    [cn]是否查询2码合一激活码 */
}DeviceActiveInfo;

/**
* [en]This structure is used to describe qr active info.
* [cn]获取扫码激活结果
* @private
* @pc:disable
* @ios:disable
*/
typedef struct tagQrActiveResultInfo
{
    HWM_CHAR activeCode[HWM_MAX_LOGIN_ACTIVE_CODE_LEN];  /**< [en]active code
                                                              [cn]激活码 */
    HWM_CHAR sn[HWM_MAX_LOGIN_SN_LEN];              /**< [en]SN.
                                                         [cn]SN */
    HWM_CHAR deviceModel[HWM_MAX_LOGIN_DEVICE_LEN]; /**< [en]device model
                                                         [cn]设备型号 */
    HWM_CHAR deviceName[HWM_MAX_LOGIN_DEVICE_NAME_LEN + 1];  /**< [en]device name
                                                              [cn]设备名称 */
    HWM_CHAR deviceVersion[HWM_MAX_LOGIN_DEVICE_VER_LEN + 1];  /**< [en]device version
                                                                    [cn]设备版本 */
    HWM_UINT32 deviceSize;                                     /**< [en]device size
                                                                    [cn]设备尺寸 */
    HWM_CHAR deviceChannel[HWM_MAX_LOGIN_CHANNEL_LEN];         /**< [en]purchase channel
                                                                    [cn]购买渠道 */
}QrActiveResultInfo;

/**
* [en]This structure is used to describe active result.
* [cn]激活结果信息(私有)
* @private
* @pc:disable
* @ios:disable
*/
typedef struct tagActiveByCodeReturnInfo
{
    HWM_CHAR account[HWM_MAX_ACCOUNT_LEN];             /**< [en]Indicates the account username.
                                                             [cn]帐户用户名  */
    HWM_CHAR password[HWM_MAX_PASSWORD_LEN];            /**< [cs_sensitive:hide][en]Indicates the account password.
                                                             [cn]帐户密码 */
    HWM_CHAR sssAddress[HWM_MAX_URL_LEN];               /**< [en]Indicates the sss address.
                                                             [cn]应用服务地址 */
    RedirectType redirectType;                          /**< [en]Indicates the redirect type.
                                                             [cn]重定向类型 */
    HWM_CHAR redirectHost[HWM_MAX_URL_LEN];             /**< [en]Indicates the redirect host.
                                                             [cn]重定向地址 */
}ActiveByCodeReturnInfo;

/**
* [en]This structure is used to describe get qr code result.
* [cn]获取激活二维码结果(私有)
* @private
* @pc:disable
* @ios:disable
*/
typedef struct tagActiveQrCodeInfo
{
    HWM_CHAR qrCodeUrl[HWM_MAX_URL_LEN];                /**< [en]qr code url.
                                                             [cn]扫码激活url  */
    HWM_CHAR qrToken[HWM_MAX_TOKEN_LEN];                /**< [en]Indicates the qr code token.
                                                             [cn]二维码token */
    HWM_UINT32 expireTime;                              /**< [en]Indicates the expire time.
                                                             [cn]token有效期 */
    HWM_BOOL notifyIdeaMgrFail;                         /**< [en]Indicates notify ideamanager status.
                                                             [cn]通知ideamanager失败 */
}ActiveQrCodeInfo;

/**
* [en]This structure is used to describe qr active result.
* [cn]扫码激活结果信息
* @private
* @pc:disable
* @ios:disable
*/
typedef struct tagActiveQrCodeDetailInfo
{
    HWM_CHAR account[HWM_MAX_ACCOUNT_LEN];             /**< [en]Indicates the account username.
                                                             [cn]帐户用户名  */
    HWM_CHAR password[HWM_MAX_PASSWORD_LEN];            /**< [cs_sensitive:hide][en]Indicates the account password.
                                                             [cn]帐户密码 */
    HWM_CHAR sssAddress[HWM_MAX_URL_LEN];               /**< [en]Indicates the sss address.
                                                             [cn]应用服务地址 */
    ActivePlatformType platformType;                    /**< [en]Indicates the active platform type.
                                                             [cn]激活平台类型 */
    HWM_CHAR redirectHost[HWM_MAX_URL_LEN];             /**< [en]Indicates the redirect host.
                                                             [cn]重定向地址 */
    HWM_CHAR welinkAddress[HWM_MAX_URL_LEN];            /**< [en]Indicates the welink address.
                                                             [cn]welink地址 */
    HWM_CHAR pricacyVersion[HWM_MAX_PRIVACY_VERSION_LEN];    /**< [en]Indicates the pricacy version
                                                                  [cn]隐私声明版本 */

}ActiveQrCodeDetailInfo;

/**
* [en]This structure is used to describe modify password param.
* [cn]修改密码参数
* @private
* @pc:disable
* @ios:disable
*/
typedef struct tagUserInfoParam
{
    HWM_CHAR name[HWM_MAX_APPNAME_LEN];                /**< [en]name.
                                                            [cn]用户名  */
    HWM_CHAR englishName[HWM_MAX_APPNAME_LEN];         /**< [en]english name.
                                                            [cn]用户英文名  */
    HWM_CHAR signature[HWM_MAX_SIGNATURE_NAME_LEN];    /**< [en]signature.
                                                            [cn]用户签名  */
    HWM_CHAR title[HWM_MAX_TITLE_NAME_LEN];            /**< [en]title.
                                                            [cn]职位  */
    HWM_CHAR userDescription[HWM_MAX_DESCRIPTION_LEN]; /**< [en]description.
                                                            [cn]描述信息  */
    HWM_CHAR authToken[HWM_MAX_TOKEN_LEN];             /**< [en]Indicates the token.
                                                            [cn]token  */
}UserInfoParam;

END_HWM_SDK_NAMESPACE
#endif /* __HWM_LOGIN_SERVICE_DEF_H__ */

