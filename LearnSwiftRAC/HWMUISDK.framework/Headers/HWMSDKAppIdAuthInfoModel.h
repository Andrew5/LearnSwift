//
//  HWMSDKAppIdAuthInfoModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKAppIdAuthInfoModel : NSObject

@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSString *signature;
@property (nonatomic, copy) NSString *corpId;
@property (nonatomic, copy) NSString *thirdUserId;
@property (nonatomic, assign) NSInteger expireTime;
@property (nonatomic, copy) NSString *nonce;
@property (nonatomic, assign) HWMThirdClientType thirdClientType;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *userEmail;
@property (nonatomic, copy) NSString *userPhone;
@property (nonatomic, copy) NSString *deptCode;

@end

NS_ASSUME_NONNULL_END

