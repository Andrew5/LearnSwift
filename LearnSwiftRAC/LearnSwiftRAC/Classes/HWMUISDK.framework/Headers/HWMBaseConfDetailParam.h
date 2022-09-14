//
//  HWMBaseConfDetailParam.h
//  HWMConf
//
//  Created by guoyongliang/gwx917154 on 2020/8/20.
//

#import <Foundation/Foundation.h>
#import "HWMConfSdkDefine.h"
#import "HWMSDKCommonDefine.h"
NS_ASSUME_NONNULL_BEGIN

@interface HWMBaseConfDetailParam : NSObject

@property (nonatomic, copy) NSString *confId;           // 会议id
@property (nonatomic, copy) NSString *vmrConferenceId;  // VMR会议ID,显示时使用
@property (nonatomic, copy) NSString *confSubject;      // 会议主题
@property (nonatomic, copy) NSString *chairmanPwd;      // 主席密码
@property (nonatomic, copy) NSString *generalPwd;       // 来宾密码
@property (nonatomic, assign) NSTimeInterval startTime; // 会议开始时间
@property (nonatomic, assign) NSTimeInterval endTime;   // 会议结束时间
@property (nonatomic, assign) ConfMediaType mediaType;  // 媒体类型，取值参考CONFCTRL_E_CONF_MEDIATYPE_FLAG，可进行"|"操作
@property (nonatomic, copy) NSString *scheduserName;    // 预订者姓名
@property (nonatomic, copy) NSString *chairJoinUri;     // 主持人加入会议uri链接
@property (nonatomic, copy) NSString *guestJoinUri;     // 普通与会者加入会议uri链接
@property (nonatomic, assign) ConfRoleType role;        // 会议角色
@property (nonatomic, assign) NSUInteger size;          // 会议方数
@property (nonatomic, copy) NSString *accessNumber;     // 会议接入码
@property (nonatomic, assign) BOOL isWebinar;           //是否是网络研讨会
@property (nonatomic, assign) ConfStatusType confStatusType;    // 会议状态
@property (nonatomic, assign) HWMConferenceType conferenceType;             //!<  会议类型，普通或者周期会议

@end

NS_ASSUME_NONNULL_END
