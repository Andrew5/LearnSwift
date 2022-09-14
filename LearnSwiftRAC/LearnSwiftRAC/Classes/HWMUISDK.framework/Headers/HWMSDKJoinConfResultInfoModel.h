//
//  HWMSDKJoinConfResultInfoModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKAudienceWaitingInfoModel.h"
#import "HWMSDKGuestWaitingBeforeConfInfoModel.h"
#import "HWMSDKWaitingRoomInfoModel.h"
#import "HWMSDKMeetingInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKJoinConfResultInfoModel : NSObject

@property (nonatomic, assign) HWMJoinStatusType joinStatus;
@property (nonatomic, strong) HWMSDKAudienceWaitingInfoModel *audienceWaitingInfo;
@property (nonatomic, strong) HWMSDKGuestWaitingBeforeConfInfoModel *guestWaitingBeforeConfInfo;
@property (nonatomic, strong) HWMSDKWaitingRoomInfoModel *waitingRoomInfo;
@property (nonatomic, strong) HWMSDKMeetingInfoModel *meetingInfo;
@property (nonatomic, assign) BOOL isCamOn;
@property (nonatomic, assign) BOOL isMicOn;
@property (nonatomic, assign) BOOL needMute;
@property (nonatomic, assign) BOOL isSpkOn;

@end

NS_ASSUME_NONNULL_END

