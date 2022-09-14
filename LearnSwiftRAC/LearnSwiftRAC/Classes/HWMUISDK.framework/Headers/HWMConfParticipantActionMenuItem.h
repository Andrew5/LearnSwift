//
//  HWMConfParticipantActionMenuItem.h
//  HWMConfUI
//
//  Created by y00450113 on 2020/5/18.
//  Copyright © 2020 huawei. All rights reserved.
//

#import "HWMConfMenuItem.h"
#import "HWMConfParticipant.h"
NS_ASSUME_NONNULL_BEGIN

@interface HWMConfParticipantActionMenuItem : HWMConfMenuItem
@property (nonatomic, copy) void(^actionClickEvent)(HWMConfCtrlType type, HWMConfParticipant *participant);

/// 默认 申请主持人
+ (HWMConfParticipantActionMenuItem *)defaultRequestChairmanItem;

/// 默认移除
+(HWMConfParticipantActionMenuItem *)defaultRemoveAttendeeItem;

// 静音 or 解除静音
+ (HWMConfParticipantActionMenuItem *)defaultMuteItem;


/// 开启 & 关闭 视频(摄像头)
+ (HWMConfParticipantActionMenuItem *)defaultVideoItem;

/// 默认 允许观众说话
+ (HWMConfParticipantActionMenuItem *)defaultAllowedSpeakItem;

/// 默认 选看
+ (HWMConfParticipantActionMenuItem *)defaultWatchItem;

/// 默认 重呼
+ (HWMConfParticipantActionMenuItem *)defaultRecallItem;

/// 默认 挂断
+ (HWMConfParticipantActionMenuItem *)defaultHangupItem;

/// 默认 改名
+ (HWMConfParticipantActionMenuItem *)defaultChangeNickNameItem;

/// 默认 呼叫其他号码
+ (HWMConfParticipantActionMenuItem *)defaultCallOtherNumberItem;

/// 默认 广播
+ (HWMConfParticipantActionMenuItem *)defaultBroadcastItem;

/// 联席主持人
+ (HWMConfParticipantActionMenuItem *)defaultCoHost;

/// 允许/禁止 本地录制
+ (HWMConfParticipantActionMenuItem *)defaultAllowLocalRecordItem;

/// 默认 设置为观众/嘉宾
+ (HWMConfParticipantActionMenuItem *)defaultSwitchAudienceAndAttendeeItem;

/// 查看详情
+ (HWMConfParticipantActionMenuItem *)defaultViewDetails;

/// 移至等候室
+ (HWMConfParticipantActionMenuItem *)defaultMoveToWaitingRoom;

/// 准入
+ (HWMConfParticipantActionMenuItem *)defaultAdmitWaitingRoomParticipant;

/// 移除
+ (HWMConfParticipantActionMenuItem *)defaultRemoveWaitingRoomParticipant;

/// 邀请/取消共享
+ (HWMConfParticipantActionMenuItem *)defaultInviteScreenShareItem;

/// 举报
+ (HWMConfParticipantActionMenuItem *)defaultReportParticipantItem;

/// 私聊
+ (HWMConfParticipantActionMenuItem *)defaultPrivateChatItem;
@end

NS_ASSUME_NONNULL_END
