//
//  HWMOpenApi.h
//  HWMUISDK
//
//  Created by 融合软终端02 on 2020/3/27.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMCreateConfParam.h"
#import "HWMJoinConfParam.h"
#import "HWMRandomConfParam.h"
#import "HWMStartCallParam.h"
#import "HWMSdkDefine.h"
#import "HWMConfSdkErrorDefine.h"
#import "HWMContactSelectedModel.h"
#import "HWMCreateConfParamExtra.h"
#import "HWMAppIDLoginParam.h"
#import "HWMSSOLoginParam.h"
NS_ASSUME_NONNULL_BEGIN

@interface HWMOpenApi : NSObject

/// 登录接口
/// @param account 账号
/// @param password 密码
/// @param callback 结果回调，返回登录用户的UUID
- (void)login:( NSString * _Nonnull )account password:( NSString * _Nonnull )password callback:(_Nonnull HWMSDKLoginCompleteHandler)callback;

/// 登录接口
/// @param appidInfo 使用APPID登录的信息
/// @param callback 结果回调，返回登录用户的UUID
- (void)login:(HWMAppIDLoginParam *)appidInfo callback:(HWMSDKLoginCompleteHandler)callback;

/// SSO登录接口
/// @param param sso登录参数
/// @param callback 结果回调
- (void)loginBySSO:(HWMSSOLoginParam *)param callback:(_Nonnull HWMSDKLoginCompleteHandler)callback;

/// 创建会议
/// @param param 创会参数， 详见 HWMCreateConfParam
/// @param callback 结果回调
- (void)createConf:(HWMCreateConfParam * _Nonnull)param callback:( _Nonnull HWMSDKCreateConfCompleteHandler)callback;


/// 加入会议
/// @param param 入会参数，详见 HWMJoinConfParam
/// @param callback 结果回调
- (void)joinConf:(HWMBaseJoinConfParam * _Nonnull)param callback:(_Nonnull HWMSDKCompleteHandler)callback;


/// 发起呼叫
/// @param param 呼叫参数， 详见 HWMStartCallParam
/// @param callback 结果回调
- (void)startCall:(HWMStartCallParam *_Nonnull)param callback:(_Nonnull HWMSDKCompleteHandler)callback;

/// 登出
/// @param callback 结果回调
- (void)logout:(_Nonnull HWMSDKLogoutCompleteHandler)callback;

/// 会中加人
/// @param params 与会者
/// @param handler 结果回调
- (void)addAttendee:(NSArray<HWMContactSelectedModel *> *)params completeHandler:(HWMSDKCompleteHandler)handler;

/// 主持人结束会议
/// @param callback 结果回调（error为nil时表示离会成功）
- (void)endConf:(HWMSDKCompleteHandler)callback;

/// 离开会议
/// @param callback 结果回调（error为nil时表示离会成功）
- (void)leaveConf:(HWMSDKCompleteHandler)callback;

/// 设置会议来电时是否响铃或者震动（登录后使用，未登录或未初始化返回NO，设置成功返回YES）
/// @param ring 是否响铃（默认打开）
/// @param vibrate 是否振动（默认关闭）
- (BOOL)changeInComingNoticeWithRing:(BOOL)ring vibrate:(BOOL)vibrate;
@end

NS_ASSUME_NONNULL_END
