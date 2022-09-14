//
//  HWMSDKModifyConfParamModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKConfCommonParamModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKModifyConfParamModel : NSObject

@property (nonatomic, copy) NSString *confId;
@property (nonatomic, assign) NSInteger startTime;
@property (nonatomic, assign) NSUInteger confLen;
@property (nonatomic, strong) HWMSDKConfCommonParamModel *confCommonParam;
@property (nonatomic, assign) BOOL isSendCalendarNotify;
@property (nonatomic, assign) BOOL isUseServerAutoInvite;
@property (nonatomic, assign) BOOL allowGuestStartConf;
@property (nonatomic, assign) NSInteger allowGuestStartConfTime;

@end

NS_ASSUME_NONNULL_END

