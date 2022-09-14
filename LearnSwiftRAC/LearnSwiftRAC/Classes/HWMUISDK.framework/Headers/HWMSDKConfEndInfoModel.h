//
//  HWMSDKConfEndInfoModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKConfConflictInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKConfEndInfoModel : NSObject

@property (nonatomic, copy) NSString *reason;
@property (nonatomic, assign) BOOL isClosedByOtherHost;
@property (nonatomic, copy) NSString *otherHost;
@property (nonatomic, copy) NSString *confId;
@property (nonatomic, copy) NSString *confPwd;
@property (nonatomic, copy) NSString *accessNumber;
@property (nonatomic, assign) BOOL isVideoConf;
@property (nonatomic, assign) BOOL isCamOn;
@property (nonatomic, assign) BOOL isMicOn;
@property (nonatomic, assign) HWMConfServerType confServerType;
@property (nonatomic, strong) HWMSDKConfConflictInfoModel *conflictInfo;

@end

NS_ASSUME_NONNULL_END

