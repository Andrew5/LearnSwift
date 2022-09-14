//
//  HWMConfDetail.h
//  HWMConf
//
//  Created by 融合软终端02 on 2020/1/6.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMBaseConfDetailParam.h"
#import "HWMAttendeeInfo.h"
#import "HWMConfSdkDefine.h"
#import "HWMSDKCommonDefine.h"
#import "HWMSDKCycleConfParamModel.h"
#import "HWMSDKSubCycleConfParamModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMConfDetail : HWMBaseConfDetailParam

@property (nonatomic, assign) NSUInteger recordType;        // 可选，录制类型：0.禁用；1.直播；2.录播；3.直播+录播
@property (nonatomic, assign) BOOL scheduleVmr;             // 可选，是否是VMR预约记录：0.普通会议记录；1.VMR预约记录
@property (nonatomic, assign) BOOL isGuestFreePwd;          // 是否来宾免密
@property (nonatomic, assign) BOOL isSendNotify;            //是否发送邮件通知
@property (nonatomic, assign) BOOL isSendSms;               //是否发送短信通知
@property (nonatomic, assign) BOOL isSendCalendarNotify;    //是否发送日历通知
@property (nonatomic, copy) NSString *vmrId;                // 每一个用VMRId创建的会议的标识，编辑会议时用
@property (nonatomic, assign) BOOL inviteHardTerminal;      //是否允许邀请硬终端
@property (nonatomic, copy) NSString *audiencePwd;          // 观众密码
@property (nonatomic, copy) NSString *audienceJoinUri;      // 观众加入会议uri链接
@property (nonatomic, assign) NSUInteger audienceCount;     //观众会场的人数
@property (nonatomic, assign) HWMCallInRestrictionType callInRestriction;   //呼入限制
@property (nonatomic, assign) BOOL vmrFlag;                 // 可选，是否是VMR会议
@property (nonatomic, strong) NSArray<HWMAttendeeInfo *> *attendee; //与会者列表
@property (nonatomic, assign) HWMConfServerType confServerType;
@property (nonatomic, assign) BOOL isAutoRecord;            // 是否自动录制会议
@property (nonatomic, assign) HWMAvType mediaServerType;    /// 媒体类型,预留参数请勿使用
@property (nonatomic, assign) BOOL isWaitingRoomOpen;       ///是否开启等候室
@property (nonatomic, assign) NSString *timeZone;           /// 时区
@property (nonatomic, strong) HWMSDKCycleConfParamModel *cycleParam;                //!<  周期会议信息
@property (nonatomic, copy) NSArray <HWMSDKSubCycleConfParamModel *> *subConf;      //!<  周期子会议列表
@property (nonatomic, assign) NSInteger allowGuestStartConfTime;    /// 来宾可提前入会时间
@property (nonatomic, assign) BOOL allowGuestStartConf;         /// 允许来宾在主持人之前入会
@property (nonatomic, assign) HWMVmrIdType vmrIdType ;          /// vmrid类型

/// 开始时间
- (NSString *)startDate;
/// 是否今天的会议
- (BOOL)isToday;

/// 是否可以加入
- (BOOL)joinEnable;

/// 开始短时间
- (NSString *)startShortTime;
/// 开始短日期
- (NSString *)startShortDate;
/// 开始日期星期
- (NSString *)startDateWeekDay;

/// 结束短时间
- (NSString *)endShortTime;
/// 结束短日期
- (NSString *)endShortDate;
/// 结束日期星期
- (NSString *)endDateWeekDay;

/// 获取本地开始时间
- (NSString *)getLocalizedStartTime;
/// 获取本地结束时间
- (NSString *)getLocalizedEndTime;

/// 会议时间，分享会议场景使用
- (NSString *)getShareTime;
/// 会议时间, 分享文本使用
/// @param hasTimeZone 是否带时区
- (NSString *)getShareTextTime:(BOOL)hasTimeZone;

/// 会议时长
- (NSString *)getConfDuration;

/// 是否是视频会议
- (BOOL)isVideo;

/// 是否录制会议
- (BOOL)isRecord;

- (void)setIsRecord:(BOOL)isRecord;

@end

NS_ASSUME_NONNULL_END
