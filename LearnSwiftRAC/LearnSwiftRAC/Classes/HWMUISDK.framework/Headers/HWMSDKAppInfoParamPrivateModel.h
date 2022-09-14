//
//  HWMSDKAppInfoParamPrivateModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKAppInfoParamModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKAppInfoParamPrivateModel : NSObject

@property (nonatomic, strong) HWMSDKAppInfoParamModel *appInfoParam;
@property (nonatomic, assign) HWMClientType clientType;
@property (nonatomic, assign) BOOL isWelink;
@property (nonatomic, copy) NSString *terminalType;
@property (nonatomic, copy) NSString *appVersion;
@property (nonatomic, copy) NSString *osName;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic, assign) HWMDevicePerformanceLevel deviceLevel;
@property (nonatomic, copy) NSString *pcBsMoudlePath;
@property (nonatomic, copy) NSString *pcBsMoudleCpuPath;
@property (nonatomic, copy) NSString *pcSegProcPath;
@property (nonatomic, copy) NSString *pcSegCoordPath;
@property (nonatomic, copy) NSString *virtualBackgroundPluginModelPath;
@property (nonatomic, copy) NSString *frameworksPath;
@property (nonatomic, assign) NSUInteger logKeepDays;

@end

NS_ASSUME_NONNULL_END

