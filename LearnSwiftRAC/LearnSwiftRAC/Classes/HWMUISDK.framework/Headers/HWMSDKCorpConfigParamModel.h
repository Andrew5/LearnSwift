//
//  HWMSDKCorpConfigParamModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKCommonConfigModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKCorpConfigParamModel : NSObject

@property (nonatomic, assign) BOOL hasRecordPerm;
@property (nonatomic, assign) BOOL enablePstn;
@property (nonatomic, assign) BOOL enableAiConfRecord;
@property (nonatomic, copy) NSString *sensitiveWord;
@property (nonatomic, assign) BOOL isSMSEnable;
@property (nonatomic, assign) BOOL enableHighResolution;
@property (nonatomic, copy) NSString *pstnNumber;
@property (nonatomic, assign) BOOL supportWaitingRoom;
@property (nonatomic, assign) BOOL supportVad;
@property (nonatomic, copy) NSArray <HWMSDKCommonConfigModel *> *commonConfigs;
@property (nonatomic, copy) NSString *corpName;
@property (nonatomic, assign) HWMAdminType adminType;
@property (nonatomic, assign) BOOL isCorpEnableInvitation;
@property (nonatomic, assign) NSUInteger shareProgrameType;
@property (nonatomic, assign) NSUInteger vmrPkgCount;
@property (nonatomic, assign) NSUInteger vmrPkgUsedCount;
@property (nonatomic, assign) BOOL enableDetectMaxBWE;
@property (nonatomic, assign) NSUInteger maxBitrateValue;
@property (nonatomic, assign) BOOL barrageSwitch;
@property (nonatomic, assign) BOOL allowGuestStartConf;
@property (nonatomic, assign) NSInteger allowGuestStartConfTime;
@property (nonatomic, assign) BOOL corpEnableGuide;

@end

NS_ASSUME_NONNULL_END

