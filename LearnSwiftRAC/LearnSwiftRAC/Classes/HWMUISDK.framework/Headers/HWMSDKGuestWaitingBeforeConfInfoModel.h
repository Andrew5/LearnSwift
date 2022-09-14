//
//  HWMSDKGuestWaitingBeforeConfInfoModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKGuestWaitingBeforeConfInfoModel : NSObject

@property (nonatomic, assign) HWMSDKERR result;
@property (nonatomic, assign) NSInteger startTime;
@property (nonatomic, assign) BOOL allowGuestStartConf;
@property (nonatomic, assign) NSInteger allowGuestStartConfTime;
@property (nonatomic, assign) BOOL isMicOn;
@property (nonatomic, assign) BOOL isSpkOn;
@property (nonatomic, assign) BOOL isCamOn;
@property (nonatomic, assign) HWMJoinFailureReason failureReason;

@end

NS_ASSUME_NONNULL_END

