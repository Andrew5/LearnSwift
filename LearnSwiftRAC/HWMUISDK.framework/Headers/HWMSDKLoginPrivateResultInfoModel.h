//
//  HWMSDKLoginPrivateResultInfoModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKLoginPrivateResultInfoModel : NSObject

@property (nonatomic, copy) NSString *uuid;
@property (nonatomic, assign) NSUInteger ucStatus;
@property (nonatomic, assign) NSInteger isBindMobile;
@property (nonatomic, assign) NSInteger bindType;
@property (nonatomic, copy) NSString *freeAccount;
@property (nonatomic, copy) NSString *freePassword;
@property (nonatomic, assign) BOOL isFreeUser;
@property (nonatomic, copy) NSString *paidAccount;
@property (nonatomic, copy) NSString *paidPassword;
@property (nonatomic, assign) BOOL isGrayUser;
@property (nonatomic, copy) NSString *bindToken;
@property (nonatomic, copy) NSString *usgToken;
@property (nonatomic, copy) NSString *refreshToken;
@property (nonatomic, copy) NSString *siteDomain;
@property (nonatomic, assign) HWMAuthTypePrivate authType;
@property (nonatomic, assign) BOOL isFirstLogin;
@property (nonatomic, copy) NSString *thirdAccount;
@property (nonatomic, assign) BOOL firstSuccessLogin;

@end

NS_ASSUME_NONNULL_END

