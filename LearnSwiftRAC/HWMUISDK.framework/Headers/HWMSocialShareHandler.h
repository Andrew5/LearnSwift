//
//  HWMConfUIHandler.h
//  HWMConfUI
//
//  Created by 融合软终端02 on 2020/3/11.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMConfDetail.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSInteger {
    HWMShareConfTypeNormal, // 普通会议分享
    HWMShareConfTypePanelist, // 网络研讨会-分享给嘉宾
    HWMShareConfTypeAudience, // 网络研讨会-分享给观众
    HWMShareConfTypeInviteAndShare, // 会中邀请和分享
}HWMShareConfType;

typedef NS_ENUM(NSInteger, HWMShareConfFromPage) {
    HWMShareConfFromPageConfInfo,   // 会议详情分享
    HWMShareConfFromPageMemberList, // 与会者列表分享
    HWMShareConfFromPageInMeeting   // 会议界面分享
};

@protocol HWMSocialShareHandler <NSObject>
@optional

/// 分享会议拦截处理函数，如果实现该协议方法，则会中调用分享功能，会回调到该方法
/// @param confInfo 会议信息
/// @param isAnonymous 匿名入会
/// @param controller 当前的vc，接入方可以在当前controller上弹出自己的定制分享页面
- (void)shareConf:(HWMConfDetail *)confInfo isAnonymous:(BOOL)isAnonymous inCtrl:(UIViewController *)controller;

/// 分享会议拦截处理函数，如果实现该协议方法，则会中调用分享功能，会回调到该方法
/// @param confInfo 会议信息
/// @param isAnonymous 匿名入会
/// @param controller 当前的vc，接入方可以在当前controller上弹出自己的定制分享页面
/// @param fromPage 分享页
/// @param shareType 分享入口
/// @param sharer 分享人
- (void)shareConf:(HWMConfDetail *)confInfo isAnonymous:(BOOL)isAnonymous inCtrl:(UIViewController *)controller fromPage:(HWMShareConfFromPage)fromPage shareType:(HWMShareConfType)shareType sharer:(HWMEnterpriseContact *)sharer;

/// 设置会议二维码分享页面logo数组，数组数量为1个，图片需要3x图
/// 第一个尺寸为60*60
- (NSArray <UIImage *>*)getShareLogoImages;

/// 设置会议二维码分享页面品牌名
- (NSString *)getBrandName;
@end

NS_ASSUME_NONNULL_END
