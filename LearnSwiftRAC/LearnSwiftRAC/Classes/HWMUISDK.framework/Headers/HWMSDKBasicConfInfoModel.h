//
//  HWMSDKBasicConfInfoModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKSipConfInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKBasicConfInfoModel : NSObject

@property (nonatomic, copy) NSString *accessCode;
@property (nonatomic, copy) NSString *confId;
@property (nonatomic, copy) NSString *confPass;
@property (nonatomic, assign) NSInteger confMode;
@property (nonatomic, assign) NSUInteger mediaType;
@property (nonatomic, copy) NSString *nearbyaccess;
@property (nonatomic, strong) HWMSDKSipConfInfoModel *sip_info;
@property (nonatomic, assign) BOOL is_webinar;
@property (nonatomic, assign) HWMBasicConfRole role;
@property (nonatomic, assign) BOOL is_confServiceTp;
@property (nonatomic, copy) NSString *confCompanyID;
@property (nonatomic, assign) NSUInteger result_code;
@property (nonatomic, copy) NSString *meetingSubject;
@property (nonatomic, assign) NSInteger startTime;
@property (nonatomic, assign) NSInteger length;

@end

NS_ASSUME_NONNULL_END

