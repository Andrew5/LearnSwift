//
//  HWMSdkDefine.h
//  HWMUISDK
//
//  Created by 融合软终端02 on 2020/3/31.
//  Copyright © 2020 huawei. All rights reserved.
//

#ifndef HWMSdkDefine_h
#define HWMSdkDefine_h
#import "HWMLoginResult.h"
#import "HWMLogoutResult.h"
#import "HWMCreateConfResult.h"
#import "HWMConfDetail.h"
#import "HWMVmrInfoModel.h"

// 通用回调，error为nil表示调用成功，否则调用失败，result 为预留扩展参数，请忽略
typedef void (^HWMSDKCompleteHandler)(NSError *_Nullable error, id _Nullable result);

// 通用中间回调
typedef void (^HWMSDKEventHandler)(id _Nullable eventHandler);


// 登录回调，error为nil表示调用成功，否则调用失败，result 返回登录用户的信息
typedef void (^HWMSDKLoginCompleteHandler)(NSError *_Nullable error, HWMLoginResult *_Nullable result);

// 登出回调，error为nil表示调用成功，否则调用失败，result 返回登录用户的信息
typedef void (^HWMSDKLogoutCompleteHandler)(NSError *_Nullable error, HWMLogoutResult *_Nullable result);

// 创建会议回调，error为nil表示调用成功，否则调用失败，result会议信息
typedef void (^HWMSDKCreateConfCompleteHandler)(NSError *_Nullable error, HWMCreateConfResult *_Nullable result);

// 会议详情回调
typedef void (^HWMSDKConfInfoCompleteHandler)(NSError *_Nullable error, HWMConfDetail *_Nullable result);

// 云会议室列表回调， error为nil表示调用成功，否则调用失败，result云会议室列表信息
typedef void (^HWMSDKVmrListCompleteHandler)(NSError *_Nullable error, NSArray<HWMVmrInfoModel *> *_Nullable result);

typedef void (^HWMSDKSsoAuthUrlCompleteHandler)(NSError *_Nullable error, NSString *_Nullable ssoAuthUrl);

/// 呼叫状态
typedef NS_ENUM (NSUInteger, HWMSDKCallStatus) {
    /// 空闲状态 (通话结束)
    HWMSDKCallStatusIdle = 0,
    /// 正在来电
    HWMSDKCallStatusIncoming,
    /// 正在呼出
    HWMSDKCallStatusCallingOut,
    /// 已接通
    HWMSDKCallStatusConnected,
};

/// 会议状态
typedef NS_ENUM (NSUInteger, HWMSDKConfStatus) {
    /// 空闲状态 （会议结束）
    HWMSDKConfStatusIdle = 0,
    /// 正在来电
    HWMSDKConfStatusIncoming,
    /// 正在呼出
    HWMSDKConfStatusCallingOut,
    /// 正在等待
    HWMSDKConfStatusWaiting,
    /// 已接通
    HWMSDKConfStatusConnected,
    /// 正在重呼
    HWMSDKConfStatusRecalling,
};

/// 会议中或者通话中
typedef NS_ENUM (NSUInteger, HWMSDKConfOrCallStatus) {
    HWMSDKConfOrCallStatusIdle = 0,       /**<空闲状态（不在会议和呼叫中） */
    HWMSDKConfOrCallStatusInConf,         /**<在会议中 */
    HWMSDKConfOrCallStatusInCall,         /**<在通话中 */
};

/// 预约会议状态
typedef NS_ENUM (NSUInteger, HWMOrderConfType) {
    OrderConfTypeAudio = 0,      /**<音频会议 */
    OrderConfTypeVideo,          /**<视频会议 */
};

/// 入会范围
typedef NS_ENUM(NSInteger, HWMJoinConfRestrictionType) {
    HWMJoinConfRestrictionAll,              /**<所有用户 */
    HWMJoinConfRestrictionNotAnonymouse,    /**<预留、暂不支持 */
    HWMJoinConfRestrictionCompany,          /**<企业内用户 */
    HWMJoinConfRestrictionInvited           /**<被邀请用户 */
};

//typedef NS_ENUM(NSInteger, HWMUserStatusInEnterprise){
//    ///用户已注销
//    HWMUserStatusInEnterpriseIsDelete = 0,
//    ///您已加入新的企业（接受邀请、创建企业、变成新企业内的用户）
//    HWMUserStatusInEnterpriseIsJoinTheCorp,
//    ///您已被移除当前企业（企业管理员删除、解散、用户主动离开企业变成注册用户）
//    HWMUserStatusInEnterpriseIsLeaveTheCorp
//};

#endif /* HWMSdkDefine_h */
