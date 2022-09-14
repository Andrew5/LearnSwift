//
//  HWMSDKMeetingInfoModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKConfBaseInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKMeetingInfoModel : NSObject

@property (nonatomic, strong) HWMSDKConfBaseInfoModel *baseInfo;
@property (nonatomic, copy) NSString *imGroupId;
@property (nonatomic, copy) NSString *orgId;
@property (nonatomic, assign) HWMConfRecordMode recordMode;
@property (nonatomic, assign) BOOL isSvc;
@property (nonatomic, assign) BOOL isSupport90P;

@end

NS_ASSUME_NONNULL_END

