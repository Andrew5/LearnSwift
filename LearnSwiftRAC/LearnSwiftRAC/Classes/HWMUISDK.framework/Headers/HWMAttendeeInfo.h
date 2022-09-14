//
//  HWMAttendeeInfo.h
//  HWMConf
//
//  Created by yaolili/ywx577644 on 2019/12/13.
//  Copyright © 2019年 huawei. All rights reserved.
//


#import "HWMConfSdkDefine.h"
#import "HWMSDKCommonDefine.h"
@class HWMEnterpriseContact;
@class HWMContactSelectedModel;

/**
 * [en]This struct is used to describe attendee info(before join conference)<br>
 * [cn]与会者信息
 */
@interface HWMAttendeeInfo : NSObject

@property (nonatomic, copy) NSString *number; // 号码
@property (nonatomic, copy) NSString *name; // 成员名称
@property (nonatomic, copy) NSString *email; // 邮箱地址
@property (nonatomic, copy) NSString *sms; // 手机号码
@property (nonatomic, copy) NSString *accountId; // 与会者账号和UUID / 可选，用户登录账号
@property (nonatomic, assign) ConfAttendeeType type; // 成员类型
@property (nonatomic, assign) BOOL isMute; // 是否闭音
@property (nonatomic, assign) BOOL isAutoInvite; // 是否自动外邀
@property (nonatomic, assign) ConfRoleType role; // 会议成员角色
@property (nonatomic, copy) NSString *userUuid; // 在编辑会议时这个值由会议详情上报，默认是空字符串

@property (nonatomic, assign) BOOL isHardTerminal; // 从通讯录查到的信息 YES：是硬终端

#pragma mark - APPID 登录属性
@property (nonatomic, copy) NSString *appId;            /// APPID 登录场景下和thirdUserId对应的appId
@property (nonatomic, copy) NSString *thirdUserId;      /// APPID 登录场景下的第三方账号

#pragma mark - 获取与会者列表使用
@property (nonatomic, assign) BOOL isAnonymous;  /**< 是否是匿名入会 */
@property (nonatomic, assign) HWMConfAttendeeState state; /**< 与会者状态 */
@property (nonatomic, copy) NSString *orgId;     /**< 用于识别是否是本企业账号 */

+ (instancetype)new NS_UNAVAILABLE;

+ (HWMAttendeeInfo *)attendeeInfo:(HWMEnterpriseContact *)contactInfo;
+ (HWMAttendeeInfo *)attendeeInfoWithContactModel:(HWMContactSelectedModel *)model;


/// 联系人list转换为与会者list
/// @param contants 联系人列表
+ (NSArray <HWMAttendeeInfo *> *)convertAttendeesFromContactList:(NSArray <HWMContactSelectedModel *> *)contants;

/// 是否是相同的会议成员，比较关键信息:number,name,email,sms,accountId；APPID登录场景还有:appId,thirdUserId
- (BOOL)isSameAttendee:(id)object;

@end

