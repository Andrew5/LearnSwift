//
//  HWMSDKConfService.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKAllModelIndex.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^HWMSDKJoinConfByIdSuccessBlock) (HWMSDKJoinConfResultInfoModel * joinConfResultInfo);
typedef void(^HWMSDKJoinConfByIdFailedBlock) (NSError * _Nullable error, HWMSDKJoinConfFailedInfoModel * joinConfFailedInfo);

typedef void(^HWMSDKJoinConfAnonymouslyByIdSuccessBlock) (HWMSDKJoinConfResultInfoModel * joinConfResultInfo);
typedef void(^HWMSDKJoinConfAnonymouslyByIdFailedBlock) (NSError * _Nullable error, HWMSDKJoinConfFailedInfoModel * joinConfFailedInfo);

typedef void(^HWMSDKQueryVmrInfoSuccessBlock) (HWMSDKVmrInfoModel * personalVmrInfo, HWMSDKVmrInfoListModel * cloudVmrList);
typedef void(^HWMSDKQueryVmrInfoFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKQueryConfInfoSuccessBlock) (HWMSDKConfDetailModel * confDetailInfo);
typedef void(^HWMSDKQueryConfInfoFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKCreateConfSuccessBlock) (HWMSDKCreateConfResultModel * createConfResult);
typedef void(^HWMSDKCreateConfFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKBookConfSuccessBlock) (HWMSDKCreateConfResultModel * bookConfResult);
typedef void(^HWMSDKBookConfFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKModifyConfSuccessBlock) (void);
typedef void(^HWMSDKModifyConfFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKModifyVmrInfoSuccessBlock) (void);
typedef void(^HWMSDKModifyVmrInfoFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKCancelConfSuccessBlock) (void);
typedef void(^HWMSDKCancelConfFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKRejectConfSuccessBlock) (void);
typedef void(^HWMSDKRejectConfFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKAcceptConfSuccessBlock) (HWMSDKAcceptConfResultInfoModel * acceptConfResultInfo);
typedef void(^HWMSDKAcceptConfFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKBookCycleConfSuccessBlock) (HWMSDKCreateConfResultModel * bookConfResult);
typedef void(^HWMSDKBookCycleConfFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKModifyCycleConfSuccessBlock) (void);
typedef void(^HWMSDKModifyCycleConfFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKModifySubCycleConfSuccessBlock) (void);
typedef void(^HWMSDKModifySubCycleConfFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKCancelCycleConfSuccessBlock) (void);
typedef void(^HWMSDKCancelCycleConfFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKCancelSubCycleConfSuccessBlock) (void);
typedef void(^HWMSDKCancelSubCycleConfFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKSetAudienceVideoLayoutSuccessBlock) (void);
typedef void(^HWMSDKSetAudienceVideoLayoutFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKHangupAttendeeSuccessBlock) (void);
typedef void(^HWMSDKHangupAttendeeFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKRemoveAttendeeSuccessBlock) (void);
typedef void(^HWMSDKRemoveAttendeeFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKAddAttendeeSuccessBlock) (void);
typedef void(^HWMSDKAddAttendeeFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKLockConfSuccessBlock) (void);
typedef void(^HWMSDKLockConfFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKLockShareSuccessBlock) (BOOL isLock);
typedef void(^HWMSDKLockShareFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKInterpreterConfirmSuccessBlock) (void);
typedef void(^HWMSDKInterpreterConfirmFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKSetLanguageChannelSuccessBlock) (HWMSetLanguageChannelType languageChannelType);
typedef void(^HWMSDKSetLanguageChannelFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKLocalRecordGrantAttendeeSuccessBlock) (HWMSDKGrantAttendRecordResultModel * grantAttendRecordResult);
typedef void(^HWMSDKLocalRecordGrantAttendeeFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKSetLocalRecordModeSuccessBlock) (HWMClientRecordMode type);
typedef void(^HWMSDKSetLocalRecordModeFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKSwitchRoleByHostSuccessBlock) (HWMSDKSwitchRoleResultModel * switchRoleResult);
typedef void(^HWMSDKSwitchRoleByHostFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKOperateCloudRecordSuccessBlock) (BOOL isStartRecord);
typedef void(^HWMSDKOperateCloudRecordFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKBroadcastAttendeeSuccessBlock) (BOOL isBroadcast);
typedef void(^HWMSDKBroadcastAttendeeFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKAllowAudienceJoinSuccessBlock) (BOOL isAllow);
typedef void(^HWMSDKAllowAudienceJoinFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKAllowAudienceSpeakSuccessBlock) (BOOL isAllow);
typedef void(^HWMSDKAllowAudienceSpeakFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKMuteAllAttendeeSuccessBlock) (NSUInteger isMute);
typedef void(^HWMSDKMuteAllAttendeeFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKRequestHostRoleSuccessBlock) (void);
typedef void(^HWMSDKRequestHostRoleFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKReleaseHostRoleSuccessBlock) (void);
typedef void(^HWMSDKReleaseHostRoleFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKGrantHostRoleSuccessBlock) (void);
typedef void(^HWMSDKGrantHostRoleFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKAttendeeHandsupSuccessBlock) (BOOL isHandUp);
typedef void(^HWMSDKAttendeeHandsupFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKMuteAttendeeSuccessBlock) (BOOL isMute);
typedef void(^HWMSDKMuteAttendeeFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKAllowAttendeeUnMuteSuccessBlock) (BOOL isAllow);
typedef void(^HWMSDKAllowAttendeeUnMuteFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKSetCohostRightSuccessBlock) (HWMSDKSetCohostResultModel * setCohostResultInfo);
typedef void(^HWMSDKSetCohostRightFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKRenameSuccessBlock) (void);
typedef void(^HWMSDKRenameFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKAllowAttendeeRenameSuccessBlock) (BOOL isAllow);
typedef void(^HWMSDKAllowAttendeeRenameFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKPauseConfSuccessBlock) (BOOL isPause);
typedef void(^HWMSDKPauseConfFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKInviteShareSuccessBlock) (HWMSDKInviteShareResultModel * inviteShareShareResultInfo);
typedef void(^HWMSDKInviteShareFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKAnswerInviteShareSuccessBlock) (HWMSDKInviteShareResultModel * setShareResultInfo);
typedef void(^HWMSDKAnswerInviteShareFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKAllowWaitingAttendeeEnterSuccessBlock) (void);
typedef void(^HWMSDKAllowWaitingAttendeeEnterFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKAllowAllWaitingAttendeeEnterSuccessBlock) (void);
typedef void(^HWMSDKAllowAllWaitingAttendeeEnterFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKUpdateAllowJoinUserTypeSuccessBlock) (HWMConfAllowJoinUserType type);
typedef void(^HWMSDKUpdateAllowJoinUserTypeFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKEndConfSuccessBlock) (void);
typedef void(^HWMSDKEndConfFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKOpenSubtitleSuccessBlock) (BOOL isOpen);
typedef void(^HWMSDKOpenSubtitleFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKLeaveConfSuccessBlock) (void);
typedef void(^HWMSDKLeaveConfFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKRefuseOpenMicSuccessBlock) (void);
typedef void(^HWMSDKRefuseOpenMicFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKInviteOpenCameraSuccessBlock) (void);
typedef void(^HWMSDKInviteOpenCameraFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKRefuseOpenCameraSuccessBlock) (void);
typedef void(^HWMSDKRefuseOpenCameraFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKAllowAttendeeOpenCameraSuccessBlock) (void);
typedef void(^HWMSDKAllowAttendeeOpenCameraFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKRemoveWaitingAttendeeSuccessBlock) (void);
typedef void(^HWMSDKRemoveWaitingAttendeeFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKRemoveAllWaitingAttendeeSuccessBlock) (void);
typedef void(^HWMSDKRemoveAllWaitingAttendeeFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKMoveToWaitingRoomSuccessBlock) (void);
typedef void(^HWMSDKMoveToWaitingRoomFailedBlock) (NSError * _Nullable error);

typedef void(^HWMSDKOpenWaitingRoomSuccessBlock) (BOOL isOpen);
typedef void(^HWMSDKOpenWaitingRoomFailedBlock) (NSError * _Nullable error);


@protocol HWMSDKConfMgrNotify <NSObject>

@optional
/// [en]This class is about the notification of conference connection. [cn]会议连接成功的通知 :setAudioRouteInCall
- (void)onConfConnectedNotify:(HWMSDKConfConnectedInfoModel *)confConnectedInfo;
/// [en]This class is about the notification of an ended conference. [cn]会议结束的通知
- (void)onConfEndedNotify:(HWMSDKERR)result reasonDesc:(NSString *)reasonDesc confEndInfo:(HWMSDKConfEndInfoModel *)confEndInfo;
/// [en]This class is about conference incoming call notification. [cn]会议来电的通知 :initRender :initAudioRoute
- (void)onConfIncomingNotify:(HWMSDKConfIncomingInfoModel *)confIncomingInfo;
/// [en] [cn]会议来电异常的通知
- (void)onConfIncomingErrorNotify:(HWMSDKERR)result reasonDesc:(NSString *)reasonDesc;
/// [en]This class is about the notification of conference list change.Synchronized methods is GetConfListInfo. [cn]会议列表变更
- (void)onConfListInfoChanged:(HWMSDKConfListInfoModel *)confListParam;
/// [en]This class is about the notification of anonymous membership account cancellation. [cn]匿名入会账户注销 :imLogout
- (void)onAnonyJoinConfLogoutNotify:(HWMSDKERR)result reasonDesc:(NSString *)reasonDesc;
/// [en]This class is about the notification of rejoining the conference without code stream. [cn]会议无码流重新入会的通知 :leaveDataConf
- (void)onStartReJoinConfNotify:(HWMLeaveConfMode)reJoinConfReason;
/// [en]This class is about the notification of rejoining the conference without code stream successfully. [cn]会议无码流重新入会成功的通知
- (void)onReJoinConfSuccessNotify:(HWMLeaveConfMode)reJoinConfReason;
/// [en]This class is about the notification of leaving the conference without code stream. [cn]会议无码流离会的通知 :leaveDataConf
- (void)onNoStreamLeaveConfNotify;
/// [en]This class is about the notification of waiting room info. [cn]等候室信息的通知
- (void)onWaitingRoomInfoNotify:(HWMSDKWaitingRoomInfoModel *)waitingRoomInfo;

@end

@protocol HWMSDKConfStateNotify <NSObject>

@optional
/// [en] [cn]会议基本信息更新通知
- (void)onMeetingInfoChanged:(HWMSDKMeetingInfoModel *)meetingInfo;
/// [en] [cn]我的状态变更: 是否举手的通知
- (void)onSelfHandupChanged:(BOOL)isHandup;
/// [en] [cn]我的状态变更: 我的名字的通知
- (void)onSelfNameChanged:(NSString *)name;
/// [en] [cn]我的状态变更: 我的角色的通知
- (void)onSelfRoleChanged:(HWMConfRole)confRole;
/// [en] [cn]我的状态变更: 是否有云上录播权限的通知
- (void)onSelfHasCloudRecordPermissionChanged:(BOOL)hasRecordPermission;
/// [en] [cn]我的状态变更: 是否有客户端本地录制权限的通知
- (void)onSelfHasLocalRecordPermissionChanged:(BOOL)hasRecordPermission;
/// [en] [cn]我的状态变更: 本地录播状态变更
- (void)onSelfLocalRecordStateChanged:(HWMLocalRecordState)localRecordState;
/// [en] [cn]我的状态变更: 共享状态变更的通知
- (void)onSelfShareStateChanged:(BOOL)isShare;
/// [en] [cn]我的状态变更: 被邀请共享变更的通知
- (void)onSelfIsInviteShareChanged:(BOOL)isInviteShare;
/// [en] [cn]我的状态变更: 是否支持共享功能 :disable
- (void)onSelfShareModeChanged:(HWMConfShareMode)shareMode;
/// [en] [cn]会议状态变更: 会议模式变化
- (void)onConfModeTypeChanged:(HWMConfModeType)confModeType;
/// [en] [cn]会议状态变更: 是否有主席的通知
- (void)onConfHasHostChanged:(BOOL)hasHost;
/// [en] [cn]会议状态变更: 广播的通知
- (void)onConfBroadcastInfoChanged:(HWMSDKBroadcastInfoModel *)broadcastInfo;
/// [en] [cn]会议状态变更: 点名的通知
- (void)onConfRollCallInfoChanged:(HWMSDKRollCallInfoModel *)rollCallInfo;
/// [en] [cn]会议状态变更: 是否全场静音的通知
- (void)onConfIsAllMutedChanged:(BOOL)isAllMuted;
/// [en] [cn]会议状态变更: 是否支持字幕的通知
- (void)onConfIsSupportSubtitleChanged:(BOOL)isSupportSubtitle;
/// [en] [cn]会议状态变更: 是否允许解除静音的通知
- (void)onConfIsAllowUnmuteChanged:(BOOL)allowUnmute;
/// [en] [cn]会议状态变更: 会议是否锁定的通知
- (void)onConfIsLockedChanged:(BOOL)isLocked;
/// [en] [cn]会议状态变更: 是否共享锁定的通知
- (void)onConfIsShareLockedChanged:(BOOL)isShareLocked;
/// [en] [cn]聊天权限变更通知
- (void)onChatPermissionChanged:(HWMChatPermission)chatPermission;
/// [en] [cn]会议状态变更: 是否暂停的通知
- (void)onConfIsPausedChanged:(BOOL)isPaused;
/// [en] [cn]会议状态变更: 是否开启水印的通知
- (void)onConfSupportWatermarkChanged:(BOOL)supportWatermark;
/// [en] [cn]会议状态变更: 是否支持联席主持人的通知
- (void)onConfSupportCohostChanged:(BOOL)supportCohost;
/// [en] [cn]会议状态变更: 与会者人数(包括在线的视频和音频会场人数)的通知
- (void)onConfAttendeeSizeChanged:(HWMSDKAttendeeSizeInfoModel *)attendeeSizeInfo;
/// [en] [cn]会议状态变更: 举手信息的通知
- (void)onConfHandupInfoChanged:(HWMSDKConfHandupInfoModel *)handupInfo;
/// [en] [cn]会议状态变更: 本地录制信息变更的通知
- (void)onConfLocalRecordChanged:(HWMSDKLocalRecordInfoModel *)localRecordInfo;
/// [en] [cn]会议状态变更: 云上录制状态变更的通知
- (void)onConfCloudRecordChanged:(HWMSDKCloudRecordInfoModel *)cloudRecordInfo;
/// [en]This class is about the notification of no code stream for the conference. [cn]会议无码流的通知
- (void)onConfNoStreamNotify:(NSInteger)noStreamSeconds;
/// [en] [cn]与会者列表变更: 全量的与会者列表的通知
- (void)onAttendeeListChanged:(HWMSDKAttendeeListModel *)attendeeList;
/// [en] [cn]与会者列表变更: 视频与会者列表的通知
- (void)onVideoAttendeeListChanged:(HWMSDKAttendeeListModel *)attendeeList;
/// [en] [cn]与会者列表变更: 发言人变更的通知
- (void)onSpeakerListChanged:(HWMSDKSpeakerListModel *)speakerList;
/// [en] [cn]会议状态变更: 允许入会范围的通知
- (void)onConfAllowJoinTypeChanged:(HWMConfAllowJoinUserType)allowJoinType;
/// [en] [cn]会议状态变更: 是否支持邀请共享的通知
- (void)onConfSupportInviteShareChanged:(BOOL)supportInviteShare;
/// [en] [cn]会议状态变更: 是否支持取消共享的通知
- (void)onConfEnableCancelShareChanged:(BOOL)enableCancelShare;
/// [en]This class is about commercial status change notify. [cn]商用资源状态变化通知
- (void)onCommercialStatusChanged:(HWMCommercialStatusType)statusType;
/// [en] [cn]主画面userId变化的结果回调
- (void)onMainVideoUserIdChanged:(NSUInteger)userId;
/// [en] [cn]被主持人邀请 打开/关闭 麦克风
- (void)onInviteOpenMicNotify:(BOOL)isOpen openType:(HWMInviteOpenMicType)openType inviterUserId:(NSUInteger)inviterUserId;
/// [en] [cn]主持人收到邀请者拒绝开启麦克风通知
- (void)onRefuseOpenMicNotify:(NSUInteger)userId;
/// [en] [cn]被主持人邀请 打开/关闭 摄像头
- (void)onInviteOpenCameraNotify:(BOOL)isOpen inviterUserId:(NSUInteger)inviterUserId;
/// [en] [cn]主持人收到邀请者拒绝开启摄像头通知
- (void)onRefuseOpenCameraNotify:(NSUInteger)userId;
/// [en] [cn]功能开关：主持人是否邀请与会人开启麦克风变化通知
- (void)onInviteOpenMicChanged:(BOOL)isInvite;
/// [en] [cn]是否允许改名变化通知
- (void)onConfIsAllowRenameChanged:(BOOL)isAllow;
/// [en] [cn]功能开关：主持人是否能够强制关闭与会人摄像头通知
- (void)onEnableForceCloseCameraChanged:(BOOL)enable;
/// [en] [cn]功能开关：主持人设置与会人自行开启摄像头状态变化通知
- (void)onEnableAllowOpenCameraChanged:(BOOL)enable;
/// [en] [cn]等候室：会议状态变更: 是否支持等候室的通知
- (void)onConfSupportWaitingRoomChanged:(BOOL)supportWaitingRoom;
/// [en] [cn]等候室：会议状态变更: 等候室开启状态的通知
- (void)onConfIsOpenWaitingRoomChanged:(BOOL)isOpenWaitingRoom;
/// [en] [cn]等候室：等候室成员列表变更的通知
- (void)onWaitingListChanged:(HWMSDKAttendeeListModel *)waitingInfoList;
/// [en] [cn]网络研讨会：我的状态变更: 是否允许说话的通知
- (void)onSelfAllowSpeakChanged:(BOOL)isAllowSpeak;
/// [en] [cn]网络研讨会：我的状态变更: 是否可以转成观众
- (void)onSelfCanSwitchToAudienceChanged:(BOOL)canSwitchAudience;
/// [en] [cn]网络研讨会：会议状态变更: 观众个数的通知
- (void)onConfAudienceSizeChanged:(NSUInteger)audienceSize;
/// [en] [cn]网络研讨会：会议状态变更: 观众的观看视频模式的通知
- (void)onConfAudienceVideoLayoutChanged:(HWMAudienceLayoutType)audienceLayoutType;
/// [en] [cn]网络研讨会：会议状态变更: 是否允许观众入会的通知
- (void)onConfIsAllowAudienceJoinChanged:(BOOL)isAllowJoin;
/// [en] [cn]网络研讨会：观众与会者列表变更的通知
- (void)onAudienceListChanged:(HWMSDKAttendeeListModel *)audienceList;
/// [en]This class is about the notification of audience changed.Synchronized methods is GetAudienceSizeInfo. [cn]网络研讨会：观众人数变化通知
- (void)onAudienceInfoSizeChanged:(HWMSDKShowAudienceSizeInfoModel *)showAudienceInfo;
/// [en] [cn]同声传译：会议状态变更: 同声传译的通知
- (void)onConfSimuInterpretChanged:(HWMSDKSimuInterpretInfoModel *)simuInterpretInfo;
/// [en] [cn]同声传译：会议状态变更: 是否开启同声传译的通知
- (void)onConfIsSimuInterpretOpenedChanged:(BOOL)isSimuInterpretOpened;
/// [en] [cn]同声传译：我的状态变更: 同声传译的通知
- (void)onSelfInterpreterChanged:(HWMSDKInterpreterInfoModel *)selfInterpreterInfo;
/// [en] [cn]同声传译：与会者支持选择收听原声频道变化通知
- (void)onEnableOriginVoiceChanged:(BOOL)enable;
/// [en] [cn]状态变更：是否允许与会人自行开启摄像头状态变化通知
- (void)onIsAllowOpenCameraChanged:(BOOL)isAllow;
/// [en] [cn]会议敏感词信息更新通知
- (void)onSensitiveWordChanged:(HWMSDKSensitiveWordListModel *)sensitiveWordLists;
/// [en] [cn]会议状态变更: 是否支持标注权限控制
- (void)onSupportAnnotationPermissionChanged:(BOOL)supportAnnotationPermission;
/// [en] [cn]会前状态信息变更 :leaveDataConfWithParam
- (void)onJoinStatusChanged:(HWMJoinStatusType)joinStatus;
/// [en] [cn]来宾会前等待信息变更
- (void)onGuestWaitingBeforeConfInfoChanged:(HWMSDKGuestWaitingBeforeConfInfoModel *)guestWaitingBeforeConfInfo;
/// [en] [cn]观众等待信息变更
- (void)onAudienceWaitingInfoChanged:(HWMSDKAudienceWaitingInfoModel *)audienceWaitingInfo;

@end

@protocol HWMSDKVideoInfoNotify <NSObject>

@optional
/// [en]xxxxx [cn]视频窗口信息变更:名称
- (void)onVideoNameChanged:(NSUInteger)userId name:(NSString *)name;
/// [en]xxxxx [cn]视频窗口信息变更:静音
- (void)onVideoIsMuteChanged:(NSUInteger)userId isMute:(BOOL)isMute;
/// [en]xxxxx [cn]视频窗口信息变更:举手
- (void)onVideoIsHandupChanged:(NSUInteger)userId isHandup:(BOOL)isHandup;
/// [en]xxxxx [cn]视频是否是最大发言人
- (void)onVideoIsMaxSpeakerChanged:(NSUInteger)userId;
/// [en]xxxxx [cn]视频是否在加载
- (void)onVideoIsLoadingChanged:(NSUInteger)userId isLoading:(BOOL)isLoading;
/// [en]xxxxx [cn]视频流的变化通知
- (void)onVideoStreamTypeChanged:(NSUInteger)userId streamType:(HWMStreamType)streamType;
/// [en]xxxxx [cn]视频窗口信息变更:信号格
- (void)onVideoNetQualityChanged:(NSUInteger)userId level:(NSUInteger)level;

@end

@protocol HWMSDKConfCtrlNotify <NSObject>

@optional
/// [en] [cn]角色切换的通知
- (void)onSwitchRoleNotify:(HWMSDKSwitchRoleInfoModel *)switchRoleInfo;
/// [en] [cn]邀请/取消共享的通知
- (void)onInviteShareNotify:(BOOL)isShare;
/// [en] [cn]接受/拒绝共享的通知
- (void)onAnswerShareNotify:(NSUInteger)userId result:(HWMSDKERR)result;
/// [en] [cn]会议结束时录制结果的通知
- (void)onRecordWhenEndConfNotify:(HWMSDKRecordNotifyWhenConfEndInfoModel *)recordInfo;
/// [en]xxxx [cn]异步推送新增与会者结果
- (void)onAsynAddAttendeeNotify:(HWMSDKERR)result reasonDesc:(NSString *)reasonDesc;
/// [en]xxxx [cn]通知主动选看人员已经离开会议
- (void)onSpecifiedAttendeeLeaveNotify:(NSUInteger)userId;

@end

@protocol HWMSDKConfDeviceNotify <NSObject>

@optional
/// [en]This class is about video device status change. Synchronized Method is GetCameraState. [cn]视频设备状态变化
- (void)onCameraStateChanged:(HWMDeviceStatus)status;
/// [en]This class is about the changes of microphone mute status,TRUE - micOn;FALSE - micOff. Synchronized Method is GetMicState [cn]麦克风静音状态变化
- (void)onMicStateChanged:(BOOL)isOn;
/// [en]This class is about the changes of speak mute status,TRUE - micOn;FALSE - micOff. Synchronized Method is GetSpeakState [cn]扬声器静音状态变化
- (void)onSpeakStateChanged:(BOOL)isOn;
/// [en]This class is about the callback of howl status detection. [cn]啸叫状态回调
- (void)onDevicesHowlStatusNotify:(HWMHowlStatus)howlstate;
/// [en]This class is about the callback of microphone input status change. [cn]麦克风输入状态变化
- (void)onMicInputLevelNotify:(NSInteger)result;
/// [en]This class is about the callback of voice detection. [cn]人声检测回调
- (void)onVoiceDetectNotify;
/// [en]This class is about audio routing variation.Synchronous acquisition method is GetAudioRoute. [cn]音频路由变化
- (void)onAudioRouteChanged:(HWMAudioRouteType)audioRouteType;
/// [en]This class is about the notification of low quality network. [cn]弱网提示通知
- (void)onPoorNetworkQualityNotify:(HWMLowNetWorkType)lowNetWorkType;
/// [en]This class is about the notification of switching camera because of bandwidth fluctuations. [cn]带宽波动切换摄像头通知
- (void)onNetJitterTMMBRNotify:(HWMTMMBRMsgType)netJitterTMMBRMsgType;
/// [en]This class is about the notification of BP result. [cn]hme处理虚拟背景错误上报
- (void)onVirtualBackgroundErrorNotify:(HWMBgTypeErr)cameraStartErrorType;

@end

@interface HWMSDKConfMgrService : NSObject

+ (instancetype)shareInstance;
+ (void)releaseInstance;
- (void)addConfMgrNotifyCallback:(id<HWMSDKConfMgrNotify>)callback;
- (void)removeConfMgrNotifyCallback:(id<HWMSDKConfMgrNotify>)callback;
/// [en] [cn]当前是否在会议中
- (BOOL)isInConf;

/// [en]This class is about querying the detailed information of vmr conference. [cn]查询VMR会议详情
- (void)queryVmrInfoWithSuccessCallback:(HWMSDKQueryVmrInfoSuccessBlock)successCallback failedCallback:(HWMSDKQueryVmrInfoFailedBlock)failedCallback;

/// [en] [cn]查询会议详情
- (void)queryConfInfoWithConfId:(NSString *)confId successCallback:(HWMSDKQueryConfInfoSuccessBlock)successCallback failedCallback:(HWMSDKQueryConfInfoFailedBlock)failedCallback;

/// [en] [cn]创建会议
- (void)createConfWithParam:(HWMSDKCreateConfParamModel *)param successCallback:(HWMSDKCreateConfSuccessBlock)successCallback failedCallback:(HWMSDKCreateConfFailedBlock)failedCallback;

/// [en] [cn]预约会议
- (void)bookConfWithParam:(HWMSDKBookConfParamModel *)param successCallback:(HWMSDKBookConfSuccessBlock)successCallback failedCallback:(HWMSDKBookConfFailedBlock)failedCallback;

/// [en]This class is about getting the conference list synchronously. [cn]同步获取会议列表
- (NSArray <HWMSDKConfListItemModel *> *)getConfListInfo;

/// [en] [cn]编辑会议
- (void)modifyConfWithParam:(HWMSDKModifyConfParamModel *)param successCallback:(HWMSDKModifyConfSuccessBlock)successCallback failedCallback:(HWMSDKModifyConfFailedBlock)failedCallback;

/// [en] [cn]修改VMR信息
- (void)modifyVmrInfoWithParam:(HWMSDKModifyVmrParamModel *)param successCallback:(HWMSDKModifyVmrInfoSuccessBlock)successCallback failedCallback:(HWMSDKModifyVmrInfoFailedBlock)failedCallback;

/// [en] [cn]取消会议
- (void)cancelConfWithParam:(HWMSDKCancelConfParamModel *)param successCallback:(HWMSDKCancelConfSuccessBlock)successCallback failedCallback:(HWMSDKCancelConfFailedBlock)failedCallback;

/// [en] [cn]通过会议ID加入会议
- (void)joinConfByIdWithParam:(HWMSDKJoinConfByIdParamModel *)param successCallback:(HWMSDKJoinConfByIdSuccessBlock)successCallback failedCallback:(HWMSDKJoinConfByIdFailedBlock)failedCallback;

/// [en] [cn]通过会议ID匿名加入会议
- (void)joinConfAnonymouslyByIdWithParam:(HWMSDKAnonymousJoinConfParamModel *)param successCallback:(HWMSDKJoinConfAnonymouslyByIdSuccessBlock)successCallback failedCallback:(HWMSDKJoinConfAnonymouslyByIdFailedBlock)failedCallback;

/// [en] [cn]接受会议邀请
- (void)acceptConfWithParam:(HWMSDKAcceptConfParamModel *)param successCallback:(HWMSDKAcceptConfSuccessBlock)successCallback failedCallback:(HWMSDKAcceptConfFailedBlock)failedCallback;

/// [en]This class is about rejecting the conference. [cn]拒绝会议邀请 :uninitRender :setAudioRouteOutCall :resetAudioRoute
- (void)rejectConfWithConfHandle:(NSUInteger)confHandle successCallback:(HWMSDKRejectConfSuccessBlock)successCallback failedCallback:(HWMSDKRejectConfFailedBlock)failedCallback;

/// [en] [cn]ui设置终端的能力集
- (HWMSDKERR)setClientCapabilityWithSupportCapability:(HWMSDKSupportCapabilityModel *)supportCapability;

/// [en] [cn]预约周期会议
- (void)bookCycleConfWithParam:(HWMSDKBookCycleConfParamModel *)param successCallback:(HWMSDKBookCycleConfSuccessBlock)successCallback failedCallback:(HWMSDKBookCycleConfFailedBlock)failedCallback;

/// [en] [cn]编辑周期会议
- (void)modifyCycleConfWithParam:(HWMSDKModifyCycleConfParamModel *)param successCallback:(HWMSDKModifyCycleConfSuccessBlock)successCallback failedCallback:(HWMSDKModifyCycleConfFailedBlock)failedCallback;

/// [en] [cn]编辑周期子会议
- (void)modifySubCycleConfWithParam:(HWMSDKModifySubCycleConfParamModel *)param successCallback:(HWMSDKModifySubCycleConfSuccessBlock)successCallback failedCallback:(HWMSDKModifySubCycleConfFailedBlock)failedCallback;

/// [en] [cn]取消周期会议
- (void)cancelCycleConfWithParam:(HWMSDKCancelCycleConfParamModel *)param successCallback:(HWMSDKCancelCycleConfSuccessBlock)successCallback failedCallback:(HWMSDKCancelCycleConfFailedBlock)failedCallback;

/// [en] [cn]取消周期子会议
- (void)cancelSubCycleConfWithParam:(HWMSDKCancelSubCycleConfParamModel *)param successCallback:(HWMSDKCancelSubCycleConfSuccessBlock)successCallback failedCallback:(HWMSDKCancelSubCycleConfFailedBlock)failedCallback;

/// [en] [cn]清空会议相关缓存
- (void)clearConfCache;

@end


@interface HWMSDKConfCtrlService : NSObject

+ (instancetype)shareInstance;
+ (void)releaseInstance;
- (void)addConfCtrlNotifyCallback:(id<HWMSDKConfCtrlNotify>)callback;
- (void)removeConfCtrlNotifyCallback:(id<HWMSDKConfCtrlNotify>)callback;
/// [en]This class is about ending the conference. [cn]主席会控：结束会议 :uninitRender :leaveDataConf :setAudioRouteOutCall :resetAudioRoute
- (void)endConfWithSuccessCallback:(HWMSDKEndConfSuccessBlock)successCallback failedCallback:(HWMSDKEndConfFailedBlock)failedCallback;

/// [en]This class is used to add attendee. [cn]主席会控：添加与会者
- (void)addAttendeeWithAddAttendeeList:(HWMSDKAddAttendeeListModel *)addAttendeeList successCallback:(HWMSDKAddAttendeeSuccessBlock)successCallback failedCallback:(HWMSDKAddAttendeeFailedBlock)failedCallback;

/// [en]This class is used to hangup attendee. [cn]主席会控：挂断与会者
- (void)hangupAttendeeWithUserId:(NSUInteger)userId successCallback:(HWMSDKHangupAttendeeSuccessBlock)successCallback failedCallback:(HWMSDKHangupAttendeeFailedBlock)failedCallback;

/// [en]This class is used to remove attendee. [cn]主席会控：移除与会者
- (void)removeAttendeeWithUserId:(NSUInteger)userId successCallback:(HWMSDKRemoveAttendeeSuccessBlock)successCallback failedCallback:(HWMSDKRemoveAttendeeFailedBlock)failedCallback;

/// [en]This class is used to broadcast/cancel broadcast attendee. [cn]主席会控：广播或取消广播与会者
- (void)broadcastAttendeeWithUserId:(NSUInteger)userId isBroadcast:(BOOL)isBroadcast successCallback:(HWMSDKBroadcastAttendeeSuccessBlock)successCallback failedCallback:(HWMSDKBroadcastAttendeeFailedBlock)failedCallback;

/// [en]This class is used to release host role. [cn]主席会控：释放本人的主席权限
- (void)releaseHostRoleWithSuccessCallback:(HWMSDKReleaseHostRoleSuccessBlock)successCallback failedCallback:(HWMSDKReleaseHostRoleFailedBlock)failedCallback;

/// [en]This class is used to grant someone host role. [cn]主席会控：授予与会者为主席
- (void)grantHostRoleWithUserId:(NSUInteger)userId successCallback:(HWMSDKGrantHostRoleSuccessBlock)successCallback failedCallback:(HWMSDKGrantHostRoleFailedBlock)failedCallback;

/// [en]This class is used to allow someone to unmute himself. [cn]主席会控：允许与会者自己解除静音
- (void)allowAttendeeUnMute:(BOOL)isAllow successCallback:(HWMSDKAllowAttendeeUnMuteSuccessBlock)successCallback failedCallback:(HWMSDKAllowAttendeeUnMuteFailedBlock)failedCallback;

/// [en]This class is used to lock conf. [cn]主席会控：锁定会议
- (void)lockConf:(BOOL)isLock successCallback:(HWMSDKLockConfSuccessBlock)successCallback failedCallback:(HWMSDKLockConfFailedBlock)failedCallback;

/// [en]This class is used to lock share,nobody can start share but host. [cn]主席会控：会议锁定共享
- (void)lockShare:(BOOL)isLockShare successCallback:(HWMSDKLockShareSuccessBlock)successCallback failedCallback:(HWMSDKLockShareFailedBlock)failedCallback;

/// [en]This class is used to grant/revoke attendee the local record permission. [cn]主席会控：授予/回收与会者本地录制权限
- (void)localRecordGrantAttendeeWithUserId:(NSUInteger)userId enable:(BOOL)enable successCallback:(HWMSDKLocalRecordGrantAttendeeSuccessBlock)successCallback failedCallback:(HWMSDKLocalRecordGrantAttendeeFailedBlock)failedCallback;

/// [en]This class is used to set the mode of local record permission. [cn]主席会控：设置本地录制权限模式
- (void)setLocalRecordModeWithType:(HWMClientRecordMode)type successCallback:(HWMSDKSetLocalRecordModeSuccessBlock)successCallback failedCallback:(HWMSDKSetLocalRecordModeFailedBlock)failedCallback;

/// [en]This class is used to switch attendee role. [cn]主席会控：切换角色
- (void)switchRoleByHostWithUserId:(NSUInteger)userId confRole:(HWMConfRole)confRole successCallback:(HWMSDKSwitchRoleByHostSuccessBlock)successCallback failedCallback:(HWMSDKSwitchRoleByHostFailedBlock)failedCallback;

/// [en]This class is used to turn on/off cloud record. [cn]主席会控：开启关闭云端录制
- (void)operateCloudRecordWithType:(HWMCloudRecordType)type successCallback:(HWMSDKOperateCloudRecordSuccessBlock)successCallback failedCallback:(HWMSDKOperateCloudRecordFailedBlock)failedCallback;

/// [en]This class is about allowing the audience to speak [cn]主席会控：允许观众说话
- (void)allowAudienceSpeakWithUserId:(NSUInteger)userId isAllow:(BOOL)isAllow successCallback:(HWMSDKAllowAudienceSpeakSuccessBlock)successCallback failedCallback:(HWMSDKAllowAudienceSpeakFailedBlock)failedCallback;

/// [en]This class is about allowing the audience to join [cn]主席会控：允许观众入会
- (void)allowAudienceJoin:(BOOL)isAllow successCallback:(HWMSDKAllowAudienceJoinSuccessBlock)successCallback failedCallback:(HWMSDKAllowAudienceJoinFailedBlock)failedCallback;

/// [en]This class is about setting or removing co-hosts [cn]主席会控：设置或撤销联席主持人
- (void)setCohostRightWithUserId:(NSUInteger)userId isSetCoHost:(BOOL)isSetCoHost successCallback:(HWMSDKSetCohostRightSuccessBlock)successCallback failedCallback:(HWMSDKSetCohostRightFailedBlock)failedCallback;

/// [en]This class is about the chairman modifying other member names. [cn]主席会控：主席修改其他成员名称
- (void)renameWithUserId:(NSUInteger)userId newName:(NSString *)newName successCallback:(HWMSDKRenameSuccessBlock)successCallback failedCallback:(HWMSDKRenameFailedBlock)failedCallback;

/// [en]This class is about the attendee allow rename. [cn]主席会控：设置是否允许用户改名
- (void)allowAttendeeRename:(BOOL)isAllow successCallback:(HWMSDKAllowAttendeeRenameSuccessBlock)successCallback failedCallback:(HWMSDKAllowAttendeeRenameFailedBlock)failedCallback;

/// [en]This class is about muting all attendees or not. [cn]主席会控：全场静音与取消静音
- (void)muteAllAttendee:(BOOL)isMute allowUnmute:(BOOL)allowUnmute successCallback:(HWMSDKMuteAllAttendeeSuccessBlock)successCallback failedCallback:(HWMSDKMuteAllAttendeeFailedBlock)failedCallback;

/// [en]This class is about allow waiting attendee enter [cn]主席会控：允许等候者入会
- (void)allowWaitingAttendeeEnterWithUserId:(NSInteger)userId successCallback:(HWMSDKAllowWaitingAttendeeEnterSuccessBlock)successCallback failedCallback:(HWMSDKAllowWaitingAttendeeEnterFailedBlock)failedCallback;

/// [en]This class is about allow all waiting attendee enter [cn]主席会控：允许所有的等候者入会
- (void)allowAllWaitingAttendeeEnterWithSuccessCallback:(HWMSDKAllowAllWaitingAttendeeEnterSuccessBlock)successCallback failedCallback:(HWMSDKAllowAllWaitingAttendeeEnterFailedBlock)failedCallback;

/// [en]This class is set call in restriction [cn]主席会控：设置允许入会的来宾类型
- (void)updateAllowJoinUserType:(HWMConfAllowJoinUserType)type successCallback:(HWMSDKUpdateAllowJoinUserTypeSuccessBlock)successCallback failedCallback:(HWMSDKUpdateAllowJoinUserTypeFailedBlock)failedCallback;

/// [en]This class is about the host invites or cancels inviting attendees to share the applications or screens. [cn]主席会控：主持人邀请/取消邀请与会者共享应用程序或屏幕
- (void)inviteShareWithUserId:(NSUInteger)userId isShare:(BOOL)isShare successCallback:(HWMSDKInviteShareSuccessBlock)successCallback failedCallback:(HWMSDKInviteShareFailedBlock)failedCallback;

/// [en]This class is used to invite open camera. [cn]主席会控：邀请与会者 开启/关闭 摄像头
- (void)inviteOpenCameraWithUserId:(NSInteger)userId isOpen:(BOOL)isOpen successCallback:(HWMSDKInviteOpenCameraSuccessBlock)successCallback failedCallback:(HWMSDKInviteOpenCameraFailedBlock)failedCallback;

/// [en]This class is used to descrip is allow open camera. [cn]主席会控：是否允许参会者开启视频
- (void)allowAttendeeOpenCamera:(BOOL)isAllow successCallback:(HWMSDKAllowAttendeeOpenCameraSuccessBlock)successCallback failedCallback:(HWMSDKAllowAttendeeOpenCameraFailedBlock)failedCallback;

/// [en]This class is used to request host role. [cn]普通与会者会控：申请主席
- (void)requestHostRoleWithConfPwd:(NSString *)confPwd successCallback:(HWMSDKRequestHostRoleSuccessBlock)successCallback failedCallback:(HWMSDKRequestHostRoleFailedBlock)failedCallback;

/// [en]This class is about leaving the conference and this class is private. [cn]普通与会者会控：离开会议 :uninitRender :leaveDataConf :setAudioRouteOutCall :resetAudioRoute
- (void)leaveConfWithSuccessCallback:(HWMSDKLeaveConfSuccessBlock)successCallback failedCallback:(HWMSDKLeaveConfFailedBlock)failedCallback;

/// [en]This class is about general watch [cn]普通与会者会控：选看 :processHandle
- (HWMSDKERR)generalWatchWithGeneralWatchList:(NSArray <HWMSDKGeneralWatchItemParamModel *> *)generalWatchList;

/// [en]This class is used to mute/unmute attendee. [cn]普通与会者会控：静音/取消静音自己或主席取消静音/取消静音与会者
- (void)muteAttendeeWithUserId:(NSUInteger)userId isMute:(BOOL)isMute successCallback:(HWMSDKMuteAttendeeSuccessBlock)successCallback failedCallback:(HWMSDKMuteAttendeeFailedBlock)failedCallback;

/// [en]This class is about attendees raising hands. [cn]普通与会者会控：与会者举手
- (void)attendeeHandsupWithUserId:(NSUInteger)userId isHanding:(BOOL)isHanding successCallback:(HWMSDKAttendeeHandsupSuccessBlock)successCallback failedCallback:(HWMSDKAttendeeHandsupFailedBlock)failedCallback;

/// [en]This class is about accepting or rejecting the share invitation. [cn]普通与会者会控：接受/拒绝共享邀请
- (void)answerInviteShare:(BOOL)isAccept rejectReason:(NSUInteger)rejectReason successCallback:(HWMSDKAnswerInviteShareSuccessBlock)successCallback failedCallback:(HWMSDKAnswerInviteShareFailedBlock)failedCallback;

/// [en]This class is used refuse open camera. [cn]普通与会者会控：拒绝开启摄像头
- (void)refuseOpenCameraWithInviterUserId:(NSInteger)inviterUserId successCallback:(HWMSDKRefuseOpenCameraSuccessBlock)successCallback failedCallback:(HWMSDKRefuseOpenCameraFailedBlock)failedCallback;

/// [en]This class is used refuse open mic. [cn]普通与会者会控：拒绝开启麦克风
- (void)refuseOpenMicWithInviterUserId:(NSInteger)inviterUserId successCallback:(HWMSDKRefuseOpenMicSuccessBlock)successCallback failedCallback:(HWMSDKRefuseOpenMicFailedBlock)failedCallback;

/// [en]This class is used to confirm the role of interpreter. [cn]同声传译：普通与会者会控：传译员确认
- (void)interpreterConfirm:(BOOL)isAccept successCallback:(HWMSDKInterpreterConfirmSuccessBlock)successCallback failedCallback:(HWMSDKInterpreterConfirmFailedBlock)failedCallback;

/// [en]This class is used to set language channel. [cn]同声传译：普通与会者会控：设置语言频道
- (void)setLanguageChannelWithParam:(HWMSDKLanguageChannelParamModel *)param successCallback:(HWMSDKSetLanguageChannelSuccessBlock)successCallback failedCallback:(HWMSDKSetLanguageChannelFailedBlock)failedCallback;

/// [en]This class is about remove waiting attendee [cn]等候室：主席会控：移除等候室成员
- (void)removeWaitingAttendeeWithUserId:(NSInteger)userId successCallback:(HWMSDKRemoveWaitingAttendeeSuccessBlock)successCallback failedCallback:(HWMSDKRemoveWaitingAttendeeFailedBlock)failedCallback;

/// [en]This class is about remove all waiting attendee [cn]等候室：主席会控：移出全部等候室成员
- (void)removeAllWaitingAttendeeWithSuccessCallback:(HWMSDKRemoveAllWaitingAttendeeSuccessBlock)successCallback failedCallback:(HWMSDKRemoveAllWaitingAttendeeFailedBlock)failedCallback;

/// [en]This class is move to waiting room [cn]等候室：主席会控：移入等候室
- (void)moveToWaitingRoomWithUserId:(NSInteger)userId successCallback:(HWMSDKMoveToWaitingRoomSuccessBlock)successCallback failedCallback:(HWMSDKMoveToWaitingRoomFailedBlock)failedCallback;

/// [en]This class is open or close waiting room [cn]等候室：主席会控：启用或关闭等候室
- (void)openWaitingRoom:(BOOL)isOpen successCallback:(HWMSDKOpenWaitingRoomSuccessBlock)successCallback failedCallback:(HWMSDKOpenWaitingRoomFailedBlock)failedCallback;

/// [en]This class is about host suspending conference. [cn]网络研讨会：主席会控：主持人启动/暂停会议
- (void)pauseConf:(BOOL)isPause successCallback:(HWMSDKPauseConfSuccessBlock)successCallback failedCallback:(HWMSDKPauseConfFailedBlock)failedCallback;

@end


@interface HWMSDKConfStateService : NSObject

+ (instancetype)shareInstance;
+ (void)releaseInstance;
- (void)addConfStateNotifyCallback:(id<HWMSDKConfStateNotify>)callback;
- (void)removeConfStateNotifyCallback:(id<HWMSDKConfStateNotify>)callback;
- (void)addLocalVideoInfoNotifyCallbackWithLocalVideoInfoNotifyCallback:(id<HWMSDKVideoInfoNotify>)localVideoInfoNotifyCallback;
- (void)removeLocalVideoInfoNotifyCallbackWithLocalVideoInfoNotifyCallback:(id<HWMSDKVideoInfoNotify>)localVideoInfoNotifyCallback;
- (void)addMajorVideoInfoNotifyCallbackWithMajorVideoInfoNotifyCallback:(id<HWMSDKVideoInfoNotify>)majorVideoInfoNotifyCallback;
- (void)removeMajorVideoInfoNotifyCallbackWithMajorVideoInfoNotifyCallback:(id<HWMSDKVideoInfoNotify>)majorVideoInfoNotifyCallback;
- (void)addNormalVideoInfoNotifyCallbackWithNormalVideoInfoNotifyCallback:(id<HWMSDKVideoInfoNotify>)normalVideoInfoNotifyCallback;
- (void)removeNormalVideoInfoNotifyCallbackWithNormalVideoInfoNotifyCallback:(id<HWMSDKVideoInfoNotify>)normalVideoInfoNotifyCallback;
/// [en]This class is about the synchronized method for getting the basic information of the conference state. [cn]获取会议中基本信息
- (HWMSDKMeetingInfoModel *)getMeetingInfo;

/// [en]This class is about getting the basic information of myself,including some fixed information like userId, orgId number, etc. [cn]获取自己的固定信息
- (HWMSDKSelfConstantInfoModel *)getSelfConstantInfo;

/// [en]This class is about getting my information that whether I have raised hand or not. [cn]获取我的信息:是否举手
- (BOOL)getSelfHandup;

/// [en]This class is about getting my information：what my name is. [cn]获取我的信息:我的名称
- (HWMSDKNameInfoModel *)getSelfName;

/// [en]This class is about getting my information：what my role is. [cn]获取我的信息:我的角色
- (HWMConfRole)getSelfRole;

/// [en]This class is about my infomation of simultaneous interpretation. [cn]获取我的信息:同声传译信息
- (HWMSDKInterpreterInfoModel *)getSelfInterpreter;

/// [en]This class is about getting my information that whether I have recording permissions on the cloud. [cn]获取我的信息:是否有云上录播权限
- (BOOL)getSelfHasCloudRecordPermission;

/// [en]This class is about getting my information that whether I have local recording permissions. [cn]获取我的信息:是否有本地录播权限
- (BOOL)getSelfHasLocalRecordPermission;

/// [en]This class is about my share status. [cn]获取我的信息:共享状态
- (BOOL)getSelfShareState;

/// [en]This class is about getting my information that whether I have been invited or not. [cn]获取我的信息:自己是否被邀请共享
- (BOOL)getSelfIsInvitedShare;

/// [en]This class is about getting my share mode. [cn]获取我的信息:自己的共享模式
- (HWMConfShareMode)getSelfShareMode;

/// [en]This class is about getting the conference state: conf mode type. [cn]获取会议状态:会议模式
- (HWMConfModeType)getConfModeType;

/// [en]This class is about getting the conference state: broadcast information. [cn]获取会议状态:广播信息
- (HWMSDKBroadcastInfoModel *)getConfBroadcastInfo;

/// [en]This class is about getting the conference state: roll call information. [cn]获取会议状态:点名信息
- (HWMSDKRollCallInfoModel *)getConfRollCallInfo;

/// [en]This class is about getting the conference state: whether all the audiences in conference are muted . [cn]获取会议状态:是否全场静音
- (BOOL)getConfIsAllMuted;

/// [en]This class is about getting the conference state: the information of subtitle src language ability. [cn]获取会议状态:获取字幕翻译源语言能力
- (NSArray <HWMSDKConfLanguageChannelInfoModel *> *)getConfSubtitleLanguageSrc;

/// [en]This class is about getting the conference state: the information of subtitle dst language ability. [cn]获取会议状态:获取字幕翻译目标语言能力
- (NSArray <HWMSDKConfLanguageChannelInfoModel *> *)getConfSubtitleLanguageDst;

/// [en]This class is about getting the conference state: whether the conference is allowed to be unmuted. [cn]获取会议状态:是否允许解除静音
- (BOOL)getConfIsAllowUnmute;

/// [en]This class is about getting the conference state: whether the conference is locked. [cn]获取会议状态:是否锁定
- (BOOL)getConfIsLocked;

/// [en]This class is about getting the conference state: whether the conference shares lock. [cn]获取会议状态:是否共享锁定
- (BOOL)getConfIsShareLocked;

/// [en]This class is about getting the conference state:permission type of chat. [cn]获取会议状态:聊天权限
- (HWMChatPermission)getChatPermission;

/// [en]This class is about getting the conference state: whether the conference is paused. [cn]获取会议状态:是否暂停
- (BOOL)getConfIsPaused;

/// [en]This class is about getting the conference state: whether the watermark is opened. [cn]获取会议状态:是否开启水印
- (BOOL)getConfSupportWatermark;

/// [en]This class is about getting the conference state: whether the conference supports the co-host function. [cn]获取会议状态:是否支持联席主持人
- (BOOL)getConfSupportCohost;

/// [en]This class is about getting the conference state: whether the conference supports the inviteshare function. [cn]获取会议状态:是否支持邀请共享
- (BOOL)getConfSupportInviteShare;

/// [en]This class is about getting the conference state: whether the conference supports the cancel share function. [cn]获取会议状态:是否支持取消共享
- (BOOL)getConfEnableCancelShare;

/// [en]This class is about getting the conference state: the number of online attendees. [cn]获取会议状态:在线与会者个数
- (HWMSDKAttendeeSizeInfoModel *)getConfAttendeeSize;

/// [en]This class is about getting the conference state: the information of raising hands. [cn]获取会议状态:举手信息
- (HWMSDKConfHandupInfoModel *)getConfHandupInfo;

/// [en]This class is about getting the conference state: whether the simultaneous interpretation has been opened. [cn]同声传译：获取会议状态:是否开启同声传译
- (BOOL)getConfIsSimuInterpretOpened;

/// [en]This class is about getting the conference state: the information of simultaneous interpretation. [cn]同声传译：获取会议状态:同声传译信息
- (NSArray <HWMSDKConfLanguageChannelInfoModel *> *)getConfSimuInterpret;

/// [en]This class is about getting the conference state: the information of local recording . [cn]获取会议状态:本地录制信息
- (HWMSDKLocalRecordInfoModel *)getConfLocalRecord;

/// [en]This class is about getting the conference state: the information of cloud recording. [cn]获取会议状态:云上录制信息
- (HWMSDKCloudRecordInfoModel *)getConfCloudRecord;

/// [en]This class is about getting the conference state: whether there is a host in the conference. [cn]获取会议状态:会议是否有主持人
- (BOOL)getConfHasHost;

/// [en]This class is about getting the conference state: whether the conference has been connected. [cn]获取会议状态:会议是否连接
- (BOOL)getConfIsConnected;

/// [en]This class is about getting the list of all the attendees. [cn]获取所有的与会者
- (NSArray <HWMSDKAttendeeInfoModel *> *)getAttendeeList;

/// [en]This class is about getting the list of all the attendees of online video. [cn]获取在线视频与会者
- (NSArray <HWMSDKAttendeeInfoModel *> *)getVideoAttendeeList;

/// [en]This class is about getting the speaker list. [cn]获取最大发言人
- (NSArray <HWMSDKConfSpeakerModel *> *)getSpeakerList;

/// [en]This class is about getting attendees by userId. [cn]通过userId获取与会人信息
- (HWMSDKAttendeeInfoModel *)getAttendeeWithUserId:(NSInteger)userId;

/// [en]This class is about the conference status :the type of users allowed to join the conference . [cn]获取会议状态:允许入会范围
- (HWMConfAllowJoinUserType)getConfAllowJoinUserType;

/// [en]This class is about my status: whether the information of in conference is anonymous. [cn]获取我的信息:是否匿名入会
- (BOOL)getSelfIsAnonymous;

/// [en]This class is about getting commercial status. [cn]获取商用资源是否激活
- (HWMCommercialStatusType)getCommercialStatus;

/// [en]This class is about getting the QOS information of conference audio stream. [cn]获取会议音频流QOS信息
- (NSArray <HWMSDKAudioStatsInfoModel *> *)getAudioQOSInfo;

/// [en]This class is about getting the QOS information of conference video stream. [cn]获取会议视频流QOS信息
- (NSArray <HWMSDKVideoStatsInfoModel *> *)getVideoQOSInfo;

/// [en]This class is about getting the user's window name. [cn]通过用户ID获取会场名称
- (HWMSDKNameInfoModel *)getVideoNameWithUserId:(NSUInteger)userId isMajorVideo:(BOOL)isMajorVideo;

/// [en]This class is about getting whether the user's window is mute. [cn]获取用户窗口是否静音
- (BOOL)getVideoIsMuteWithUserId:(NSUInteger)userId isMajorVideo:(BOOL)isMajorVideo;

/// [en]This class is about getting whether the user's window has hands raised. [cn]获取用户窗口是否举手
- (BOOL)getVideoIsHandupWithUserId:(NSUInteger)userId isMajorVideo:(BOOL)isMajorVideo;

/// [en]This class is about getting whether the user's window is max speaker. [cn]获取用户窗口是否是最大发言人
- (BOOL)getVideoIsMaxSpeakerWithUserId:(NSUInteger)userId;

/// [en]This class is about getting whether the user's video is loading. [cn]获取用户视频是否在加载中
- (BOOL)getVideoIsLoadingWithUserId:(NSUInteger)userId isMajorVideo:(BOOL)isMajorVideo;

/// [en]This class is about getting whether the user's video has camera stream. [cn]获取用户窗口是否有摄像头流
- (HWMStreamType)getVideoStreamTypeWithUserId:(NSUInteger)userId isMajorVideo:(BOOL)isMajorVideo;

/// [en]This class is about getting the network quality of user's window. [cn]获取用户窗口网络质量
- (NSUInteger)getVideoNetQualityWithUserId:(NSUInteger)userId isMajorVideo:(BOOL)isMajorVideo;

/// [en]This class is about getting the name of local video window. [cn]获取本地视频窗口名称
- (HWMSDKNameInfoModel *)getLocalVideoName;

/// [en]This class is about getting whether the local video window is muted. [cn]获取本地视频窗口是否静音
- (BOOL)getLocalVideoIsMute;

/// [en]This class is about getting whether there are raised hands in the local window. [cn]获取本地视频窗口是否举手
- (BOOL)getLocalVideoIsHandup;

/// [en]This class is about getting whether the local video window is highlighted. [cn]获取本地视频窗口是否高亮
- (BOOL)getLocalVideoIsHighLight;

/// [en]This class is about getting whether the local video window is dealing with circling. [cn]获取本地视频窗口是否转圈
- (BOOL)getLocalVideoIsLoading;

/// [en]This class is about getting whether the local video window covers the default picture. [cn]获取本地视频窗口是否遮挡默认图片
- (BOOL)getLocalVideoIsCoverImage;

/// [en]This class is about getting network quality of the local video window. [cn]获取本地视频窗口网络质量
- (NSUInteger)getLocalVideoNetQuality;

/// [en]This class is about getting user id of major video. [cn]获取主视频画面人员id
- (NSUInteger)getMajorVideoUserId;

/// [en]This class is used to get is allow open camera. [cn]会议状态：获取是否允许参会者开启视频
- (BOOL)getIsAllowOpenCamera;

/// [en]This class is used to descrip is need invite open mic. [cn]功能开关：是否需要主持人邀请开启麦克风
- (BOOL)getIsInviteOpenMic;

/// [en]This class is used to descrip support invite mic. [cn]功能开关：主持人邀请开启与会人麦克风
- (BOOL)getSupportInviteMic;

/// [en]This class is used to descrip support invite camera. [cn]功能开关：主持人邀请开启与会人摄像头
- (BOOL)getSupportInviteCamera;

/// [en]This class is used to descrip enable force close camera. [cn]主席会控：获取主持人能否强制关闭与会人摄像头
- (BOOL)getEnableForceCloseCamera;

/// [en]This class is used to descrip enable allow open camera. [cn]主席会控：主持人是否允许与会人自行开启摄像头
- (BOOL)getEnableAllowOpenCamera;

/// [en]This class is used to get cycle conf end time. [cn]获取周期会议结束时间戳
- (NSUInteger)getCycleConfEndTimeWithParam:(HWMSDKCycleConfParamModel *)param;

/// [en]This class is used to get cycle conf end time. [cn]根据会议总数获取周期会议结束时间戳
- (NSUInteger)getCycleConfEndTimeByTotalConfWithParam:(HWMSDKCycleConfParamModel *)param totalConfNum:(NSUInteger)totalConfNum;

/// [en]This class is used to get cycle conf total number. [cn]获取周期会议场次
- (NSUInteger)getCycleConfTotalNumberWithParam:(HWMSDKCycleConfParamModel *)param;

/// [en]This class is used to get enable origin voice. [cn]获取与会者支持选择收听原声频道
- (BOOL)getEnableOriginVoice;

/// [en]This class is about the attendee allow rename. [cn]会中查询是否允许用户改名
- (BOOL)getConfIsAllowRename;

/// [en]This class is about the conference status that whether the barrage switch is on. [cn]获取会议状态:弹幕开关
- (BOOL)getConfBarrageSwitch;

/// [en]This class is about the conference status that whether the waiting room is supported. [cn]等候室：获取会议状态:是否支持等候室
- (BOOL)getConfSupportWaitingRoom;

/// [en]This class is about the conference status that whether the waiting room will be opened.. [cn]等候室：获取会议状态:是否开启等候室
- (BOOL)getConfIsOpenWaitingRoom;

/// [en]This class is about getting the list of members in waiting room. [cn]等候室：获取等候室成员列表
- (NSArray <HWMSDKAttendeeInfoModel *> *)getWaitingList;

/// [en]This class is about getting the information of waiting room. [cn]等候室：获取等候室信息
- (HWMSDKWaitingRoomInfoModel *)getWaitingRoomInfo;

/// [en]This class is about getting the conference state: the number of waiting attendees. [cn]等候室：获取会议状态:等候室成员个数
- (NSUInteger)getWaitingAttendeeSize;

/// [en]This class is about getting my information that whether I am allowed to speak or not. [cn]网络研讨会：获取我的信息:是否允许说话
- (BOOL)getSelfAllowSpeak;

/// [en]This class is about getting my information that whether I can be turned into audience. [cn]网络研讨会：获取我的信息:是否可以转成观众
- (BOOL)getSelfCanSwitchToAudience;

/// [en]This class is about getting the conference state: the number of audiences. [cn]网络研讨会：获取会议状态:观众个数
- (NSUInteger)getConfAudienceSize;

/// [en]This class is about getting the conference state: the viewing mode of the audience. [cn]网络研讨会：获取会议状态:观众的观看视频模式
- (HWMAudienceLayoutType)getConfAudienceVideoLayout;

/// [en]This class is about getting the conference state: whether the audiences are allowed to join the conference. [cn]网络研讨会：获取会议状态:是否允许观众入会
- (BOOL)getConfIsAllowAudienceJoin;

/// [en]This class is about getting the list of all the audiences. [cn]网络研讨会：获取所有的观众
- (NSArray <HWMSDKAttendeeInfoModel *> *)getAudienceList;

/// [en]This class is about getting the audience information. [cn]网络研讨会：获取观众信息
- (HWMSDKShowAudienceSizeInfoModel *)getAudienceSizeInfo;

/// [en]This class is about the synchronized method for getting the sensitive word information of the conference state. [cn]获取会议中敏感词信息
- (NSArray <HWMSDKSensitiveWordInfoModel *> *)getSensitiveWordInfo;

/// [en]This class is about the synchronized method for getting join status. [cn]获取会前状态
- (HWMJoinStatusType)getJoinStatus;

/// [en]This class is about the synchronized method for getting guest waiting before conf info. [cn]获取来宾会前等待信息
- (HWMSDKGuestWaitingBeforeConfInfoModel *)getGuestWaitingBeforeConfInfo;

/// [en]This class is about the synchronized method for getting audience waiting info. [cn]获取观众等待信息
- (HWMSDKAudienceWaitingInfoModel *)getAudienceWaitingInfo;

@end


@interface HWMSDKDeviceMgrService : NSObject

+ (instancetype)shareInstance;
+ (void)releaseInstance;
- (void)addConfDeviceNotifyCallback:(id<HWMSDKConfDeviceNotify>)callback;
- (void)removeConfDeviceNotifyCallback:(id<HWMSDKConfDeviceNotify>)callback;
/// [en]This api is about changing audio router. [cn]改变音频路由
- (HWMSDKERR)changeAudioRouter;

/// [en]This api is about getting the camera list. [cn]获取摄像头设备列表
- (NSArray <HWMSDKCameraDetailInfoModel *> *)getCameraDevices;

/// [en]This api is about turning on or off the camera. [cn]设置本地摄像头开启或关闭
- (HWMSDKERR)openCamera:(BOOL)isOpen;

/// [en]This api is about front and rear cameras switching. [cn]前后摄像头切换
- (HWMSDKERR)switchCamera;

/// [en]This api is about setting the camera orientation. [cn]设置摄像头方向
- (HWMSDKERR)modifyCameraOrient:(HWMDeviceOrient)orient;

/// [en]This class is used to enable/disable virtual camera [cn]设置本地render的镜像策略
- (HWMSDKERR)setCameraMirrorTypeWithPosition:(HWMCameraPosition)position type:(HWMCameraMirrorType)type;

/// [en]This api is used to get the using camera position. [cn]获取摄像头的使用情况 :GetUsingCameraPosition
- (HWMCameraPosition)getUsingCameraPosition;

/// [en]This class is used to deal with sim call in. [cn]sim来电处理
- (HWMSDKERR)dealSimCallWithPhase:(HWMSimCallPhase)phase;

/// [en]This class is used to enable/disable the input or output of local audio. [cn]开启、关闭音频输入输出
- (HWMSDKERR)enableLocalAudioWithType:(HWMAudioIOType)type enable:(BOOL)enable;

/// [en]This api is about muting the speaker or not. [cn]设置(或取消)扬声器静音
- (HWMSDKERR)muteSpeaker:(BOOL)isMute;

/// [en]This api is about muting the microphone. [cn]设置麦克风静音
- (HWMSDKERR)muteMicrophone:(BOOL)isMute;

/// [en]This api is about beautifying face. [cn]美颜
- (HWMSDKERR)enableBeauty:(BOOL)enable;

/// [en]This api is about howling detection(The default setting is turning on the howling detection). [cn]啸叫检测
- (HWMSDKERR)enableHowlingDetection:(BOOL)enable;

/// [en]This api is about howling suppression(The default setting is turning on the howling suppression). [cn]啸叫抑制
- (HWMSDKERR)enableHowlingSuppression:(BOOL)enable;

/// [en]This api is used to get the camera state. [cn]获取视频设备状态
- (HWMDeviceStatus)getCameraState;

/// [en]This api is used to get the microphone state. [cn]获取麦克风设备开启状态
- (BOOL)getMicState;

/// [en]This api is used to get the Speaker state. [cn]获取扬声器状态
- (BOOL)getSpeakState;

/// [en]This api is used to get the type of audio routing. [cn]获取音频路由类型
- (HWMAudioRouteType)getAudioRoute;

/// [en]This api is used to get extended attributes of video render mode. [cn]获取hme视频渲染模式(opengl, Metal) :disable :disable
- (HWMRenderMode)getVideoRenderMode;

@end



NS_ASSUME_NONNULL_END

