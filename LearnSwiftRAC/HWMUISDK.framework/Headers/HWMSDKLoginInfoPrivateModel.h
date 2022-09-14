//
//  HWMSDKLoginInfoPrivateModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKAppIdAuthInfoModel.h"
#import "HWMSDKRegisterAuthInfoModel.h"
#import "HWMSDKSSOAuthInfoModel.h"
#import "HWMSDKAccountAuthInfoModel.h"
#import "HWMSDKMiddleTokenAuthInfoModel.h"
#import "HWMSDKAuthCodeAuthInfoModel.h"
#import "HWMSDKWechatAuthInfoModel.h"
#import "HWMSDKVerifyCodeAuthInfoModel.h"
#import "HWMSDKUsgTokenAuthInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKLoginInfoPrivateModel : NSObject

@property (nonatomic, assign) HWMAuthTypePrivate authType;
@property (nonatomic, assign) HWMClientType clientType;
@property (nonatomic, assign) BOOL isWelink;
@property (nonatomic, strong) HWMSDKAccountAuthInfoModel *accountAuthInfo;
@property (nonatomic, strong) HWMSDKAppIdAuthInfoModel *appIdAuthInfo;
@property (nonatomic, strong) HWMSDKMiddleTokenAuthInfoModel *middleTokenAuthInfo;
@property (nonatomic, strong) HWMSDKAuthCodeAuthInfoModel *authCodeAuthInfo;
@property (nonatomic, strong) HWMSDKRegisterAuthInfoModel *registerAuthInfo;
@property (nonatomic, strong) HWMSDKUsgTokenAuthInfoModel *usgTokenAuthInfo;
@property (nonatomic, strong) HWMSDKVerifyCodeAuthInfoModel *verifyCodeAuthInfo;
@property (nonatomic, strong) HWMSDKWechatAuthInfoModel *weChatAuthInfo;
@property (nonatomic, strong) HWMSDKSSOAuthInfoModel *ssoAuthInfo;

@end

NS_ASSUME_NONNULL_END

