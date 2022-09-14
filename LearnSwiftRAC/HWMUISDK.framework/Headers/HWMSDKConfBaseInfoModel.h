//
//  HWMSDKConfBaseInfoModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKCycleConfParamModel.h"
#import "HWMSDKSubCycleConfParamModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKConfBaseInfoModel : NSObject

@property (nonatomic, copy) NSString *confId;
@property (nonatomic, copy) NSString *vmrConfId;
@property (nonatomic, copy) NSString *confSubject;
@property (nonatomic, assign) NSInteger startTime;
@property (nonatomic, assign) NSInteger endTime;
@property (nonatomic, copy) NSString *timeZone;
@property (nonatomic, copy) NSString *hostPwd;
@property (nonatomic, copy) NSString *guestPwd;
@property (nonatomic, assign) HWMConfMediaType mediaType;
@property (nonatomic, copy) NSString *scheduserUuid;
@property (nonatomic, copy) NSString *scheduserName;
@property (nonatomic, copy) NSString *hostJoinUri;
@property (nonatomic, copy) NSString *guestJoinUri;
@property (nonatomic, copy) NSString *accessNumber;
@property (nonatomic, assign) HWMConfRole selfConfRole;
@property (nonatomic, assign) BOOL isWebinar;
@property (nonatomic, assign) BOOL isCreator;
@property (nonatomic, assign) HWMConfServerType confServerType;
@property (nonatomic, copy) NSString *audienceJoinUri;
@property (nonatomic, copy) NSString *audiencePwd;
@property (nonatomic, assign) HWMConfState confStateType;
@property (nonatomic, assign) HWMConferenceType conferenceType;
@property (nonatomic, strong) HWMSDKCycleConfParamModel *cycleParam;
@property (nonatomic, copy) NSArray <HWMSDKSubCycleConfParamModel *> *subConfParam;
@property (nonatomic, copy) NSString *confUuid;
@property (nonatomic, assign) BOOL isExperienceConf;

@end

NS_ASSUME_NONNULL_END

