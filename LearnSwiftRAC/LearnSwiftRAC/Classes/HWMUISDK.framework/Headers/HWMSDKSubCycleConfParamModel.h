//
//  HWMSDKSubCycleConfParamModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKSubCycleConfParamModel : NSObject

@property (nonatomic, copy) NSString *subConfID;
@property (nonatomic, assign) HWMConfMediaType confMediaType;
@property (nonatomic, assign) NSUInteger startTime;
@property (nonatomic, assign) NSUInteger endTime;
@property (nonatomic, assign) BOOL isAutoRecord;
@property (nonatomic, assign) NSUInteger recordAuthType;
@property (nonatomic, assign) HWMConfAllowJoinUserType callInRestriction;
@property (nonatomic, assign) BOOL allowGuestStartConf;
@property (nonatomic, assign) NSInteger allowGuestStartConfTime;

@end

NS_ASSUME_NONNULL_END

