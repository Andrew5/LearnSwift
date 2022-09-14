//
//  HWMConfToolBarMenu.h
//  HWMConfUI
//
//  Created by y00450113 on 2020/5/5.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMConfMenuItem.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMConfToolBarMenuItem : HWMConfMenuItem

@property (nonatomic, strong) UIImage *image; // normal image
@property (nonatomic, strong) UIImage *hightlightImage; // highlight image
@property (nonatomic, strong) UIImage *selectedImage; // selected image
@property (nonatomic, strong) UIImage *selectedHighlightImage; // selected highlight image
@property (nonatomic, strong) UIImage *disableImage; // disable image

@property (nonatomic, copy) void(^menuClickEvent)(HWMConfCtrlType type, UIButton *menuItemBtn);
- (instancetype)initWithType:(HWMConfCtrlType)type text:(NSString *)text image:(UIImage *)image;

- (instancetype)init NS_UNAVAILABLE;

- (void)setImage:(UIImage *)normalImage highlightImage:(UIImage *)highlightImage;
- (void)setImage:(UIImage *)normalImage highlightImage:(UIImage *)hightlightImage selectedImage:(UIImage *)selectedImage selectedHighlightImage:(UIImage *)selectedHighlightImage;

/// 默认开关摄像头
+ (HWMConfToolBarMenuItem *)defaultVideoItem;

/// 默认mic静音
+ (HWMConfToolBarMenuItem *)defaultMicItem;

/// 默认 屏幕共享
+ (HWMConfToolBarMenuItem *)defaultScreenShareItem;


/// 默认 与会者列表
+ (HWMConfToolBarMenuItem *)defaultAttendeeItem;


/// 默认 更多
+ (HWMConfToolBarMenuItem *)defaultMoreItem;


/// 默认 扬声器 听筒
+ (HWMConfToolBarMenuItem *)defaultLoudSpeakItem;


/// 默认 音频 转 视频
+ (HWMConfToolBarMenuItem *)defaultTransToVideoItem;

/// 默认 音视频通话 邀请
+ (HWMConfToolBarMenuItem *)defaultInviteItem;

/// 默认 与会者列表 全场静音
+ (HWMConfToolBarMenuItem *)defaultMuteAllItem;

/// 默认 与会者列表 取消全场静音
+ (HWMConfToolBarMenuItem *)defaultUnmuteAllItem;

/// 默认 与会者列表 举手
+ (HWMConfToolBarMenuItem *)defaultHandupItem;

/// 与会者列表 申请主持人
+ (HWMConfToolBarMenuItem *)defaultRequestChairmanItem;

/// 与会者列表 更多
+ (HWMConfToolBarMenuItem *)defaultMemberListMoreItem;

/// 分享
+ (HWMConfToolBarMenuItem *)defaultShareItem;

/// 选择联系人
+ (HWMConfToolBarMenuItem *)defaultAddressBookItem;

/// 扫一扫
+ (HWMConfToolBarMenuItem *)defaultQRScanItem;

/// 聊天
+ (HWMConfToolBarMenuItem *)defaultChatItem;

/// 观众观看
+ (HWMConfToolBarMenuItem *)defaultAudienceWatch;

/// 投票
+ (HWMConfToolBarMenuItem *)defaultVoteItem;

@end

NS_ASSUME_NONNULL_END
