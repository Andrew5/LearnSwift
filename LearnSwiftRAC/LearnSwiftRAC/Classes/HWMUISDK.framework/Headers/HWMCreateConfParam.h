//
//  HWMCreateConfParam.h
//  HWMUISDK
//
//  Created by 融合软终端02 on 2020/3/27.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMConfSdkDefine.h"
#import "HWMSdkDefine.h"
typedef NS_ENUM(NSUInteger, HWMConfType) {
    HWMConfTypeAudio, // 音频会议
    HWMConfTypeVideo, // 视频会议
    HWMConfTypeAudioAndData,// 音频数据会议，支持屏幕共享能力
    HWMConfTypeVideoData// 视频数据会议， 支持屏幕共享能力
};
NS_ASSUME_NONNULL_BEGIN


@interface HWMCreateConfMember : NSObject
// 与会者 名字
@property(nonatomic, strong)NSString *name;

// 与会者号码
@property(nonatomic, strong)NSString *number;

// 用户账号ID
@property(nonatomic, strong)NSString *accountId;

// 终端类型
@property(nonatomic, assign)HWMClientDeviceType clientType;

#pragma mark - APPID 登录属性，用于带人创会&会中邀人，优先级高于 accountId
@property (nonatomic, copy) NSString *thirdUserId; /// APPID 登录场景下的第三方账号

@end


@interface HWMCreateConfParam : NSObject

/// 会议主题
@property(nonatomic, copy) NSString *subject;

/// 会议媒体类型 默认语音会议，如果要支持屏幕共享能力，需传入数据会议
@property(nonatomic, assign) HWMConfType confType;

/// 会议是否需要设置密码，默认不需要,传入vmrId时，设置为YES
@property(nonatomic, assign) BOOL needPassword;

/// 成员列表，可选
@property(nonatomic, strong) NSArray <HWMCreateConfMember *> *members;

/// 个人会议或者云会议室Id，创建个人会议或云会议室的时候传入，其它时候传入空
@property(nonatomic, copy) NSString *vmrId;

/// VmrId会议类型(固定/随机)
@property (nonatomic, assign) HWMVmrIdType vmrIdType;

/// 允许入会范围
@property (nonatomic, assign)  HWMJoinConfRestrictionType joinConfRestrictionType;

/// 是否打开摄像头, 默认关闭
@property(nonatomic, assign) BOOL isCameraOn;

/// 是否打开麦克风， 默认打开
@property(nonatomic, assign) BOOL isMicOn;

/// 是否打开会议录制， 默认关闭
@property (nonatomic, assign) BOOL isRecordOn;

/// 是否允许自动录制会议， 默认关闭
@property (nonatomic, assign) BOOL isAutoRecord;

/// 媒体类型,预留参数请勿使用
@property (nonatomic, assign) HWMAvType mediaServerType;

@end

NS_ASSUME_NONNULL_END
