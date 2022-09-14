//
//  HWMSDKConfCommonParamModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKAttendeeBaseInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKConfCommonParamModel : NSObject

@property (nonatomic, assign) BOOL vmrFlag;
@property (nonatomic, copy) NSString *vmrId;
@property (nonatomic, assign) HWMVmrIdType vmrIdType;
@property (nonatomic, assign) HWMConfMediaType confMediaType;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSArray <HWMSDKAttendeeBaseInfoModel *> *attendees;
@property (nonatomic, assign) HWMTimezone timezone;
@property (nonatomic, assign) HWMConfPromptLanguageType promptLanguage;
@property (nonatomic, assign) HWMConfRecordMode recordMode;
@property (nonatomic, assign) BOOL isAutoRecord;
@property (nonatomic, assign) BOOL isGuestJoinConfWithoutPwd;
@property (nonatomic, copy) NSString *guestPwd;
@property (nonatomic, assign) HWMConfAllowJoinUserType confAllowJoinUser;
@property (nonatomic, assign) BOOL isSendSms;
@property (nonatomic, assign) BOOL isSendEmail;
@property (nonatomic, assign) BOOL isOpenWaitingRoom;
@property (nonatomic, assign) BOOL isExperienceConf;

@end

NS_ASSUME_NONNULL_END

