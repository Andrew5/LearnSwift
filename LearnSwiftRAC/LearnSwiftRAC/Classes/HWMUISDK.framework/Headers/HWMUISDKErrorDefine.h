//
//  HWMUISDKErrorDefine.h
//  HWMUISDK
//
//  Created by 融合软终端02 on 2020/4/2.
//  Copyright © 2020 huawei. All rights reserved.
//

#ifndef HWMUISDKErrorDefine_h
#define HWMUISDKErrorDefine_h

/// UISDK 错误码
typedef NS_ENUM(NSUInteger, HWMUISDKErrorCode) {
    // 40000 为通用错误码
    HWMUISDKErrorCodeContactNotFound = 40000,
    HWMUISDKErrorCodeNumberAndAccountEmpty = 40001,
    HWMUISDKErrorCodeArgsError = 40002,
    HWMUISDKErrorCodeRepeatRequest= 40003,
    HWMUISDKErrorCodeTimeOut = 40004,                 /**< 超时 40004*/
    HWMUISDKErrorCodeUnInit = 40005,                  /**< 未初始化 40005*/
    HWMUISDKErrorCodeArgsLengthOverrun = 40006,       /**< 参数长度超限 40006*/
    HWMUISDKErrorCodePasswordOrAccountEmpty = 40007,
    HWMUISDKErrorCodeConfIdEmpty = 40008,
    HWMUISDKErrorCodeUnLogin = 40009,                 /**< 未登录 40009*/
    HWMUISDKErrorCodeLoginIng = 40010,                /**< 登录中 40010*/
    HWMUISDKErrorCodeSubjectTooLong = 40011,
    HWMUISDKErrorCodeConfIdTooLong = 40012,
    HWMUISDKErrorCodeConfOrCallExit = 40013,          /**< 正在会议或呼叫中 40013*/
    HWMUISDKErrorCodeAPPIDInfoIllegal = 40014,        /**< APPID 信息入参不合法 40014*/
    HWMUISDKErrorCodeNetworkUnreachable = 40015,      /**< 网络不可用 40015*/
    HWMUISDKErrorCodeFilePathEmpty = 40016,           /**< 图片路径为空 40016*/
    HWMUISDKErrorCodeNotInMeeting = 40017,            /**< 没有在会议中 40017*/
    HWMUISDKErrorCodeNoPermissionAddAttendee = 40018, /**< 没有权限添加与会者 40018*/
    HWMUISDKErrorCodeNoPermissionEndConf = 40019,     /**< 没有权限结束会议 40019*/
    HWMUISDKErrorCodeLeaveConfFail = 40020,           /**< 离开会议失败 40020*/
    HWMUISDKErrorCodeLogined = 40021,                 /**< 已登录 40021*/
    // 41000 为会议错误码
};

static NSString * const HWMErrorMsgContactNotFound = @"联系人不存在";
static NSString * const HWMErrorMsgContactArgsEmpty = @"账号和号码不能都为空";
static NSString * const HWMErrorMsgArgsError = @"参数错误";
static NSString * const HWMErrorMsgRepeatRequest = @"重复调用方法";
static NSString * const HWMErrorMsgTimeOut = @"调用方法超时";
static NSString * const HWMErrorMsgUnInit = @"sdk 未初始化";
static NSString * const HWMErrorMsgArgsLengthOverrun = @"参数长度超限";
static NSString * const HWMErrorMsgContactPasswordOrAccountEmpty = @"账号或密码不能都为空";
static NSString * const HWMErrorMsgConfIdEmpty = @"会议id不能为空";
static NSString * const HWMErrorMsgUnLogin = @"未登录";
static NSString * const HWMErrorMsgLoginIng = @"登录中";
static NSString * const HWMErrorMsgSubjectTooLong = @"会议主题长度不能超过50";
static NSString * const HWMErrorMsgConfIdTooLong = @"会议ID长度不能超过20";
static NSString * const HWMErrorMsgConfOrCallExit = @"您正处在会议或者呼叫中";
static NSString * const HWMErrorMsgContactAPPIDInfoIllegal = @"APPID登录参数错误";
static NSString * const HWMErrorMsgNetworkUnreachable = @"网络不可用，请检查网络设置";
static NSString * const HWMErrorMsgImageArgsEmpty = @"图片路径不能为空";
static NSString * const HWMErrorMsgNotInMeeting = @"没有在会议中";
static NSString * const HWMErrorMsgNoPermissionAddAttendee = @"没有权限添加与会者";
static NSString * const HWMErrorMsgNoPermissionEndConf = @"没有权限结束会议";           /**< 没有权限结束会议 */
static NSString * const HWMErrorMsgLeaveConfFail = @"离开会议失败";                    /**< 离开会议失败 */
static NSString * const HWMErrorMsgLogined = @"已登录";                               /**< 已登录 */
static NSString * const HWMErrorMsgNoSystemPermissionTimeOut = @"调用方法超时，没有系统权限";

#endif /* HWMConfUIErrorDefine_h */
