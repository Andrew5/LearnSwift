/**
 * @file HwmLoginServiceDef.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */


#ifndef __HWM_LOGIN_SERVICE_DEF_H__
#define __HWM_LOGIN_SERVICE_DEF_H__

#import "HwmSdkCommonDef.h"
#import "HwmConfServiceDef.h"

BEGIN_HWM_SDK_NAMESPACE


/**
 * [en]This enumeration is used to describe the type of authentication.
 * [cn]登录鉴权类型
 */
typedef enum tagHwmAuthType
{
    AUTH_ACCOUNT,                                   /**< [en]Indicates account+password authentication.
                                                             [cn]帐号鉴权
                                                             [ios:rename:Account] */
    AUTH_APPID,                                     /**< [en]Indicates the app ID authentication.
                                                             [cn]应用ID鉴权
                                                             [ios:rename:APPID] */
    AUTH_REGISTER_TOKEN,                            /**< [en]Indicates the register token auth type.
                                                             [cn]注册时鉴权
                                                             [ios:rename:Token] */
    AUTH_VERIFYCODE,                                /**< [en]Indicates the verifycode auth type.
                                                             [cn]验证码登录
                                                             [ios:rename:VerifyCode] */
    AUTH_WECHAT,                                    /**< [en]Indicates the wechat auth type.
                                                             [cn]微信登录验证
                                                             [ios:rename:WeChat] */
    AUTH_USG_TOKEN,                                 /**< [en]Indicates the refresh token auth type.
                                                             [cn]usg长token登录usg
                                                             [ios:rename:USGToken] */
    AUTH_TYPE_BUTT                                   /**< [en]xxxxx
                                                             [cn]无效值
                                                             [ios:rename:Butt] */
}AuthType;

typedef enum tagHwmClientType
{
    CLIENT_WIN,                                   /**< [en]Indicates win.
                                                             [cn]win平台
                                                             [ios:rename:Win] */
    CLIENT_MAC,                                   /**< [en]Indicates mac.
                                                             [cn]mac平台
                                                             [ios:rename:Mac] */
    CLIENT_ANDROID,                               /**< [en]Indicates android.
                                                             [cn]android平台
                                                             [ios:rename:Android] */
    CLIENT_IOS,                                   /**< [en]Indicates ios.
                                                             [cn]ios平台
                                                             [ios:rename:Ios] */
    CLIENT_TV,                                    /**< [en]Indicates hwm tv.
                                                             [cn]tv版
                                                             [ios:rename:HWMTVMeeting] */
    CLIENT_ANDROID_PAD,                           /**< [en]Indicates android pad.
                                                             [cn]android pad
                                                             [ios:rename:AndroidPad] */
    CLIENT_IOS_PAD,                               /**< [en]Indicates iPad.
                                                             [cn]iPad平台
                                                             [ios:rename:IosPad] */
    CLIENT_MAXHUB,                                /**< [en]Indicates maxhub .
                                                             [cn]maxhub
                                                             [ios:rename:MaxhubMeeting] */
    CLIENT_SAMRTROOMS,                            /**< [en]Indicates Indicates smartroom.
                                                             [cn]smartroom
                                                             [ios:rename:smartroom] */
    CLIENT_TYPE_BUTT                              /**< [ios:rename:Butt] */
}ClientType;

/**
 * [en]This enumeration is used to describe xxxxxx.
 * [cn]登录状态
 */
typedef enum tagLoginState
{
    LOGIN_STATUS_UN_LOGIN = 0,                      /**< [en]Indicates xxxxxx.
                                                             [cn]未登录
                                                             [ios:rename:UnLogin] */
    LOGIN_STATUS_LOGINING,                          /**< [en]Indicates xxxxxx.
                                                             [cn]登录中
                                                             [ios:rename:Logining] */
    LOGIN_STATUS_LOGINED,                           /**< [en]Indicates xxxxxx.
                                                             [cn]已登录
                                                             [ios:rename:Logined] */
    LOGIN_STATUS_LOGOUTING,                         /**< [en]Indicates xxxxxx.
                                                             [cn]注销中
                                                             [ios:rename:Logouting] */
    LOGIN_STATUS_BUTT                               /**< [en]Indicates xxxxxx.
                                                             [cn]无效值
                                                             [ios:rename:Butt] */
}LoginState;

/**
* [en]This enumeration is used to describe xxxxxx.
* [cn]登录用户会议服务器类型
*/
typedef enum tagLoginConfServerType
{
    LOGIN_CONF_SERVER_TYPE_MCU = 0,                 /**< [en]Indicates xxxxxx.
                                                        [cn] MCU会议
                                                        [ios:rename:MCU] */
    LOGIN_CONF_SERVER_TYPE_MMR = 1,                 /**< [en]Indicates xxxxxx.
                                                        [cn] MMR会议
                                                        [ios:rename:MMR] */
    LOGIN_CONF_SERVER_TYPE_RTC = 5,                /**< [en]Indicates xxxxxx.
                                                        [cn] RTC会议
                                                        [ios:rename:RTC] */
    LOGIN_CONF_SERVER_TYPE_BUTT                     /**< [en]Indicates xxxxxx.
                                                        [cn] 未知类型
                                                        [ios:rename:Butt] */
}LoginConfServerType;

/**
* [en]This structure is used to describe corp type
* [cn]企业类型
**/
typedef enum tagLoginCorpType
{
    LOGIN_CORP_TYPE_ENTERPRISE = 0,         /**< [en]xxxxx.
                                                 [cn]企业版 [ios:rename:Enterprise] */
    LOGIN_CORP_TYPE_PUBLIC_REGISTER,        /**< [en]xxxxx.
                                                 [cn]公共企业，手机、邮箱注册时会放到该企业内 [ios:rename:PublicRegister] */
    LOGIN_CORP_TYPE_PUBLIC_VISION,          /**< [en]xxxxx.
                                                 [cn]公共企业，智慧屏用户自动开户时会放到该企业内 [ios:rename:PublicVision] */
    LOGIN_CORP_TYPE_PUBLIC_WHITE_BOARD,     /**< [en]xxxxx.
                                                 [cn]公共企业，大屏用户自动开户时会放到该企业内 [ios:rename:PublicWhiteBoard] */
    LOGIN_CORP_TYPE_PUBLIC_CONSUMER,        /**< [en]xxxxx.
                                                 [cn]公共TOC消费者企业 [ios:rename:PublicConsumer] */
    LOGIN_CORP_TYPE_FREE,                   /**< [en]xxxxx.
                                                 [cn]免费版 [ios:rename:Free] */
    LOGIN_CORP_TYPE_PROFESSIONAL            /**< [en]xxxxx.
                                                 [cn]专业版 [ios:rename:Professional] */
}LoginCorpType;

/**
 * [en]This enumeration is used to describe xxxxxx.
 * [cn]被强制退出原因
 */
typedef enum tagKickoutReason
{
    KICKOUT_BY_LOGIN_ELSEWHERE,                /**< [en]Indicates the account has logged in to another terminal.
                                                             [cn]在其他终端上登录
                                                             [ios:rename:LoginElseWhere] */
    KICKOUT_BY_ACCOUNT_STOP_USE,               /**< [en]Indicates the account is disabled by the server.
                                                             [cn]帐号被服务端停止使用
                                                             [ios:rename:AccountStopUse] */
    KICKOUT_BY_ACCOUNT_EXPIRED,                /**< [en]Indicates the account has expired.
                                                             [cn]帐号过期
                                                             [ios:rename:AccountExpired] */
    KICKOUT_BY_MODIFIED_PASSWORD,              /**< [en]Indicates the Password has modified.
                                                         [cn]Portal修改密码
                                                         [ios:rename:AccountModifyPwd] */
    KICKOUT_REASON_BUTT                        /**< [ios:rename:Butt] */
}KickoutReason;


/**
 * [en]This enum is used to describe language<br>
 * [cn]语言 //TBD ：有好几个语言定义，需要再整理一下
 */
typedef enum tagPromptLanguageType
{
    PROMPT_LANGUAGE_ZH_CN = 0,                      /**< [en]Indicates ZH_CN
                                                             [cn]简体中文
                                                             [ios:rename:ZHCN] */
    PROMPT_LANGUAGE_EN_US,                          /**< [en]Indicates EN_US
                                                             [cn]美国英文
                                                             [ios:rename:ENUS] */
    PROMPT_LANGUAGE_TYPE_BUTT                       /**< [ios:rename:Butt] */
}PromptLanguageType;


//TBD 所有与移动相关的，都移至Private里？

/**
 * [en]This enumeration is used to describe Apple push server environment type.
 * [cn]苹果推送服务器环境类型
 * @android:disable
 */
typedef enum tagApnsEnvType
{
    APNS_PRODUCTION_ENV = 1,                        /**< [en]Indicates production environment.
                                                             [cn]生产环境
                                                             [ios:rename:Production] */
    APNS_TEST_ENV,                                  /**< [en]Indicates test environment.
                                                             [cn]测试环境
                                                             [ios:rename:Test] */
    APNS_ENV_BUTT                                   /**< [ios:rename:Butt] */
}ApnsEnvType;


/**
 * [en]This enumeration is used to describe Apple push service certificate type.
 * [cn]苹果推送服务证书类型
 *  @android:disable
 */
typedef enum tagApnsCertType
{
    //TODO 待确认具体的意义后再确定命名
    APNS_CERT_1 = 1,                                /**< [en]Indicates certificate type 1.
                                                             [cn]证书类型1
                                                             [ios:rename:1] */
    APNS_CERT_2,                                    /**< [en]Indicates certificate type 2.
                                                             [cn]证书类型2
                                                             [ios:rename:2] */
    APNS_CERT_3,                                    /**< [en]Indicates certificate type 3.
                                                             [cn]证书类型3
                                                             [ios:rename:3] */
    APNS_CERT_4,                                    /**< [en]Indicates certificate type 4.
                                                             [cn]证书类型4
                                                             [ios:rename:4] */
    APNS_CERT_5,                                    /**< [en]Indicates certificate type 5.
                                                             [cn]证书类型5
                                                             [ios:rename:5] */
    APNS_CERT_TYPE_BUTT                             /**< [ios:rename:Butt] */
}ApnsCertType;


/**
 * [en]This enumeration is used to describe push operation type.
 * [cn]Push操作类型
 * @android:disable
 */
typedef enum tagPushOperationType
{
    PUSH_REGISTER,                                  /**< [en]Indicates register the push service.
                                                             [cn]注册PUSH服务
                                                             [ios:rename:Register] */
    PUSH_UNREGISTER,                                /**< [en]Indicates deregister the push service.
                                                             [cn]注销PUSH服务
                                                             [ios:rename:UnRegister] */
    PUSH_ClOSE_PUSH,                                /**< [en]Indicates close the push service.
                                                             [cn]关闭PUSH服务
                                                             [ios:rename:Close] */
    PUSH_OPRRATION_TYPE_BUTT                        /**< [ios:rename:Butt] */
}PushOperationType;


/**
* [en]This structure is used to describe the password type
* [cn]密码类型
**/
typedef enum tagPasswordType
{
    PASSWORD_TYPE_TEMP,             /**< [en]Indicates the temporary password.
                                             [cn]临时密码
                                             [ios:rename:Temp] */
    PASSWORD_TYPE_FORM              /**< [en]Indicates the standard password.
                                             [cn]正式密码
                                             [ios:rename:Form] */
}PasswordType;

/**
* [en]This structure is used to describe login client type
* [cn]登录客户端类型
**/
typedef enum tagLoginClientType
{
    LOGINLOGIC_E_CLIENT_WEB,               /**< [en]Indicates web client.
                                                [cn]Web客户端类型 
                                                [ios:rename:ClientWeb] */
    LOGINLOGIC_E_CLOUDLINK_PC = 5,         /**< [en]cloudlink pc.
                                                [cn]cloudlink win类型
                                                [ios:rename:CloudlinkPC] */
    LOGINLOGIC_E_CLOUDLINK_MOBILE = 6,     /**< [en]cloudlink mobile 
                                                [cn]cloudlink 手机类型
                                                [ios:rename:CloudlinkMobile] */
    LOGINLOGIC_E_WORKPLACE_PC = 16,        /**< [en]workplace pc 
                                                [cn]workplace win类型
                                                [ios:rename:WorkplacePC] */
    LOGINLOGIC_E_CLOUDLINK_PAD = 24,       /**< [en]pad 
                                                [cn]cloudlink pad类型
                                                [ios:rename:CloudlinkPad] */
}LoginClientType;


/**
* [en]This structure is used to describe third part client type
* [cn]第三方客户端类型
**/
typedef enum tagThirdClientType
{
    THIRD_CLIENT_TYPE_MOBILE,              /**< [en]Indicates mobile client.
                                           [cn]手机客户端
                                           [ios:rename:Mobile] */
    THIRD_CLIENT_TYPE_PAD,                 /**< [en]Indicates PAD client.
                                           [cn]pad客户端
                                           [ios:rename:PAD] */
    THIRD_CLIENT_TYPE_PC,                  /**< [en]Indicates PC client.
                                           [cn]pc客户端
                                           [ios:rename:PC] */
    THIRD_CLIENT_TYPE_TV,                  /**< [en]Indicates TV client.
                                           [cn]电视客户端；
                                           [ios:rename:TV] */
    THIRD_CLIENT_TYPE_BOARD,               /**< [en]Indicates BOARD client.
                                           [cn]大屏客户端
                                           [ios:rename:Board] */
}ThirdClientType;

/**
* [en]This structure is used to describe login client type
* [cn]登录客户端类型
**/
typedef enum tagUserCorpInfoNotifyType
{
    USER_DELETE,                /**< [en]
                                     [cn]用户已注销 
                                     [ios:rename:UserDelete] */
    USER_JOIN_THE_CORP,         /**< [en]
                                     [cn]您已加入新的企业（接受邀请、创建企业 变成新企业内的用户） 
                                     [ios:rename:UserJoinTheCorp] */
    USER_LEAVE_THE_CORP,        /**< [en]
                                     [cn]您已被移出当前企业（企业管理员删除、解散、 用户主动离开企业变成注册用户） 
                                     [ios:rename:UserLeaveTheCorp] */
    USER_RESET,                 /**< [en]
                                     [cn]用户重置
                                     [ios:rename:UserReset] */
    USER_VMR_RESET,             /**< [en]
                                     [cn]VMR重置
                                     [ios:rename:VmrChange] */
    USER_NAME_CHANGE,           /**< [en]
                                     [cn]用户名变更
                                     [ios:rename:userNameChange] */
    USER_STATUS_CHANGE,         /**< [en]
                                     [cn]用户状态变化
                                     [ios:rename:userStatusChange] */
}UserCorpInfoNotifyType;

/**
* [en]This enumeration is used to describe login admin type
* [cn]管理员类型
*/
typedef enum tagAdminType
{
    ADMIN_INVILD = -1,  /**<[en]Indicates unknow.
                        <br>[cn]无效值 */
    ADMIN_DEFAULT = 0,  /**<[en]Indicates default administrator.
                        <br>[cn]默认管理员 */
    ADMIN_NORMAL = 1,   /**<[en]Indicates administrator.
                        <br>[cn]普通管理员 */
    ADMIN_USER = 2,     /**<[en]Indicates user.
                        <br>[cn]非管理员 */
}AdminType;

/**
 * [en]This structure is used to describe xxxx.
 * [cn]帐号鉴权信息
 */
typedef struct tagAccountAuthInfo
{
    HWM_CHAR account[HWM_MAX_ACCOUNT_LEN];             /**< [en]Indicates the account username.
                                                             [cn]帐户用户名[cs_sensitive:name]  */
    HWM_CHAR password[HWM_MAX_PASSWORD_LEN];            /**< [en]Indicates the account password.
                                                             [cn]帐户密码[cs_sensitive:hide] */
}AccountAuthInfo;

/**
 * [en]This structure is used to describe Platform Infomation
 * [cn]平台信息
 */
typedef struct tagClientInfo
{
    ClientType clientType;                /**< [en]Indicates type of client.
                                               [cn]操作系统类型 */
    HWM_BOOL isWelink;                    /**< [en]Indicates is welink.
                                               [cn]是否为welink */
}ClientInfo;

/**
 * [en]This structure is used to describe xxxx.
 * [cn]APP ID鉴权信息
 */
typedef struct tagAppIdAuthInfo
{
    HWM_CHAR appId[HWM_MAX_APPID_LEN];                  /**< [en]Indicates the app ID.
                                                             [cn]APP ID 
                                                             [cs_allowNull:Y][cs_length:0-128][cs_sensitive:appId] */
    HWM_CHAR signature[HWM_MAX_APPKEY_LEN];             /**< [en]Indicates the Signature.
                                                             [cn]签名信息 
                                                             [cs_allowNull:Y][cs_length:0-128][cs_sensitive:hide] */
    HWM_CHAR corpId[HWM_MAX_CORPID_LEN];                /**< [en]Indicates the corp id .
                                                             [cn]企业id 
                                                             [cs_allowNull:Y][cs_length:0-32] */
    HWM_CHAR thirdUserId[HWM_MAX_USERID_LEN];                /**< [en]Indicates the userId.
                                                             [cn]第三方应用帐号 
                                                             [cs_allowNull:Y][cs_length:0-256][cs_sensitive:name] */
    HWM_INT64 expireTime;                               /**< [en]Indicates the expire time.
                                                             [cn]应用鉴权信息过期时间戳，单位秒 
                                                             [cs_allowNull:Y] */
    HWM_CHAR nonce[HWM_MAX_NONCE_LEN];                  /**< [en]Indicates the nonce.
                                                             [cn]随机字符串，用于计算应用鉴权信息 
                                                             [cs_allowNull:Y][cs_length:0-64] */
    ThirdClientType thirdClientType;                    /**< [en]Indicates the third part clientType.
                                                             [cn]第三方客户端类型
                                                             [cs_allowNull:Y] */
    HWM_CHAR userName[HWM_MAX_ACCOUNT_LEN];             /**< [en]Indicates the account username.
                                                             [cn]帐户用户名 
                                                             [cs_allowNull:Y][cs_length:0-128][cs_sensitive:name] */
    HWM_CHAR userEmail[HWM_MAX_APPID_EMAIL_LEN];        /**< [en]Indicates the account email.
                                                             [cn]用户邮箱地址 
                                                             [cs_allowNull:Y][cs_length:0-256][cs_sensitive:email] */
    HWM_CHAR userPhone[HWM_MAX_PHONE_LEN];              /**< [en]Indicates the phone.
                                                             [cn]用户手机号码 
                                                             [cs_allowNull:Y][cs_length:0-32][cs_sensitive:phone] */
    HWM_CHAR deptCode[HWM_MAX_CORPID_LEN];              /**< [en]Indicates the deptCode.
                                                             [cn]部门id
                                                             [cs_allowNull:Y][cs_length:0-32] */
}AppIdAuthInfo;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]Nonce鉴权信息
 */
typedef struct tagNonceAuthInfo
{
    HWM_CHAR nonce[HWM_MAX_NONCE_LEN];                  /**< [en]Indicates the nonce.
                                                             [cn]nonce随机字符串，用于计算应用鉴权信息
                                                             [cs_length:0-128][cs_sensitive:hide] */
}NonceAuthInfo;

/**
 * [en]This structure is used to describe xxxx.
 * [cn]中台token
 */
typedef struct tagMiddleTokenAuthInfo
{
    HWM_CHAR userName[HWM_MAX_ACCOUNT_LEN];             /**< [en]Indicates the account username.
                                                             [cn]帐户用户名[cs_sensitive:name] */
    HWM_CHAR middleToken[HWM_MAX_TICKET_LEN];           /**< [en]Indicates the Ticket value used by a third-party authentication Tiken scenario.
                                                             [cn]中台token[cs_sensitive:hide] */
}MiddleTokenAuthInfo;

/**
* [en]This structure is used to describe xxxx.
* [cn]授权码信息-安卓智慧屏
*/
typedef struct tagAuthCodeAuthInfo
{
    HWM_CHAR authCode[HWM_MAX_AUTH_CODE_LEN];           /**< [en]Indicates the auth code.
                                                             [cn]授权码[cs_sensitive:hide] */
    HWM_CHAR deviceId[HWM_MAX_DEVICEID_LEN];            /**< [en]Indicates the deviceId.
                                                             [cn]设备ID */
}AuthCodeAuthInfo;

/**
* [en]This structure is used to describe xxxx.
* [cn]注册后的鉴权信息
*/
typedef struct tagRegisterAuthInfo
{
    HWM_CHAR registerToken[HWM_MAX_REGISTER_TOKEN_LEN]; /**< [en]Indicates the register token.
                                                             [cn]注册后的token[cs_sensitive:hide] */
}RegisterAuthInfo;

/**
* [en]This structure is used to describe xxxx.
* [cn]使用usgtoken登录usg鉴权信息
*/
typedef struct tagUsgTokenAuthInfo
{
    HWM_CHAR usgToken[HWM_MAX_REGISTER_TOKEN_LEN]; /**< [en]Indicates the usg token.
                                                        [cn]登录token值[cs_sensitive:hide] */
}UsgTokenAuthInfo;

/**
* [en]This structure is used to describe xxxx.
* [cn]验证码信息
*/
typedef struct tagVerifyCodeAuthInfo
{
    HWM_CHAR verifyCode[HWM_MAX_VERIFY_CODE_LEN];   /**< [en]Indicates the auth code.
                                                         [cn]验证码[cs_sensitive:hide] */
    HWM_CHAR phone[HWM_MAX_PHONE_LEN];              /**< [en]Indicates the deviceId.
                                                         [cn]手机号码[cs_sensitive:phone] */
    LoginClientType clientType;                     /**< [en]Indicates the clientType.
                                                         [cn]登录客户端类型 */
}VerifyCodeAuthInfo;


/**
* [en]This structure is used to describe thirdpart login message.
* [cn]微信鉴权信息
*/
typedef struct tagWechatAuthInfo
{
    HWM_CHAR credential[HWM_MAX_TOKEN_LEN];                 /**< [en]Indicates the access token. 
                                                              [cn]接入token[cs_sensitive:hide] */
    LoginClientType clientType;                            /**< [en]Indicates the clientType.
                                                              [cn]登录客户端类型 */        
}WechatAuthInfo;

/**
 * [en]This structure is used to describe login parameters.
 * [cn]登录信息参数
 */
typedef struct tagLoginInfo
{
    AuthType authType;                                   /**< [en]Indicates the type of authentication.
                                                              [cn]鉴权类型 
                                                              [cs_allowNull:N] */
    AccountAuthInfo accountAuthInfo;                     /**< [en]Indicates xxxx.
                                                              [cn]帐号鉴权信息，鉴权类型为 HWM_AUTH_ACCOUNT 时填写 
                                                              [cs_allowNull:N][authType:HWM_AUTH_ACCOUNT] */
    AppIdAuthInfo appIdAuthInfo;                         /**< [en]Indicates xxxx.
                                                              [cn]APP ID 鉴权信息，鉴权类型为 HWM_AUTH_APPID 时填写 
                                                              [cs_allowNull:N][authType:HWM_AUTH_APPID] */
    RegisterAuthInfo registerAuthInfo;                   /**< [en]Indicates register auth
                                                              [cn]注册鉴权信息，鉴权类型为 HWM_AUTH_REGISTER_TOKEN 时填写 
                                                              [cs_allowNull:N][authType:HWM_AUTH_REGISTER_TOKEN] */
    UsgTokenAuthInfo usgTokenAuthInfo;                   /**< [en]Indicates usg token auth
                                                              [cn]usg长token信息，鉴权类型为 HWM_AUTH_USG_TOKEN 时填写 
                                                              [cs_allowNull:N][authType:HWM_AUTH_USG_TOKEN] */
    VerifyCodeAuthInfo verifyCodeAuthInfo;               /**< [en]Indicates verify code auth
                                                              [cn]验证码信息，鉴权类型为 HWM_AUTH_VERIFYCODE 时填写 
                                                              [cs_allowNull:N][authType:HWM_AUTH_VERIFYCODE] */
    WechatAuthInfo weChatAuthInfo;                       /**< [en]Indicates wechat auth
                                                              [cn]微信登录，鉴权类型为AUTH_WECHAT 时填写 
                                                              [cs_allowNull:N][authType:AUTH_WECHAT] */
}LoginInfo;


/**
* [en]This structure is used to describe login result.
* [cn]登录结果信息
*/
typedef struct tagLoginByAppIdResultInfo
{
    HWM_CHAR uuid[HWM_MAX_DEVICE_UUID_LEN];             /**< [en]Indicates UUID.
                                                             [cn]UUID, (由系统分配的真实的唯一用户标识) */
    HWM_CHAR accessToken[HWM_MAX_TOKEN_LEN];            /**< [en]Indicates access token.
                                                             [cs_sensitive:hide][cn]接入token */
    HWM_CHAR refreshToken[HWM_MAX_TOKEN_LEN];           /**< [en]Indicates refresh token.
                                                             [cs_sensitive:hide][cn]刷新token */
    HWM_BOOL isFirstLogin;                              /**< [en]Indicates xxx.
                                                             [cn]是否账户第一次登录 */
    HWM_BOOL firstSuccessLogin;                         /**< [en]Indicates firstr success login.
                                                             [cn]是否为第1次登录(周期体验会议)*/
}LoginByAppIdResultInfo;


/**
 * [en]This structure is used to describe login state info.
 * [cn]登录状态信息
 */
typedef struct tagLoginStateInfo
{
    LoginState loginState;                              /**< [en]Indicates xxxx.
                                                             [cn]登录状态 */
    HWM_BOOL isCallEnable;                              /**< [en]Indicates xxxx.
                                                             [cn]呼叫是否登录上，0未登录，1已经登录 */
    HWM_CHAR authServerAddr[HWM_MAX_URL_LEN];           /**< [en]Indicates xxxx.
                                                             [cs_sensitive:ip][cn]鉴权服务器地址 */
    HWM_UINT32 authServerPort;                          /**< [en]Indicates xxxx.
                                                             [cn]鉴权服务器端口 */
    HWM_CHAR accessToken[HWM_MAX_TOKEN_LEN];            /**< [en]Indicates authentication token.
                                                             [cs_sensitive:hide][cn]token鉴权, 用于具体业务鉴权，应用程序应加密保存，在失效时应刷新 */
    HWM_CHAR corpId[HWM_MAX_CORP_ID_LEN];               /**< [en]Indicates xxxx.
                                                             [cs_sensitive:id][cn]企业ID */
    HWM_CHAR uuid[HWM_MAX_DEVICE_UUID_LEN];             /**< [en]Indicates UUID.
                                                             [cn]UUID, (由系统分配的真实的唯一用户标识) */
    HWM_CHAR sipNumber[HWM_MAX_NUMBER_LEN];             /**< [en]Indicates xxxx.
                                                             [cs_sensitive:sip][cn]sip号码 */
    LoginConfServerType confServerType;                 /**< [en]Indicates xxxx.
                                                             [cn]会议服务器类型 */
    HWM_BOOL isCanCreateWebinar;                        /**< [en]Indicates xxxx.
                                                             [cn]是否可以创建网络研讨会 */
    HWM_CHAR userName[HWM_MAX_ACCOUNT_LEN];             /**< [en]Indicates the account username.
                                                             [cs_sensitive:name][cn]帐户用户名 */
    HWM_CHAR thirdAccount[HWM_MAX_ACCOUNT_LEN];         /**< [en]third account.
                                                             [cs_sensitive:name][cn]第三方帐号  */
    HWM_CHAR appId[HWM_MAX_APPID_LEN];                  /**< [en]Indicates the app ID.
                                                             [cs_sensitive:id][cn]APP ID */
    HWM_BOOL isAnonymousConfLogin;                      /**< [en]Indicates the login is trigged by anonymous conf.
                                                             [cn]是否是匿名入会触发的登录 */
    HWM_BOOL isNonceConfLogin;                          /**< [en]Indicates the login is trigged by nonce conf.
                                                             [cn]是否是随机数入会触发的登录 */
    HWM_CHAR account[HWM_MAX_ACCOUNT_LEN];              /**< [en]account.
                                                             [cs_sensitive:name][cn]帐号  */
}LoginStateInfo;


/**
 * [en]This structure is used to describe modify password param.
 * [cn]修改密码参数
 */
typedef struct tagModifyPasswordParam
{
    HWM_CHAR oldPassword[HWM_MAX_PASSWORD_LEN];         /**< [en]Indicates old password.
                                                             [cn]旧密码 
                                                             [cs_allowNull:N][cs_length:1-128][cs_sensitive:hide] */
    HWM_CHAR newPassword[HWM_MAX_PASSWORD_LEN];         /**< [en]Indicates new password.
                                                             [cn]新密码 
                                                             [cs_allowNull:N][cs_length:1-128][cs_sensitive:hide] */
}ModifyPasswordParam;

/**
 * [en]This structure is used to describe xxxx.
 * [cn]请求验证码参数
 */
typedef struct tagReqVerificationCodeParam
{
    HWM_CHAR account[HWM_MAX_ACCOUNT_LEN];              /**< [en]Indicates account.
                                                             [cn]帐号 
                                                             [cs_sensitive:name][cs_allowNull:N][cs_length:1-128]*/
    HWM_BOOL isSendEmail;                               /**< [en]Indicates whether is send email notify.
                                                             [cn]是否发送邮件通知 
                                                             [cs_allowNull:Y] */
    HWM_BOOL isSendSms;                                 /**< [en]Indicates whether is send sms.
                                                             [cn]是否发送短信通知 
                                                             [cs_allowNull:Y] */
    PromptLanguageType promptLanguage;               /**< [en]Indicates the language type.
                                                             [cn]语言类型 
                                                             [cs_allowNull:Y] */
    HWM_CHAR userAgent[HWM_MAX_USERAGENT_LEN];         /**< [en]Indicates the user-agent.
                                                             [cn]标志用户终端类型 
                                                             [cs_allowNull:N][cs_length:1-256] */
}ReqVerificationCodeParam;

/**
* [en]This structure is used to describe pre verify result
* [cn]前置校验结果
**/
typedef struct tagPreVerifyResult
{
    HWM_UINT32 returnCode;                              /**< [en]Indicates xxx.
                                                             [cn]返回码 */
    HWM_CHAR token[HWM_MAX_REGISTER_TOKEN_LEN];         /**< [en]Indicates xxx.
                                                             [cs_sensitive:hide][cn]token */
}PreVerifyResult;

/**
* [en]This structure is used to describe check verifycode result
* [cn]校验验证码结果信息
**/
typedef struct tagCheckVerifyCodeResult
{
    HWM_CHAR token[HWM_MAX_REGISTER_TOKEN_LEN];         /**< [en]Indicates xxx.
                                                             [cs_sensitive:hide][cn]token信息 */
    HWM_UINT32 expire;                                  /**< [en]Indicates .
                                                             [cn]有效期 */
}CheckVerifyCodeResult;

/**
* [en]This structure is used to describe enterprise scale
* [cn]企业规模
**/
typedef enum tagEnterpriseScale
{
    SCALE_UNKNOWN,      /**< [en]
                             [cn]未知 
                             [ios:rename:Unknown] */
    MINI,               /**< [en]
                             [cn]1-50人 
                             [ios:rename:Mini] */
    SMALL,              /**< [en]
                             [cn]51-100人 
                             [ios:rename:Small] */
    MEDIUM,             /**< [en]
                             [cn]101-250人 
                             [ios:rename:Medium] */
    LARGE,              /**< [en]
                             [cn]251-500人 
                             [ios:rename:Large] */
    EXTRA_LARGE         /**< [en]
                             [cn]500人以上 
                             [ios:rename:ExtraLarge] */
}EnterpriseScale;

/**
* [en]This structure is used to describe enterprise industry
* [cn]企业所属行业
**/
typedef enum tagEnterpriseIndustry
{
    INDUSTRY_UNKNOWN,     /**< [en]
                               [cn]未知 
                               [ios:rename:Unknown] */
    INTERNET,             /**< [en]
                               [cn]互联网 
                               [ios:rename:Internet] */
    IT_AND_COMMUNICATION, /**< [en]
                               [cn]IT&通信 
                               [ios:rename:ITAndCommunications] */
    ECOMMERCE,            /**< [en]
                               [cn]电子商务 
                               [ios:rename:Ecommerce] */
    BIG_DATA,             /**< [en]
                               [cn]大数据 
                               [ios:rename:BigData] */
    GAME,                 /**< [en]
                               [cn]游戏 
                               [ios:rename:Game] */
    ONLINE_AUDIO_VIDEO,   /**< [en]
                               [cn]在线音视频 
                               [ios:rename:OnlineAudioAndVideo] */
    CONSTRUCT_ESTATE,     /**< [en]
                               [cn]建筑和地产 
                               [ios:rename:ConstructEstate] */
    EDUCATION,            /**< [en]
                               [cn]教育 
                               [ios:rename:Education] */
    FINANCE,              /**< [en]
                               [cn]金融 
                               [ios:rename:Finance] */
    MEDIA,                /**< [en]
                               [cn]媒资 
                               [ios:rename:Media] */
    ENERGY,               /**< [en]
                               [cn]能源 
                               [ios:rename:Energy] */
    HEALTHCARE,           /**< [en]
                               [cn]医疗健康 
                               [ios:rename:Healthcare] */
    GOVERNMENT,           /**< [en]
                               [cn]政府和政务 
                               [ios:rename:Government] */
    PRODUCT_MANUFACT,     /**< [en]
                               [cn]生产和制造 
                               [ios:rename:ProductionAndManufacturing] */
    SERVICE,              /**< [en]
                               [cn]服务业 
                               [ios:rename:Service] */
    INDIVIDUAL,           /**< [en]
                               [cn]个人用户 
                               [ios:rename:Individual] */
    OTHER                 /**< [en]
                               [cn]其它 
                               [ios:rename:Other] */
}EnterpriseIndustry;

/**
* [en]This structure is used to describe verifycode type
* [cn]验证码类型
**/
typedef enum tagVerifyType
{
    REGISTER_OR_LOGIN,       /**< [en] register or login by mobile or email
                             [cn]手机或邮箱注册或登录  */
    MODIFY_MESSAGE,          /**< [en] modify mobile or email
                             [cn]修改手机或邮箱  */
    CANCEL_CORP,             /**< [en] cancel corp
                             [cn]解散企业  */
    QUIT_CORP,               /**< [en] quit corp
                             [cn]退出企业  */
    DEREGISTER              /**< [en] deregister account
                             [cn]注销帐号  */
}VerifyType;

/**
* [en]This structure is used to describe login client type
* [cn]登录客户端类型
**/
typedef enum tagSliderCheckType
{
    LOGINLOGIC_E_LOGIN = 0,                       /**< 登录 [ios:rename:Login] */
    LOGINLOGIC_E_FORGOT_PASSWORD,         /**< 忘记密码 [ios:rename:ForgotPassword] */
    LOGINLOGIC_E_WELINK_PORTAL_LOGIN,     /**< weLink portal登录 [ios:rename:WelinkPortalLogin] */
    LOGINLOGIC_E_USER_VERIFY_CODE,       /**< 用户验证码 [ios:rename:UserVerifyCode] */
}SliderCheckType;

/**
* [en]This structure is used to desc check slider result.
* [cn]校验滑块结果
*/
typedef struct tagCheckSliderResult
{
    HWM_CHAR token[HWM_MAX_REGISTER_TOKEN_LEN]; /**< [en]Indicates the verify code token.
                                                     [cs_sensitive:hide][cn]验证码token字符串*/
    HWM_UINT32 expire;                          /**< [en]Indicates the validity period of a verification code, in seconds..
                                                     [cn]验证码有效时间，单位s */
}CheckSliderResult;


/**
* [en]This structure is used to describe query user id type
* [cn]查询用户ID类型
**/
typedef enum tagUserIdType
{
    USER_ID,                    /**< [en]Indicates xxx.
                                             [cn]用户ID
                                             [ios:rename:UserID] */
    USER_ID_THIRD_ACCOUNT       /**< [en]Indicates xxx.
                                             [cn]第三方账户
                                             [ios:rename:ThirdAccount] */
}UserIdType;

/**
* [en]This structure is used to describe query user id type
* [cn]查询用户ID类型
**/
typedef enum tagBindStatus
{
    NOT_BIND,                    /**< [en]Indicates user has not binded.
                                [cn]用户未绑定*/
    BIND_BY_APP,                /**< [en]Indicates user has binded by app.
                                [cn]通过APP绑定 */
    BIND_BY_WECHAT,             /**< [en]Indicates user has binded by wechat.
                                [cn]通过微信绑定*/
}BindStatus;

/**
* [en]This structure is used to describe Corp Applicant Status
* [cn]企业申请人员列表状态
**/
typedef enum tagCorpApplicantStatus
{
    APPLY_APPLICANT = 1,                                              /**< [en]Indicates
                                                                      [cn]待审核 */
    APPLY_REJECT = 2,                                                 /**< [en]Indicates
                                                                      [cn]已拒绝 */
} CorpApplicantStatus;

/**
* [en]This structure is used to describe xxx
* [cn]用户信息参数
**/
typedef struct tagReqUserParam
{
    HWM_CHAR userId[HWM_MAX_USERID_LEN];           /**< [en]Indicates xxx.
                                                        [cn]用户ID 
                                                        [cs_allowNull:N][cs_length:1-256] */
    HWM_UINT64 updateTime;                         /**< [en]Indicates xxx.
                                                        [cn]用户信息最后更新时间（服务端会根据这个时间判断是否返回用户详情） 
                                                        [cs_allowNull:N] */
}ReqUserParam;

/**
* [en]This structure is used to describe xxx
* [cn]查询用户信息参数
* ios:disable
**/
typedef struct tagQueryUserInfoParam
{
    UserIdType userType;                        /**< [en]Indicates xxx.
                                                     [cn]用户类型 
                                                     [cs_allowNull:Y] */
    HWM_INT32 reqUserInfoNum;                   /**< [length for pReqUserInfoList][en]Indicates xxx.
                                                     [cn]请求查询用户信息数量 
                                                     [cs_allowNull:N] */
    ReqUserParam *pReqUserInfoList;             /**< [en]Indicates xxx.
                                                     [cn]请求查询用户信息参数列表 
                                                     [cs_allowNull:N] */
}QueryUserInfoParam;

/**
* [en]This structure is used to describe xxx
* [cn]用户信息
**/
typedef struct tagUserInfo
{
    HWM_CHAR uuid[HWM_MAX_DEVICE_UUID_LEN];            /**< [en]uuid. 
                                                            [cn]用户UUID  */
    HWM_CHAR account[HWM_MAX_ACCOUNT_LEN];             /**< [en]account. 
                                                            [cs_sensitive:account][cn]用户帐号  */
    HWM_CHAR name[HWM_MAX_CHN_USERNAME_LEN + 1];       /**< [en]name.
                                                            [cs_sensitive:name][cn]用户名  */
    HWM_CHAR englishName[HWM_MAX_APPNAME_LEN];         /**< [en]english name. 
                                                            [cs_sensitive:name][cn]用户英文名  */
    HWM_CHAR email[HWM_MAX_APPID_EMAIL_LEN];           /**< [en]email. 
                                                            [cs_sensitive:email][cn]邮箱  */
    HWM_CHAR phone[HWM_MAX_PHONE_LEN];                 /**< [en]phone. 
                                                            [cs_sensitive:phone][cn]用户手机  */
    HWM_CHAR deptName[HWM_MAX_DEPT_NAME_LEN];          /**< [en]deptment name. 
                                                            [cs_sensitive:dept][cn]用户部门  */
    HWM_CHAR number[HWM_MAX_ACCOUNT_LEN];              /**< [en]number. 
                                                            [cs_sensitive:phone][cn]用户号码  */
    HWM_CHAR vmrId[HWM_MAX_VMR_ID_LEN];                /**< [en]VMR会议 id. 
                                                            [cn]用户虚拟会议室ID  */
    HWM_CHAR signature[HWM_MAX_SIGNATURE_NAME_LEN];    /**< [en]signature. 
                                                            [cs_sensitive:hide][cn]用户签名  */
    HWM_CHAR title[HWM_MAX_TITLE_NAME_LEN];            /**< [en]title. 
                                                            [cn]职位  */
    HWM_CHAR thirdAccount[HWM_MAX_ACCOUNT_LEN];        /**< [en]third account. 
                                                            [cs_sensitive:account][cn]第三方帐号  */
    HWM_CHAR userDescription[HWM_MAX_DESCRIPTION_LEN]; /**< [en]description. 
                                                            [cn]描述信息  */
    HWM_CHAR type[HWM_MAX_USER_ID_LEN];                /**< [en]type. 
                                                            [cn]类型： NORMAL_USER=普通用户，HARD_TERMINAL=硬终端用户、智慧屏、IdeaHub，WHITE_BOARD=第三方白板  */
    HWM_CHAR userType[HWM_MAX_USER_TYPE_LENGTH];       /**< [en]userType. 
                                                            [cn]用户类型。 CORP_MEMBER=企业成员账户；REGISTER_MEMBER=注册账户,通过手机、邮箱注册的用户，权限等同于企业成员用户；CORP_DEVICE_MEMBER=企业设备帐号；HW_VISION_MEMBER=智慧屏用户；IDEA_HUB_MEMBER=IDEA_HUB  */
    HWM_UINT64 updateTime;                             /**< [en]update time. 
                                                            [cn]用户信息最后更新时间 */
}UserInfo;

/**
* [en]This structure is used to describe xxx
* [cn]查询用户信息结果信息
* @ios:disable
**/
typedef struct tagQueryUserResultInfo
{
    HWM_INT32 queryUserInfoResultNum;                  /**< [length for pQueryUserInfoList]
                                                            [en]Indicates xxx.
                                                            [cn]查询返回用户信息数量 */
    UserInfo *pQueryUserInfoList;                      /**< [en]Indicates xxx.
                                                            [cn]查询用户信息结果信息列表 */
}QueryUserResultInfo;

/**
* [en]This structure is used to describe single server information.
* [cn]单个服务器信息
* @mobile:disable
*/
typedef struct tagServerAddrInfo
{
    HWM_UINT32  serverPort;                            /**< [en]Indicates the server port. 
                                                            [cn]服务器端口号 */
    HWM_CHAR    serverUri[HWM_MAX_URL_LEN];            /**< [en]Indicates the server address. 
                                                            [cs_sensitive:ip][cn]服务器地址 */
} ServerAddrInfo;

/**
* [en]This structure is used to describe detect server information.
* [cn]探测服务器信息
* @mobile:disable
*/
typedef struct tagLoginDetectServer
{
    HWM_UINT32 serverNum;                                        /**< [en]Indicates the number of servers. 
                                                                      [cn]服务器个数 
                                                                      [cs_allowNull:N] */
    ServerAddrInfo srvMedia[HWM_MAX_DETECT_SERVER_NUM];          /**< [en]Indicates Server IP (Port Reservation). 
                                                                      [cn]音视频探测服务IP(端口预留) 
                                                                      [cs_allowNull:N][cs_length:1-4] */
    ServerAddrInfo srvDesk[HWM_MAX_DETECT_SERVER_NUM];           /**< [en]Indicates Server IP (Port Reservation). 
                                                                      [cn]数据会议探测服务IP(端口预留) 
                                                                      [cs_sensitive:ip][cs_allowNull:N][cs_length:1-4] */
} LoginDetectServer;

/**
* [en]This structure is used to describe query version info
* [cn]查询版本请求信息
**/
typedef struct tagVersionInfo {
    HWM_UINT32            serverPort;                                          /**< [en]Indicates the server port. 
                                                                                    [cn]服务器端口号 
                                                                                    [cs_allowNull:Y] */
    HWM_CHAR              serverUrl[HWM_MAX_URL_LEN];                          /**< [en]Indicates the server address. 
                                                                                    [cn]服务器地址 
                                                                                    [cs_sensitive:ip][cs_allowNull:Y][cs_length:0-256] */
    HWM_CHAR              userAccount[HWM_MAX_NAME_LEN];                       /**< [en]Indicates the account. 
                                                                                    [cn]帐号 
                                                                                    [cs_sensitive:account][cs_allowNull:Y][cs_length:0-256] */
    HWM_CHAR              softwareType[HWM_MAX_PRODUCT_NAME_LEN];              /**< [en]Indicates the software type. 
                                                                                    [cn]软终端类型
                                                                                    [cs_allowNull:Y][cs_length:0-256] */
    HWM_CHAR              currentVersion[HWM_MAX_SOFTWARE_VER_LEN];            /**< [en]Indicates the server version. 
                                                                                    [cn]当前软终端版本号版本 
                                                                                    [cs_allowNull:Y][cs_length:0-128] */
    HWM_UINT32            lastestLoginedType;                                  /**< [en]Indicates the latest logined server type, 1 indicate mdx, 2 indicate cms. 
                                                                                    [cn]上次登录服务器类型,1表示cms,2表示mdx
                                                                                    [cs_allowNull:Y] */
}VersionInfo;

/**
* [en]This structure is used to describe query version result
* [cn]查询版本请求结果
**/
typedef struct tagQueryVersionInfoResult {
    HWM_CHAR              userAccount[HWM_MAX_NAME_LEN];                          /**<  [en]Indicates the account. 
                                                                                        [cn]帐号 */
    HWM_CHAR              softwareType[HWM_MAX_PRODUCT_NAME_LEN];                 /**<  [en]Indicates the software type. 
                                                                                        [cn]软终端类型*/
    HWM_CHAR              upgradingVersion[HWM_MAX_SOFTWARE_VER_LEN];             /**<  [en]Indicates the version to be upgrading. 
                                                                                        [cn]待升级软终端版本号*/
    HWM_CHAR              versionPath[HWM_MAX_URL_LEN];                           /**<  [en]Indicates the upgrading file path. 
                                                                                        [cn]待升级软终端版本路径*/
    HWM_CHAR              versionDescription[HWM_MAX_VERSION_DESCRIPTION_LEN];    /**<  [en]Indicates the version modification description. 
                                                                                        [cn]版本修改描述*/
    HWM_BOOL              isForceUpgrade;                                         /**<  [en]Indicates whether is mandatory upgrade. 
                                                                                        [cn]是否为强制升级*/
    HWM_BOOL              isConsistent;                                           /**<  [en]Indicates whether is the same with newest version. 
                                                                                        [cn]是否版本一致*/
    HWM_CHAR              redirectUrl[HWM_MAX_URL_LEN];                           /**<  [en]Indicates the redirect url. 
                                                                                        [cn]重定向地址 */
    HWM_CHAR              serviceDomain[HWM_MAX_DOMAIN_LENGTH];                   /**<  [en]Indicates the service domain. 
                                                                                        [cs_sensitive:ip][cn]服务器地址 */
    HWM_CHAR              serviceIpList[HWM_MAX_DOMAIN_LENGTH];                   /**<  [en]IP list. 
                                                                                        [cs_sensitive:ip][cn]ip列表，可能存在多个ip */
    HWM_CHAR              versionDescriptionEn[HWM_MAX_VERSION_DESCRIPTION_LEN];  /**<  [en]Indicates the version modification description. 
                                                                                        [cn]版本修改英文描述*/
    HWM_BOOL              isTrialVersion;
}QueryVersionInfoResult;

/**
* [en]This structure is used to describe download upgrade info
* [cn]下载版本请求信息
* @ios:disable
**/
typedef struct tagDownloadUpgradeInfo {
    HWM_UINT32            downloadTimeout;                                            /**< [en]Indicates the download file timeout time. 
                                                                                           [cn]下载超时时间，单位：s
                                                                                           [cs_allowNull:N] */
    HWM_CHAR              versionPath[HWM_MAX_VERSION_DOWNLOAD_URL_LEN];              /**< [en]Indicates the upgrading file path. 
                                                                                           [cn]待升级软终端版本下载路径
                                                                                           [cs_sensitive:path][cs_allowNull:N][cs_length:1-512] */
    HWM_CHAR              filePath[HWM_MAX_PATH_LEN];                                 /**< [en]Indicates the upgrading file path. 
                                                                                           [cn]版本文件存储路径
                                                                                           [cs_sensitive:path][cs_allowNull:N][cs_length:1-256] */
    HWM_BOOL              keepDownload;                                               /**< [en]Indicates whether is resuming download. 
                                                                                           [cn]是否断点续传
                                                                                           [cs_allowNull:N] */
    HWM_UINT32            localFileSize;                                              /**< [en]Indicates the size of the file that has downloaded. 
                                                                                           [cn]已下载的本地文件大小
                                                                                           [cs_allowNull:N] */
}DownloadUpgradeInfo;

/**
* [en]This structure is used to describe the upload file type
* [cn]上传文件类型
* @ios:disable
**/
typedef enum tagUploadFileType
{
    UPLOAD_FILE_TYPE_COMPLAINT,                                          /**< [en]Indicates the complaint file. 
                                                                              [cn]吐槽文件 */
    UPLOAD_FILE_TYPE_LOG                                                 /**< [en]Indicates the log file. 
                                                                              [cn]日志文件 */
} UploadFileType;

/**
* [en]This structure is used to describe upload request info
* [cn]上传文件请求信息
* @ios:disable
**/
typedef struct tagUploadInfo {
    HWM_CHAR                 fileName[HWM_MAX_FILE_NAME_LEN];                     /**< [en]Indicates the name of the file to be uploaded.
                                                                                       [cn]文件名称，上层保证单纯是文件名称(***.zip)*/
    UploadFileType           fileType;                                            /**< [en]Indicates the type of the file to be uploaded. 
                                                                                       [cn]上传文件类型*/
    HWM_BOOL                 isLogined;                                           /**< [en]Indicates the type of the file to be uploaded. 
                                                                                       [cn]上传文件类型*/
    HWM_CHAR                 serverAddr[HWM_MAX_DOMAIN_LENGTH];                   /**< [en]
                                                                                       [cs_sensitive:ip][cn]服务器地址*/
    HWM_UINT32               serverPort;                                          /**< [en] 
                                                                                       [cn]服务器端口*/
    HWM_CHAR                 userId[HWM_MAX_ACCOUNT_LEN];                         /**< [en]
                                                                                       [cn]用户id*/
}UploadInfo;

/**
* [en]This structure is used to describe upload info request result
* [cn]上传文件请求结果
* @ios:disable
**/
typedef struct tagRequestUploadInfoResult {
    HWM_CHAR              uploadServerUrl[HWM_OBS_URL_LENGTH];           /**< [en]Indicates the redirect url. 
                                                                              [cs_sensitive:ip][cn]上传文件的地址 */
    HWM_CHAR              contentType[HWM_CONTENT_TYPE_LEN];             /**< [en]Indicates the date string. 
                                                                              [cn]contentType */
    HWM_CHAR              method[HWM_CONTENT_TYPE_LEN];                  /**< [en]Indicates the redirect url. 
                                                                              [cn]method */
}RequestUploadInfoResult;

/**
* [en]This structure is used to mac addr.
* [cn]mac地址
* @mobile:disable
*/
typedef struct tagMacAddr
{
    HWM_CHAR addr[HWM_MAX_MAC_LEN];                     /**< [en]Indicates the mac.  [cn]mac地址 */
}MacAddr;

/**
* [en]This structure is used to describe cupid.
* [cn]cupid信息
* @mobile:disable
*/
typedef struct tagCpuId
{
    HWM_CHAR id[HWM_MAX_CPUID_LEN];                     /**< [en]Indicates the cpu id.  [cn]CPUID */
}CpuId;

/**
* [en]This structure is used to describe device info request result.
* [cn]查询本地设备信息的返回结果
* @mobile:disable
*/
typedef struct tagDeviceInfo
{
    HWM_INT32 cpuCount;                                               /**< [length for cpuid][en]Indicates the cpu count.  [cn]CPU个数 */
    CpuId* cpuid;                                                     /**< [en]Indicates the cpu id.  [cn]CPUID */
    HWM_INT32 netAdapterCount;                                        /**< [length for mac][en]Indicates the net adapter count.  [cn]网卡数量 */
    MacAddr* mac;                                                     /**< [en]Indicates the mac.  [cn]mac地址 */
    HWM_CHAR guid[HWM_UTILS_MAX_DEVICE_GUID_LEN];                     /**< [en]Indicates the guid.  [cn]guid */
}DeviceInfo;

/**
* [en]This structure is result of get projiect code
* [cn]获取投影码结果结构体
* @ios:disable
*/
typedef struct tagProjectionCodeInfo
{
    HWM_CHAR projectCode[HWM_MAX_PROJECTION_CODE_LEN];  /**< [en]Indicates projection code. 
                                                             [cn]投影码 */
    HWM_CHAR tmpKey[HWM_MAX_KEY_LEN];                   /**< [en]Indicates temp key. 
                                                             [cn]临时密码 */
    HWM_UINT32 validTime;                               /**< [en]Indicates valid time. 
                                                             [cn]有效时间 */
} ProjectionCodeInfo;

typedef struct tagCommonConfig
{
    HWM_CHAR key[HWM_MAX_KEY_LEN];
    HWM_CHAR value[HWM_MAX_VALUE_LEN];
}CommonConfig;

/**
* [en]This structure is used to describe corp config
* [cn]企业配置参数
**/
typedef struct tagCorpConfigParam
{
    HWM_BOOL hasRecordPerm;                             /**< [en]Indicates has record permission.
                                                        [cn]是否有录播权限 */
    HWM_BOOL enablePstn;                                /**< [en]Indicates enable Pstn.
                                                        [cn]是否支持Pstn */
    HWM_BOOL enableAiConfRecord;                        /**< [en]Indicates xxx.
                                                        [cn]是否支持AI录制 */
    HWM_CHAR sensitiveWord[HWM_MAX_SENSITIVE_WORD_LEN]; /**< [en]Indicates the sensitive word.
                                                        [cs_sensitive:word][cn]敏感词 */
    HWM_BOOL isSMSEnable;                               /**< [en]Indicates xxx.
                                                        [cn]是否发送短信通知 */
    HWM_BOOL enableHighResolution;                      /**< [en]Indicates xxx.
                                                        [cn]企业是否支持高清的配置项 */
    HWM_CHAR pstnNumber[HWM_MAX_SIP_NUMBER_LENGTH];     /**< [en]Indicates the pstn number.
                                                        [cs_sensitive:phone][cn] pstn号码 */
    HWM_BOOL supportWaitingRoom;                        /**< [en]Indicates support waiting room.
                                                        [cn]是否支持等候室功能 */
    HWM_BOOL supportVad;                                /**< [en]Indicates support VAD.
                                                        [cn]是否支持音频VAD */
    HWM_UINT32 configNumber;                            /**< [length for commonConfigs] [en]Indicates common config number.
                                                        [cn]通用配置数量 */
    CommonConfig *commonConfigs;                        /**< [en]Indicates common config.
                                                        [cn]通用配置 */
    HWM_CHAR corpName[HWM_MAX_CORP_NAME_LEN];            /**< [en]Indicates the corp name.
                                                        [cs_sensitive:name][cn] 企业名称 */
    AdminType adminType;                                /**< [en]Indicates administrator type.
                                                        [cn]管理员类型 */
    HWM_BOOL isCorpEnableInvitation;                    /**< [en]Indicates xxx.
                                                        [cn]企业邀请能力 */
    HWM_UINT32 shareProgrameType;                       /**< [en]Indicates share programe type.
                                                        [cn]共享程序类型 */
    HWM_UINT32 vmrPkgCount;                             /**< [en]Indicates package count.
                                                        [cn]资源包数量 */
    HWM_UINT32 vmrPkgUsedCount;                         /**< [en]Indicates used package count.
                                                        [cn]已分配资源包数量 */
    HWM_BOOL enableDetectMaxBWE;                        /**< [en]Indicates xxx.
                                                        [cn]是否开启探高 */
    HWM_UINT32 maxBitrateValue;                         /**< [en]Indicates xxx.
                                                        [cn]探高上限值 */
    HWM_BOOL barrageSwitch;                             /**< [en]Indicates barrage switch.
                                                        [cn]弹幕开关 */
    HWM_BOOL allowGuestStartConf;                       /**< [en]Indicates whether is allow guest start conf.
                                                        [cn]是否允许来宾提前启动会议默认值 */
    HWM_INT32 allowGuestStartConfTime;                  /**< [en]Indicates join before host time.
                                                        [cn]允许来宾提前入会时间范围默认值(单位：分钟) 0-随时，n-提前n分钟启动会议 */
    HWM_BOOL corpEnableGuide;                            /**< [en]Indicates corpEnableGuide
                                                        [cn] 是否为体验会议*/
}CorpConfigParam;

/**
* [en]This structure is result of feed back path
* [cn]反馈信息路径
* @mobile:disable
*/
typedef struct tagFeedbackFilePath
{
    HWM_CHAR path[HWM_MAX_COMPRESS_FILE_PATH_LEN];    /**< [en]Indicates the feedback path.
                                                        [cs_sensitive:path][cn] 反馈路径 */
}FeedbackFilePath;

/**
* [en]This structure is info of ops feed back
* [cn]ops反馈信息
* @mobile:disable
*/
typedef struct tagFeedBackInfo
{
    HWM_CHAR userName[HWM_MAX_ACCOUNT_LEN];                   /**< [en]Indicates user name. 
                                                                   [cs_sensitive:name][cn]用户名 */
    HWM_CHAR corpName[HWM_MAX_ACCOUNT_LEN];                   /**< [en]Indicates corp name. 
                                                                   [cs_sensitive:name][cn]组织名称 */
    HWM_CHAR email[HWM_MAX_APPID_EMAIL_LEN];                  /**< [en]Indicates email. 
                                                                   [cs_sensitive:email][cn]邮箱 */
    HWM_CHAR phone[HWM_MAX_PHONE_LEN];                        /**< [en]Indicates phone. 
                                                                   [cs_sensitive:phone][cn]手机号 */
    HWM_CHAR detailContent[HWM_MAX_FEED_BACK_CONTENT_LEN];    /**< [en]Indicates detail content. 
                                                                   [cn]反馈描述 */
} FeedBackInfo;

/**
* [en]This structure is info of compress and upload
* [cn]压缩和上传信息结构体
* @mobile:disable
*/
typedef struct tagCompressAndUploadInfo
{
    FeedbackFilePath* filePath;                                     /**< [en]Indicates compress file path. [cn]要压缩的文件路径 */
    HWM_UINT32 filePathNum;                                         /**< [length for filePath][en]Indicates compress file path num. [cn]要压缩的文件路径数量 */
    HWM_CHAR destPath[HWM_MAX_COMPRESS_FILE_PATH_LEN];              /**< [en]Indicates compress file dest path. [cs_sensitive:path][cn]压缩好后存放的目标路径 */
    HWM_CHAR productName[HWM_MAX_PRODUCT_NAME_LEN];                 /**< [en]Indicates product name. [cn]产品名称 */
    FeedBackInfo feedBackInfo;                                      /**< [en]Indicates ops feed back info. [cn]ops反馈信息 */
} CompressAndUploadInfo;

/**
* [en]This structure is info of upload progress info
* [cn]上传进度信息结构体
* @mobile:disable
*/
typedef struct tagUploadProgressInfo
{
    HWM_ULONG handle;
    HWM_UINT64 ulTotal;
    HWM_UINT64 ulNow;                                                        
}UploadProgressInfo;

/**
* [en]This structure is used to describe download progress info
* [cn]下载版本进度信息
* @ios:disable
**/
typedef struct tagDownloadProgressInfo {
    HWM_UINT32 handle;                                                    /**< [en]Indicates the download file timeout time. [cn]下载句柄*/
    HWM_UINT64 totalFileSize;                                             /**< [en]Indicates the upgrading file path. [cn]总文件大小*/
    HWM_UINT64 curFileSize;                                               /**< [en]Indicates the upgrading file path. [cn]当前文件大小*/
}DownloadProgressInfo;

/**
* [en]This structure is used to describe auth server type
* [cn]鉴权服务类型
**/
typedef enum tagAuthServerType
{
    AUTH_SERVER_TYPE_OAUTH2      /**< [en]Indicates user has not binded. [cn]单点登录*/
}AuthServerType;

/**
* [en]This structure is used to describe xxxx.
* [cn]SSO鉴权信息
*/
typedef struct tagSSOAuthInfo
{
    LoginClientType clientType;                         /**< [en]Indicates the client type. [cn]客户端类型 */

    HWM_CHAR code[HWM_MAX_SSO_CODE_LEN];                /**< [en]Indicates the account username.
                                                        [cn]授权码[cs_sensitive:hide] */
    HWM_CHAR domain[HWM_MAX_SSO_DOMAIN_LEN];            /**< [en]sso domain.
                                                        [cs_sensitive:domain][cn]企业域名[cs_sensitive:domain] */
    AuthServerType authServerType;                      /**< [en]authServerType.
                                                        [cn]oauth2 */
}SSOAuthInfo;

typedef enum tagLoginBasicConfRole
{
    LOGIN_CONF_ROLE_ATTENDEE = 0,    /**< [en]Indicates attendee
                                     <br>[cn]普通与会者 */
    LOGIN_CONF_ROLE_CHAIRMAN,        /**< [en]Indicates chairman
                                     <br>[cn]主席 */
    LOGIN_CONF_ROLE_AUDIENCE        /**< [en]Indicates audience
                                    <br>[cn]观众 */
} LoginBasicConfRole;

typedef enum tagLoginSurveySubmitType
{
    LOGIN_SURVEY_SUBMMIT_PRESENTED = 0,    /**< [en]Indicates attendee
                                     <br>[cn]呈现上报 */
    LOGIN_SURVEY_SUBMMIT_NSS_SATISFY        /**< [en]Indicates chairman
                                      <br>[cn]满意反馈 */
} LoginSurveySubmitType;

typedef enum tagLoginSubEventType
{
    LOGIN_HW_NSS = 1,               /**< [en]Indicates attendee
                              <br>[cn]华为满意度 */
    LOGIN_CONF_NSS,                 /**< [en]Indicates chairman
                              <br>[cn]会议满意 */
    LOGIN_CONF_NOTICE,                /**< [en]Indicates chairman
                                <br>[cn]公告 */
} LoginSubEventType;

/**
/* [en]This struct is used to describe NssSurveyParam param.
* [cn]NSS 调查显示上报参数
*/
typedef struct tagLoginNssSurveyParam
{
    HWM_CHAR  userId[HWM_MAX_USERID_LEN];        /**< [en]Indicates conference access code. [cn]用户ID */
    HWM_CHAR  confId[HWM_MAX_CONF_ID_LEN];       /**< [en]Indicates when creating a meeting, add the create request ID in the call-id field to differentiate multiple sessions created simultaneously. [cn]在创建会议时，在call-id字段添加创建请求ID，用于区分同时创建的多个会议 */
    LoginBasicConfRole  role;                         /**< [en]Indicates role. [cn]会议成员角色 */
    HWM_CHAR  taskUuid[HWM_MAX_CONF_UUID_LEN];        /**< [en]Indicates enterprise task id. [cn] 企业级任务id*/
    LoginSubEventType subEvent;        /**< [en]Indicates NSS subEvent. [cn]事件类型，HW_NSS(华为满意度)、CONF_NSS(会议满意度)、 CONF_NOTICE（公告） */
}LoginNssSurveyParam;


/**
* [en]This struct is used to describe NssSurvey Notification info param.
* [cn]NSS 调查上报参数
*/
typedef struct tagLoginNssSurveyNotifyInfo
{
    HWM_CHAR  taskUuid[HWM_MAX_SHORT_NAME_LEN];       /**< [en]Indicates when creating taskUuid. [cn]企业级任务ID */
    HWM_UINT64  expireTime;                            /**< [en]Indicates the submit expireTime.[cn]有效时长（单位：s ），长期未显示，过期后不需要呈现*/
    HWM_CHAR absoluteUrl[HWM_MAX_URL_LEN];        /**< [en]Indicates  absoluteUrl. [cn] //绝对路径，可供调整打开的H5页面或反馈结果*/
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];        /**< [en]Indicates subject . [cn] 相对路径，反馈结果到MOA服务的接口*/
    LoginBasicConfRole  role;                       /**< [en]Indicates role . [cn] 会议角色*/
    LoginSubEventType subEvent;        /**< [en]Indicates NSS subEvent. [cn]事件类型，HW_NSS(华为满意度)、CONF_NSS(会议满意度)、 CONF_NOTICE（公告） */
}LoginNssSurveyNotifyInfo;

typedef struct tagLoginConfNoticeParam
{
    LoginSubEventType subEvent;        /**< [en]Indicates NSS subEvent. [cn]事件类型，HW_NSS(华为满意度)、CONF_NSS(会议满意度)、 CONF_NOTICE（公告） */
    HWM_CHAR  taskVer[HWM_MAX_PROFILE_LEN];        /**< [en]Indicates event task id. [cn] 事件版本描述（取下发时的task_ver*/
    LoginSurveySubmitType confirmResult;           /**< [en]Indicates the submit event type.*/
    HWM_UINT64  reportTime;                    /**< [en]Indicates the submit ereportTime.[cn]事件上报时间戳（单位：s ）*/
    HWM_CHAR osName[HWM_MAX_OPERATE_SYSTEM_NAME_LEN];       /**< [en]Indicates the operate system name.*/
    HWM_CHAR appVersion[HWM_MAX_CLIENT_VERSION_LEN];        /**< [en]Indicates app version.*/

}LoginConfNoticeParam;

/**
* [en]This struct is used to describe ConfNotice Notification info param.
* [cn]NSS 调查上报参数
*/
typedef struct tagLoginConfNoticeNotifyInfo
{

    HWM_CHAR  taskUuid[HWM_MAX_SHORT_NAME_LEN];       /**< [en]Indicates when creating taskUuid. [cn]企业级任务ID */
    HWM_UINT64  expireTime;                            /**< [en]Indicates the submit expireTime.[cn]有效时长（单位：s ），长期未显示，过期后不需要呈现*/
    HWM_CHAR absoluteUrl[HWM_MAX_URL_LEN];        /**< [en]Indicates  absoluteUrl. [cn] //绝对路径，可供调整打开的H5页面或反馈结果*/
                                                  /**< [en]Indicates role . [cn] 会议角色*/
    LoginSubEventType  subEvent;        /**< [en]Indicates NSS subEvent. [cn]调查事件类型HW_NSS(华为满意度)、CONF_NSS(会议满意度)、 NOTICE（公告） */
    HWM_BOOL isRead;                 /* 该公告是否已阅读 */
}LoginConfNoticeNotifyInfo;

/**
* [en]This structure is used to describe redirect type
* [cn]重定向类型
**/
typedef enum tagRedirectType
{
    NO_REDIRECT = 0,            /**< [en]no need redirect.
                                [cn]不需要重定向*/
    REDIRECT_TO_OTHER_ADDR,     /**< [en]redirect to other huawei cloud server address.
                                [cn]重定向到新的华为云服务地址 */
    REDIRECT_TO_WELINK,         /**< [en]redirect to welink.
                                [cn]重定向到welink */
    REDIRECT_TO_IDEAMANAGER,    /**< [en]redirect to ideamanager.
                                [cn]重定向到ideamanager */
}RedirectType;

/**
* [en]This structure is used to describe redirect type
* [cn]激活平台类型
**/
typedef enum tagActivePlatformType
{
    PLATFORM_HUAWEI_MEETING = 0,    /**< [en]huawei meeting
                                         [cn]华为云*/
    PLATFORM_WELINK,                /**< [en]welink
                                         [cn]welink */
    PLATFORM_IDEAMANAGER,           /**< [en]ideamanager.
                                         [cn]ideamanager */
}ActivePlatformType;

END_HWM_SDK_NAMESPACE
#endif /* __HWM_LOGIN_SERVICE_DEF_H__ */

