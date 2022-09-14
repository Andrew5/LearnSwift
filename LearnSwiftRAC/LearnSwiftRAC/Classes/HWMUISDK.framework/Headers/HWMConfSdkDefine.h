//
//  HWMConfTupDefine.h
//  Pods
//
//  Created by yaolili/ywx577644 on 2019/9/18.
//

#import <Foundation/Foundation.h>

/**
 * [en]This enum is used to describe get member type<br>
 * [cn]获取成员信息的操作类型
 */
typedef NS_ENUM(NSUInteger, ConfGetmemberType) {
    ConfGetmemberTypeAll = 0,
    ConfGetmemberTypeSelf,
    ConfGetmemberTypeBykey,
    ConfGetmemberTypeVideo,
    ConfGetmemberTypeAudio,
    ConfGetmemberTypeOffline

};

/**
 * [en]This enum is used to describe attendee type<br>
 * [cn]成员类型
 */
typedef NS_ENUM(NSUInteger, ConfAttendeeType) {
    ConfAttendeeTypeNormal = 0, // 语音、高清、标清与会者地址
    ConfAttendeeTypeTelepresence, // 智真与会者地址类型，单屏、三屏智真均属此类 
    ConfAttendeeTypeSingleCiscoTP, // 思科单屏
    ConfAttendeeTypeThreeCiscoTP, // 思科三屏
    ConfAttendeeTypeH323, // H.323网络用户
    ConfAttendeeTypeTerminal, // 会议室或硬终端
    ConfAttendeeTypeOutside, // 外部与会人
    ConfAttendeeTypeMobile, // 软终端用户手机
};

/**
 * [en]This enum is used to describe conference role<br>
 * [cn]会议成员角色
 */
typedef NS_ENUM(NSUInteger, ConfRoleType) {
    ConfRoleTypeAttendee = 0,       /**< 普通与会者 */
    ConfRoleTypeChairman,           /**< 主席 */
    ConfRoleTypeAudience,           /**< 观众 */
    ConfRoleTypeCohost,             /**< 联席主持人 */
};

/**
 * [en]This enum is used to describe attendee status<br>
 * [cn]成员状态
 */
typedef NS_ENUM(NSUInteger, ConfParticipantStatusType) {
    ConfParticipantStatusInConf = 0, // 会议中
    ConfParticipantStatusCalling, // 正在呼叫
    ConfParticipantStatusJoining, // 正在加入会议
    ConfParticipantStatusLeaved, // 已经离开
    ConfParticipantStatusNoExist, // 用户不存在
    ConfParticipantStatusBusy, // 被叫用户忙
    ConfParticipantStatusNoAnser, // 用户无应答
    ConfParticipantStatusReject, // 用户拒绝接听
    ConfParticipantStatusCallfailed, // 呼叫失败
};

/**
 * [en]This enum is used to describe user type<br>
 * [cn]用户类型
 */
typedef NS_ENUM(NSUInteger, ConfUserType) {
    ConfUserTypeWeb = 0, // WEB方式
    ConfUserTypeMobile, // 移动软终端
    ConfUserTypePC, // PC软终端
};

/**
 * [en]This enumeration is used to describe the SIP account registration status.
 * [cn]SIP账户注册状态
 */
typedef NS_ENUM(NSUInteger, CallRegStateType) {
    CallRegStateUnregister = 0, // SIP账户未注册
    CallRegStateRegister, // SIP账户注册中
    CallRegStateDeregistering, // SIP账户注销中
    CallRegStateRegistered, // SIP账户已注册
    CallRegStateButt // SIP账户无效状态
};


/*多流窗口的类型*/
typedef NS_ENUM(NSUInteger, ConfCellWndType) {
    ConfCellWndTypeCommon, //视频小窗口
    ConfCellWndTypeBig, //视频大窗口
    ConfCellWndTypeAux, //辅流窗口
    ConfCellWndTypeAudio //音频窗口
};


/**
 * [en]This enumeration is used to describe the video window type.
 * [cn]视频窗口类型
 */
typedef NS_ENUM(NSUInteger, ConfVideoWndType) {
    ConfVideoWndCallRemote, // 通话远端窗口
    ConfVideoWndCallLocal, // 通话本地窗口
    ConfVideoWndPreView, // 预览窗口
    ConfVideoWndCallData, // 辅流窗口
    ConfVideoWndButt
};

/**
 * [en]This enumeration is used to describe the call type.
 * [cn]呼叫类型
 */
typedef NS_ENUM(NSUInteger, CallType) {
    CallTypeAudio = 0, // IP语音呼叫
    CallTypeVideo, // IP视频呼叫
    CallTypeButt, // 无效类型呼叫
};

/**
 * [en]This enum is used to describe encrypt mode<br>
 * [cn]加密类型
 */
typedef NS_ENUM(NSUInteger, ConfEncryptModelType) {
    ConfEncryptModelAuto = 0, // 自适应加密
    ConfEncryptModelMust, // 强制加密
    ConfEncryptModelNone, // 不加密
};


/**
 * [en]This enum is used to describe reserve conference type<br>
 * [cn]预约会议类型
 */
typedef NS_ENUM(NSUInteger, BookConfType) {
    BookConfTypeNormal = 0, // 普通会议
    BookConfTypeCycle, // 周期会议
    BookConfTypeLongConf, // 集群AS长期会议
};

//  会议状态
typedef NS_ENUM(NSUInteger, ConfStatusType) {
    ConfStatusSchedule = 0, // 预定状态
    ConfStatusCreating, // 正在创建状态
    ConfStatusGoing, // 会议已经开始
    ConfStatusDestroyed // 会议已经关闭
};

// 会议列表更新方式
typedef NS_ENUM(NSUInteger, ConfListUpdateType) {
    ConfListUpdateAll = 0, // 全量
    ConfListUpdateAdd, // 增量增加
    ConfListUpdateDel, // 增量删除
};

/**
 * [en]This enum is used to describe language<br>
 * [cn]语言
 */
typedef NS_ENUM(NSUInteger, ConfLanguageType) {
    ConfLanguageZH_CN = 0, // 简体中文
    ConfLanguageEN_US, // 美国英文
};

typedef NS_ENUM(NSUInteger, VideoWindowViewType) {
    VideoWindowViewMulti = 0, // 远端窗口
    VideoWindowViewLarge = 1, // 本端窗口
};

typedef NS_ENUM(NSUInteger, ConfMediaType) {
    ConfMediaVoice = 1,
    ConfMediaVideo = 2,
    ConfMediaVoiceVideo = 3,
    ConfMediaHDVideo = 4,
    ConfMediaVoiceHDVideo = 5, //语音+高清
    ConfMediaVoiceTelepresence = 8,
    ConfMediaData = 16,
    ConfMediaVoiceData = 17, // 语音+数据
    ConfMediaVideoData = 19, // 视频+数据
    ConfMediaHDVideoData = 21, // 高清+数据
    ConfMediaDesktopSharing = 32
};


typedef NS_ENUM(NSUInteger, AudioRouteType) {
    AudioRouteDefault = 0, // 默认音频设备，优先级排序:蓝牙耳机>有线耳机>听筒
    AudioRouteLoudSpeaker, // 扬声器
    AudioRouteBlueTooth, // 蓝牙
    AudioRouteEarpiece, // 听筒，仅用于获取，设置时填写此类型接口返回错误
    AudioRouteHeadSet, // 耳机，仅用于获取，设置时填写此类型接口返回错误
};
typedef NS_ENUM(NSUInteger, ConfStatus) {
    CONF_STATUS_IDLE = 0,
    CONF_STATUS_INCOMINTG,
    CONF_STATUS_START,
    CONF_STATUS_WAITING,
    CONF_STATUS_CONNECTED,
    CONF_STATUS_RECALL,
};

typedef enum : NSUInteger {
    CONF_MEDIA_TYPE_AUDIO = 1,
    CONF_MEDIA_TYPE_VIDEO = 2,
    CONF_MEDIA_TYPE_HDVIDEO = 4,
    CONF_MEDIA_TYPE_TELEPRESENCE = 8,
    CONF_MEDIA_TYPE_DATA = 16
} CONF_MEDIA_TYPE;


typedef NS_ENUM(NSInteger, CallStatus) {
    CALL_IDLE = 0,
    CALL_INCOMING,
    CALL_START,
    CALL_CONNECTED
};
typedef NS_ENUM(NSUInteger, PairState) {
    STATE_NONE,
    STATE_PAIRING,
    STATE_PAIRED
};

typedef NS_ENUM(NSUInteger, ReconnectStatusType) {
    ReconnectStatusNormal = 0, //
    ReconnectStatusReconnecting, // 正在重连，提示用户
    ReconnectStatusReconnected, //重连上，UI需要销毁界面，等待底层通知重建
    ReconnectStatusFailed // 重连失败
};

typedef NS_ENUM(NSUInteger, ReconnectResultType) {
    ReconnectResultTypeNormal,         // 默认值
    ReconnectResultTypeTLSDisconnect,  // TLS闪断
    ReconnectResultTypeNeedRejoinConf, // 重连上后,需要重新入会
    ReconnectResultTypeNeedReinvite,   // 重连上后,需要重协商
};


typedef NS_ENUM(NSUInteger, HWMNetLevel) {
    HWMNetLevelOne,
    HWMNetLevelTwo,
    HWMNetLevelThree,
    HWMNetLevelFour
};

typedef NS_ENUM(NSInteger, VideoOperation) {
    VideoOperation_Open = 0x01,            //开启摄像头
    VideoOperation_Close = 0x02,            //关闭摄像头
    VideoOperation_Start = 0x04,            //开始视频
    VideoOperation_Stop = 0x08             //停止视频
};

typedef NS_ENUM(NSInteger, VideoModule) {
    VideoModule_Remote = 0x01,  //对远端画面操作
    VideoModule_Local = 0x02,  //对本端画面操作
    VideoModule_Capture = 0x04, //对摄像头操作
    VideoModule_Encoder = 0x08, //编码
    VideoModule_Decoder = 0x10, //解码
};

typedef NS_ENUM(NSUInteger, HWMRecordStatus) {
    HWMRecordStatusNotStart = 0,   // 未录制
    HWMRecordStatusRecording = 1,  // 录制中
    HWMRecordStatusPause = 2       // 录制暂停
};

typedef NS_ENUM(NSInteger, HWMRecordType) {
    HWMRecordTypeBan,   //禁用
    HWMRecordTypeRec, // 录播
    HWMRecordTypeRecAndLive, // 录播+直播
    HWMRecordTypeLive //直播
};

/**
 * [en]permit call in type.
 * [cn]允许呼入范围类型
 */
typedef NS_ENUM(NSInteger, HWMCallInRestrictionType) {
    HWMCallRestrictionAll,   //所有用户
    HWMCallRestrictionNotAnonymouse, // 非匿名用户
    HWMCallRestrictionCompany, // 企业内用户
    HWMCallRestrictionInvited // 被邀请用户
};

typedef NS_ENUM(NSInteger, HWMConfEndedReason) {
    HWMConfEndedReasonOther = 0,  // 其他
    HWMConfEndedReasonTimeout = 414100041,  /**< 会话心跳超时挂断 （原错误码836） */
    HWMConfEndedReasonNoStream = 414100042,   /**< 无码流挂断（原错误码837） */
    HWMConfEndedReasonChairHangup = 414100043,  /**< 主席挂断 （原错误码838） */
    HWMConfEndedReasonEndConf = 414100044 /**< 结束会议挂断 （原错误码839） */
};

typedef NS_ENUM(NSInteger, HWMConfIdType) {
    HWMConfIdPersonal,  //个人会议ID
    HWMConfIdPrivate,   //专用会议ID
    HWMConfIdRandom  //随机会议ID
};

typedef NS_ENUM(NSInteger,HWMConfVmrIdType) {
    HWMConfVmrIdTypePersonal = 0,//vmr固定id类型
    HWMConfVmrIdTypeRandom // vmr随机id类型
};

///媒体类型枚举,预留请勿使用。
typedef NS_ENUM(NSUInteger, HWMAvType) {
    HWMAvTypeMCU,       /**< MCU会议 */
    HWMAvTypeRTC        /**< RTC会议 */
};

///视频质量模式
typedef NS_ENUM(NSUInteger, HWMVideoQuailityModel){
    HWMVideoQuailityModelHDFirst = 1,  // 高清优先
    HWMVideoQuailityModelAutoAdapter,  // 自适应
    HWMVideoQuailityModelSD,           // 流畅360
};

//观众-嘉宾转换状态
typedef NS_ENUM(NSUInteger, HWMSwitchAudienceAndAttendeeStatus){
    HWMSwitchAudienceAndAttendeeStart = 0,     //观众-嘉宾转换开始
    HWMSwitchAudienceAndAttendeeEnd,           //观众-嘉宾转换结束
    HWMSwitchAudienceAndAttendeeTimeOut        //观众-嘉宾转换超时
};

typedef NS_ENUM(NSInteger, HWMP2PTransToConfStatus) {
    HWMP2PTransToConfStatusIdle = 0,
    HWMP2PTransToConfStatusStart,
    HWMP2PTransToConfStatusFailed = HWMP2PTransToConfStatusIdle
};
