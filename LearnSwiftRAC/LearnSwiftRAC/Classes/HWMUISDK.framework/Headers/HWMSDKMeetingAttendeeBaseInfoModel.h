//
//  HWMSDKMeetingAttendeeBaseInfoModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKAttendeeBaseInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKMeetingAttendeeBaseInfoModel : NSObject

@property (nonatomic, strong) HWMSDKAttendeeBaseInfoModel *baseInfo;
@property (nonatomic, assign) NSUInteger userId;
@property (nonatomic, assign) BOOL isHandup;
@property (nonatomic, assign) HWMConfAttendeeState state;
@property (nonatomic, assign) BOOL isAnonymous;
@property (nonatomic, assign) HWMClientDeviceType clientDeviceType;
@property (nonatomic, copy) NSString *orgId;
@property (nonatomic, assign) BOOL isSpeaking;
@property (nonatomic, copy) NSString *pinyin;
@property (nonatomic, assign) NSInteger joinTimeStamp;

@end

NS_ASSUME_NONNULL_END

