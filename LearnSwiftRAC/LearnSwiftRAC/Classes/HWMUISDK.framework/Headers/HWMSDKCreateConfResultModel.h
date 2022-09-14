//
//  HWMSDKCreateConfResultModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKCycleConfParamModel.h"
#import "HWMSDKSubCycleConfParamModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKCreateConfResultModel : NSObject

@property (nonatomic, copy) NSString *confId;
@property (nonatomic, copy) NSString *vmrConfId;
@property (nonatomic, copy) NSString *hostPwd;
@property (nonatomic, copy) NSString *guestPwd;
@property (nonatomic, assign) HWMConfMediaType confMediaType;
@property (nonatomic, assign) HWMConfServerType confServerType;
@property (nonatomic, copy) NSString *accessNumber;
@property (nonatomic, copy) NSString *guestJoinUri;
@property (nonatomic, assign) HWMConfRole confRole;
@property (nonatomic, copy) NSString *confSubject;
@property (nonatomic, copy) NSString *startTime;
@property (nonatomic, copy) NSString *endTime;
@property (nonatomic, copy) NSString *schedUserName;
@property (nonatomic, strong) HWMSDKCycleConfParamModel *cycleConfParam;
@property (nonatomic, copy) NSArray <HWMSDKSubCycleConfParamModel *> *subCycleConfParam;

@end

NS_ASSUME_NONNULL_END

