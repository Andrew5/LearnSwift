//
//  HWMSDKAttendeeBaseInfoModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKAttendeeBaseInfoModel : NSObject

@property (nonatomic, copy) NSString *number;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSString *sms;
@property (nonatomic, copy) NSString *accountId;
@property (nonatomic, copy) NSString *userUuid;
@property (nonatomic, assign) BOOL isMute;
@property (nonatomic, assign) HWMConfRole role;
@property (nonatomic, assign) HWMAttendeeType type;
@property (nonatomic, copy) NSString *thirdAccount;
@property (nonatomic, assign) BOOL isSelf;
@property (nonatomic, assign) BOOL isAutoInvite;

@end

NS_ASSUME_NONNULL_END

