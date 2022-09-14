//
//  HWMSDKResetPasswordParamModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKResetPasswordParamModel : NSObject

@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy, getter=theNewPassword) NSString *newPassword;
@property (nonatomic, assign) HWMPasswordType passWordType;
@property (nonatomic, copy) NSString *authToken;

@end

NS_ASSUME_NONNULL_END

