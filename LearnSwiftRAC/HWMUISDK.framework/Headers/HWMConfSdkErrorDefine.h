//
//  HWMConfSdkErrorDefine.h
//  HWMConfUI
//
//  Created by louguofeng on 2020/12/20.
//  Copyright © 2020 huawei. All rights reserved.
//

#ifndef HWMConfSdkErrorDefine_h
#define HWMConfSdkErrorDefine_h

typedef NS_ENUM(NSUInteger, HWMConfSdkErrorCode) {
    HWMConfSdkErrorCodeOperationTimeout                               = 68,       // 网络不佳，发起/加入会议超时
    HWMConfSdkErrorCodeRoleAuthenticationFailed                       = 91,       // 会议不存在或者无权限访问
    HWMConfSdkErrorCodeVMROnlyAllowChairStartConf                     = 95,       // 会议不允许提前入会，请联系主持人
    HWMConfSdkErrorCodeNotAllowedGuestFirstJoin                       = 103,      // 会议不允许提前入会，请联系主持人
    HWMConfSdkErrorCodeConfSizeOverCommunalVMRMaxNum                  = 104,      // 云会议室与会人数已达上限，请联系管理员
    HWMConfSdkErrorCodeConfClosedRecently                             = 112,      // 会议已结束
    HWMConfSdkErrorCodeConfDataNotFound          DEPRECATED_ATTRIBUTE = 127,      // 会议ID不存在或密码错误
    HWMConfSdkErrorCodeCorpConfResourceHasBeenRunout DEPRECATED_ATTRIBUTE = 514,  // 企业购买的会议资源（人数限制）已达上限
    HWMConfSdkErrorCodeReasonSessionTimerTimeout                      = 836,      // 会话心跳超时挂断
    HWMConfSdkErrorCodeReasonNostreamHangup                           = 837,      // 无码流挂断
    HWMConfSdkErrorCodeReasonChairHangup                              = 838,      // 主席挂断
    HWMConfSdkErrorCodeReasonStopConfHangup                           = 839,      // 结束会议挂断
    HWMConfSdkErrorCodeReasonConfLocked                               = 842,      // 会议已锁定
    HWMConfSdkErrorCodeConfDataNotFound2         DEPRECATED_ATTRIBUTE = 11070005, // 会议不存在
    HWMConfSdkErrorCodeVMRDataNotFound                                = 11070006, // VMR会议室不存在
    HWMConfSdkErrorCodeVMRConfConflict                                = 11071005, // 创会时间冲突
    HWMConfSdkErrorCodeConfStartTimeOverMaxScheduleTime               = 11071014, // 会议开始时长超出最大可预定时间范围
    HWMConfSdkErrorCodeConfSMSIllegal                                 = 11071025, // 请检查与会人手机号是否正确
    HWMConfSdkErrorCodeNotAllowedGuestFirstJoin2 DEPRECATED_ATTRIBUTE = 11071058, // 当前会议还未召开，请耐心等待
    HWMConfSdkErrorCodeConfSizeOverCommunalVMRMaxNum2 DEPRECATED_ATTRIBUTE = 11071059, // 云会议室与会人数已达上限，请联系管理员
    HWMConfSdkErrorCodeOrgConcurrentParticipantsNumberIsZero          = 11071060, // 企业未购买并发与会方资源，无法创建会议
    HWMConfSdkErrorCodeConfModifyFailAsConfAlreadyStarted DEPRECATED_ATTRIBUTE = 11071065, // 正在召开会议，无法编辑会议详情
    HWMConfSdkErrorCodeConfCancelFailAsConfStarted                    = 11071067, // 当前会议正在召开，无法取消
    HWMConfSdkErrorCodeConfNotAllowAnonymous                          = 11071073, // 您呼叫的会议不允许匿名用户呼入，请联系会议预订者
    HWMConfSdkErrorCodeConfOnlyAllowUserInOrg                         = 11071074, // 您呼叫的会议只允许企业内用户呼入，请联系会议预订者
    HWMConfSdkErrorCodeConfOnlyAllowUserInvited                       = 11071075, // 您呼叫的会议只允许被邀请用户呼入，请联系会议预订者
    HWMConfSdkErrorCodeSiteCallNumberIsEmpty                          = 11072031, // 请检查与会人手机号是否为空
    HWMConfSdkErrorCodeSiteCallNumberIllegalUri                       = 11072033, // 请检查与会人入会号码是否正确
    HWMConfSdkErrorCodeConfLocked                                     = 11072050, // 会议已经被锁定
    HWMConfSdkErrorCodeConfNotFoundOrAuthFailed  DEPRECATED_ATTRIBUTE = 11072065, // 会议不存在或密码错误
    HWMConfSdkErrorCodeConfPortalParticipantVMRLogicResourceNotEnough DEPRECATED_ATTRIBUTE = 11076003, // 云会议室同时在线人数已达上限，请联系会议主持人或管理员
    HWMConfSdkErrorCodeParticipantAuthenticationFailed                = 11081006, // 密码错误，请重新输入
    HWMConfSdkErrorCodeCorpConferenceResourceHasBeenRunout            = 15022001, // 企业购买的会议资源（人数限制）已达上限，请联系管理员
    HWMConfSdkErrorCodeAnonyConfIdOrPwdError     DEPRECATED_ATTRIBUTE = 90000001,  // 会议id或者密码错误
    HWMConfSdkErrorCodeAnonyConfRandomError      DEPRECATED_ATTRIBUTE = 90000002,  // 随机数错误导致会议结束或不存在
    HWMConfSdkErrorCodeAnonyConfEnded            DEPRECATED_ATTRIBUTE = 90000003,  // 会议已结束
    HWMConfSdkErrorCodeAnonyConfIpLocked         DEPRECATED_ATTRIBUTE = 90000004,  // 密码输入错误次数太多导致IP锁定
    HWMConfSdkErrorCodeAnonyConfNetworkError     DEPRECATED_ATTRIBUTE = 90000005,  // 网络错误
    HWMConfSdkErrorCodeAnonyConfNotStart         DEPRECATED_ATTRIBUTE = 90000006,  // 会议未开始
    HWMConfSdkErrorCodeAnonyConfLocked           DEPRECATED_ATTRIBUTE = 90000007,  // 会议已锁定
    HWMConfSdkErrorCodeAnonyCertificateVerifyFailed DEPRECATED_ATTRIBUTE = 90000008,  // 证书校验失败
    HWMConfSdkErrorCodeAnonyConfNotAllowed       DEPRECATED_ATTRIBUTE = 90000009,  // 不允许匿名用户入会
    HWMConfSdkErrorCodeCreateConfFailedReason1   DEPRECATED_ATTRIBUTE = 285212898, // 会议创建失败，可能原因：1.会议所需的MCU或录播服务器资源不足；2.MCU不能满足会议预设的多画面模式等其他会议设置；3.MCU不具有多通道能力；请联系管理员解决。
    HWMConfSdkErrorCodeCreateConfFailedReason2   DEPRECATED_ATTRIBUTE = 285212899, // 会议创建失败(会议演示速率低于录播演示的最低速率：带宽384K或者视频格式H264 CIF)
    HWMConfSdkErrorCodeCreateConfFailedReason3   DEPRECATED_ATTRIBUTE = 285212900, // 会议创建失败(会议的视频格式不能低于录播的视频格式)
    HWMConfSdkErrorCodeCreateConfFailedReason4   DEPRECATED_ATTRIBUTE = 285212901, // 会议创建失败(会议的带宽不能低于录播的带宽)
    HWMConfSdkErrorCodeLowVersionNotSetCohost                         = 111072106, // 对方版本过低，不能设联席
};

#endif /* HWMConfSdkErrorDefine_h */
