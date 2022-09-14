//
//  HWMSDKCallRecordInfoModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKCallBasicMemberInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKCallRecordInfoModel : NSObject

@property (nonatomic, assign) NSUInteger callId;
@property (nonatomic, strong) HWMSDKCallBasicMemberInfoModel *callerInfo;
@property (nonatomic, strong) HWMSDKCallBasicMemberInfoModel *calleeInfo;
@property (nonatomic, assign) NSInteger startTime;
@property (nonatomic, assign) NSInteger endTime;
@property (nonatomic, assign) BOOL isCallOut;
@property (nonatomic, assign) BOOL isCTDCall;
@property (nonatomic, assign) HWMCallType callType;
@property (nonatomic, assign) BOOL isEncrypted;
@property (nonatomic, assign) BOOL isCallEstablished;
@property (nonatomic, assign) HWMSDKERR errorCode;
@property (nonatomic, assign) BOOL isHangUpActively;
@property (nonatomic, assign) BOOL isPeerEndBusy;

@end

NS_ASSUME_NONNULL_END

