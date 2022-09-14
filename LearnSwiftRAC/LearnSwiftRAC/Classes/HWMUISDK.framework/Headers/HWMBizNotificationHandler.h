//
//  HWMBizNotificationHandler.h
//  HWMUISDK
//
//  Created by y00450113 on 2020/8/3.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMBaseConfDetailParam.h"
NS_ASSUME_NONNULL_BEGIN

@protocol HWMBizNotificationHandler <NSObject>

@optional
/// 个人角色是否是主持人变化通知
/// @param isChairMan 是否是主持人
- (void)onSelfIsChairManChanged:(BOOL)isChairMan;

/// 会议列表变化通知
/// @param confList 会议列表
- (void)onReceiveConfList:(NSArray<HWMBaseConfDetailParam *> *)confList;

/// 录播权限更新通知
/// @param isHasPermission 是否允许
- (void)onRecordPermissionNotify:(BOOL)isHasPermission;

/// 预约会议发送短信权限更新通知
/// @param isHasPermission 是否允许
- (void)onBookConfSmsPermissionNotify:(BOOL)isHasPermission;

@end

NS_ASSUME_NONNULL_END
