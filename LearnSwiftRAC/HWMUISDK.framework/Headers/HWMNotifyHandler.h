//
//  HWMNotifyHandler.h
//  HWMUISDK
//
//  Created by 融合软终端02 on 2020/2/17.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMSdkDefine.h"
#import "HWMCallRecordInfo.h"
#import "HWMEnterpriseRoleChangeModel.h"
#import "HWMSDKConfIncomingInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

@protocol HWMNotifyHandler <NSObject>
@optional

/// 账号被踢，收到该通知表示账号已经在其他设备登录，如果需要继续操作，需要重新调用登录接口
/// 可选，建议接入方实现，在被T时给用户合理提示
/// @param result uuid
- (void)onKickedOut:(NSString *)result;

/// 通话状态变更通知
/// 可选
/// @param status 呼叫状态
- (void)onCallStatusChanged:(HWMSDKCallStatus)status;

/// 会议状态变更通知
/// 可选
/// @param status 会议状态
- (void)onConfStatusChanged:(HWMSDKConfStatus)status;

/// 会议结束
/// @param confEndCode 会议结束错误码
- (void)onConfEndedNotify:(HWMSDKERR)confEndCode;

/// Token 刷新通知
/// 可选
- (void)onLoginTokenChanged:(NSString *)token;

/// 登录失败消息通知
- (void)onLoginError:(NSError *)error;

/// 通话结束通话记录通知
/// @param callInfo 通话记录
- (void)onCallEnded:(HWMCallRecordInfo *)callInfo;

- (void)onUserStatusInEnterpriseChanged:(HWMEnterpriseRoleChangeModel *)model;

/// 会中：会议详情通知。接入方可用于做会中分享等
/// @param confDetail 会议详情
- (void)onConfDetailNotify:(HWMConfDetail *)confDetail;

/// 会前：会议来电通知
/// @param confIncomingInfo 会议信息
- (void)onConfIncomingNotify:(HWMSDKConfIncomingInfoModel *)confIncomingInfo;

@end

NS_ASSUME_NONNULL_END
