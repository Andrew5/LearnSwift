//
//  HWMConfParticipantBase.h
//  HWMConf
//
//  Created by yaolili/ywx577644 on 2020/8/15.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HWMConfParticipantBase : NSObject

@property (nonatomic, copy) NSString *name; // 与会者名称
@property (nonatomic, copy) NSString *number; // 号码
@property (nonatomic, copy) NSString *participantId; //
@property (nonatomic, assign) BOOL isHandup; // 是否举手
@property (nonatomic, assign) NSUInteger userId;
@property (nonatomic, copy) NSString *rtcUserId; // 号码
@property (nonatomic, assign) BOOL speakable;
@property (nonatomic, assign) BOOL isMute;
@property (nonatomic, assign) ConfRoleType role; //会议成员角色
@property (nonatomic, assign) BOOL isAnonymous; //是否匿名用户
@property (nonatomic, copy) NSString *orgId; //企业Id
@property (nonatomic, copy) NSString *accoundId; //账号
@property (nonatomic, assign) HWMInterpreterStateType interpreterState; //传译员身份状态
@property (nonatomic, assign) BOOL isInterpreter;         /**< 是否是传译员  */
@property (nonatomic, assign) BOOL hasConfirm;           /**< 传译员是否确认  */
@property (nonatomic, assign) HWMConfSupportLanguageType firstLanguage;    /**< 传译员第一语言  */
@property (nonatomic, assign) HWMConfSupportLanguageType secondLanguage;   /**< 传译员第二语言  */
@property (nonatomic, assign) HWMConfSupportLanguageType listenChannel;    /**< 收听频道语言类型  */
@property (nonatomic, assign) HWMConfSupportLanguageType speakChannel;     /**< 发言频道语言类型  */
@property (nonatomic, assign) BOOL isCoHost; // 联席主持人
@property (nonatomic, assign) BOOL switchAttendeeToAudienceEnable;  //是否有嘉宾转为观众的能力
@property (nonatomic, assign) BOOL isSelf; // 是否自己
@property (nonatomic, assign) BOOL isShare; // 是否正在共享
@property (nonatomic, assign) BOOL isInviteShare; // 是否正在被邀请共享
@property (nonatomic, assign) BOOL isCreator;// 是否是会议预订者

@end

NS_ASSUME_NONNULL_END
