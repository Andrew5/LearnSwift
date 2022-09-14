//
//  HWMSDKLoginStateInfoModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKLoginStateInfoModel : NSObject

@property (nonatomic, assign) HWMLoginState loginState;
@property (nonatomic, assign) BOOL isCallEnable;
@property (nonatomic, copy) NSString *authServerAddr;
@property (nonatomic, assign) NSUInteger authServerPort;
@property (nonatomic, copy) NSString *accessToken;
@property (nonatomic, copy) NSString *corpId;
@property (nonatomic, copy) NSString *uuid;
@property (nonatomic, copy) NSString *sipNumber;
@property (nonatomic, assign) HWMLoginConfServerType confServerType;
@property (nonatomic, assign) BOOL isCanCreateWebinar;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *thirdAccount;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, assign) BOOL isAnonymousConfLogin;
@property (nonatomic, assign) BOOL isNonceConfLogin;
@property (nonatomic, copy) NSString *account;

@end

NS_ASSUME_NONNULL_END

