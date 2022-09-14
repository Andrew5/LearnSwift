//
//  HWMSDKStartCallInfoModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKCallBasicMemberInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKStartCallInfoModel : NSObject

@property (nonatomic, strong) HWMSDKCallBasicMemberInfoModel *callerInfo;
@property (nonatomic, strong) HWMSDKCallBasicMemberInfoModel *calleeInfo;
@property (nonatomic, assign) HWMCallType callType;
@property (nonatomic, assign) BOOL isCamOn;
@property (nonatomic, assign) BOOL isMicOn;

@end

NS_ASSUME_NONNULL_END

