//
//  HWMSDKNetworkService.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKAllModelIndex.h"

NS_ASSUME_NONNULL_BEGIN


@interface HWMSDKNetworkService : NSObject

+ (instancetype)shareInstance;
+ (void)releaseInstance;
/// [en]This class is about xxxx. [cn]设置服务器地址
- (HWMSDKERR)setServerAddressWithServerInfo:(HWMSDKServerInfoModel *)serverInfo;

/// [en]This interface is used to set network mode. [cn]设置网络模式
- (HWMSDKERR)setNetworkModeWithNetworkInfo:(HWMSDKNetWorkModeInfoModel *)networkInfo;

@end



NS_ASSUME_NONNULL_END

