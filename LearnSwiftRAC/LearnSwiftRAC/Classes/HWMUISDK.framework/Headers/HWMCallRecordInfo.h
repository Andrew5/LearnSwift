//
//  HWMCallRecordInfo.h
//  HWMBaseUI
//
//  Created by yaolili/ywx577644 on 2020/6/5.
//

#import <Foundation/Foundation.h>
#import "HWMPeerInfo.h"

/// 通话结束结果
typedef  NS_ENUM(NSInteger, HWMCallEndResult) {
    /// 通话失败
    HWMCallEndResultFailed = -1,
    /// 主叫挂断（接通）
    HWMCallEndResultConnectedCallerHangUp = 0,
    /// 被叫挂断（接通）
    HWMCallEndResultConnectedCalleeHangUp,
    /// 主叫挂断（未接通）
    HWMCallEndResultCallerHangUp,
    /// 被叫挂断 （未接通）
    HWMCallEndResultCalleeHangUp,
    /// 被叫正忙（未接通）
    HWMCallEndResultCalleeBusy,
    /// 被叫接听超时（未接通）
    HWMCallEndResultCalleeAnswerTimeOut
};

typedef NS_ENUM(NSUInteger, HWMCallMediaType) {
    HWMCallMediaTypeAudio = 0,
    HWMCallMediaTypeVideo
};

typedef NS_ENUM(NSUInteger, HWMCallDirectionType) {
    HWMCallDirectionTypeComing = 0, // 来电
    HWMCallDirectionTypeOut // 呼出
};

@interface HWMCallRecordInfo : NSObject

@property (nonatomic, strong) HWMPeerInfo *myInfo;
@property (nonatomic, strong) HWMPeerInfo *peerInfo; // 对端信息
@property (nonatomic, assign) NSTimeInterval startTime; // 开始时间
@property (nonatomic, assign) NSTimeInterval endTime; // 结束时间
@property (nonatomic, assign) HWMCallMediaType callMediaType; // 呼叫类型
@property (nonatomic, assign) HWMCallDirectionType callDirectionType;
@property (nonatomic, assign) HWMCallEndResult callResult;
@property (nonatomic, assign) BOOL isHangUpFirst; // 主动挂断是YES，其他是NO
@property (nonatomic, assign) BOOL isPeerBusy; // 对方忙

@end

