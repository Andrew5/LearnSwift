//
//  HWMSDKAttendeeInfoModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKMeetingAttendeeBaseInfoModel.h"
#import "HWMSDKInterpreterInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKAttendeeInfoModel : NSObject

@property (nonatomic, strong) HWMSDKMeetingAttendeeBaseInfoModel *meetingBaseInfo;
@property (nonatomic, assign) BOOL isBroadcasted;
@property (nonatomic, assign) BOOL isSharing;
@property (nonatomic, assign) BOOL isInviteShare;
@property (nonatomic, assign) HWMParticipantCameraState cameraState;
@property (nonatomic, strong) HWMSDKInterpreterInfoModel *interpreInfo;
@property (nonatomic, assign) BOOL canBeSetAsCohost;
@property (nonatomic, assign) BOOL canBeSetAsAudience;
@property (nonatomic, assign) HWMConfMediaType confMediaType;
@property (nonatomic, assign) BOOL hasLocalRecordPermission;
@property (nonatomic, assign) HWMLocalRecordState localRecordState;
@property (nonatomic, assign) BOOL allowSpeaking;
@property (nonatomic, assign) BOOL isRollCall;
@property (nonatomic, assign) BOOL hasInviteOpenMicCapability;
@property (nonatomic, assign) BOOL hasInviteOpenCamCapability;
@property (nonatomic, assign) BOOL hasInviteShareCapability;
@property (nonatomic, assign) BOOL hasMoveWaitRoomCapability;
@property (nonatomic, assign) BOOL hasLocalRecordCapability;
@property (nonatomic, assign) BOOL hasPrivateChatCapability;
@property (nonatomic, assign) HWMArAssistState arAssistState;

@end

NS_ASSUME_NONNULL_END

