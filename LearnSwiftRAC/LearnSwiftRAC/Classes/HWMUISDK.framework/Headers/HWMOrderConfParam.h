//
//  HWMOrderConfParam.h
//  HWMUISDK
//
//  Created by guoyongliang/gwx917154 on 2020/8/11.
//

#import <Foundation/Foundation.h>
#import "HWMAttendeeInfo.h"
#import "HWMSdkDefine.h"
#import "HWMConfSdkDefine.h"
NS_ASSUME_NONNULL_BEGIN

@interface HWMOrderConfParam : NSObject
@property (nonatomic, copy) NSString *confSubject;          /**< 会议主题 */
@property (nonatomic, assign) NSTimeInterval startTime;     /**< 会议开始时间 */
@property (nonatomic, assign) NSUInteger duration;          /**< 会议持续时长，单位分钟 */
@property (nonatomic, assign) HWMOrderConfType confType;    /**< 会议类型 */
@property (nonatomic, assign) BOOL isNeedConfPwd;           /**< 是否需要来宾密码 */
@property (nonatomic, assign) BOOL isRecordOn;              /**< 录制会议开关 */
@property (nonatomic, assign) BOOL isAutoRecord;            /**< 允许自动录制会议开关 */
@property (nonatomic, assign) NSInteger timeZone;           /**< 时区 */
@property (nonatomic, copy) NSString *vmrId;                /**< 个人会议或者云会议室时传入 */
@property (nonatomic, assign) HWMVmrIdType vmrIdType;       /**< VmrId会议类型(固定/随机) */
@property (nonatomic, assign) HWMJoinConfRestrictionType callInRestrictionType; /**< 允许入会范围限制 */
@property (nonatomic, strong) NSArray<HWMAttendeeInfo *> *attendee;             /**< 与会者信息 */

@property (nonatomic, assign) BOOL isSmsOn;                 /**< 发送短信通知开关，可选参数，企业配置里面需要开启，否则不生效 */
@property (nonatomic, assign) BOOL isMailOn;                /**< 发送邮件通知开发，可选参数，企业配置里面需要开启，否则不生效 */
@property (nonatomic, assign) BOOL isEmailCalenderOn;       /**< 发送邮件日历开关 */
@property (nonatomic, assign) HWMAvType mediaServerType;    /**< 媒体类型,预留参数请勿使用 */
@property (nonatomic, assign) BOOL allowGuestStartConf;     /**< 允许来宾在主持人之前入会，默认允许 */
@property (nonatomic, assign) NSInteger allowGuestStartConfTime; /**< 来宾可在会议开始前多久入会。0：任意时间，n:可提起n分钟入会，默认0 */
/// 编辑会议时使用。
@property (nonatomic, copy) NSString *confId;

@end

NS_ASSUME_NONNULL_END
