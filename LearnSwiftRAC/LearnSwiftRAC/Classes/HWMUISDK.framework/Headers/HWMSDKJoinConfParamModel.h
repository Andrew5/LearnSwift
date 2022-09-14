//
//  HWMSDKJoinConfParamModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKJoinConfParamModel : NSObject

@property (nonatomic, copy) NSString *confId;
@property (nonatomic, copy) NSString *confPassword;
@property (nonatomic, copy) NSString *confAccessNum;
@property (nonatomic, assign) BOOL isVideoConf;
@property (nonatomic, assign) BOOL isStopConflictConf;
@property (nonatomic, assign) BOOL isCamOn;
@property (nonatomic, assign) BOOL isMicOn;
@property (nonatomic, assign) HWMConfServerType confServerType;
@property (nonatomic, assign) HWMConfInviteMode inviteMode;

@end

NS_ASSUME_NONNULL_END

