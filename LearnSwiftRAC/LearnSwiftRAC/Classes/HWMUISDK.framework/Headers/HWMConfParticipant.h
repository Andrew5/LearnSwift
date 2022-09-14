//
//  HWMConfParticipant.h
//  HWMConf
//
//  Created by yaolili/ywx577644 on 2019/12/19.
//  Copyright © 2019年 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMConfSdkDefine.h"
#import "HWMConfParticipantBase.h"

/**
 * [en]This struct is used to describe participant info(after join conference)<br>
 * [cn]会议成员信息(已入会)
 */

typedef NS_ENUM(NSUInteger, HWMConfCameraState) {
    /// 摄像头状态 - 关闭
    HWMConfCameraStateClose,
    /// 摄像头状态 - 打开
    HWMConfCameraStateOpen,
    /// 摄像头状态 - 未知
    HWMConfCameraStateUnknow,
    /// 摄像头状态 - 无摄像头
    HWMConfCameraStateNoCamera,
};

@interface HWMConfParticipant : HWMConfParticipantBase

@property (nonatomic, copy) NSString *accountId;  //uuid,账号的唯一标识
@property (nonatomic, assign) BOOL isDeaf; // 是否静音
@property (nonatomic, assign) BOOL isBroadcast; // 是否被广播
@property (nonatomic, assign) BOOL isRollCall;  /**< 是否被点名 */
@property (nonatomic, assign) ConfParticipantStatusType state; // 用户状态
@property (nonatomic, assign) NSUInteger mediaType; // 媒体类型，取值参考CONFCTRL_E_CONF_MEDIATYPE_FLAG，可进行"|"操作
@property (nonatomic, assign) NSUInteger mNum; //
@property (nonatomic, assign) NSUInteger tNum; //
@property (nonatomic, assign) BOOL isChairman;
@property (nonatomic, assign) HWMClientDeviceType clientDeviceType; // 客户端接入类型，手机，电脑，平板
// 下面的属性是补充属性，通过其他通知消息上报
@property (nonatomic, assign) BOOL isMainSpeaker; // 是否是最大发言人，默认false
@property (nonatomic, assign) BOOL isSpeaking;          /**< 是否正在发言 */
@property (nonatomic, assign) NSUInteger speakingVolume;/**< 发言音量 - 实际测试该值不太准确，如果使用建议找MCU联调 */
@property (nonatomic, strong) NSString *displayName; //默认显示名字，是自己的时候加一个“我”
@property (nonatomic, strong) NSString *pinyinName; // 名字的拼音
@property (nonatomic, assign) BOOL isAudioJoined; // 是否是音频接入
/// 摄像头状态
@property (nonatomic, assign) HWMConfCameraState cameraState;

@property (nonatomic, copy) NSString *addTime;
@property (nonatomic, copy) NSString *handupTime;// 观众-举手时间
@property (nonatomic, assign) NSUInteger mode; // 观众-
@property (nonatomic, assign) HWMConfServerType confServerType;
@property (nonatomic, copy) NSString *allowSpeakTime;// 观众-允许说话时间
@property (nonatomic, copy) NSString *thirdUserId;                         /**< App ID登录下的账号 */
@property (nonatomic, assign) BOOL hasLocalRecordPrivildge; // 是否有本地录制权限
@property (nonatomic, assign) HWMRecordStatus recordStatus; // 录制状态
@property (nonatomic, assign) BOOL isInWaitingRoom;

// 安全打印
- (NSString *)safePrintString;
@end
