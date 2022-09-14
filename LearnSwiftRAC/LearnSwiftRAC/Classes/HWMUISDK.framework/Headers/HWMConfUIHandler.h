//
//  HWMConfUIHandler.h
//  HWMConfUI
//
//  Created by l00465337 on 2020/4/22.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMConfToolBarMenuItem.h"

typedef NS_ENUM(NSInteger, HWMJoinConfFailedReason) {
    HWMJoinConfFailedAnonymousNotPermit // 匿名进入无权限的会议, 需要登录
};

NS_ASSUME_NONNULL_BEGIN

@protocol HWMConfUIHandler <NSObject>
@optional
#pragma mark - DataSource
/// 屏幕共享/白板共享的水印视图。注意不要添加全局手势
- (UIView *)screenShareCoverView;

/// 会中界面即将显示 接入方根据需要
- (void)inMeetingViewWillAppear:(UIViewController *)controller;

/// 会中界面即将消失
- (void)inMeetingViewWillDisappear:(UIViewController *)controller;


/// 是否为强制匿名入会, 该字段用于链接入会与会议ID入会时是否强制匿名入会
/// 如过返回true 则会忽略当前的登录状态以匿名身份入会
/// 如无特殊需求请不要调用
- (BOOL)isForceAnonymousJoinConf;

/// 构建匿名入会右上角的菜单
/// 暂不开放
- (NSArray <HWMConfToolBarMenuItem *> *)buildAnonymousTitleBarMenuItems;

/// 即将接听会议（可做二次确认等操作）
/// @param inComingVC 来电界面
/// @param reject 调用该block 拒接 (可选执行)
/// @param accept 调用该block 接听 (可选执行)
- (void)confWillAccept:(UIViewController *)inComingVC reject:(void(^)(void))reject accept:(void(^)(void))accept;


/// 即将加入会议（可做二次确认等操作）
/// @param completion 操作完后执行的回调 （必须执行）
///                   isInterrupt 是否中断当前操作 是则中断并利用warningTip进行相关显示或错误回调
- (void)selfWillJoinConf:(void (^)(BOOL isInterrupt, NSString * _Nullable warningTip))completion;

/// 加入会议失败回调
/// @param reason 失败原因
- (void)joinConfFailed:(HWMJoinConfFailedReason)reason;

@end

NS_ASSUME_NONNULL_END
