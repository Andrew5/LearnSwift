//
//  HWMBizOpenApi.h
//  HWMUISDK
//
//  Created by y00450113 on 2020/8/3.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMConfDetail.h"
#import "HWMOrderConfParam.h"
#import "HWMSdkDefine.h"
#import "HWMUISDKErrorDefine.h"
#import "HWMVmrInfoModel.h"
#import "HWMModifyVMRParam.h"
#import "HWMCancelConfParam.h"
#import "HWMOrderCycleConfParam.h"
#import "HWMSDKCancelCycleConfParamModel.h"
#import "HWMSDKCancelSubCycleConfParamModel.h"
#import "HWMSDKModifySubCycleConfParamModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMBizOpenApi : NSObject

/// 自己是否是主持人
- (BOOL)selfIsChairMan;

/// 获取会议列表
- (NSArray<HWMBaseConfDetailParam *> *)getConfList;


/// 获取会议详情
/// @param confId 会议ID
/// @param handler 结果回调，错误信息和会议信息
- (void)getConfDetail:(NSString *)confId completeHandler:(HWMSDKConfInfoCompleteHandler)handler;

/// 修改vmr会议室信息
/// @param info vmr会议信息
/// @param callback 结果回调
- (void)changeVmrInfo:(HWMModifyVMRParam *)info callback:(_Nonnull HWMSDKCompleteHandler)callback;

///  获取VMR ID列表，预约会议时可从次列表中选取固定会议ID进行预约
- (NSArray<HWMVmrInfoModel *> *)getVmrList DEPRECATED_MSG_ATTRIBUTE("Use '- (void)getVmrList:(_Nonnull HWMSDKVmrListCompleteHandler)callback' instead");

/// 获取VMR ID列表，预约会议时可从次列表中选取固定会议ID进行预约
/// @param callback 结果回调
- (void)getVmrList:(_Nonnull HWMSDKVmrListCompleteHandler)callback;

/// 预约会议
/// @param param 预约会议信息
/// @param callback 结果回调（result返回会议详情）
- (void)bookConf:(HWMOrderConfParam *_Nonnull)param callback:(_Nonnull HWMSDKCompleteHandler)callback;

/// 预约周期会议
/// @param param 预约周期会议信息
/// @param callback 结果回调（result返回会议详情）
- (void)bookCycleConf:(HWMOrderCycleConfParam *_Nonnull)param callback:(_Nonnull HWMSDKCompleteHandler)callback;

/// 取消会议
/// @param confId 会议id
/// @param callback 结果回调
- (void)cancelConf:(NSString *_Nonnull)confId callback:(_Nonnull HWMSDKCompleteHandler)callback;

/// 取消会议
/// @param param 取消会议信息
/// @param callback 结果回调
- (void)cancelConfWithParam:(HWMCancelConfParam *_Nonnull)param callback:(_Nonnull HWMSDKCompleteHandler)callback;

/// 取消周期会议
/// @param param 取消周期会议信息
/// @param callback 结果回调
- (void)cancelCycleConfWithParam:(HWMSDKCancelCycleConfParamModel *_Nonnull)param callback:(_Nonnull HWMSDKCompleteHandler)callback;

/// 取消周期子会议
/// @param param 取消周期子会议信息
/// @param callback 结果回调
- (void)cancelSubCycleWithParam:(HWMSDKCancelSubCycleConfParamModel *_Nonnull)param callback:(_Nonnull HWMSDKCompleteHandler)callback;

/// 编辑会议
/// @param param 编辑会议信息
/// @param callback 结果回调
- (void)editConf:(HWMOrderConfParam *_Nonnull)param callback:(_Nonnull HWMSDKCompleteHandler)callback;

/// 编辑周期会议
/// @param param 编辑周期会议信息
/// @param callback 结果回调
- (void)editCycleConf:(HWMOrderCycleConfParam *_Nonnull)param callback:(_Nonnull HWMSDKCompleteHandler)callback;

/// 编辑周期子会议
/// @param param 编辑周期子会议信息
/// @param callback 结果回调
- (void)editSubCycleConf:(HWMSDKModifySubCycleConfParamModel *_Nonnull)param callback:(_Nonnull HWMSDKCompleteHandler)callback;

/// 上传用户头像
/// @param filePath 上传头像文件路径
/// @param callback 结果回调
- (void)uploadSelfAvatarWithFilePath:(NSString *_Nullable)filePath callback:(_Nonnull HWMSDKCompleteHandler)callback;

/// 获取会议和通话的状态
- (HWMSDKConfOrCallStatus)getIsInConfOrCall;

/// 获取会议呼叫电话号码
- (NSString *)getConfPstnAccessNumber;

/// 获取与会者列表
- (NSArray <HWMAttendeeInfo *> *)getAttendeeList;

/// 获取观众列表
- (NSArray <HWMAttendeeInfo *> *)getAudienceList;

/// 根据企业域名获取鉴权中心Url
/// @param domain 企业域名
/// @param callback 结果回调
- (void)getSsoAuthUrlWithDomain:(NSString *)domain callback:(_Nonnull HWMSDKSsoAuthUrlCompleteHandler)callback;
@end

NS_ASSUME_NONNULL_END
