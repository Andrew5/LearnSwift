//
//  HWMSDKConfDetailModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKAddAttendeeListModel.h"
#import "HWMSDKConfBaseInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKConfDetailModel : NSObject

@property (nonatomic, strong) HWMSDKConfBaseInfoModel *baseInfo;
@property (nonatomic, copy) NSString *vmrId;
@property (nonatomic, assign) BOOL isVmr;
@property (nonatomic, assign) HWMVmrIdType vmrIdType;
@property (nonatomic, assign) HWMConfAllowJoinUserType confAllowJoinUserType;
@property (nonatomic, assign) BOOL isRecordOn;
@property (nonatomic, assign) BOOL isAutoRecord;
@property (nonatomic, assign) BOOL isMailOn;
@property (nonatomic, assign) BOOL isSmsOn;
@property (nonatomic, assign) BOOL isEmailCalenderOn;
@property (nonatomic, assign) BOOL isGuestJoinConfWithoutPwd;
@property (nonatomic, assign) NSUInteger durationMinutes;
@property (nonatomic, strong) HWMSDKAddAttendeeListModel *attendeeList;
@property (nonatomic, assign) NSUInteger maxAttendeeSize;
@property (nonatomic, assign) BOOL isOpenWaitingRoom;
@property (nonatomic, assign) BOOL allowGuestStartConf;
@property (nonatomic, assign) NSInteger allowGuestStartConfTime;

@end

NS_ASSUME_NONNULL_END

