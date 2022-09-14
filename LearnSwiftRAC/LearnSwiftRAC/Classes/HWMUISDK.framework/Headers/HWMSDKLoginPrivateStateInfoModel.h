//
//  HWMSDKLoginPrivateStateInfoModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKLoginStateInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKLoginPrivateStateInfoModel : NSObject

@property (nonatomic, strong) HWMSDKLoginStateInfoModel *loginStateInfo;
@property (nonatomic, assign) BOOL isUsgEnable;
@property (nonatomic, assign) BOOL isConfImEnable;
@property (nonatomic, copy) NSString *refreshToken;
@property (nonatomic, assign) BOOL isFreeUser;
@property (nonatomic, copy) NSString *confServerAddr;
@property (nonatomic, copy) NSString *pushServerUrl;
@property (nonatomic, copy) NSString *ctdServerUrl;
@property (nonatomic, assign) NSUInteger ctdPort;
@property (nonatomic, assign) NSInteger loginIntent;
@property (nonatomic, assign) BOOL isBindPhone;
@property (nonatomic, copy) NSString *privacyVersion;
@property (nonatomic, copy) NSString *maaUri;
@property (nonatomic, assign) BOOL isGrayUser;
@property (nonatomic, assign) HWMLoginCorpType corpType;
@property (nonatomic, copy) NSString *weChatName;
@property (nonatomic, assign) HWMUserStatus userStatus;
@property (nonatomic, assign) BOOL firstSuccessLogin;

@end

NS_ASSUME_NONNULL_END

