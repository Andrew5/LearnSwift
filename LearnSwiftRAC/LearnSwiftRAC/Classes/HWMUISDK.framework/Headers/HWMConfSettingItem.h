//
//  HWMConfSettingItem.h
//  HWMConfUI
//
//  Created by y00450113 on 2020/7/6.
//  Copyright © 2020 huawei. All rights reserved.
//

#import "HWMConfMenuItem.h"

NS_ASSUME_NONNULL_BEGIN
typedef NS_OPTIONS (NSUInteger, HWMConfSettingViewType) {
    /*****************
     -------------------------
     text              |on|off|
     -------------------------
     ******************/
    HWMConfSettingViewTypeSwitch = 2,    // 左边文字 + 右边开关
    /*****************
    --------------------------
     text                    >
    --------------------------
    ******************/
    HWMConfSettingViewTypeEnter  =  3,    // 左文字 + 右箭头
    /*****************
    --------------------------
     text                  text  >
    --------------------------
    ******************/
    HWMConfSettingViewTypeEnterWithRightText = 4, // 带右边文本的可进入按钮
    /*****************
     -------------------------
     text image               |on|off|
     -------------------------
     ******************/
    HWMConfSettingViewTypeSwitchWithLeftImage = 5, // 左文字+左图片+右开关
    /*****************
     -------------------------
     text              |on|off|
     text
     -------------------------
     ******************/
    HWMConfSettingViewTypeSwitchWithBottomText = 6, // 左文字+右开关+下文字
};

@interface HWMConfSettingItem : HWMConfMenuItem

@property (nonatomic, assign) HWMConfSettingViewType viewType;
@property (nonatomic, strong) UIImage *leftImage;
/// 开关切换的事件回调,只有 HWMConfSettingItemTypeSwitch 类型会回调
/// isSelected ,表示switch是否开启，YES，开启，NO ，关闭
@property (nonatomic, copy) void (^ switchEvent)(HWMConfCtrlType type, UISwitch *actionSwitch);

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initItemWithType:(HWMConfCtrlType)type
                            text:(NSString *)text
                        viewType:(HWMConfSettingViewType)viewType;

- (instancetype)initSwitchItemWithType:(HWMConfCtrlType)type
                                  text:(NSString *)text;

- (instancetype)initEnterItemWithType:(HWMConfCtrlType)type text:(NSString *)text;

- (instancetype)initEnterItemWithRightTextType:(HWMConfCtrlType)type text:(NSString *)text rightText:(NSString *)rightText;

// 啸叫检测开关
+ (HWMConfSettingItem *)defaultHowlDetection;

// 美颜开关
+ (HWMConfSettingItem *)defaultBeautyItem;


//锁定会议开关
+ (HWMConfSettingItem *)defaultLockItem;

//允许与会者
+ (HWMConfSettingItem *)defaultAllowAttendeeUnmuteItem;

// 锁定共享
+ (HWMConfSettingItem *)defaultLockShareItem;

// 本地录制权限
+ (HWMConfSettingItem *)defaultLocalRecordRights;

// 网络检测
+ (HWMConfSettingItem *)defaultNetworkDetectItem;

/// 反馈
+ (HWMConfSettingItem *)defaultFeedbackItem;

/// 默认 隐藏小画面
+ (HWMConfSettingItem *)defaultHideSmallVideoItem;

/// 允许入会
+ (HWMConfSettingItem *)defaultAllowJoinConf;

///开启等候室
+ (HWMConfSettingItem *)defaultWaitingRoom;

/// 允许入会
+ (HWMConfSettingItem *)defaultAllowChat;

/// 聊天消息提醒
+ (HWMConfSettingItem *)defaultChatRemindItem;

/// 视频镜像
+ (HWMConfSettingItem *)defaultMirror;

/// 允许启动视频
+ (HWMConfSettingItem *)defaultAllowAttendeeOpenCameraItem;

/// 允许改名
+ (HWMConfSettingItem *)defaultAllowRenameItem;

@end

NS_ASSUME_NONNULL_END
