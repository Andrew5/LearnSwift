//
//  HWMPrivateApi.h
//  HWMUISDK
//
//  Created by 融合软终端02 on 2020/4/9.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMContactSelectedModel.h"
#import "HWMControllerConfig.h"
#import "HWMConfDetail.h"
#import "HWMInternalStartCallParam.h"
#import "HWMConfContactModel.h"
#import "HWMGlobalUIConfig.h"
#import "HWMLinkJoinConfParam.h"
#import "HWMSocialShareHandler.h"
#import "HWMConfUIDefine.h"
#import "HWMSDKVmrInfoListModel.h"
#import "HWMLeaveConfMenuHandler.h"
#import "HWMPrivateConfUIHandler.h"

@class HWMHardTerminalViewParam;
@class HWMLoginInfo;
@class HWMPrivateNotifyHandler;
@class HWMConfInfo;
@class HWMSDKCallRecordInfoModel, HWMSDKMeetingInfoModel;
@class HWMSDKModifyVmrParamModel;
@class HWMSDKInviteHardTerminalParamModel;

NS_ASSUME_NONNULL_BEGIN

// 保密通话加解密函数
typedef uint32_t (*HWMVoipEncryptHandler)(int8_t *pcIn, int32_t iInLength, int8_t *pcOut, int32_t *piOutLength);
typedef uint32_t (*HWMVoipDecryptHandler)(int8_t *pcIn, int32_t iInLength, int8_t *pcOut, int32_t *piOutLength);

@interface HWMPrivateApi : NSObject

/// 设置全局配置
- (void)setGlobalUIConfig:(HWMGlobalUIConfig *)config;

/// 获取全局配置
- (HWMGlobalUIConfig *)getGlobalUIConfig;

/// 显示会议列表界面
/// @param config 导航栏样式配置
/// @param animated 是否需要动画
- (void)openConfListWitConfig:(HWMControllerConfig * _Nullable)config animated:(BOOL)animated;

// 显示扫码成功maxhub会议列表界面
/// @param config 导航栏样式配置
/// @param animated 是否需要动画
- (void)openMaxhubConfListWitConfig:(HWMControllerConfig * _Nullable)config animated:(BOOL)animated;

- (void)feedbackLogByEMail;

/// 链接入会
- (void)joinConfByLink:(NSString *)siteUrl random:(NSString *)random idPrefix:(NSString *)idPrefix callback:(void (^)(NSError *error))callback;

- (void)joinConfByInfo:(HWMLinkJoinConfParam *)info callback:(void (^)(NSError *error))callback;

/// 邀请硬终端入会
- (void)inviteHardTerminal:(HWMSDKInviteHardTerminalParamModel *)param callabck:(void(^)(NSError *error))callback;

/// MaxHub扫码配对入会
/// @param pairCode 配对码
- (void)maxhubPairWithPairCode:(NSString *)pairCode callback:(void (^)(NSError *error))callback;

/// 大屏是否已配对
- (BOOL)isPaired;

/// 结束配对
- (void)endQrCodePair;

/// 加入配对会议
/// @param confId 会议ID
/// @param handler 回调
- (void)joinPairConf:(NSString *)confId
            callback:(void (^_Nonnull)(NSError  * _Nullable error))handler;

/// 显示会议二维码界面
- (void)openConfQRCodeWithConfInfo:(HWMConfDetail *)confInfo shareType:(HWMShareConfType)shareType;

/// 获取登录信息
- (HWMLoginInfo *)getMyInfo;

/// 通过account token登录
- (void)loginWithAccount:(NSString *)account token:(NSString *)token completeHandler:(void (^_Nonnull)(NSError *_Nullable error))handler;

- (void)sipDeregister;

/// 是否存在通话
- (BOOL)isCallExist;

/// 是否为视频通话
- (BOOL)isVideoCall;

/// 是否存在会议
- (BOOL)isConfExist;

/// 是否为视频会议
- (BOOL)isVideoConf;

/// Pstn权限是否开启
- (BOOL)isPstnEnable;

/// 录制功能是否开启
- (BOOL)isRecordOn;

/// 设备是否支持硬编码
- (BOOL)isSupportVideoHdEncoder;

/// 设置高清视频优先 成功返回YES
- (BOOL)setHDPref:(BOOL)isHDPref;

/// 设置显示引导类提示类型
- (void)setShowGuideTips:(HWMGuideTips)guideTips;

/// 是否为免费个人
- (BOOL)isPublicRegister;

/// 显示匿名入会界面
- (void)openAnonymousJoinPage:(HWMControllerConfig * _Nullable)config animated:(BOOL)animated;

/// 显示 已登录用户入会界面
- (void)openJoinConfPage:(HWMControllerConfig * _Nullable)config animated:(BOOL)animated;

/// 设置屏幕共享插件名称（bundle尾缀名称）
- (void)setShareExtensionName:(NSString *)extensionName;

/// 发起呼叫
/// @param param 呼叫参数
/// @param isEncrypt 是否保密
/// @param callback 结果回调
- (void)startCallWithParam:(HWMInternalStartCallParam *)param isEncrypt:(BOOL)isEncrypt callback:(void(^)(NSError *error))callback;

/// 是否是保密通话
- (void)setEncryptCall:(BOOL)isEncryptCall;

/// 设置通话芯片加密开关
/// @param isEncrypt 是否加密
- (void)switchAudioChipEncrypt:(BOOL)isEncrypt;

/// 设置通话加解密函数
/// @param encryptHnadler 加密函数
/// @param decryptHandler 解密函数
- (HWMSDKERR)setVoipEncryptDecryptHandler:(HWMVoipEncryptHandler)encryptHnadler decryptHandler:(HWMVoipDecryptHandler)decryptHandler;

- (void)openContactSelectPage:(NSArray<HWMConfContactModel *> *)param
         scene:(HWMSelectedContactScene)scene
completeHander:(void(^)(NSArray<HWMContactSelectedModel *> *result, NSError *error))handler;



/// 获取当前会议列表
- (NSArray<HWMConfDetail *> *)getConfList;

/// 打开预订会议页面 并设置预置参数
/// @param isVideo 是否是视频会议
/// @param startTime 会议开始时间 格式：YYYY-MM-DD HH:MM 北京时间
/// @param confLen 会议持续时长，单位分钟
/// @param animated 是否使用动画
- (void)openBookConfWithIsVideo:(BOOL)isVideo startTime:(NSString *)startTime confLen:(NSUInteger)confLen animated:(BOOL)animated;


/// 打开发起会议页面 并设置预置参数
/// @param isVideo 是否是视频会议
/// @param animated 是否使用动画
- (void)openCreateConfWithIsVideo:(BOOL)isVideo animated:(BOOL)animated;


/// 配置打点信息的租户Id
/// @param tenantId 租户ID
- (void)configTrackerTenantId:(NSString *)tenantId;

/// 获取会中信息
- (HWMSDKMeetingInfoModel *)getConfInfo;

/// 获取通话信息
- (HWMSDKCallRecordInfoModel *)getCallInfo;

/// 获取vmr信息
- (void)fetchVmrInfoSuccessCallback:(void(^)(HWMSDKVmrInfoModel *personalVmrInfo, HWMSDKVmrInfoListModel * cloudVmrList))successBlock failedCallback:(void(^)(NSError * _Nullable error))failedBlock;

/// 会中改变vmr信息
-(void)changeVmrInfo:(HWMSDKModifyVmrParamModel *)param completeHandler:(void (^)(NSError *error))completeHandler;

/// 转换错误码
/// @paramerrorCode 原错误码
- (NSInteger)transformErrorCode:(NSInteger)errorCode;

/// 匿名入会是否显示悬浮窗按钮
- (void)setShowFloatButtonWhenAnonymousJoinConf:(BOOL)isShow;

/// 离开会议按钮
- (void)setLeaveConfMenuHandler:(id <HWMLeaveConfMenuHandler>)handler;

/// 私有会议UI定制代理
- (void)setPrivateConfUIHandler:(id<HWMPrivateConfUIHandler>)handler;

@end

NS_ASSUME_NONNULL_END
