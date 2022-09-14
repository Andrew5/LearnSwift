//
//  HWMOpenSDKConfig.h
//  HWMUISDK
//
//  Created by 融合软终端02 on 2020/2/17.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMNotifyHandler.h"
#import "HWMSocialShareHandler.h"
#import "HWMCallUIHandler.h"
#import "HWMContactUIHandler.h"
#import "HWMConfUIHandler.h"
#import "HWMInMeetingToolBarMenuHandler.h"
#import "HWMContactApiHandler.h"
#import "HWMParticipantListMenuHandler.h"
#import "HWMInMeetingTitleBarMenuHandler.h"
#import "HWMConfSettingHandler.h"
#import "HWMBizNotificationHandler.h"
#import "HWMHeadPortraitApiHandler.h"
// 语言类型
typedef enum : NSUInteger {
    HWMSdkLanguageTypeZH, // 中文
    HWMSdkLanguageTypeEN, // 英文
    HWMSdkLanguageTypeFR, // 法语
} HWMSdkLanguageType;

// Controller 打开方式，默认push
typedef enum : NSUInteger {
    HWMSdkCtrlLaunchModePush, // push 方式
    HWMSdkCtrlLaunchModePresent, // 默认present，使用该模式，则会中的navigation 会使用华为会议自己的NavigationController,推荐
} HWMSdkCtrlLaunchMode;


// 站点类型
typedef enum : NSInteger {
    /// 中国站点 （默认）
    HWMSdkSiteTypeChina,
    /// 亚太站点
    HWMSdkSiteTypeAP,
} HWMSdkSiteType;

NS_ASSUME_NONNULL_BEGIN

@interface HWMOpenSDKConfig : NSObject
#pragma mark - require

@property (nonatomic, strong) NSString *appId; // 必须，可以传入企业名称。例如"huawei"
@property (nonatomic, strong) NSString *appGroupIndentifier; //必须， 屏幕共享 extension的appGroup。用于屏幕共享时，共享进程和主进程通信，详情可参考苹果官方Extension相关文档

#pragma mark - options

@property (nonatomic, strong, readonly) NSString *sdkVersion;/// SDK 版本号，只读
@property (nonatomic, assign) NSInteger platform; //private params，调用方不需要设置
@property (nonatomic, assign) HWMSdkSiteType siteType; //登录站点类型，默认为中国站（设置后若未设置serverAddress地址，则自动设置服务器地址）
@property (nonatomic, strong, nullable) NSString *serverAddress; // 服务器地址，默认为华为云地址
@property (nonatomic, assign) NSUInteger serverPort; //服务器端口号
@property (nonatomic, copy) NSString *logPath;/// 日志路径
@property (nonatomic, assign) HWMSdkLanguageType language;/// 语言
@property (nonatomic, assign) HWMSdkCtrlLaunchMode ctrlLaunchMode; // controller 打开方式
@property (nonatomic, assign) NSInteger logKeepDays; // 配置项-日志保存天数，0为使用SDK内部策略，非0情况范围3-30
@property (nonatomic, assign) BOOL firstLoginNeedModifyPwd; //首次登录是否需要修改密码，默认不需要
@property (nonatomic, assign, getter = isCloseRefreshDuringSwitchAppState) BOOL closeRefreshDuringSwitchAppState; //关闭后台刷新，当前后台切换需登录注销时调用，提升用户体验
@property (nonatomic, assign) BOOL enableFeedback; // 是否开启反馈，默认不开启
@property (nonatomic, assign) BOOL enableCrashCollection; // 是否开启崩溃日志采集， 默认不开启
@property (nonatomic, assign) BOOL enableCrashProtection; // 是否开启崩溃拦截， 默认不开启
@property (nonatomic, assign) BOOL enableAutoLogin; // 是否开启自动登录，默认不开启
@property (nonatomic, assign) BOOL enableBookConfCalendarNotify; // 是否开启日历通知，默认不开启
@property (nonatomic, assign) BOOL hideOfflineParticipant; // 是否隐藏不在线的联系人，默认不开启
@property (nonatomic, assign) BOOL hideExternalLabel; // 是否隐藏外部标签，默认显示
@property (nonatomic, assign) BOOL enableAnonymousJoinConfByPhoneVerify; // 匿名入会和链接入会是否需要手机验证
@property (nonatomic, assign) BOOL enablePromptUserScreenshot; // 自定义水印时用户截屏时是否需要提示用户
@property (nonatomic, assign) BOOL showInMeetingTitleBarQrCodeEntry; /**< 会议标题旁边的二维码快速入口，默认不需要 */
@property (nonatomic, assign) BOOL enableTransferHostLeaveConf; // 是否开启离开会议转移主持人功能
@property (nonatomic, assign) BOOL disableIncomingLocalNotification; // 来电时是否使用本地推送


@property (nonatomic, weak, nullable) id <HWMNotifyHandler> globalHandler;// 可选，全局通知代理，用于监听sdk的全局回调事件
@property (nonatomic, weak, nullable) id <HWMSocialShareHandler> socialShareHandler; // 可选，社交分享定制代理，用于定制会中分享能力
@property (nonatomic, weak, nullable) id <HWMInMeetingToolBarMenuHandler> audioCallToolBarHandler; // 可选，音频呼叫会控菜单定制代理
@property (nonatomic, weak, nullable) id <HWMInMeetingToolBarMenuHandler> videoCallToolBarHandler; // 可选，视频呼叫会控菜单定制代理
@property (nonatomic, weak, nullable) id <HWMInMeetingToolBarMenuHandler> audioConfToolBarHandler; // 可选，音频会议会控菜单定制代理
@property (nonatomic, weak, nullable) id <HWMInMeetingToolBarMenuHandler> videoConfToolBarHandler; // 可选，视频会议会控菜单定制代理
@property (nonatomic, weak, nullable) id <HWMParticipantListMenuHandler> participantListMenuHandler; // 可选，与会者列表菜单定制代理
@property (nonatomic, weak, nullable) id <HWMInMeetingTitleBarMenuHandler> confTitleBarMenuHandler;// 可选，会议页面顶部titlebar菜单定制
@property (nonatomic, weak, nullable) id <HWMContactApiHandler> contactApiHandler; // 可选，通讯录接口 定制代理
@property (nonatomic, weak, nullable) id <HWMHeadPortraitApiHandler> headPortraitApiHandler; // 可选，头像接口 定制代理
@property (nonatomic, weak, nullable) id <HWMCallUIHandler> callingUIHandler; // 可选，通话UI 定制代理
@property (nonatomic, weak, nullable) id <HWMContactUIHandler> contactUIHandler; // 可选，联系人UI 定制代理
@property (nonatomic, weak, nullable) id <HWMConfUIHandler> confUIHandler; // 可选，会议UI定制代理
@property (nonatomic, weak, nullable) id <HWMConfSettingHandler> confSettingHandler; // 可选，会议设置
@property (nonatomic, weak, nullable) id <HWMBizNotificationHandler> bizNotifyHandler; // 可选， 业务消息通知回调
@property (nonatomic, copy) NSString *IMAppId; //IM的appId

@end

NS_ASSUME_NONNULL_END
