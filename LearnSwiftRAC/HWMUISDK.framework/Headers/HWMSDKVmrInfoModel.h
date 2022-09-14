//
//  HWMSDKVmrInfoModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKVmrInfoModel : NSObject

@property (nonatomic, copy) NSString *confId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *vmrId;
@property (nonatomic, assign) HWMMeetingIdType meetingIdType;
@property (nonatomic, copy) NSString *hostPwd;
@property (nonatomic, copy) NSString *accessNumber;
@property (nonatomic, copy) NSString *guestPwd;
@property (nonatomic, copy) NSString *scheduserAccount;
@property (nonatomic, copy) NSString *hostJoinUri;
@property (nonatomic, copy) NSString *guestJoinUri;
@property (nonatomic, assign) NSUInteger maxParties;
@property (nonatomic, assign) BOOL isEnable;
@property (nonatomic, assign) NSUInteger duration;
@property (nonatomic, assign) HWMVmrType vmrType;
@property (nonatomic, assign) NSUInteger remainingHours;
@property (nonatomic, assign) NSUInteger expireDate;
@property (nonatomic, assign) BOOL allowGuestStartConf;

@end

NS_ASSUME_NONNULL_END

