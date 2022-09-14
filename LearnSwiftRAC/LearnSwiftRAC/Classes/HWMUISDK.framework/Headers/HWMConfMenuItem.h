//
//  HWMConfMenuItem.h
//  HWMConfUI
//
//  Created by y00450113 on 2020/5/5.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>

// 会控类型
typedef NS_ENUM(NSUInteger, HWMConfCtrlType) {
    ConfCtrlMute = 1, //静音 or取消静音
    ConfCtrlVideo = 2, //摄像头打开or关闭
    ConfCtrlScreenShare = 3, // 屏幕共享 or 停止
    ConfCtrlAttendee = 4, // 与会者列表
    ConfCtrlMore = 5, //更多
    ConfCtrlLoudSpeaker = 6, // 扬声器 or 麦克风
    ConfCtrlTransToVideo = 7, // 语音转视频
    ConfCtrlTransToAudio = 8, // 视频转语音
    ConfCtrlMuteAll = 9, // 全场静音
    ConfCtrlUnmuteAll = 10,// 取消全场静音
    ConfCtrlHandup = 11, // 举手
    ConfCtrlRequestChairman = 12, // 申请主持人
    ConfCtrlReleaseChairman = 13, // 释放主持人
    ConfCtrlTransferChairman = 14, // 转移主持人
    ConfCtrlBroadcast = 15,// 广播
    ConfCtrlCallOtherNumber = 16, // 呼叫其他号码
    ConfCtrlChangeNickName = 17, // 改名
    ConfCtrlHangup = 18, //挂断
    ConfCtrlRecall = 19, //重新呼叫
    ConfCtrlWatch = 20,//选看 or 取消选看
    ConfCtrlAllowAttendeeUnmute = 21,//禁止 or允许与会者自己解除静音
    ConfCtrlRecord = 22,//开启录制 or 关闭录制
    ConfCtrlAddressBook = 23, //通讯录
    ConfCtrlShare = 24,//社会化分享
    ConfCtrlSwitchCamera = 25, //切换摄像头，前置 or 后置
    ConfCtrlHideSmallVideo = 26,// 隐藏小画面
    ConfCtrlLock = 27, // 锁定会议
    ConfCtrlInvite = 28, // 邀请
    ConfCtrlBeauty = 29, // 美颜
    ConfCtrlHowlDetection = 30, //啸叫检测
    ConfCtrlLockShare = 31, // 锁定共享
    ConfCtrlQRScan = 32, // 扫一扫
    ConfCtrlNetworkDetect = 33, // 网络检测
    ConfCtrlFeedback = 34, // 反馈
    ConfCtrlRemoveAttendee = 35, // 移除与会者
    ConfCtrlChat = 36, // 聊天
    ConfCtrlSetting = 37, // 会议设置
    ConfCtrlInterpret = 38, /**< 传译  */
    ConfCtrlAllowedSpeak = 39, // 允许观众说话
    ConfCtrlAllowAudienceWatch = 40, // 允许/禁止观众观看
    ConfCtrlCoHost = 41, // 设为/撤销联席主持人
    ConfCtrlLocalRecordSetMode= 42, // 本地录制权限模式
    ConfCtrlLocalRecordGrantAttendee = 43, // 允许/禁止与会者录制 
    ConfCtrlSwitchAudienceAndAttendee = 44, // 观众-嘉宾互转
    ConfCtrlViewDetails = 45, // 查看详情
    ConfCtrlAllowJoinConf = 46, // 允许入会
    ConfCtrlWaitingRoom = 47, // 等候室
    ConfCtrlAllowChat = 48, // 允许聊天
    ConfCtrlMoveToWaitingRoom = 49, // 移至等候室
    ConfCtrlAdmitWaitingRoomParticipant = 50, // 准入
    ConfCtrlRemoveWaitingRoomParticipant = 51, // 移除
    ConfCtrlInviteScreenShare = 52, // 邀请/取消共享
    ConfCtrlChatRemind = 53, //
    ConfCtrlMirror = 54, // 视频镜像
    ConfCtrlAllowAttendeeOpenCamera = 55, // 允许与会者打开摄像头
    ConfCtrlReport = 56, //  举报
    ConfCtrlAllowRename = 57, //  允许改名
    ConfCtrlVote = 58,  //投票
    ConfCtrlPrivateChat = 59, //  私聊
    ConfCtrlVirtualBackground = 60,                     ///<  虚拟背景
    ConfCtrlButt = 61,  /**< 会控枚举的最后一项，新增的item，需要插在本项之前，并将本项依次下移*/
};

// 提示等级
typedef NS_ENUM(NSUInteger, HWMConfMenuItemPromptLevel) {
    HWMConfMenuItemPromptLevelNormal, // 普通
    HWMConfMenuItemPromptLevelWarning,// 警告
};

NS_ASSUME_NONNULL_BEGIN

@interface HWMConfMenuItem : NSObject

@property (nonatomic, assign, readonly) HWMConfCtrlType type;
@property (nonatomic, copy) NSString *text; // 正常文本
@property (nonatomic, copy) NSString *rightText; // 右边文本
@property (nonatomic, copy) NSString *highlightText; // 高亮文本
@property (nonatomic, copy) NSString *selectedText; // 选中文本
@property (nonatomic, assign) BOOL isSelected; // 是否选中，默认false
@property (nonatomic, strong) UIImage *iconImage; //左边图标
@property (nonatomic, strong) UIImage *selectedIconImage; //左边选中图标

/// 提示等级，用于显示会控时标红等，用于提示用户
@property (nonatomic, assign) HWMConfMenuItemPromptLevel promptLevel;
@property (nonatomic, copy) void(^clickEvent)(HWMConfCtrlType type);
@property (nonatomic, copy) NSString *accessIdentify;
- (instancetype)initWithType:(HWMConfCtrlType)type text:(NSString *)text;

- (instancetype)initWithType:(HWMConfCtrlType)type text:(NSString *)text rightText:(NSString *)rightText;

- (instancetype)init NS_UNAVAILABLE;

/// 默认 举手/手放下
+ (instancetype)defaultHandupItem;

/// 默认 释放支持人
+ (instancetype)defaultReleaseChairmanItem;

/// 默认 转移主持人
+ (instancetype)defaultTransferChairmanItem;

/// 默认 允许与会者解除静音
+ (HWMConfMenuItem *)defaultAllowAttendeeUnmuteItem;

/// 默认 锁定会议
+ (HWMConfMenuItem *)defaultLockItem;

/// 默认申请主持人
+ (instancetype)defaultRequestChairmanItem;

@end

NS_ASSUME_NONNULL_END
