//
//  HWMSDKCommonDefine.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

# ifndef HWMSDKCommonDefine_h
# define HWMSDKCommonDefine_h

typedef NS_ENUM(NSInteger, HWMLogLevel) {
    HWMLogLevelError = 0,		/**<[en]Indicates the error level [cn]错误级别 [ios:rename:Error] */
    HWMLogLevelWarning = 1,		/**<[en]Indicates the warning level [cn]警告级别 [ios:rename:Warning] */
    HWMLogLevelInfo = 2,		/**<[en]Indicates the info level [cn]信息(一般)级别 [ios:rename:Info] */
    HWMLogLevelDebug = 3,		/**<[en]Indicates the debug level [cn]调试级别 [ios:rename:Debug] */
};

typedef NS_ENUM(NSInteger, HWMSDKERR) {
    HWMSDKSdkerrUnkown = -1,		/**<[en]Unknown error. [cn]未知错误 */
    HWMSDKSdkerrSuccess = 0,		/**<[en]Success. [cn]成功 */
    HWMSDKCmsConfBadRequest = 111070001,		/**<[en]Request error. [cn]请求错误 */
    HWMSDKCmsConfInsufficientPermissions = 111070002,		/**<[en]Insufficient permissions. [cn]权限不足 */
    HWMSDKCmsConfException = 111070003,		/**<[en]System processing failure. [cn]系统处理失败 */
    HWMSDKCmsConfAuthFail = 111070004,		/**<[en]Meeting authentication failed. [cn]校验失败 */
    HWMSDKCmsConfDataNotFound = 111070005,		/**<[en]Meeting does not exist. [cn]会议不存在 */
    HWMSDKCmsVmrDataNotFound = 111070006,		/**<[en]Personal cloud meeting room does not exist. [cn]个人云会议室不存在 */
    HWMSDKCmsAccessNumberNotFound = 111070007,		/**<[en]Meeting access number does not exist. [cn]会议接入号不存在 */
    HWMSDKCmsConfNoticeModelConfigError = 111070008,		/**<[en]Meeting notification could not be sent. [cn]会议通知模板配置错误 */
    HWMSDKCmsConfAuthenNeedPassword = 111070009,		/**<[en]Meeting password cannot be left blank. [cn]会议密码不能为空 */
    HWMSDKCmsConfRoleAuthenticationFailed = 111070010,		/**<[en]Insufficient permissions to view this meeting. [cn]权限不足,无法查看会议 */
    HWMSDKCmsConfGetStartedConfException = 111070100,		/**<[en]Get started meeting exception. [cn]获取召开会议异常 */
    HWMSDKCmsConfStartException = 111070101,		/**<[en]Start meeting exception. [cn]开始会议异常 */
    HWMSDKCmsConfApplyIvrResourceException = 111070102,		/**<[en]Apply IVR resource exception. [cn]申请IVR资源异常 */
    HWMSDKCmsStartIvrconfException = 111070103,		/**<[en]Start IVR meeting exception. [cn]开始IVR会议异常 */
    HWMSDKCmsConfApplyParticipantResourceException = 111070104,		/**<[en]Apply site resource exception. [cn]申请会场资源异常 */
    HWMSDKCmsStartSubconfException = 111070105,		/**<[en]Start sub meeting exception. [cn]开始子会议异常 */
    HWMSDKCmsConfAddChannelException = 111070106,		/**<[en]Add channel exception. [cn]创建级联通道异常 */
    HWMSDKCmsConfMoveAndApplyResourceException = 111070107,		/**<[en]Move and apply site resource exception. [cn]移动会场申请资源异常 */
    HWMSDKCmsStartConfException = 111070108,		/**<[en]Start meeting exception. [cn]开启会议异常 */
    HWMSDKCmsConfGetStartedVmrconfException = 111070109,		/**<[en]Get started cloud meeting exception. [cn]获取召开云会议室会议异常 */
    HWMSDKCmsConfInviteParticipantException = 111070110,		/**<[en]Invite site exception. [cn]邀请会场异常 */
    HWMSDKCmsRequestTokenIsNull = 111070111,		/**<[en]Request token is null. [cn]请求token为空 */
    HWMSDKCmsConfRenameParticipantException = 111070112,		/**<[en]Rename site exception. [cn]重命名会场异常 */
    HWMSDKCmsConfHangupException = 111070113,		/**<[en]Hangup site exception. [cn]会场挂断异常 */
    HWMSDKCmsConfBulkHangupException = 111070114,		/**<[en]Mass hangup site exception. [cn]会场批量挂断异常 */
    HWMSDKCmsConfDeleteAttendeeException = 111070115,		/**<[en]Delete attendee exception. [cn]删除与会者异常 */
    HWMSDKCmsConfBulkDeleteAttendeeException = 111070116,		/**<[en]Mass delete attendee exception. [cn]批量删除与会者异常 */
    HWMSDKCmsScheduleCycleConfException = 111070117,		/**<[en]Book cycle meeting exception. [cn]预定周期会议异常 */
    HWMSDKCmsModifyCycleConfException = 111070118,		/**<[en]Modify cycle meeting exception. [cn]修改周期会议异常 */
    HWMSDKCmsCreateCycleConfException = 111070119,		/**<[en]Create cycle meeting exception. [cn]创建周期会议异常 */
    HWMSDKCmsRegionDataNotFound = 111070120,		/**<[en]Region data not found. [cn]区域信息获取失败 */
    HWMSDKCmsForbiddenSubscribe = 111070121,		/**<[en]Forbidden subscribe. [cn]禁止订阅 */
    HWMSDKCmsCancelSubscribeFail = 111070122,		/**<[en]Cancel subscribe fail. [cn]取消订阅失败 */
    HWMSDKCmsConfSysportalServiceException = 111071001,		/**<[en]Sysportal service exception. [cn]Sysportal服务运行异常 */
    HWMSDKCmsConfExecutorRunException = 111071002,		/**<[en]Conf service exception. [cn]Conf服务运行异常 */
    HWMSDKCmsConfIdNotExist = 111071003,		/**<[en]Failed to create the meeting. Try again later. [cn]创建会议失败，请稍后重试 */
    HWMSDKCmsVmrOnlyAllowChairStartConf = 111071004,		/**<[en]This cloud meeting room does not allow guests to join before the host. [cn]VMR会议不允许来宾在主席入会前入会 */
    HWMSDKCmsVmrConfConflict = 111071005,		/**<[en]This cloud meeting room has been scheduled for another meeting during this period. [cn]VMR会议时间冲突，该时间段此会议室已有预约会议 */
    HWMSDKCmsVmrImmediatelyConfDurationNotEnough = 111071006,		/**<[en]Insufficient cloud meeting time. [cn]VMR会议时长不足 */
    HWMSDKCmsVmrScheduleRelationNotExist = 111071007,		/**<[en]Meeting does not exist. [cn]VMR预约关系不存在 */
    HWMSDKCmsConfQueryListFail = 111071008,		/**<[en]Cannot query meeting list. [cn]查询会议列表失败 */
    HWMSDKCmsConfModifyImmediatelyVmrFail = 111071009,		/**<[en]Cannot change cloud meeting into immediate meeting. [cn]不支持修改VMR会议为立即会议 */
    HWMSDKCmsConfModifyVmrFlagFail = 111071010,		/**<[en]Cannot modify cloud meeting flag. [cn]不支持修改云会议室标识 */
    HWMSDKCmsVmrConfNotReachPrepareTime = 111071011,		/**<[en]The cloud meeting has not yet started. Please wait. [cn]VMR会议未到准备时间点 */
    HWMSDKCmsConfNotVmr = 111071012,		/**<[en]Not cloud meeting. [cn]非VMR会议 */
    HWMSDKCmsConfStartTimeLessThanCurrentTime = 111071013,		/**<[en]Start time less than current time. [cn]会议开始时间不能早于系统当前时间 */
    HWMSDKCmsConfStartTimeOverMaxScheduleTime = 111071014,		/**<[en]Start time over max schedule time. [cn]会议开始时间超出最大预订时间范围 */
    HWMSDKCmsConfDurationOverRange = 111071015,		/**<[en]Duration over range. [cn]时长超出范围 */
    HWMSDKCmsConfParamsNullException = 111071016,		/**<[en]Cycle ID list null exception. [cn]取消周期会议ID列表不能为空 */
    HWMSDKCmsConfSizeOverRange = 111071017,		/**<[en]Meeting size over range. [cn]与会方数超出范围 */
    HWMSDKCmsConfMediaTypesIllegal = 111071018,		/**<[en]Invalid media type. [cn]媒体类型非法 */
    HWMSDKCmsConfConferenceTypeIllegal = 111071019,		/**<[en]Invalid meeting type. [cn]会议类型非法 */
    HWMSDKCmsConfCycleParamsNullException = 111071020,		/**<[en]Cycle params null exception. [cn]周期会议时,必须携带周期会议参数 */
    HWMSDKCmsConfLengthOverRange = 111071021,		/**<[en]Duration over range. [cn]会议时长超出范围 */
    HWMSDKCmsConfSubjectLengthTooLong = 111071022,		/**<[en]Subject length too long. [cn]会议主题超长 */
    HWMSDKCmsConfGroupuriLengthTooLong = 111071023,		/**<[en]Group URI length too long. [cn]groupuri超长 */
    HWMSDKCmsConfEmailIllegal = 111071024,		/**<[en]Invalid email address format. [cn]邮箱地址不合法 */
    HWMSDKCmsConfSmsIllegal = 111071025,		/**<[en]Invalid mobile number format. [cn]手机号不合法 */
    HWMSDKCmsConfDeptnameTooLong = 111071026,		/**<[en]Department name too long. [cn]部门名称过长 */
    HWMSDKCmsConfWelcomeVoiceNotInRange = 111071027,		/**<[en]Invalid welcome voice enable value. [cn]入会欢迎词开关不在范围内 */
    HWMSDKCmsConfEnterPromptNotInRange = 111071028,		/**<[en]Invalid enter voice enable value. [cn]入会提示音开关不在范围内 */
    HWMSDKCmsConfLeavePromptNotInRange = 111071029,		/**<[en]Invalid leave voice enable value. [cn]离会提示音开关不在范围内 */
    HWMSDKCmsConfRemindersIllegal = 111071030,		/**<[en]Invalid reminders value. [cn]会议提醒非法 */
    HWMSDKCmsConfAllowRecordNotInRange = 111071031,		/**<[en]Invalid allow record value. [cn]会议是否启用网络录制取值非法 */
    HWMSDKCmsConfAutoRecordNotInRange = 111071032,		/**<[en]Invalid auto record value. [cn]会议是否自动启动录制取值非法 */
    HWMSDKCmsConfUserTypeNotInRange = 111071033,		/**<[en]Invalid user type value. [cn]会预定者的用户类型非法 */
    HWMSDKCmsConfEncryptModeNotInRange = 111071034,		/**<[en]Invalid encrypt mode value. [cn]加密类型非法 */
    HWMSDKCmsConfLanguageNotInRange = 111071035,		/**<[en]Invalid language value. [cn]语言非法 */
    HWMSDKCmsConfAutoProlongNotInRange = 111071036,		/**<[en]Invalid auto prolong value. [cn]是否自动延长会议取值非法 */
    HWMSDKCmsConfVmridTooLong = 111071037,		/**<[en]VmrID too long. [cn]vmrid超长 */
    HWMSDKCmsConfRecordTypeNotInRange = 111071038,		/**<[en]Invalid record type value. [cn]录播类型非法 */
    HWMSDKCmsConfLiveAddressTooLong = 111071039,		/**<[en]Live address too long. [cn]主流直播地址超长 */
    HWMSDKCmsConfAuxAddressTooLong = 111071040,		/**<[en]Aux address too long. [cn]辅流直播地址超长 */
    HWMSDKCmsConfCycleParamsStartdateNull = 111071041,		/**<[en]Null start date for cycle meeting. [cn]周期会议时,起始日期为空 */
    HWMSDKCmsConfCycleParamsEnddateNull = 111071042,		/**<[en]Null end date for cycle meeting. [cn]周期会议时,结束日期为空 */
    HWMSDKCmsConfCycleParamsCycleIllegal = 111071043,		/**<[en]Invalid cycle type value for cycle meeting. [cn]周期会议时,周期类型非法 */
    HWMSDKCmsConfCycleParamsIntervalNotInRange = 111071044,		/**<[en]Invalid interval for cycle meeting. [cn]周期会议时,interval非法 */
    HWMSDKCmsConfCycleParamsPointNullException = 111071045,		/**<[en]Null point for cycle meeting. [cn]周期会议时,point为空 */
    HWMSDKCmsConfCycleParamsPointNotInRange = 111071046,		/**<[en]Invalid point value for cycle meeting. [cn]周期会议时,point非法 */
    HWMSDKCmsConfVmrFlagNotInRange = 111071047,		/**<[en]Invalid vmr flag value. [cn]vmrFlag非法 */
    HWMSDKCmsConfRecordAuxStreamNotInRange = 111071048,		/**<[en]Invalid record auxStream. [cn]recordAuxStream非法 */
    HWMSDKCmsConfMultiStreamFlagNotInRange = 111071049,		/**<[en]Invalid multiStream flag. [cn]multiStreamFlag非法 */
    HWMSDKCmsConfAudienceFlagNotInRange = 111071050,		/**<[en]Invalid audience flag. [cn]audienceFlag非法 */
    HWMSDKCmsConfLiveChannelIdNotExisted = 111071051,		/**<[en]Invalid liveChannel ID. [cn]liveChannelID不存在 */
    HWMSDKCmsConfAnonymousLoginLocked = 111071052,		/**<[en]Anonymous login is locked. Try again later. [cn]匿名登录锁定,请稍后重试 */
    HWMSDKCmsConfLinkLoginLocked = 111071053,		/**<[en]Link login is locked. Try again later. [cn]链接登录锁定,请稍后重试 */
    HWMSDKCmsConfIdentifierNotEnough = 111071054,		/**<[en]Not enough Meeting ID. [cn]会议ID不足 */
    HWMSDKCmsConfIdentifierApplyFailed = 111071055,		/**<[en]Failed to apply meeting ID. [cn]会议ID申请失败 */
    HWMSDKCmsConfIdentifierReleaseFailed = 111071056,		/**<[en]Failed to release meeting ID. [cn]会议ID释放失败 */
    HWMSDKCmsConfLiveRoomIsused = 111071057,		/**<[en]Live room is used. [cn]直播房间已被占用 */
    HWMSDKCmsNotAllowedGuestFirstJoin = 111071058,		/**<[en]The meeting has not yet started. Please wait. [cn]当前会议还未召开,请耐心等待 */
    HWMSDKCmsConfSizeOverCommunalVmrMaxnum = 111071059,		/**<[en]Meeting size over range. [cn]与会方数超出上限 */
    HWMSDKCmsOrgConcurrentParticipantsNumberIsZero = 111071060,		/**<[en]The enterprise cannot create meetings because it has not purchased any concurrent meeting resources. [cn]企业未配置并发会议资源,无法使用个人会议ID和随机会议ID发起会议 */
    HWMSDKCmsParameterVerifiedFail = 111071061,		/**<[en]Parameter verify failed. [cn]参数校验失败 */
    HWMSDKCmsJsonConversionFailed = 111071062,		/**<[en]Json conversion failed. [cn]JSON转换失败 */
    HWMSDKCmsConfUserNotVmrOwner = 111071063,		/**<[en]Not cloud meeting room owner. [cn]非云会议室拥有者 */
    HWMSDKCmsVmrConfConflictAsVmrAlreadyStarted = 111071064,		/**<[en]This cloud meeting room has been started for another meeting during this period. [cn]VMR会议冲突,当前已有会议正在召开 */
    HWMSDKCmsConfModifyFailAsConfAlreadyStarted = 111071065,		/**<[en]This meeting cannot be modified because it is already started. [cn]正在召开会议,无法编辑会议详情 */
    HWMSDKCmsConfAttendeesNumberExceedLimit = 111071066,		/**<[en]Attendees amount over range. [cn]与会方数量超出上限 */
    HWMSDKCmsConfCancelFailAsConfStarted = 111071067,		/**<[en]This meeting cannot be canceled because it is already started. [cn]会议正在召开中，不允许取消会议 */
    HWMSDKCmsConfPwdEncryptFailed = 111071068,		/**<[en]Meeting password encrypt failed. [cn]会议密码加密失败 */
    HWMSDKCmsConfNoconfInSelectedTime = 111071069,		/**<[en]No meeting during this period. [cn]选定的时间中没有会议 */
    HWMSDKCmsSubCycconfCannotModifyLiveRoom = 111071070,		/**<[en]Sub cycle meeting cannot modify live room. [cn]周期会议子会议不允许修改直播房间 */
    HWMSDKCmsStopOnlineConfException = 111071071,		/**<[en]Stop online meeting exception. [cn]结束会议失败 */
    HWMSDKCmsConfClosedRecently = 111071072,		/**<[en]Meeting is ended. [cn]会议已经结束 */
    HWMSDKCmsConfNotAllowAnonymous = 111071073,		/**<[en]Not allow anonymous user. [cn]会议不允许匿名用户呼入 */
    HWMSDKCmsConfOnlyAllowUserInOrg = 111071074,		/**<[en]Only allow user in organization. [cn]会议只允许企业内用户呼入 */
    HWMSDKCmsConfOnlyAllowUserInvited = 111071075,		/**<[en]Only allow invited user. [cn]会议只允许被邀请用户呼入 */
    HWMSDKCmsBatchExportHisConfListConflict = 111071076,		/**<[en]Batch export task for history meeting list during this period. [cn]当前有正在执行的批量导出任务 */
    HWMSDKCmsConfOnlyAllowUserInvitedAndUserInOrg = 111071077,		/**<[en]Only allow invited user and user in organization. [cn]会议只允许被邀请或者企业内用户用户呼入 */
    HWMSDKCmsWelinkCConcurrentParticipantsNumberIsNotEnough = 111071078,		/**<[en]Max current participants amount reached. [cn]企业单会议并发方数已达上限 */
    HWMSDKCmsConfCtdParamIllegal = 111071079,		/**<[en]Invalid CTD param. [cn]ctd会议参数不合法 */
    HWMSDKCmsGuestPwdIllegal = 111071080,		/**<[en]Invalid guest password. [cn]来宾密码不合法 */
    HWMSDKCmsGuestPwdConflictWithConfId = 111071081,		/**<[en]Guest password conflict with meeting ID. [cn]来宾密码与会议ID冲突 */
    HWMSDKCmsConfNumUpToLimit = 111071082,		/**<[en]Max meeting amount reached. [cn]会议数达到上限 */
    HWMSDKCmsConfRandomInvalid = 111071083,		/**<[en]Invalid meeting random number. [cn]无效的会议随机数 */
    HWMSDKCmsExportHisConfUpToLimit = 111071084,		/**<[en]Max export history meeting list times reached. [cn]导出历史会议次数超出允许的值 */
    HWMSDKCmsMultiPicTooManyLayouts = 111071085,		/**<[en]Max multi view layouts reached. [cn]会议多画面布局超出限制 */
    HWMSDKCmsMultiPicManualTypeInvalid = 111071086,		/**<[en]Max multi view invalid manual type. [cn]会议多画面模式非法 */
    HWMSDKCmsMultiPicTooManySubpics = 111071087,		/**<[en]Max multi view sub view amount reached. [cn]会议多画面子画面个数超出限制 */
    HWMSDKCmsMultiPicTooManySubnumbers = 111071088,		/**<[en]Max multi view sub view numbers reached. [cn]会议多画面子画面会场数超出限制 */
    HWMSDKCmsWebinarCommonNonConvert = 111071089,		/**<[en]Webinar and common meeting cannot be converted to each other. [cn]网络研讨会不能修改为普通会议,普通会议也不能修改为网络研讨会 */
    HWMSDKCmsNotAllowAudience = 111071090,		/**<[en]Not allow add audience. [cn]不支持添加观众 */
    HWMSDKCmsConfPwdAuthFailed = 111071091,		/**<[en]Meeting password authentication failed. [cn]密码错误 */
    HWMSDKCmsFileExportTaskFailed = 111071092,		/**<[en]File export task failed. [cn]导出文件任务失败 */
    HWMSDKCmsFileExportTaskDownloading = 111071093,		/**<[en]File export task is downloading. [cn]导出文件正在处理中 */
    HWMSDKCmsConfForbidAudienceJoin = 111071094,		/**<[en]Not allow audience to join. [cn]会议不允许观众入会 */
    HWMSDKCmsConfNeedGetWebinarConfDto = 111071095,		/**<[en]Need to get WEBINAR_CONF_DTO object. [cn]需要获取WEBINAR_CONF_DTO对象 */
    HWMSDKCmsCustomLanguageNumOverRange = 111071096,		/**<[en]User-defined languages over range. [cn]自定义语言个数超出范围 */
    HWMSDKCmsOrgNotSupportSimultaneousInterpretation = 111071097,		/**<[en]Your enterprise does not support simultaneous interpretation. [cn]企业不支持同声传译 */
    HWMSDKCmsNeedSetInterpreterGroups = 111071098,		/**<[en]Need to set interpreter groups. [cn]需要设置传译组信息 */
    HWMSDKCmsInterpreterLanguageIllegal = 111071099,		/**<[en]Invalid interpretation language. [cn]传译组语言非法 */
    HWMSDKCmsConfLanguageNumUpToMax = 111071100,		/**<[en]Max languages in a meeting are reached. [cn]单会议最大支持16种语言 */
    HWMSDKCmsInterpreterGroupIdRepeated = 111071101,		/**<[en]This interpreter group ID already exists. [cn]传译组的组号重复 */
    HWMSDKCmsInterpreterNumInOneGroupUpToMax = 111071102,		/**<[en]Max interpreters in the interpreter group reached. [cn]传译组中传译员的个数达到上限 */
    HWMSDKCmsInterpreterRepeated = 111071103,		/**<[en]This interpreter already exists in an interpreter group. [cn]传译员重复 */
    HWMSDKCmsInvalidInterpreter = 111071104,		/**<[en]Invalid interpreter account. [cn]传译员帐号不存在 */
    HWMSDKCmsGuestPwdConflictWithChairPwd = 111071105,		/**<[en]Guest password conflict with chairman password. [cn]来宾密码与主席密码冲突 */
    HWMSDKCmsOnlineConfInCommunal = 111071106,		/**<[en]Meeting is holding. [cn]云会议室已有会议正在召开 */
    HWMSDKCmsAudiencePwdIllegal = 111071107,		/**<[en]Invalid audience password. [cn]观众密码不合法 */
    HWMSDKCmsAudiencePwdConflictWithConfId = 111071108,		/**<[en]Audience password conflict with meeting id. [cn]观众密码与会议ID冲突 */
    HWMSDKCmsAudiencePwdConflictWithChairPwd = 111071109,		/**<[en]Audience password conflict with chairman password. [cn]观众密码与主席密码冲突 */
    HWMSDKCmsOnlyRtcConfSupportE2eEncrypt = 111071110,		/**<[en]Only RTC meeting support E2E encrypt. [cn]非RTC会议不支持端到端加密 */
    HWMSDKCmsAudiencePwdConflictWithGuestPwd = 111071111,		/**<[en]Audience password conflict with guest password. [cn]观众密码与来宾密码冲突 */
    HWMSDKCmsVmridtypeCannotModify = 111071112,		/**<[en]Cloud meeting room ID type cannot be modified. [cn]不支持修改会议ID类型 */
    HWMSDKCmsVmridCannotModify = 111071113,		/**<[en]Cloud meeting room type cannot be modified. [cn]不支持修改VMR类型 */
    HWMSDKCmsVmrFlagCannotModify = 111071114,		/**<[en]Cloud meeting room flag cannot be modified. [cn]不支持修改VMR标识 */
    HWMSDKCmsSubCycconfModifyTimeOverRange = 111071119,		/**<[en]Sub cycle meeting modify time over range. [cn]周期会议修改时间超出范围 */
    HWMSDKCmsConfApplyResourceFailed = 111072001,		/**<[en]Application for meeting resources failed. [cn]申请资源失败 */
    HWMSDKCmsConfReleaseResourceFailed = 111072002,		/**<[en]Failed to release meeting resources. [cn]释放资源失败 */
    HWMSDKCmsConfIsClosing = 111072003,		/**<[en]The meeting is ending. [cn]会议正在结束 */
    HWMSDKCmsConfIsStarting = 111072004,		/**<[en]The meeting is starting. [cn]会议正在开始 */
    HWMSDKCmsConfNotStarted = 111072005,		/**<[en]The meeting has not yet started. [cn]会议还未开始 */
    HWMSDKCmsConfIsClosed = 111072006,		/**<[en]The meeting has ended. [cn]会议已经结束 */
    HWMSDKCmsConfInviteParticipantFailed = 111072007,		/**<[en]Site invitation failed. [cn]邀请会场失败 */
    HWMSDKCmsConfParticipantNotExist = 111072008,		/**<[en]Site does not exist. [cn]会场不存在 */
    HWMSDKCmsConfParticipantHangUpFailed = 111072009,		/**<[en]Failed to disconnect the site. [cn]挂断会场失败 */
    HWMSDKCmsConfNotSupport = 111072010,		/**<[en]Coming soon... [cn]功能暂未支持,敬请期待... */
    HWMSDKCmsConfStatusIllegal = 111072011,		/**<[en]Meeting status incorrect. [cn]会议状态非法 */
    HWMSDKCmsConfGenericCtlParticipantFailed = 111072012,		/**<[en]Site control operation failed. [cn]会场会控操作失败 */
    HWMSDKCmsVmrCurrentConfNotGoalConf = 111072013,		/**<[en]The cloud meeting room is in use by another meeting. [cn]当前VMR会议非目标会议 */
    HWMSDKCmsVmrConfIsExpired = 111072014,		/**<[en]The meeting has ended. [cn]VMR会议已过期 */
    HWMSDKCmsVmrConfIsNotArriveStartTime = 111072015,		/**<[en]The meeting has not yet started. [cn]VMR会议还未开始 */
    HWMSDKCmsVmrConfWithScheduleNotExist = 111072016,		/**<[en]Meeting does not exist. [cn]VMR预约记录不存在 */
    HWMSDKCmsConfHasNoAttendee = 111072017,		/**<[en]Meeting has no attendee. [cn]会议与会者不存在 */
    HWMSDKCmsConfChairmanPwdException = 111072018,		/**<[en]Application for chairman password exception. [cn]申请主席密码错误 */
    HWMSDKCmsConfNotFindCanmovesiteException = 111072019,		/**<[en]Not found site which can be moved exception. [cn]没有找到可以移动的会场 */
    HWMSDKCmsConfNotSupportRecord = 111072020,		/**<[en]The current meeting is not a recording meeting. Recording is not supported. [cn]非录播会议不支持录制 */
    HWMSDKCmsRecordResourceNotEnough = 111072021,		/**<[en]System processing failure. [cn]录播调度失败 */
    HWMSDKCmsRecordSheduleFail = 111072022,		/**<[en]Insufficient recording resources in the system. [cn]录播资源不足 */
    HWMSDKCmsConfNotHavePart = 111072023,		/**<[en]There are no participants in this meeting. [cn]会议中没有与会人 */
    HWMSDKCmsConfNoParticipantJoined = 111072024,		/**<[en]Operation failed. No sites have joined this meeting. [cn]请确保会议中已有会场入会 */
    HWMSDKCmsAudioConfNotSupport = 111072025,		/**<[en]Voice meeting does not support this function. [cn]语音会议不支持该功能 */
    HWMSDKCmsAudioSiteNotSupport = 111072026,		/**<[en]The voice site does not support this operation. [cn]语音会场不支持该操作 */
    HWMSDKCmsAudioSiteInMultiPic = 111072027,		/**<[en]Voice sites cannot be displayed in custom continuous presence. [cn]手动设置的多画面中无法显示语音会场 */
    HWMSDKCmsNoSiteInMultiPic = 111072028,		/**<[en]At least one site must have custom continuous presence configured. [cn]手动设置的多画面中需最少设置一个会场 */
    HWMSDKCmsAssistantPicNumMoreThenOne = 111072029,		/**<[en]At most one presentation pane is allowed in custom continuous presence. [cn]手工设置的多画面最多只允许一个辅流子画面 */
    HWMSDKCmsVasSubPicContainsUserMoreThenOne = 111072030,		/**<[en]In the voice-activated continuous presence mode, each pane can only support a single user. [cn]声控多画面模式下,每个子画面最多只允许一个用户 */
    HWMSDKCmsSiteCallNumberIsEmpty = 111072031,		/**<[en]The number used for the site to join the meeting cannot be left blank. [cn]与会者的入会号码不允许为空 */
    HWMSDKCmsSiteCallNumberLengthTooLong = 111072032,		/**<[en]The number used for the site to join the meeting is too long. [cn]与会者的入会号码长度超过系统允许的最大值 */
    HWMSDKCmsSiteCallNumberIllegalUri = 111072033,		/**<[en]The format of the number used for joining the meeting is incorrect. (Correct format: User name name/IP address:Port number or Country code plus phone number) [cn]与会者的入会号码格式非法(支持SIP、TEL号码格式) */
    HWMSDKCmsSiteNameLengthTooLong = 111072034,		/**<[en]Length of site name too long. [cn]与会者的名称长度超过系统允许的最大值 */
    HWMSDKCmsSiteRoleNotInRange = 111072035,		/**<[en]The site role type is outside the allowed range. [cn]与会者的角色类型不在系统允许的取值范围内 */
    HWMSDKCmsSiteEmailLengthTooLong = 111072036,		/**<[en]Length of site email address too long. [cn]与会者的邮箱地址长度超过系统允许的最大值 */
    HWMSDKCmsSiteSmsLengthTooLong = 111072037,		/**<[en]Length of site mobile number too long. [cn]与会者的手机号码长度超过系统允许的最大值 */
    HWMSDKCmsSiteMuteNotInRange = 111072038,		/**<[en]The value for whether a site is muted after it first joins the meeting is outside the allowed range. [cn]与会者入会后是否静音的取值不在系统允许的取值范围内 */
    HWMSDKCmsSiteAutoInviteNotInRange = 111072039,		/**<[en]The value for whether to automatically invite a site is outside the allowed range. [cn]与会者是否自动邀请的取值不在系统允许的取值范围内 */
    HWMSDKCmsViewTypeNotInRange = 111072040,		/**<[en]The host's site viewing type is outside the allowed range. [cn]主席选看类型取值不在系统允许的取值范围内 */
    HWMSDKCmsSetMultiPicManualSetNotInRange = 111072041,		/**<[en]The value of the continuous presence setting mode is outside the allowed range. [cn]设置多画面方式取值不在系统允许的取值范围内 */
    HWMSDKCmsSwitchTimeNotInRange = 111072042,		/**<[en]The polling time is outside the allowed range. [cn]轮询显示时间取值不在系统允许的取值范围内 */
    HWMSDKCmsSetMultiPicImageTypeIsEmpty = 111072043,		/**<[en]The pane type cannot be left blank. [cn]画面类型不允许为空 */
    HWMSDKCmsSetMultiPicImageTypeIsNotMatch = 111072044,		/**<[en]Invalid pane type. [cn]画面类型非法 */
    HWMSDKCmsOnOffNotInRange = 111072045,		/**<[en]The value of the switch is outside the allowed range. [cn]开关项取值不在系统允许的取值范围内 */
    HWMSDKCmsSiteNameIsEmpty = 111072046,		/**<[en]The site name cannot be left blank. [cn]与会者的名称不允许为空 */
    HWMSDKCmsSiteNewNameLengthTooLong = 111072047,		/**<[en]Site name too long. [cn]与会者的名称超过系统允许的最大值 */
    HWMSDKCmsMcuNotSupportSetMultiPic = 111072048,		/**<[en]Continuous presence is not supported. Ask the administrator to configure related data on the MCU. [cn]不支持多画面,请联系管理员开启MCU配置 */
    HWMSDKCmsResponseTimeOut = 111072049,		/**<[en]Response timed out. Try again later. [cn]等待响应超时 */
    HWMSDKCmsConfLocked = 111072050,		/**<[en]Meeting locked. [cn]会议被锁定 */
    HWMSDKCmsConfModeIsEmpty = 111072051,		/**<[en]The meeting display mode is empty. [cn]会议显示模式为空 */
    HWMSDKCmsConfModeNotInRange = 111072052,		/**<[en]The meeting display mode is outside the allowed range. [cn]会议显示模式不在系统允许的取值范围内 */
    HWMSDKCmsConfImageTypeNotInRange = 111072053,		/**<[en]The meeting pane type is outside the allowed range. [cn]会议画面类型不在系统允许的取值范围内 */
    HWMSDKCmsTextTypeIsEmpty = 111072054,		/**<[en]The banner or caption type is empty. [cn]横幅或字幕类型为空 */
    HWMSDKCmsTextIsEmpty = 111072055,		/**<[en]The banner or caption content is empty. [cn]横幅或字幕的内容为空 */
    HWMSDKCmsTextIsTooLong = 111072056,		/**<[en]The banner or caption content cannot exceed 2,000 bytes. [cn]横幅或字幕的内容长度超过2000字节 */
    HWMSDKCmsRequestBodyIsNull = 111072057,		/**<[en]The request message body is empty. [cn]请求消息体为空 */
    HWMSDKCmsSubPicIndexMoreThanPicNum = 111072058,		/**<[en]The pane index is greater than the total number of panes. [cn]子画面索引大于画面总数 */
    HWMSDKCmsConfNoChairSite = 111072059,		/**<[en]Meeting has no host. [cn]会议中没有主席 */
    HWMSDKCmsNormalSiteNotSupportView = 111072060,		/**<[en]Regular participants cannot perform this operation. [cn]当前普通与会方类型不支持该操作 */
    HWMSDKCmsChairPollingForbiddenView = 111072061,		/**<[en]You have set host polling and cannot select a specific site to view or set continuous presence. [cn]前主席正在轮询观看会场,不能单独选看其他会场或会议多画面 */
    HWMSDKCmsSvcSiteNotSupportView = 111072062,		/**<[en]You cannot select a site to view on the web page. Perform the operation on the terminal. [cn]当前主席与会方类型不支持该操作 */
    HWMSDKCmsRseResreapply = 111072063,		/**<[en]Applying for recording resources... [cn]录制资源重新申请错误码 */
    HWMSDKCmsConfCtrLoginLocked = 111072064,		/**<[en]Too many failed login attempts. Try again later. [cn]会控登录锁定 */
    HWMSDKCmsConfNotFoundOrAuthFailed = 111072065,		/**<[en]The meeting ID or password is incorrect. Check the ID and password and try again. [cn]会议不存在或密码错误 */
    HWMSDKCmsOrgNotBuyRecspace = 111072066,		/**<[en]The enterprise has not purchased any recording storage space. [cn]企业未购买录播空间 */
    HWMSDKCmsOrgRecspaceNotEnough = 111072067,		/**<[en]Insufficient enterprise recording storage space. [cn]企业录播空间已满 */
    HWMSDKCmsConfSetliveFailed = 111072068,		/**<[en]Failed to start live broadcast. Try again later. [cn]启动直播失败 */
    HWMSDKCmsConfChairForbiddenHand = 111072069,		/**<[en]Not allow to hand up for host. [cn]不允许指定会议主席举手发言 */
    HWMSDKCmsGuestNoPermissionOperation = 111072070,		/**<[en]The operation is not allowed for guest. [cn]来宾不允许进行该操作 */
    HWMSDKCmsNoPermissionOperateOthers = 111072071,		/**<[en]The operation is only allowed for yourself. [cn]仅能对自己进行操作 */
    HWMSDKCmsNoConfCtlCapNoChair = 111072072,		/**<[en]Not allow to apply host for attendees who do not have meeting control abilites. [cn]没有会控能力的与会者不允许设置为主席 */
    HWMSDKCmsNotifyMsgIsExpired = 111072073,		/**<[en]Notify message is expired. [cn]推送消息已过期 */
    HWMSDKCmsTrunkApplyChairForbid = 111072074,		/**<[en]Only participants with a number registered on HUAWEI CLOUD can be set as the host. [cn]云下会场不能成为主席 */
    HWMSDKCmsConfCloseHungUp = 111072075,		/**<[en]Hung up site for meeting ended. [cn]会议结束挂断会场 */
    HWMSDKCmsChairHungUp = 111072076,		/**<[en]Hung up site by host. [cn]主席挂断会场 */
    HWMSDKCmsChairDelSiteHungUp = 111072077,		/**<[en]Hung up site because host deleted site. [cn]主席删除会议挂断会场 */
    HWMSDKCmsRecreateConfHungUp = 111072078,		/**<[en]Hung up site because meeting is recreated. [cn]重建会议挂断会场 */
    HWMSDKCmsMoveSiteFailHungUp = 111072079,		/**<[en]Hung up site for moving site failed. [cn]移动会场失败挂断会场 */
    HWMSDKCmsCrossRegionInviteSiteFailHungUp = 111072080,		/**<[en]Hung up site for inviting site cross region failed. [cn]跨region邀请会场失败挂断会场 */
    HWMSDKCmsInviteExceptionHungUp = 111072081,		/**<[en]Hung up site for invitation exception. [cn]邀请会场失败挂断会场 */
    HWMSDKCmsRepeatJoinHungUp = 111072082,		/**<[en]Hung up site for joining meeting repeatedly. [cn]会场重复入会挂断会场 */
    HWMSDKCmsLockShareFailed = 111072083,		/**<[en]Lock sharing failed. [cn]锁定共享失败 */
    HWMSDKCmsTrunkSetOneMultipicForbid = 111072084,		/**<[en]This site does not support 1-screen layout. [cn]云下会场禁止设置在多画面一画面中 */
    HWMSDKCmsConfNotSupportRealtimeSubtitle = 111072085,		/**<[en]Not support realtime subtitle. [cn]会议不支持实时字幕 */
    HWMSDKCmsConfRealtimeSubtitlePidNull = 111072086,		/**<[en]Realtime subtitle pid is null. [cn]会议实时字幕指定发言人列表为空 */
    HWMSDKCmsConfRealtimeSubtitlePidWrong = 111072087,		/**<[en]Invalid realtime subtitle pid. [cn]会议实时字幕指定发言人ID有误或已离会 */
    HWMSDKCmsConfRealtimeSubtitleSetFail = 111072088,		/**<[en]Failed to set realtime subtitle. [cn]会议实时字幕设置失败 */
    HWMSDKCmsConfNotAllowChangeAudienceSpeakStatus = 111072089,		/**<[en]Not allow audience to change speaker status. [cn]不允许观众解闭音 */
    HWMSDKCmsConfSpeakableOnlyForAudience = 111072090,		/**<[en]Allow/forbid audience to speak only for audience. [cn]主持人允许/禁止观众说话接口只能操作观众 */
    HWMSDKCmsConfNotSupportSimultaneousInterpretation = 111072091,		/**<[en]This meeting does not support simultaneous interpretation. [cn]会议不支持同声传译 */
    HWMSDKCmsConfInterpreterGroupIsEmpty = 111072092,		/**<[en]Interpreter group is empty. [cn]会议当前传译组为空,请先配置传译组 */
    HWMSDKCmsConfNotEnableSimultaneousInterpretation = 111072093,		/**<[en]This meeting has not enable simultaneous interpretation. [cn]会议未开启同声传译 */
    HWMSDKCmsParticipantIsNotInterpreter = 111072094,		/**<[en]This site is not interpreter. [cn]当前会场非传译员 */
    HWMSDKCmsParticipantNotConfirmInterpreter = 111072095,		/**<[en]This site has not yet confirmed interpreter identity. [cn]传译员未确认身份 */
    HWMSDKCmsParticipantLanguageIllegal = 111072096,		/**<[en]Invalid site language. [cn]会场选择的语言非法 */
    HWMSDKCmsParticipantIsConfirmedInterpreter = 111072097,		/**<[en]This site is confirmed interpreter. [cn]当前会场是已确认的传译员 */
    HWMSDKCmsParticipantListenNotEqualSpeak = 111072098,		/**<[en]This site listen channel is different from speak channel. [cn]普通会场听说频道不一致 */
    HWMSDKCmsSetConfLanguageChannelListFailed = 111072099,		/**<[en]Failed to set interpretation languages. Try again. [cn]设置会议语言频道失败 */
    HWMSDKCmsSetParticipantLanguageChannelFailed = 111072100,		/**<[en]Failed to set interpretation channel. Try again. [cn]设置会场语言频道失败 */
    HWMSDKCmsOverMaxParticipantNumber = 111072101,		/**<[en]Max participant amount reached. [cn]超过设置的会议方数 */
    HWMSDKCmsOverMaxAllowHandNumber = 111072102,		/**<[en]Max allowed handup amount reached. [cn]观众超过最大允许举手数 */
    HWMSDKCmsOverMaxAllowSpeakNumber = 111072103,		/**<[en]Max allowed speaking amount reached. [cn]观众超过最大允许发言数 */
    HWMSDKCmsSetVirtualAudioCsdSiteFailed = 111072104,		/**<[en]Failed to set virtual audio CSD site. [cn]设置级联通道虚拟语言会场失败 */
    HWMSDKCmsConfNotSupportCohost = 111072105,		/**<[en]This meeting does not support cohost. [cn]该会议未启用联席主持人 */
    HWMSDKCmsParticipantNotSupportCohost = 111072106,		/**<[en]This site does not support cohost. [cn]该会场不支持联席主持人 */
    HWMSDKCmsChairCannotBeCohost = 111072107,		/**<[en]Host cannot be set to cohost. [cn]不支持设置主持人为联席主持人 */
    HWMSDKCmsAudienceCannotBeCohost = 111072108,		/**<[en]Audience cannot be set to cohost. [cn]不支持设置观众为联席主持人 */
    HWMSDKCmsNeedCheckCohostPermission = 111072109,		/**<[en]Need to check cohost permission. [cn]需要去主会议所在region判断是否为联席主持人 */
    HWMSDKCmsCohostCannotOperateChair = 111072110,		/**<[en]Cohost cannot operate host. [cn]联席主持人不能操作主持人 */
    HWMSDKCmsParticipantNotSupportInviteShare = 111072111,		/**<[en]This site does not support share invitation. [cn]当前会场不支持邀请共享能力 */
    HWMSDKCmsHeartBeatFailHingUp = 111072201,		/**<[en]Hung up site because heart beat failed. [cn]与终端心跳中断导致挂断会场 */
    HWMSDKCmsAudienceVmrLogicResourceNotEnough = 111072202,		/**<[en]Insufficient audience cloud meeting room logic resources. [cn]观众数超过VMR套餐中的观众最大并发资源数 */
    HWMSDKCmsParticipantVmrLogicResourceNotEnough = 111072203,		/**<[en]Insufficient participant cloud meeting room logic resources. [cn]主持人与嘉宾超过VMR套餐中的最大并发资源数 */
    HWMSDKCmsStartedFailWebinarResourceNotEnough = 111072204,		/**<[en]Insufficient webinar resources, so started failed. [cn]网络研讨会套餐已经有在线会议,被占用,激活失败 */
    HWMSDKCmsOnlyRtcConfSupportLocalRecord = 111072205,		/**<[en]Only RTC conf support local record. [cn]非RTC会议不支持本地录制 */
    HWMSDKCmsE2eParameterIllegal = 111072206,		/**<[en]Invalid E2E encryption parameter. [cn]端到端加密参数非法 */
    HWMSDKCmsDisableRoleSwitchOver = 111072207,		/**<[en]Not allow to switch role in webinar. [cn]网络研讨会不允许进行角色转换 */
    HWMSDKCmsTerminalNotSupportLocalRecord = 111072208,		/**<[en]The client version used by the user is too early. Cannot start local recording. [cn]客户端不支持本地录制 */
    HWMSDKCmsConfIsUnderArAssist = 111072211,		/**<[en]Meeting is under AR assist. [cn]会议已经在进行AR协作 */
    HWMSDKCmsAudienceCannotBeChairman = 111072213,		/**<[en]Audience cannot be set to host. [cn]观众不能设置为主持人 */
    HWMSDKCmsRenameContainsSensitivewords = 111072214,		/**<[en]Rename param contains sensitive words. [cn]改名涉及敏感词错误 */
    HWMSDKCmsUserDataUserInfoNotExist = 111073001,		/**<[en]User does not exist. [cn]用户不存在 */
    HWMSDKCmsUserDataOrgInfoNotExist = 111073002,		/**<[en]Department does not exist. [cn]组织不存在 */
    HWMSDKCmsUserDataUserInfoIllegal = 111073003,		/**<[en]Invalid username format. [cn]用户非法 */
    HWMSDKCmsUserDataOrgInfoIllegal = 111073004,		/**<[en]Invalid department name format. [cn]组织非法 */
    HWMSDKCmsUserDataOrgInfoQueryFailed = 111073005,		/**<[en]Could not query department. [cn]查询组织失败 */
    HWMSDKCmsAssignAnonymousFailed = 111073006,		/**<[en]Application for anonymous user failed. [cn]申请匿名用户失败 */
    HWMSDKCmsVmrDataStatusIllegal = 111073007,		/**<[en]Invalid cloud meeting room package status. [cn]VMR套餐状态非法 */
    HWMSDKCmsReleaseAnonymousFailed = 111073008,		/**<[en]Failed to Release anonymous user. [cn]释放匿名用户失败 */
    HWMSDKCmsWelinkCNotSupportCycleConf = 111073009,		/**<[en]Not support cycle meeting for welinkC. [cn]WeLinkC 不支持预约周期会议 */
    HWMSDKCmsWelinkCNotSupportVmrConf = 111073010,		/**<[en]Not support cloud meeting room for welinkC. [cn]WeLinkC 不支持预约VMR会议 */
    HWMSDKCmsGetWeLinkTokenFailed = 111073011,		/**<[en]Failed to get Welink token. [cn]获取WeLink Proxy Token失败 */
    HWMSDKCmsGetMToMTokenFailed = 111073012,		/**<[en]Failed to Get M to M token. [cn]获取机机帐号Token失败 */
    HWMSDKCmsWebinarVmrDataStatusIllegal = 111073013,		/**<[en]Invalid webinar cloud meeting package status. [cn]网络研讨会VMR套餐状态非法 */
    HWMSDKCmsProlongTimesOverLimit = 111073014,		/**<[en]Max extend times for cloud meeting trial version reached. [cn]会议延长次数超出VMR试用套餐可延长的最大次数 */
    HWMSDKCmsProlongDurationOverLimit = 111073015,		/**<[en]Max extend duration for cloud meeting trial version reached. [cn]会议延长时间超出VMR试用套餐单次会议最大时长 */
    HWMSDKCmsRfeeVmrNotSupportAutoProlong = 111073016,		/**<[en]Not support auto extend meeting for cloud meeting trial version. [cn]VMR试用套餐不支持自动延长 */
    HWMSDKCmsIdoConfChairExist = 111074001,		/**<[en]This meeting host already exists. [cn]IDO主席已经存在 */
    HWMSDKCmsIdoNotConfChair = 111074002,		/**<[en]No meeting host permissions. [cn]无IDO主席权限 */
    HWMSDKCmsIdoOverConfMaxDuration = 111074003,		/**<[en]Failed to extend the meeting. Max meeting duration reached. [cn]延长会议失败,会议已达到最大时长 */
    HWMSDKCmsIdoSetConfDurationFail = 111074004,		/**<[en]Failed to extend the meeting. The service processing is abnormal. [cn]延长会议失败,服务处理异常 */
    HWMSDKCmsStartTimerFail = 111075001,		/**<[en]Failed to start timer. [cn]启动定时器失败 */
    HWMSDKCmsModifyTimerFail = 111075002,		/**<[en]Failed to end timer. [cn]停止定时器失败 */
    HWMSDKCmsJsonParseFail = 111075003,		/**<[en]Json parse failed. [cn]json转换异常 */
    HWMSDKCmsConfPortalParticipantHangupByChairIdo = 111076001,		/**<[en]Released by host. [cn]会场被终端主席挂断 */
    HWMSDKCmsConfPortalParticipantHangupByChairRest = 111076002,		/**<[en]Released by portal host. [cn]会场被portal主席挂断 */
    HWMSDKCmsConfPortalParticipantVmrLogicResourceNotEnough = 111076003,		/**<[en]Max number of participants reached. [cn]超出VMR最大方数 */
    HWMSDKCmsConfPortalParticipantResourceNotEnough = 111076004,		/**<[en]Insufficient enterprise resources. [cn]企业并发数不足 */
    HWMSDKCmsConfPortalParticipantNoResponse = 111076005,		/**<[en]Not answered. [cn]会场无响应 */
    HWMSDKCmsConfPortalParticipantNotExist = 111076006,		/**<[en]User does not exist. [cn]会场不存在 */
    HWMSDKCmsConfPortalParticipantUnavailable = 111076007,		/**<[en]Offline. [cn]会场离线 */
    HWMSDKCmsConfPortalParticipantBusy = 111076008,		/**<[en]Busy. [cn]忙 */
    HWMSDKCmsConfPortalParticipantRefused = 111076009,		/**<[en]Rejected by user. [cn]拒接 */
    HWMSDKCmsConfPortalParticipantLeave = 111076010,		/**<[en]Released by user. [cn]会场挂断 */
    HWMSDKCmsConfPortalParticipantMediaResourceNotEnough = 111076011,		/**<[en]Insufficient meeting resources in the system. [cn]媒体资源不足 */
    HWMSDKCmsPstnServiceUnavailable = 111076012,		/**<[en]Outbound calling disabled. [cn]PSTN服务未开通 */
    HWMSDKCmsConfApplyAddressTokenFailed = 111076013,		/**<[en]Application for address token failed. [cn]申请地址本鉴权信息失败 */
    HWMSDKCmsConfPortalParticipantTimeout = 111076014,		/**<[en]Call failed. [cn]SIP呼叫超时 */
    HWMSDKCmsConfPortalOverMaxParticipantNumber = 111076015,		/**<[en]Max number of participants reached. [cn]超过设置的会议方数 */
    HWMSDKCmsConfPortalParticipantCommonError = 111076099,		/**<[en]Common error. [cn]通常失败 */
    HWMSDKCmsRseServerInfoNotExist = 111077001,		/**<[en]RSE server info does not exist. [cn]RSE录播相关错误码 */
    HWMSDKCmsConfNotSupportAiRecord = 111077101,		/**<[en]Not support AI record. [cn]会议不支持AI会议纪要 */
    HWMSDKCmsConfReApplyAiRecordRes = 111077102,		/**<[en]Reapplying for AI record resource. [cn]正在重新申请会议纪要资源 */
    HWMSDKCmsAiRecordResourceNotEnough = 111077103,		/**<[en]Insufficient AI record resource. [cn]AI会议纪要资源不足 */
    HWMSDKCmsConfIsInAiRecord = 111077104,		/**<[en]In AI recording, the meeting cannot stop live or recording. [cn]会议处于AI会议纪要状态,不允许停止录制/直播 */
    HWMSDKCmsRecordFileNotExistOrHaveNoRight = 111077201,		/**<[en]Record file does not exist or have no permission. [cn]录播文件已删除或您无权观看,请确认后重试 */
    HWMSDKCmsRseAuthFailed = 111077202,		/**<[en]RSE authentication failed. [cn]RSE机机鉴权失败 */
    HWMSDKCmsMultiRegionNoAvailableRegion = 111078000,		/**<[en]No available region in multi region. [cn]没有可用Region */
    HWMSDKCmsMultiRegionNoAvailableGlobal = 111078001,		/**<[en]No available global in multi region. [cn]没有可用Global */
    HWMSDKCmsMultiRegionDispatchRegionError = 111078001,		/**<[en]Dispatch region error in multi region. [cn]多region 分发region错误 */
    HWMSDKCmsDataParamQueryXmlFailed = 111079000,		/**<[en]Failed to phrase big data param query xml. [cn]大参数查询xml解析失败 */
    HWMSDKCmsAnonymousAssignXmlFailed = 111079001,		/**<[en]Failed to phrase anonymous assign xml. [cn]匿名帐号分配xml解析失败 */
    HWMSDKCmsParticipantBadRequest = 111080001,		/**<[en]Bad request. [cn]请求消息参数错误 */
    HWMSDKCmsParticipantInsufficientPermissions = 111080002,		/**<[en]Insufficient permissions. [cn]用户无权限进行该操作 */
    HWMSDKCmsParticipantDataNotFound = 111080004,		/**<[en]Site data not found or deleted. [cn]会场不存在或已被删除 */
    HWMSDKCmsParticipantIsInviting = 111081001,		/**<[en]Site is inviting. [cn]会场正在通话中 */
    HWMSDKCmsParticipantConfNotExist = 111081002,		/**<[en]Site meeting does not exist or is ended. [cn]会场所在会议不存在或已结束 */
    HWMSDKCmsParticipantApplyResourceFailed = 111081003,		/**<[en]Failed to apply site resource. [cn]申请会场资源失败 */
    HWMSDKCmsParticipantReleaseResourceFailed = 111081004,		/**<[en]Failed to release site resource. [cn]释放会场资源失败 */
    HWMSDKCmsParticipantApplyMediaResourceFailed = 111081005,		/**<[en]Failed to apply site media resource. [cn]申请会场媒体资源失败 */
    HWMSDKCmsParticipantAuthenticationFailed = 111081006,		/**<[en]Authentication failed. [cn]认证失败 */
    HWMSDKCmsParticipantConfIsLocked = 111081007,		/**<[en]Meeting is locked. [cn]会议已经被锁定 */
    HWMSDKCmsParticipantConfLoginLocked = 111081009,		/**<[en]Login is locked because max authentication times reached. [cn]会议鉴权失败次数已达上限被锁定 */
    HWMSDKCmsParticipantControlNotSupport = 111082001,		/**<[en]Not support this control. [cn]不支持该会控 */
    HWMSDKCmsParticipantNoResponse = 111082002,		/**<[en]No response. [cn]无响应 */
    HWMSDKCmsParticipantNotExist = 111082003,		/**<[en]Site not exist. [cn]会场不存在 */
    HWMSDKCmsParticipantUnavailable = 111082004,		/**<[en]Site unavailable. [cn]会场离线 */
    HWMSDKCmsParticipantBusy = 111082005,		/**<[en]Site busy. [cn]会场正忙 */
    HWMSDKCmsParticipantRefused = 111082006,		/**<[en]Site refused. [cn]会场拒接 */
    HWMSDKCmsParticipantLeave = 111082007,		/**<[en]Site leave. [cn]会场挂断 */
    HWMSDKCmsPstnServiceClosed = 111082008,		/**<[en]PSTN service is closed. [cn]PSTN服务关闭 */
    HWMSDKCmsPartticipantInviteTimeout = 111082009,		/**<[en]SIP invitation timeout. [cn]SIP呼叫超时 */
    HWMSDKCmsParticipantRseNotExist = 111083001,		/**<[en]RSE does not exist. [cn]RSE设备不存在 */
    HWMSDKCmsParticipantExecuteDtmfFailed = 111084001,		/**<[en]Failed to execute DTMF. [cn]执行DTMF失败 */
    HWMSDKCmsParticipantGetStartedConfException = 111084002,		/**<[en]Get started meeting exception. [cn]启动会议异常 */
    HWMSDKCmsParticipantCallMcusideException = 111084003,		/**<[en]Call MCU side exception. [cn]呼叫MCU端异常 */
    HWMSDKCmsParticipantJoinCallException = 111084004,		/**<[en]Join call exception. [cn]加入呼叫异常 */
    HWMSDKCmsParticipantInviteException = 111084005,		/**<[en]Invite exception. [cn]邀请异常 */
    HWMSDKCmsParticipantCallTerminalsideException = 111084006,		/**<[en]Call terminal side exception. [cn]呼叫端侧异常 */
    HWMSDKCmsParticipantAnswerException = 111084007,		/**<[en]Answer exception. [cn]应答异常 */
    HWMSDKCmsParticipantGenericCtlException = 111084008,		/**<[en]Common CTL exception. [cn]通用CTL异常 */
    HWMSDKCmsParticipantHangupException = 111084009,		/**<[en]Hangup exception. [cn]挂断异常 */
    HWMSDKCmsParticipantInformCapabilityException = 111084010,		/**<[en]Notify capability exception. [cn]通知能力异常 */
    HWMSDKCmsParticipantUpdateMtException = 111084011,		/**<[en]Update MT exception. [cn]更新MT异常 */
    HWMSDKCmsParticipantNegotiateException = 111084012,		/**<[en]Negotiate exception. [cn]协商异常 */
    HWMSDKCmsParticipantConfNotSupport = 111084013,		/**<[en]Not support this meeting. [cn]不支持该会议 */
    HWMSDKCmsRtcInviteNotAllowedJoinConf = 111084014,		/**<[en]Not allowed join meeting in RTC inviting because guests are not invited. [cn]RTC外邀入会,来宾不在被邀请名单中,拒绝入会 */
    HWMSDKCmsUriJoinXmlFailed = 111089002,		/**<[en]Failed to phrase URI join xml. [cn]链接入会XML解析失败 */
    HWMSDKCmsDataJoinFail = 111090001,		/**<[en]Failed to join data meeting. [cn]数据入会失败 */
    HWMSDKCmsDataJoinOvertime = 111090002,		/**<[en]Join data meeting overtime. [cn]数据入会超时 */
    HWMSDKCmsAuthSlideGetImageFailed = 111100001,		/**<[en]Failed to get slider image. [cn]获取滑块图片失败 */
    HWMSDKCmsAuthSlideVerifyCheckFailed = 111100002,		/**<[en]Slider check failed. [cn]滑块校验失败 */
    HWMSDKCmsAuthInvalidRandom = 111100003,		/**<[en]Invalid random number. [cn]无效的随机数 */
    HWMSDKCmsAuthInvalidSliderToken = 111100004,		/**<[en]Invalid slider token. [cn]无效滑块token */
    HWMSDKCmsAuthNeedCheckSlider = 111100005,		/**<[en]Need to check slider. [cn]需要滑块校验 */
    HWMSDKCmsAuthInvalidSms = 111100006,		/**<[en]Invalid SMS phone number. [cn]非法的手机号 */
    HWMSDKCmsSendVerifyCodeFail = 111100007,		/**<[en]Failed to send verification code. [cn]发送验证码失败 */
    HWMSDKCmsAuthVerifyCodeExpired = 111100008,		/**<[en]Verification code expired. [cn]验证码已过期 */
    HWMSDKCmsAuthVerifyCodeFail = 111100009,		/**<[en]Verification code error. [cn]验证码错误 */
    HWMSDKCmsAuthVerifyCodeFailCntExceed = 111100010,		/**<[en]Max verification code check times reached. [cn]验证码错误超过最大次数 */
    HWMSDKCmsAuthInvalidUuid = 111100011,		/**<[en]The uuid is invalid, you need to re-verify the phone number. [cn]uuid无效,需要重新验证手机号 */
    HWMSDKCmsConfNotOnLocalStation = 111100012,		/**<[en]The meeting is not on this site. [cn]会议不在本站点 */
    HWMSDKCmsAuthNeedMobileVerify = 111100013,		/**<[en]Need to verify the mobile phone number. Overseas access to China, free enterprises need to verify the mobile phone verification code. [cn]需要验证手机号，海外接入国内，免费企业需要进行手机验证码校验 */
    HWMSDKCmsImAddGroupFailed = 111110001,		/**<[en]Failed to add IM group. [cn]添加群组失败 */
    HWMSDKCmsImDisbandGroupFailed = 111110002,		/**<[en]Failed to disband IM group. [cn]删除群组失败 */
    HWMSDKCmsImAddMemberFailed = 111110003,		/**<[en]Failed to add IM member. [cn]添加成员失败 */
    HWMSDKCmsImRemoveMemberFailed = 111110004,		/**<[en]Failed to remove IM member. [cn]删除成员失败 */
    HWMSDKCmsFailed = 112010001,		/**<[en]Common failure. [cn]通用失败 */
    HWMSDKCmsNullParam = 112010002,		/**<[en]Null param. [cn]参数为空 */
    HWMSDKCmsParticipantNotFound = 112010003,		/**<[en]Participant not found. [cn]未找到参与者 */
    HWMSDKCmsConferenceNotFound = 112010004,		/**<[en]Meeting not found. [cn]会议不存在 */
    HWMSDKCmsSipInviteTimeoutNoRcv = 112010005,		/**<[en]SIP invite information timeout. [cn]invite消息超时 */
    HWMSDKCmsSipInviteFailed = 112010006,		/**<[en]SIP invite information failed. [cn]invite消息失败 */
    HWMSDKCmsSipInfoTimeout = 112010007,		/**<[en]SIP information timeout. [cn]info响应超时 */
    HWMSDKCmsSipInfoFailed = 112010008,		/**<[en]SIP information failed. [cn]info响应失败 */
    HWMSDKCmsWaitFirstCallFailed = 112010009,		/**<[en]System processing failed. [cn]系统处理失败 */
    HWMSDKCmsParticipantDialogFailed = 112010010,		/**<[en]System processing failed. [cn]系统处理失败 */
    HWMSDKCmsInviteMrsFailed = 112010011,		/**<[en]Failed to invite MRS. [cn]呼叫mrs失败 */
    HWMSDKCmsInviteParticipantFailed = 112010012,		/**<[en]Failed to invite participant. [cn]呼叫终端失败 */
    HWMSDKCmsInformConfInfoFailed = 112010013,		/**<[en]Data meeting join information failed. [cn]数据入会Info失败 */
    HWMSDKCmsStartConfFailed = 112010014,		/**<[en]Failed to start meeting. [cn]召开会议失败 */
    HWMSDKCmsMediaNegotiationFailure = 112010015,		/**<[en]Media negotiation failed. [cn]媒体协商失败 */
    HWMSDKCmsUserRejected = 112010016,		/**<[en]User rejects. [cn]用户拒绝 */
    HWMSDKCmsUserBusy = 112010017,		/**<[en]User is busy. [cn]用户忙 */
    HWMSDKCmsNoCallRight = 112010018,		/**<[en]No call permission. [cn]没有呼叫权限 */
    HWMSDKCmsUnknownCallee = 112010019,		/**<[en]Unknown callee. [cn]未知被叫人 */
    HWMSDKCmsNoUserResponding = 112010020,		/**<[en]No user response. [cn]没有用户响应 */
    HWMSDKCmsJoinConfTimeout = 112010021,		/**<[en]Join meeting timed out. [cn]加入会议超时 */
    HWMSDKCmsSessionReleased = 112010022,		/**<[en]Session has been released. [cn]会话已释放 */
    HWMSDKCmsCalleeNotRegistered = 112010023,		/**<[en]Callee is not registered. [cn]被叫人未注册 */
    HWMSDKCmsSipInviteTimeoutRcv1xx = 112010024,		/**<[en]SIP invite timed out. [cn]SIP邀请超时 */
    HWMSDKCmsUserSessionTimerTimeoutHangup = 112010025,		/**<[en]User Session timer times out and hangs up. [cn]用户Session timer 超时挂断 */
    HWMSDKCmsRcvUserByeMrsHangup = 112010026,		/**<[en]The participant bye hangs up on the MRS side. [cn]与会者腿MRS侧bye挂断 */
    HWMSDKCmsRcvUserByePartHangup = 112010027,		/**<[en]The participant bye hangs up on terminal side. [cn]与会者腿终端侧bye挂断 */
    HWMSDKCmsNoRtpStreamHungUp = 112010028,		/**<[en]No RTP stream hang up. [cn]无码流挂断 */
    HWMSDKCmsSysportalException = 112100000,		/**<[en]Sysportal exception. [cn]系统异常 */
    HWMSDKCmsBadRequest = 112100001,		/**<[en]Bad request. [cn]请求异常 */
    HWMSDKCmsIllegalRequest = 112100002,		/**<[en]Illegal request. [cn]非法请求 */
    HWMSDKCmsDataNotFound = 112100003,		/**<[en]Data not found. [cn]数据未获取到 */
    HWMSDKCmsDataDuplicate = 112100004,		/**<[en]Data duplication. [cn]数据重复 */
    HWMSDKCmsApplyTypeNotSupport = 112100006,		/**<[en]The requested type is not supported. [cn]请求的类型不支持 */
    HWMSDKCmsSaveNoticeModelFailed = 112100007,		/**<[en]Failed to save notification template. [cn]保存通知模板失败 */
    HWMSDKCmsSaveDataFailed = 112100008,		/**<[en]Failed to save data. [cn]保存数据失败 */
    HWMSDKCmsQueryDataFailed = 112100009,		/**<[en]Failed to query data. [cn]查询数据失败 */
    HWMSDKCmsDeleteDataFailed = 112100010,		/**<[en]Failed to delete data. [cn]删除数据失败 */
    HWMSDKCmsNeedResetPassword = 112100011,		/**<[en]Password reset required. [cn]需要重置密码 */
    HWMSDKCmsAuthFailed = 112100012,		/**<[en]Incorrect old password. [cn]旧密码错误 */
    HWMSDKCmsNewPasswordEqualsOldPassword = 112100013,		/**<[en]The new password cannot be the same as the old password. [cn]新密码不能与旧密码相同 */
    HWMSDKCmsPasswordTooSimple = 112100014,		/**<[en]Insufficient password complexity and low security. [cn]密码复杂度不够,安全性低 */
    HWMSDKCmsLehgthNotmeetStandard = 112100015,		/**<[en]The length does not meet the requirements. [cn]长度不符合要求 */
    HWMSDKCmsRseIsInConference = 112100016,		/**<[en]RSE is in meeting. [cn]RSE在会议中 */
    HWMSDKCmsRseIsDeleting = 112100017,		/**<[en]RSE to be deleted. [cn]RSE待删除 */
    HWMSDKCmsRseListConfFailed = 112100018,		/**<[en]Failed to query the meeting list. [cn]查询会议列表失败 */
    HWMSDKCmsAuthLocked = 112100019,		/**<[en]User has been locked out. Try again later. [cn]用户已被锁定,请稍后重新登录 */
    HWMSDKCmsLiveChannelNameExisted = 112100022,		/**<[en]The live room channel name exists. [cn]频道名称已存在 */
    HWMSDKCmsConfidPrefixCannotDecrease = 112100023,		/**<[en]Failed to modify system configuration items for duplicated meeting ID prefix. [cn]修改系统配置项失败,会议ID前缀重复 */
    HWMSDKCmsConfidPrefixDuplicate = 112100024,		/**<[en]CONFID prefix can only be added, not modified or deleted. [cn]CONFID前缀只能增加,不能修改和删除 */
    HWMSDKCmsLiveChannelUrlExisted = 112100025,		/**<[en]The live room channel url exists. [cn]直播房间地址已存在 */
    HWMSDKCmsLiveRoomIsused = 112100026,		/**<[en]The live room has been occupied. [cn]直播房间已被使用 */
    HWMSDKCmsLiveRoomNotExist = 112100027,		/**<[en]The live room does not exist. [cn]直播房间不存在 */
    HWMSDKCmsLiveRoomReleaseFail = 112100028,		/**<[en]Live room release failed. [cn]直播房间释放失败 */
    HWMSDKCmsRequestMissingHeaderOrParam = 112100029,		/**<[en]The request is missing header or param. [cn]请求缺失头域 */
    HWMSDKCmsLiveMainUrlExisted = 112100030,		/**<[en]The Live main stream URL already exists. [cn]音视频推流地址已存在 */
    HWMSDKCmsLiveAuxUrlExisted = 112100031,		/**<[en]The Live auxiliary stream URL already exists. [cn]辅流演示推流地址已存在 */
    HWMSDKCmsPwdIsWeakPassword = 112100032,		/**<[en]Password is weak. [cn]密码为弱密码 */
    HWMSDKCmsLiveRoomIsusedFail = 112100033,		/**<[en]The live room is occupied. [cn]直播房间被占用 */
    HWMSDKCmsSavePartAttendeesSinceTooMany = 112100034,		/**<[en]Save part of attendees since max attendees size reached. [cn]因为与会者数量超出上限只保存部分 */
    HWMSDKCmsExportDataFail = 112100035,		/**<[en]Failed to export data. [cn]导出数据失败 */
    HWMSDKCmsImportDataFail = 112100036,		/**<[en]Failed to import data. [cn]导入数据失败 */
    HWMSDKCmsFileExceedsMaximumSize = 112100037,		/**<[en]Max file size reached. [cn]文件大小超出上限 */
    HWMSDKCmsLvsTargetAddressExisted = 112100038,		/**<[en]LVS target address exists. [cn]lvs的目标地址已存在 */
    HWMSDKCmsLvsPortExisted = 112100039,		/**<[en]LVS port existed. [cn]lvs端口重复 */
    HWMSDKCmsNotAllowedModifyGlobalStandby = 112100040,		/**<[en]Not allow to modify global standby config. [cn]Global只有主机可以修改配置； */
    HWMSDKCmsMcuInsulateAddrExist = 112100041,		/**<[en]MCU insulation IP address exists. [cn]mcu隔离的IP已经存在 */
    HWMSDKCmsMcuInsulateAddrCantModify = 112100042,		/**<[en]MCU insulation IP address cannot be modified. [cn]mcu隔离的IP不能修改 */
    HWMSDKCmsSbcAddrExist = 112100043,		/**<[en]SBC address exists. [cn]SBC配置的地址已经存在 */
    HWMSDKCmsInternalException = 112100044,		/**<[en]Internal exception. [cn]内部错误异常 */
    HWMSDKCmsSysConfigDeleteException = 112100045,		/**<[en]System config delete exception. [cn]系统配置不允许被删除 */
    HWMSDKCmsNoIsbcAccessAddr = 112100046,		/**<[en]No ISBC access address. [cn]企业id无法获取关联SBC地址 */
    HWMSDKCmsMediaTypeNeedHd = 112100047,		/**<[en]Media type need to be HD because the organization enable Full HD capability. [cn]企业已开启全高清功能,媒体设置不能低于1080P/8M */
    HWMSDKCmsInterpreterLanguageAbbreviationRepeated = 112100061,		/**<[en]Same interpreter language abbreviation exists. [cn]语言缩写重复 */
    HWMSDKCmsInterpreterLanguageNameRepeated = 112100062,		/**<[en]Same interpreter language name exists. [cn]语言名称重复 */
    HWMSDKCmsModifyMcuWarning = 112100063,		/**<[en]MCU type is MIXED and insulation config is not configured, or MCU meeting exsists when modifying mcu connection settings. [cn]修改MCU连接配置告警,以下两种场景会导致:1.MCU存在会议 2.修改类型为MIXED未配置隔离 */
    HWMSDKCmsAddMcuWarning = 112100064,		/**<[en]MCU type is MIXED and insulation config is not configured when adding mcu connection settings. [cn]新增MCU连接配置告警,MCU类型为MIXED且未配置隔离 */
    HWMSDKCmsModifyMcuinsulateWarning = 112100065,		/**<[en]MCU type is MIXED when modifying MCU insulation config or disbanding enterprise. [cn]修改MCU隔离配置时,解除企业绑定时MCU类型为MIXED */
    HWMSDKCmsDelMcuinsulateWarning = 112100066,		/**<[en]MCU type is MIXED when deleting MCU insulation config. [cn]删除MCU隔离配置时,MCU类型为MIXED */
    HWMSDKCmsMcuTypeIncompatible = 112100067,		/**<[en]This gateway type is incompatible with MCU. [cn]MCU与网关类型不兼容 */
    HWMSDKCmsMediaresMediaResourceNotEnough = 115021001,		/**<[en]Insufficient media resource. [cn]媒体资源不足 */
    HWMSDKCmsMediaresConfNotExist = 115021002,		/**<[en]Meeting does not exist. [cn]会议不存在 */
    HWMSDKCmsMediaresMediaResourceNotExist = 115021003,		/**<[en]Media resource does not exist. [cn]媒体资源不存在 */
    HWMSDKCmsMediaresBandwidthResourceNotEnough = 115021005,		/**<[en]Insufficient media bandwidth resource. [cn]带宽资源不足 */
    HWMSDKCmsMediaresDeviceFault = 115021006,		/**<[en]Media device fault. [cn]设备故障 */
    HWMSDKCmsLogicResNotEnough = 115022000,		/**<[en]Insufficient common logic resource. [cn]通用的逻辑资源不足 */
    HWMSDKCmsLogicresPnumResourceNotEnough = 115022001,		/**<[en]Insufficient meeting resources in the enterprise. [cn]企业会议并发方数不足 */
    HWMSDKCmsLogicresPortResourceNotEnough = 115022002,		/**<[en]Insufficient logic port resource. [cn]逻辑资源端口资源不满足 */
    HWMSDKCmsLogicresLsnumResourceNotEnough = 115022003,		/**<[en]Live broadcast resources have not been purchased or are insufficient. [cn]企业直播推流方数不足 */
    HWMSDKCmsMediaresDeviceNotExist = 115022004,		/**<[en]Media device does not exist. [cn]媒体设备不存在 */
    HWMSDKCmsIdResourceNotEnough = 115023001,		/**<[en]Insufficient ID resources. [cn]ID资源不足 */
    HWMSDKCmsRmsServiceError = 115024001,		/**<[en]RMS service exception. [cn]RMS服务异常 */
    HWMSDKCmsLiveRoomInUse = 115025001,		/**<[en]The live room has already been occupied. [cn]直播房间已经被使用 */
    HWMSDKCmsLiveRoomNotExisted = 115025002,		/**<[en]The live room does not exist. [cn]直播房间不存在 */
    HWMSDKCmsLiveRoomReleaseFailed = 115025003,		/**<[en]Live room release failed. [cn]直播房间释放失败 */
    HWMSDKCmsMcuHasConf = 115026001,		/**<[en]MCU meeting exists. [cn]MCU有会议 */
    HWMSDKCmsCommonInvalidParams = 115029001,		/**<[en]Invalid common parameter. [cn]通用参数值不合法 */
    HWMSDKCmsCommonNullParams = 115029002,		/**<[en]Null parameter. [cn]参数值为空 */
    HWMSDKCmsCommonServiceInvalid = 115029003,		/**<[en]service is not available. [cn]服务不可用 */
    HWMSDKCmsConfigError = 115029004,		/**<[en]Configuration exception. [cn]配置异常 */
    HWMSDKCmsDuplicateApplyResource = 115029005,		/**<[en]Duplicately apply resources. [cn]重复申请资源 */
    HWMSDKCmsWaitApplyResource = 115029006,		/**<[en]Waiting for applying resources. [cn]等待申请资源中 */
    HWMSDKCmsCommonUnknown = 115029999,		/**<[en]Unknown error. [cn]未知错误 */
    HWMSDKCmsUserAuthenticationFailed = 118000000,		/**<[en]User authentication failed. [cn]用户鉴权失败 */
    HWMSDKCmsUserTokenAuthFailed = 118000001,		/**<[en]User token authentication failed. [cn]usg token 鉴权失败 */
    HWMSDKCmsUserAuthenticationLocked = 118000002,		/**<[en]User authentication account lockout. [cn]usg鉴权帐号锁定 */
    HWMSDKCmsWaitingRoomAddMemberFailed = 111112001,		/**<[en]Failed to enter the waiting room. [cn]入等候室失败 */
    HWMSDKCmsWaitingRoomMoveMemberFailed = 111112002,		/**<[en]Failed to exit the waiting room. [cn]出等候室失败 */
    HWMSDKCmsWaitingRoomCacheOptFailed = 111112003,		/**<[en]Waiting room cache operation failed. [cn]等候室缓存操作失败 */
    HWMSDKCmsNotAllowCohostToWaitingRoom = 111112004,		/**<[en]Co-hosts cannot be moved into the waiting room. [cn]联席主持人不能被移入等候室 */
    HWMSDKCmsNotAllowEnableWaitingRoom = 111112005,		/**<[en]Not allowed to enable waiting room. [cn]不允许启用等候室 */
    HWMSDKCmsClientNotSupport = 111112008,		/**<[en]Not support this feature according to client capabilities. [cn]客户端能力不支持此特性 */
    HWMSDKCmsWaitingUserLimit = 111081010,		/**<[en]Waiting user restrictions. [cn]等候用户限制 */
    HWMSDKUsgServerBusy = 200000001,		/**<[en]Server is busy. Please try again later. [cn]服务器正忙 请稍后再试 */
    HWMSDKUsgInternalErr = 200000002,		/**<[en]Internal error. Please contact SRE. [cn]服务器正忙 请联系SRE */
    HWMSDKUsgParamErr = 200000003,		/**<[en]Invalid parameter. Please check whether the parameters are valid. [cn]请求参数错误 请检查参数是否合法 */
    HWMSDKUsgIllegalReq = 200000004,		/**<[en]Illegal request. Please check the value of the request header field X-Auth-Token or X-Access-Token. [cn]非法请求 请检查请求头域X-Auth-Token或X-Access-Token的值 */
    HWMSDKUsgUpgrading = 200000005,		/**<[en]Forbidden access during the version upgrade. [cn]系统正在升级，暂时不可访问。如对您造成不便，十分抱歉 */
    HWMSDKUsgCorpUserNumberMax = 201040005,		/**<[en]Max number of users reached. Please check the purchased meeting users. [cn]用户总数超过限制，请检查购买的会议用户 */
    HWMSDKUsgVmrPwdSameAsChairmanPwd = 201080006,		/**<[en]The host password and the guest password cannot be the same. Please confirm the input parameters. [cn]主席密码和来宾密码不能相同 请确认输入参数 */
    HWMSDKUsgVmrPwmSameAsMeetingPwd = 201080017,		/**<[en]Same as meeting password. [cn]和会议密码相同 */
    HWMSDKUsgInvitationEnableInvalid = 201510001,		/**<[en]No invite permission to get an invite code. [cn]没有邀请权限去获取邀请码 */
    HWMSDKUsgCorpApplicantInvalid = 201510003,		/**<[en]Invalid application. [cn]申请失效 */
    HWMSDKUsgTokenIsCraterByOthersite = 206020001,		/**<[en]Token is created by disaster recovery site. [cn]token是容灾站点创建 */
    HWMSDKUsgTokenIsInvaildByKickoff = 206020002,		/**<[en]Token is invalid due to being kicked. [cn]token由于被踢失效 */
    HWMSDKUsgUserNotExist = 206030000,		/**<[en]The user does not exist. [cn]系统中不存在该用户 */
    HWMSDKUsgFindVercodeFail = 206030001,		/**<[en]The verification code is incorrect or has expired. Please obtain a new one. [cn]验证码错误或失效，请重新获取 */
    HWMSDKUsgVercodeErr = 206030002,		/**<[en]Incorrect verification code. [cn]验证码错误 */
    HWMSDKUsgNotPhoneAndEmail = 206030003,		/**<[en]Failed to send the verification code. [cn]发送验证码失败 */
    HWMSDKUsgResendNotAllow = 206030004,		/**<[en]Try to get a new verification code 180s later. [cn]请在180秒后重新发送验证码 */
    HWMSDKUsgNotSupportModifyPwd = 206030005,		/**<[en]The password cannot be changed. [cn]系统不支持修改密码 */
    HWMSDKUsgOldPwdWrong = 206030006,		/**<[en]The old password is incorrect. [cn]旧密码错误 */
    HWMSDKUsgInvalidNewPwdLen = 206030007,		/**<[en]The length of the new password does not meet the requirements. [cn]新密码长度不符合要求 */
    HWMSDKUsgInvalidPwdLevel = 206030008,		/**<[en]The password complexity does not meet the requirements. [cn]密码复杂度不满足要求 */
    HWMSDKUsgCannotSameWithHistroyPwd = 206030009,		/**<[en]The new password must be different from the previous old passwords. [cn]设置的密码不能与最近旧密码相同 */
    HWMSDKUsgRepeatCharNumTooMuch = 206030010,		/**<[en]The password cannot contain three or more of the same characters consecutively. [cn]密码不能包含3个以上重复字符 */
    HWMSDKUsgPwdTooFrequently = 206030011,		/**<[en]The password cannot be changed within 5 minutes upon the last password change. [cn]修改密码后，5分钟内不能更新密码 */
    HWMSDKUsgCannotContainAccount = 206030012,		/**<[en]The password cannot contain the account or the reverse order of the account. [cn]密码不能与帐号或其逆序帐号相同 */
    HWMSDKUsgManySameWithOldPwd = 206030013,		/**<[en]At least two characters must be different between the new and old passwords. [cn]新密码相较于旧密码至少要有两个不同的字符 */
    HWMSDKUsgContainsInvaild = 206030014,		/**<[en]Invalid password format. [cn]密码格式不正确 */
    HWMSDKUsgUserLocked = 206030015,		/**<[en]The user is locked and will be locked in 60s. [cn]用户已被锁定，请60秒后重试 */
    HWMSDKUsgNoRightToResetPwd = 206030016,		/**<[en]Have no right to reset other's password. [cn]没有权限重置密码 */
    HWMSDKUsgFrogetPwdOver10Times = 206030018,		/**<[en]The number of password retrieval times in a day has reached the maximum(10 times). [cn]一天内忘记密码次数达到最大值（10次） */
    HWMSDKUsgNoCorrespondTermialType = 206040000,		/**<[en]No corresponding terminal type. [cn]无对应的终端类型 */
    HWMSDKUsgPasswordSecurityLow = 201040016,		/**<[en]Password security is low. Please set another password. [cn]密码安全性低，请设置其他密码 */
    HWMSDKUsgLoginverifyCodeInvaild = 206060014,		/**<[en]Invalid verification code. [cn]验证码非法 */
    HWMSDKUsgLoginverifyCodeExccedMax = 206060015,		/**<[en]Max verification codes check times reached. [cn]验证码次数超过最大次数 */
    HWMSDKUsgInvalidToken = 206020000,		/**<[en]Invalid authentication information. Please check the value of the request header field X-Auth-Token or X-Access-Token. [cn]鉴权信息无效 请检查请求头域X-Auth-Token或X-Access-Token的值 */
    HWMSDKUsgErrPassword = 206010000,		/**<[en]User name or password error. [cn]用户名或密码错误 */
    HWMSDKUsgNormalUserCannotLogin = 206010036,		/**<[en]Normal users cannot log in. [cn]普通用户无法登录 */
    HWMSDKUsgAppidAuthFailed = 206010025,		/**<[en]APPID verification failed. [cn]APPID校验失败 */
    HWMSDKUsgAppidNotAllowAutoReg = 206010030,		/**<[en]APPID does not allow automatic registration. [cn]APPID不允许自动注册 */
    HWMSDKUsgAppidAuthExpire = 206010057,		/**<[en]APPID authentication expires. [cn]APPID认证过期 */
    HWMSDKUsgAppidAccountNotBind = 206010058,		/**<[en]APPID account is not bound. [cn]APPID账户未绑定 */
    HWMSDKUsgAppidAccountDisabled = 206010007,		/**<[en]Account is not activated, no permission to log in. [cn]帐号未激活,无权限登录 */
    HWMSDKUsgAppidAutoRegFailed = 206010031,		/**<[en]APPID auto registration failed. [cn]APPID自动注册失败 */
    HWMSDKUsgRequestParamError = 206060011,		/**<[en]Request parameter arror. [cn]请求参数错误 */
    HWMSDKUsgNeedSliderVerify = 206060009,		/**<[en]Slider verification required. [cn]需要滑块校验 */
    HWMSDKUsgSliderTokenInvaild = 206060010,		/**<[en]Invalid slider token. [cn]滑块token非法 */
    HWMSDKUsgNotSupportSendSms = 206060012,		/**<[en]Sending SMS is not supported. [cn]不支持发送短信 */
    HWMSDKUsgNotAllowRepeatSend = 206060013,		/**<[en]Repeated sending is not supported. [cn]不支持重复发送 */
    HWMSDKUsgSendVerifyCodeIsLocked = 206060008,		/**<[en]Sending verification code is locked. [cn]发送校验码锁定 */
    HWMSDKUsgSendVerifyCodeFailed = 206030023,		/**<[en]Failed to send verification code. Please contact SRE. [cn]发送验证码失败 请联系SRE */
    HWMSDKUsgSendSliderFailed = 206010010,		/**<[en]Failed to get verification code, Please contact SRE. [cn]获取验证码失败 请联系SRE */
    HWMSDKUsgCheckSliderFailed = 206010012,		/**<[en]Verification code check failed. [cn]验证码校验失败 */
    HWMSDKUsgPreVerifyExpire = 201040042,		/**<[en]Pre-authentication expired. [cn]预验证失效 */
    HWMSDKUsgOtherCorpOwner = 201020023,		/**<[en]This user is already the owner of another corporation and cannot create a new corporation for it. [cn]该用户已经是其他企业的所有者,无法为其创建新的企业 */
    HWMSDKUsgNoInviteOtherCorpOwner = 201040043,		/**<[en]This user is the owner of another corporation and cannot be invited. [cn]该用户是其他企业的所有者,暂无法邀请 */
    HWMSDKUsgInviteLinkInvalid = 201040044,		/**<[en]Invalid invite connection. [cn]邀请连接非法 */
    HWMSDKUsgUserInWaitList = 201040045,		/**<[en]User is already in waiting list. [cn]用户已经在等待列表 */
    HWMSDKUsgUserExist = 201040046,		/**<[en]User already exists. [cn]用户已存在 */
    HWMSDKUsgNotAllowModAccount = 201040047,		/**<[en]Account modification is not allowed. [cn]不允许修改账户 */
    HWMSDKUsgUsgVerifyCodeCheckExccedMax = 206030019,		/**<[en]The number of incorrect verification code input has reached the maximum, Please get it again. [cn]验证码输入错误次数超过最大值，请重新获取 */
    HWMSDKUsgAutoUserNotAllowModPwd = 206030028,		/**<[en]The system has enabled SSO login and does not support changing the password. Please retry after the system has disabled SSO login. [cn]系统已开启SSO登录,不支持修改密码 系统关闭SSO登录后重试 */
    HWMSDKUsgNeedVerifyCode = 206010011,		/**<[en]Verification code must be filled. [cn]验证码不能为空 */
    HWMSDKUsgSsoAuthFailed = 206010022,		/**<[en]SSO login failed. Please contact SRE. [cn]SSO登录失败 请联系SRE */
    HWMSDKUsgInvalidAuthType = 206010024,		/**<[en]Invalid authentication type. [cn]认证类型非法 */
    HWMSDKUsgNetworkError = 206010029,		/**<[en]Network error. [cn]网络异常 */
    HWMSDKUsgHwaccountAuthFailed = 206010042,		/**<[en]Huawei account authentication failed. [cn]华为账户认证失败 */
    HWMSDKUsgSiteMismatched = 206010064,		/**<[en]Site mismatch. [cn]站点不匹配 */
    HWMSDKUsgConflictPhone = 206010065,		/**<[en]Phone number conflict. [cn]电话冲突 */
    HWMSDKUsgConflictEmail = 206010066,		/**<[en]E-mail conflict. [cn]邮箱冲突 */
    HWMSDKUsgHwaccountBindFailed = 206060017,		/**<[en]Failed to bind Huawei account. [cn]华为账户绑定失败 */
    HWMSDKUsgAuthTypeErr = 206010027,		/**<[en]Authentication type error. [cn]校验类型错误 */
    HWMSDKUsgJumpLoginFail = 206010013,		/**<[en]Jump login failed. Please contact SRE. [cn]跳转登录失败 请联系SRE */
    HWMSDKUsgHuaweiModifyPwd = 206030031,		/**<[en]Forgot password for Huawei account. [cn]华为帐号忘记密码 */
    HWMSDKUsgUserNumExceed = 206010070,		/**<[en]The number of users has reached the maximum. [cn]用户数超过上限 */
    HWMSDKAuthWechatLoginFailed = 206010071,		/**<[en]WeChat authentication failed. [cn]微信鉴权失败 */
    HWMSDKUsgLogUploadTimesExceed = 211060003,		/**<[en]The maximum times of log uploads has been reached. [cn]日志上传次数达到最大限制 */
    HWMSDKUsgAuthNotSupportSso = 206010023,		/**<[en]SSO login is not supported. [cn]不支持sso登录 */
    HWMSDKUsgChangeSiteAndNextRequest = 206010074,		/**<[en]International sites support site changing re-login. [cn]国际站点支持切站点重登 */
    HWMSDKUsgAccountIsUnbound = 206010075,		/**<[en]Account has been unbound. [cn]账号已经解绑 */
    HWMSDKUsgCanNotUnbound = 201050022,		/**<[en]Terminal does not allow unbinding. [cn]终端不允许解绑 */
    HWMSDKUsgActiveNotIdeahubCode = 211030046,		/**<[en]Not the ideahub activation code. [cn]不是ideahub激活码 */
    HWMSDKUsgActiveInvalidActiveCode = 201050015,		/**<[en]Invalid activation code. [cn]激活码错误 */
    HWMSDKUsgActiveCodeNotExit = 201050012,		/**<[en]Activation code does not exist. [cn]激活码不存在 */
    HWMSDKUsgActiveFail = 201050021,		/**<[en]Activation failed. [cn]激活失败 */
    HWMSDKUsgActiveCodeOverdue = 201040031,		/**<[en]Activation code overdue. [cn]激活码过期 */
    HWMSDKSdkCommonFail = 411000001,		/**<[en]Common failure. [cn]失败 */
    HWMSDKSdkParamError = 411000002,		/**<[en]Parameter error. [cn]参数错误 */
    HWMSDKSdkConfNotExist = 411000003,		/**<[en]Meeting does not exist. [cn]会议不存在 */
    HWMSDKSdkConfExist = 411000004,		/**<[en]A meeting already exists. [cn]已经有会议存在 */
    HWMSDKSdkConfStateError = 411000005,		/**<[en]Meeting state error. [cn]会议状态异常 */
    HWMSDKSdkCallGetDeviceFailed = 411000006,		/**<[en]Failed to get device. [cn]获取设备异常 */
    HWMSDKSdkCallSetDeviceFailed = 411000007,		/**<[en]Failed to set device. [cn]设置设备异常 */
    HWMSDKSdkNoDeviceCanUsed = 411000008,		/**<[en]No device available. [cn]无可用设备 */
    HWMSDKSdkOnlyMobileSupport = 411000009,		/**<[en]This operation is only supported on mobile. [cn]只有移动端支持该操作 */
    HWMSDKSdkAccessError = 411000010,		/**<[en]Network access error. [cn]网络接入错误 */
    HWMSDKSdkServiceDoing = 411000011,		/**<[en]Other supplementary service is running. [cn]正在进行其他补充业务 */
    HWMSDKSdkErrMemError = 411000012,		/**<[en]Memory allocation error. [cn]分配内存错误 */
    HWMSDKSdkErrInitializeFailed = 411000013,		/**<[en]Initialization failed. [cn]初始化失败 */
    HWMSDKSdkUserDoesNotExist = 411000014,		/**<[en]User does not exist. [cn]用户不存在 */
    HWMSDKSdkDataconfNotJoin = 411000015,		/**<[en]Did not join the data meeting. [cn]未加入数据会议 */
    HWMSDKSdkCallAndConfNotExist = 411000016,		/**<[en]Neither meeting nor call exists. [cn]会议和呼叫均不存在 */
    HWMSDKSdkSvnDetectFailed = 411000017,		/**<[en]SVN port detection failed. [cn]svn端口探测不通 */
    HWMSDKSdkErrWriteFileFailed = 411000018,		/**<[en]Failed to write file. [cn]写文件失败 */
    HWMSDKSdkErrRtcNotSupportStg = 411000019,		/**<[en]RTC does not support STG mode. [cn]RTC不支持STG模式 */
    HWMSDKSdkErrRtcLibLoadFailed = 411000020,		/**<[en]Failed to load RTC library. RTC meeting is not supported. [cn]rtc库加载失败，不支持rtc会议 */
    HWMSDKSdkErrSwitchRoleConfPause = 411000021,		/**<[en]The meeting is in the audience pause state when changing roles. [cn]转角色的时候会议正处于观众暂停观看状态 */
    HWMSDKSdkConfNotInCall = 411000022,		/**<[en]Not in call. [cn]不在呼叫中 */
    HWMSDKSdkConfOrCallNotExist = 411000023,		/**<[en]Meeting or call does not exist. [cn]会议或者呼叫不存在 */
    HWMSDKSdkConfPairStateNotAllow = 411000024,		/**<[en]Pairing state not allowed. [cn]配对状态不允许 */
    HWMSDKSdkConfPairQueryFail = 411000025,		/**<[en]Pairing request failed. [cn]配对请求失败 */
    HWMSDKSdkConfPairOverLimit = 411000026,		/**<[en]Pairing exceeds limit. [cn]配对超出限制 */
    HWMSDKSdkConfPairErrorCommon = 411000027,		/**<[en]Pairing common error. [cn]配对通用错误 */
    HWMSDKSdkConfPairEnterFailed = 411000028,		/**<[en]Pairing and joining the meeting failed. [cn]配对入会失败 */
    HWMSDKSdkConfPairEnterBusy = 411000029,		/**<[en]Pairing and joining the meeting is busy. [cn]配对入会忙 */
    HWMSDKSdkConfPairEnterInvalid = 411000030,		/**<[en]Pairing and joining the meeting is invalid. [cn]配对入会无效 */
    HWMSDKSdkConfPairEnterMulti = 411000031,		/**<[en]Multiple clicks at the same time to pair and join the meeting error. [cn]同时多次点击入会错误 */
    HWMSDKSdkConfPairUnestablishedOrPriring = 411000032,		/**<[en]Pairing is not established or is being established. [cn]配对未建立或正在建立中 */
    HWMSDKSdkConfExternInputCameraNotOpen = 411000033,		/**<[en]The camera is not turned on in the third-party capture mode. [cn]第三方采集模式下摄像头未打开 */
    HWMSDKSdkConfCreatRtcEngineFailed = 411000034,		/**<[en]RTC engine creation failed. [cn]RTC 引擎创建失败 */
    HWMSDKSdkConfNotInConf = 411000035,		/**<[en]Not in a meeting. [cn]不在会议中 */
    HWMSDKSdkNoStreamEndConfNetBreak = 411000100,		/**<[en]End the meeting with no stream due to disconnection of network. [cn]无码流结束会议网络断开 */
    HWMSDKSdkNoStreamEndConfRejoinFail = 411000101,		/**<[en]End the meeting with no stream because fail to re-join meeting. [cn]无码流结束会议重入会失败 */
    HWMSDKSdkCheckParamNullPointer = 411000102,		/**<[en]Null pointer exception. [cn]空指针异常 */
    HWMSDKSdkCheckParamNotAllowNull = 411000103,		/**<[en]Parameters cannot be empty. [cn]参数不许为空 */
    HWMSDKSdkEncryptDecrtptFuncNotMactch = 411000104,		/**<[en]Indicates encrypt and decrtpt func not match. [cn]加解密算法不匹配 */
    HWMSDKSdkLoadUserDefinedDllFailed = 411000105,		/**<[en]Indicates Loading User-Defined DLLs failed . [cn]加载用户自定义dll失败 */
    HWMSDKSdkLoginMsgThreadUninit = 412100001,		/**<[en]The message processing thread is not initialized. [cn]消息处理线程未初始化 */
    HWMSDKSdkLoginParamError = 412100002,		/**<[en]Parameter error. [cn]参数错误 */
    HWMSDKSdkLoginTimeout = 412100003,		/**<[en]Timeout. [cn]超时 */
    HWMSDKSdkLoginMemError = 412100004,		/**<[en]Memory allocation error. [cn]分配内存错误 */
    HWMSDKSdkLoginXmlError = 412100005,		/**<[en]XML parsing error. [cn]XML解析出错 */
    HWMSDKSdkLoginDnsError = 412100006,		/**<[en]DNS resolution error. [cn]DNS解析异常 */
    HWMSDKSdkLoginRequestFailed = 412100007,		/**<[en]Request message failed. [cn]请求消息异常 */
    HWMSDKSdkLoginAuthFailed = 412100008,		/**<[en]Authentication failed. [cn]鉴权失败 */
    HWMSDKSdkLoginServiceError = 412100009,		/**<[en]Server error. [cn]服务器异常 */
    HWMSDKSdkLoginAccountLocked = 412100010,		/**<[en]Account is locked. [cn]帐号被锁定 */
    HWMSDKSdkLoginTimerError = 412100011,		/**<[en]Create timer error. [cn]创建定时器错误 */
    HWMSDKSdkLoginCaVerifyFailed = 412100012,		/**<[en]Server CA certificate verification failed. [cn]服务器CA证书校验失败 */
    HWMSDKSdkLoginNetworkError = 412100013,		/**<[en]Network error. [cn]网络异常 */
    HWMSDKSdkLoginServerRedirect = 412100014,		/**<[en]Server redirect. [cn]服务器返回重定向地址 */
    HWMSDKSdkLoginAuthAccountDiactive = 412100015,		/**<[en]Account is not activated. [cn]帐号未激活 */
    HWMSDKSdkLoginJsonError = 412100016,		/**<[en]JSON parsing error. [cn]JSON解析失败 */
    HWMSDKSdkLoginCurleExternConnectTimeout = 412100017,		/**<[en]The proxy communication times out and the TCP link building fails. Probably because the proxy configuration is incorrect. [cn]代理通信超时，tcp建链失败，大概率是代理配置错误 */
    HWMSDKSdkLoginCurleExternClosedByProxy = 412100018,		/**<[en]Disconnected by the proxy. Probably because the server address is misconfigured. [cn]接被代理断开，大概率是服务器地址配置错误 */
    HWMSDKSdkLoginCurleExternProxyAddrOrPortError = 412100019,		/**<[en]The TCP link establishment timed out. Probably because the proxy domain name or port configuration is incorrect. [cn]tcp建链超时，大概率是proxy域名或者端口配置错误 */
    HWMSDKSdkLoginCurleExternProxyPermissionDenied = 412100020,		/**<[en]The authentication process failed. The user does not have proxy permission and needs to apply for proxy permission. [cn]认证鉴权过程失败，用户没有proxy权限，需要申请proxy权限 */
    HWMSDKSdkLoginCurleExternUserOrPwdError = 412100021,		/**<[en]The authentication process failed. The proxy user name or password is incorrect. [cn]认证鉴权过程失败，代理用户名或者密码错误 */
    HWMSDKSdkLoginCurleExternAuthTypeError = 412100022,		/**<[en]The authentication process failed. Incorrect authentication type. User name and password are required. The user needs to be prompted for input. [cn]认证鉴权过程失败，错误的认证类型，同时需要用户名、密码，需要提示用户输入 */
    HWMSDKSdkLoginCurleExternAuthError = 412100023,		/**<[en]The authentication process failed. Other unknown errors. It may be that the authentication method is not supported. The user needs to be prompted to try again. [cn]认证鉴权过程失败，其他未知错误，有可能是不支持认证方式，建议弹框提示用户重新发起 */
    HWMSDKSdkLoginCurleCouldntResolveProxy = 412100024,		/**<[en]The authentication process failed. Unable to resolve gateway. [cn]认证鉴权过程失败，无法解析网关 */
    HWMSDKSdkLoginCurleCouldntResolveHost = 412100025,		/**<[en]The authentication process failed. Unable to resolve host. [cn]认证鉴权过程失败，无法解析主机 */
    HWMSDKSdkLoginCurleCouldntConnect = 412100026,		/**<[en]The authentication process failed. Unable to connect. [cn]认证鉴权过程失败，无法连接 */
    HWMSDKSdkLoginCurleOperationTimedout = 412100027,		/**<[en]The authentication process failed. Operation times out. [cn]认证鉴权过程失败，操作超时 */
    HWMSDKSdkLoginMsgToolarge = 412100028,		/**<[en]Message length too long. [cn]消息长度太大 */
    HWMSDKSdkLoginBase64EncodeError = 412100029,		/**<[en]Base64 encryption failed. [cn]base64加密失败 */
    HWMSDKSdkLoginXmlParseError = 412100030,		/**<[en]XML parsing error. [cn]XML解析出错 */
    HWMSDKSdkLoginSecureLibError = 412100031,		/**<[en]Secure function error. [cn]安全函数失败 */
    HWMSDKSdkLoginFirewallDetectParamError = 412100032,		/**<[en]Firewall detection parameter error. [cn]防火墙检测参数错误 */
    HWMSDKSdkLoginBuildStgTunnelFail = 412100033,		/**<[en]Failed to create STG tunnel. [cn]创建STG隧道失败 */
    HWMSDKSdkLoginUpdateStgServerError = 412100034,		/**<[en]Failed to update STG service. [cn]更新STG服务失败 */
    HWMSDKSdkLoginTupCpyptEncryptError = 412100035,		/**<[en]Encryption failed. [cn]加密失败 */
    HWMSDKSdkLoginInDownloadingCannotDownloadAgain = 412100036,		/**<[en]Do not allow duplicate downloads. [cn]不允许重复下载 */
    HWMSDKSdkLoginFileOpeartFail = 412100037,		/**<[en]File operation failed. [cn]文件操作失败 */
    HWMSDKSdkLoginRspBodyNull = 412100038,		/**<[en]The request message returns empty. [cn]请求消息返回空 */
    HWMSDKSdkLoginProbeServerNumberZeroErr = 412100039,		/**<[en]The number of detection servers is 0 error. [cn]探测服务器数为0错误 */
    HWMSDKSdkLoginGetBestLocalIpFail = 412100040,		/**<[en]Failed to get local IP address. [cn]获取本地IP失败 */
    HWMSDKSdkLoginlogicGeneral = 412200001,		/**<[en]Internal error. [cn]内部错误 */
    HWMSDKSdkLoginlogicParamError = 412200002,		/**<[en]Parameter error. [cn]参数错误 */
    HWMSDKSdkLoginlogicRequestTimeout = 412200003,		/**<[en]Network timeout. [cn]网络超时 */
    HWMSDKSdkLoginlogicNetworkError = 412200004,		/**<[en]Network Error. [cn]网络错误 */
    HWMSDKSdkLoginlogicNeedMobilebind = 412200005,		/**<[en]Need to bind mobile phone. [cn]需要绑定手机 */
    HWMSDKSdkLoginlogicNeedMailbind = 412200006,		/**<[en]Need to bind email. [cn]需要绑定邮箱 */
    HWMSDKSdkLoginlogicHasInited = 412200007,		/**<[en]Has initialized already. [cn]重复初始化 */
    HWMSDKSdkLoginlogicStateMachineRunFailed = 412200008,		/**<[en]State machine execution failed. [cn]状态机执行失败 */
    HWMSDKSdkLoginlogicStartTimerError = 412200009,		/**<[en]Failed to start timer. [cn]开启定时器失败 */
    HWMSDKSdkLoginlogicNeedModifyPassword = 412200010,		/**<[en]The user is prompted to change the password when logging in for the first time. [cn]首次登录，提示用户修改密码 */
    HWMSDKSdkLoginlogicUnkownAuthType = 412200011,		/**<[en]Unknown authentication type. [cn]未知鉴权类型 */
    HWMSDKSdkConfctrlGeneral = 414100001,		/**<[en]Common error. [cn]一般错误 */
    HWMSDKSdkConfctrlParamError = 414100002,		/**<[en]Parameter error. [cn]参数错误 */
    HWMSDKSdkConfctrlTimeout = 414100003,		/**<[en]Timeout. [cn]超时 */
    HWMSDKSdkConfctrlMemError = 414100004,		/**<[en]Memory allocation error. [cn]分配内存错误 */
    HWMSDKSdkConfctrlDnsError = 414100005,		/**<[en]DNS resolution error. [cn]DNS解析异常 */
    HWMSDKSdkConfctrlRequestFailed = 414100006,		/**<[en]Request message failed. [cn]请求消息异常 */
    HWMSDKSdkConfctrlAuthFailed = 414100007,		/**<[en]Authentication failed. [cn]鉴权失败 */
    HWMSDKSdkConfctrlServiceError = 414100008,		/**<[en]Server error. [cn]服务器异常 */
    HWMSDKSdkConfctrlTimerError = 414100009,		/**<[en]Create timer error. [cn]创建定时器错误 */
    HWMSDKSdkConfctrlStartTimerError = 414100010,		/**<[en]Start timer error. [cn]开启定时器错误 */
    HWMSDKSdkConfctrlConfBlockFull = 414100011,		/**<[en]The meeting control block is full. Please release the control block that is not in use. [cn]会控控制块已满，请释放没在使用的控制块 */
    HWMSDKSdkConfctrlCurleExternConnectTimeout = 414100012,		/**<[en]The proxy communication times out and the TCP link building fails. Probably because the proxy configuration is incorrect. [cn]代理通信超时，tcp建链失败，大概率是代理配置错误 */
    HWMSDKSdkConfctrlCurleExternClosedByProxy = 414100013,		/**<[en]Disconnected by the proxy. Probably because the server address is misconfigured. [cn]接被代理断开，大概率是服务器地址配置错误 */
    HWMSDKSdkConfctrlCurleExternProxyAddrOrPortError = 414100014,		/**<[en]The TCP link establishment timed out. Probably because the proxy domain name or port configuration is incorrect. [cn]tcp建链超时，大概率是proxy域名或者端口配置错误 */
    HWMSDKSdkConfctrlCurleExternProxyPermissionDenied = 414100015,		/**<[en]The authentication process failed. The user does not have proxy permission and needs to apply for proxy permission. [cn]认证鉴权过程失败，用户没有proxy权限，需要申请proxy权限 */
    HWMSDKSdkConfctrlCurleExternUserOrPwdError = 414100016,		/**<[en]The authentication process failed. The proxy user name or password is incorrect. [cn]认证鉴权过程失败，代理用户名或者密码错误 */
    HWMSDKSdkConfctrlCurleExternAuthTypeError = 414100017,		/**<[en]The authentication process failed. Incorrect authentication type. User name and password are required. The user needs to be prompted for input. [cn]认证鉴权过程失败，错误的认证类型，同时需要用户名、密码，需要提示用户输入 */
    HWMSDKSdkConfctrlCurleExternAuthError = 414100018,		/**<[en]The authentication process failed. Other unknown errors. It may be that the authentication method is not supported. The user needs to be prompted to try again. [cn]认证鉴权过程失败，其他未知错误，有可能是不支持认证方式，建议弹框提示用户重新发起 */
    HWMSDKSdkConfctrlCurleCouldntResolveProxy = 414100019,		/**<[en]Curl proxy exception. [cn]curl代理异常 */
    HWMSDKSdkConfctrlCurleCouldntResolveHost = 414100020,		/**<[en]Curl host exception. [cn]curl主机异常 */
    HWMSDKSdkConfctrlCurleCouldntConnect = 414100021,		/**<[en]Curl connection exception. [cn]curl连接异常 */
    HWMSDKSdkConfctrlCurleOperationTimedout = 414100022,		/**<[en]Curl operation timed out. [cn]curl操作超时 */
    HWMSDKSdkConfctrlMsgTooLarge = 414100023,		/**<[en]Message length too long. [cn]会控消息内容过大 */
    HWMSDKSdkConfctrlPthreadCreatError = 414100024,		/**<[en]Failed to create thread. [cn]创建线程失败 */
    HWMSDKSdkConfctrlSecFuncReturnError = 414100025,		/**<[en]Secure function error. [cn]安全函数返回错误 */
    HWMSDKSdkConfctrlJsonParseFailed = 414100026,		/**<[en]JSON parsing failed. [cn]解析json体失败 */
    HWMSDKSdkConfctrlTokenIsNullError = 414100027,		/**<[en]WS token is empty. [cn]ws token值为空 */
    HWMSDKSdkConfctrlReturnJsonError = 414100028,		/**<[en]Return JSON data error. [cn]返回json数据异常 */
    HWMSDKSdkConfctrlCreatConfBasicError = 414100029,		/**<[en]Failed to create meeting control block. [cn]创建会议控制块失败 */
    HWMSDKSdkConfctrlGetConfBasicByHandleError = 414100030,		/**<[en]Failed to get meeting control block. [cn]获取会议控制块失败 */
    HWMSDKSdkConfctrlGetConfBasicByCallidError = 414100031,		/**<[en]Failed to get meeting control block by CallId. [cn]通过CallId获取会议控制块失败 */
    HWMSDKSdkConfctrlDestoryConfBasicError = 414100032,		/**<[en]Destroying the meeting control block failed. [cn]销毁会议控制块失败 */
    HWMSDKSdkConfctrlCreatConfTmpInfoNotFound = 414100033,		/**<[en]Temporary creating meeting information not found. [cn]找不到创会临时信息 */
    HWMSDKSdkConfctrlGetParticipantIdFailed = 414100034,		/**<[en]Failed to get participant ID. [cn]获取参会者ID失败 */
    HWMSDKSdkConfctrlGetMtByParticipantIdFailed = 414100035,		/**<[en]Failed to get MT by participant ID. [cn]通过ParticipantId获取MT失败 */
    HWMSDKSdkConfctrlGetSelfinfoError = 414100036,		/**<[en]Failed to get self information by participant ID. [cn]通过ParticipantId获取selfinfo失败 */
    HWMSDKSdkConfctrlGetParticipantByMtFailed = 414100037,		/**<[en]Failed to get participant information by MT. [cn]通过MT获取会议成员信息失败 */
    HWMSDKSdkConfctrlNeedMaualInviteError = 414100038,		/**<[en]Manual invitation required. [cn]需要手动邀请 */
    HWMSDKSdkConfctrlHadNotifyConfinfoBefore = 414100039,		/**<[en]The major parameters of the meeting have been reported. [cn]已上报过会议大参数 */
    HWMSDKSdkConfctrlNotSupportSubtitle = 414100040,		/**<[en]Subtitles are not supported. [cn]不支持字幕 */
    HWMSDKSdkConfctrlConfEndTimeouot = 414100041,		/**<[en]Meeting Hang Up - Timeout. [cn]会议挂断 - 超时 */
    HWMSDKSdkConfctrlConfEndNostream = 414100042,		/**<[en]Meeting Hang Up - No Streaming. [cn]会议挂断 - 无码流 */
    HWMSDKSdkConfctrlConfEndChairHangup = 414100043,		/**<[en]Meeting hung up - Hung up by the host. [cn]会议挂断 - 被主持人挂断 */
    HWMSDKSdkConfctrlConfEndStopConf = 414100044,		/**<[en]Meeting Hang Up - Meeting has ended. [cn]会议挂断 - 会议已结束 */
    HWMSDKSdkConfctrlConfEndLeaveConf = 414100045,		/**<[en]End of meeting due to leave meeting. [cn]离会导致的会议结束 */
    HWMSDKSdkConfctrlMsgProcFunRegFail = 414100046,		/**<[en]Message queue processing function registration failed. [cn]消息队列处理函数注册失败 */
    HWMSDKSdkConfctrlMsgProcFunUnregFail = 414100047,		/**<[en]Message queue processing function deregistration failed. [cn]消息队列处理函数去注册失败 */
    HWMSDKSdkConfctrlConfEndRejectConf = 414100048,		/**<[en]Meeting ended due to reject meeting. [cn]拒绝会议导致的会议结束 */
    HWMSDKSdkConfctrlConfEndSelfEnd = 414100049,		/**<[en]Meeting ended by self. [cn]自己结束会议导致的会议结束 */
    HWMSDKSdkConfctrlViewerExceedsLimit = 414100050,		/**<[en]The meeting control module is not initialized. [cn]会控模块未初始化 */
    HWMSDKSdkConfctrlSpecialWatchExceedsLimit = 414100051,		/**<[en]The watching special site reaches the maximum. [cn]选看的特殊会场超过限制 */
    HWMSDKSdkConfctrlWatchHdExceedsLimit = 414100052,		/**<[en]The watching HD site reaches the maximum. [cn]选看的高清会场超过限制 */
    HWMSDKSdkConfctrlWatchSdExceedsLimit = 414100053,		/**<[en]The watching SD site reaches the maximum. [cn]选看的标清会场超过限制 */
    HWMSDKSdkConfctrlWatchSpecificationsExceedsLimit = 414100054,		/**<[en]The watching specification reaches the maximum. [cn]选看的规格超过限制 */
    HWMSDKSdkConfctrlWatchInnerError = 414100055,		/**<[en]Watching internal errors. [cn]选看内部错误 */
    HWMSDKSdkConfctrlWatchRenderRepeats = 414100056,		/**<[en]Duplicated watch render. [cn]选看的句柄重复 */
    HWMSDKSdkConfctrlHttpRecvFailed = 414100057,		/**<[en]HTTP request error. [cn]HTTP请求错误 */
    HWMSDKSdkConfctrlTrackRequestTimeout = 414100058,		/**<[en]Websocket request timeout. [cn]websocket请求超时 */
    HWMSDKSdkConfctrlTrackLoadFailed = 414100059,		/**<[en]Loading failed. [cn]加载错误 */
    HWMSDKSdkConfctrlConfEndTimeoutHangup = 414100061,		/**<[en]The meeting ends due to the timeout of guest waiting before meeting or the timeout of the meeting control heartbeat. [cn]会前等待页面时间超时或者会控心跳超时导致的会议结束 */
    HWMSDKSdkConfctrlConfEndConclude = 414100062,		/**<[en]The meeting ends due to being canceled. [cn]会议被取消预约导致的会议结束 */
    HWMSDKSdkConfctrlConfEndNetworkFailed = 414100063,		/**<[en]The meeting ends due to network error when guest waiting before meeting. [cn]会前等待页面网络异常导致的会议结束 */
    HWMSDKSdkCallGeneralError = 413000001,		/**<[en]Common error. [cn]一般错误 */
    HWMSDKSdkCallParamError = 413000002,		/**<[en]Parameter error. [cn]参数错误 */
    HWMSDKSdkCallMemError = 413000003,		/**<[en]Memory allocation error. [cn]分配内存错误 */
    HWMSDKSdkCallSystemError = 413000004,		/**<[en]System error. [cn]系统错误 */
    HWMSDKSdkCallMsgError = 413000005,		/**<[en]Message sending error. [cn]发送消息错误 */
    HWMSDKSdkCallCfgError = 413000006,		/**<[en]Get system configuration error. [cn]获取系统配置错误 */
    HWMSDKSdkCallNetError = 413000007,		/**<[en]Physical network error. [cn]物理网络错误 */
    HWMSDKSdkCallAccessError = 413000008,		/**<[en]Network access error. [cn]网络接入错误 */
    HWMSDKSdkCallTimerError = 413000009,		/**<[en]Create timer error. [cn]创建定时器错误 */
    HWMSDKSdkCallStateError = 413000010,		/**<[en]Call state error. [cn]呼叫状态错误 */
    HWMSDKSdkCallOperateError = 413000011,		/**<[en]Other operation in progress error. [cn]正在进行其他操作错误 */
    HWMSDKSdkCallReqsrvError = 413000012,		/**<[en]Requesting the master to start call error. [cn][MODIFY]请求主控进行呼叫开始错误 */
    HWMSDKSdkCallReqresError = 413000013,		/**<[en]Requesting audio resource error. [cn]申请音频资源错误 */
    HWMSDKSdkCallServiceDoing = 413000014,		/**<[en]Other supplementary service is running. [cn]正在进行其他补充业务 */
    HWMSDKSdkCallCallrecordError = 413000015,		/**<[en]Record call error. [cn]记录通话记录错误 */
    HWMSDKSdkCallMprocError = 413000016,		/**<[en]Media process error. [cn]媒体进程返回的错误 */
    HWMSDKSdkCallMaxCallError = 413000017,		/**<[en]Maximum number of calls reached. [cn]超过最大呼叫路数 */
    HWMSDKSdkCallSipidNotexitError = 413000018,		/**<[en]SIP account ID does not exist. [cn]SIP账户ID不存在 */
    HWMSDKSdkCallCallidNoexitError = 413000019,		/**<[en]Call ID does not exist. [cn]呼叫ID不存在 */
    HWMSDKSdkCallRegisteringError = 413000020,		/**<[en]Failed due to registering. [cn]正在注册中导致失败 */
    HWMSDKSdkCallRegistFallError = 413000021,		/**<[en]Registration failed. [cn]注册失败 */
    HWMSDKSdkCallDeregistFallError = 413000022,		/**<[en]Deregistration failed. [cn]注销失败 */
    HWMSDKSdkCallSetSipInfoError = 413000023,		/**<[en]Setting account information error. [cn]设置账户信息错误 */
    HWMSDKSdkCallSetaccountError = 413000024,		/**<[en]Setting SIP account error. [cn]设置SIP帐号失败 */
    HWMSDKSdkCallNotifysipaccountError = 413000025,		/**<[en]Reporting SIP account information error. [cn]上报SIP帐号信息失败 */
    HWMSDKSdkCallSipseverError = 413000026,		/**<[en]Server information error. [cn]服务器信息错误 */
    HWMSDKSdkCallSipaccountinfoError = 413000027,		/**<[en]SIP account information error. [cn]账户信息错误 */
    HWMSDKSdkCallSipcError = 413000028,		/**<[en]SIPC execution error. [cn]SIPC执行错误 */
    HWMSDKSdkCallUnregisterError = 413000029,		/**<[en]Not registered error. [cn]未注册错误 */
    HWMSDKSdkCallSubFallError = 413000030,		/**<[en]Call Sip interface to subscribe error. [cn]调用Sip接口订阅失败 */
    HWMSDKSdkCallDesubingError = 413000031,		/**<[en]Canceling subscription error. [cn]注销订阅中错误 */
    HWMSDKSdkCallSubingError = 413000032,		/**<[en]Subscribing error. [cn]订阅中错误 */
    HWMSDKSdkCallLocalMaxConferError = 413000033,		/**<[en]Only one local meeting is allowed. [cn]只允许一个本地会议 */
    HWMSDKSdkCallLocalConferNoexitError = 413000034,		/**<[en]Local meeting is not created. [cn]本地会议未创建 */
    HWMSDKSdkCallLocalConferNomatchError = 413000035,		/**<[en]The participant line does not match the chair account. [cn]与会者线路与主席账户不匹配 */
    HWMSDKSdkCallConfStateError = 413000036,		/**<[en]Local meeting state error. [cn]本地会议状态错误 */
    HWMSDKSdkCallJointstatenotifyError = 413000037,		/**<[en]Failed to report the linkage state of the IP Phone. [cn]IP Phone端联动状态上报失败 */
    HWMSDKSdkCallConfidNotexistError = 413000038,		/**<[en]Meeting ID does not exist. [cn]会议ID不存在 */
    HWMSDKSdkCallConfVideoHoldError = 413000039,		/**<[en]Video hold error. [cn]视频保持失败 */
    HWMSDKSdkCallConfVideoUnholdError = 413000040,		/**<[en]Video unhold error. [cn]视频恢复失败 */
    HWMSDKSdkCallMaxServerConfError = 413000041,		/**<[en]The maximum number of server meeting reached. [cn]服务器会议个数超出 */
    HWMSDKSdkCallAaReqrandomnumError = 413000042,		/**<[en]Get AA random number error. [cn]获取AA随机数失败 */
    HWMSDKSdkCallAaLoginError = 413000043,		/**<[en]AA login error. [cn]AA登陆失败 */
    HWMSDKSdkCallConfVideoTypeNoMatch = 413000044,		/**<[en]Meeting type mismatch. [cn]会议类型不匹配 */
    HWMSDKSdkCallConfVideoStartError = 413000045,		/**<[en]Failed to start video meeting. [cn]视频会议开启失败 */
    HWMSDKSdkCallAaNomainserverError = 413000046,		/**<[en]AA no master server. [cn]AA无主服务器 */
    HWMSDKSdkCallAaPasswordError = 413000047,		/**<[en]Password error. [cn]密码错误 */
    HWMSDKSdkCallAaUsernameError = 413000048,		/**<[en]Username error. [cn]用户名错误 */
    HWMSDKSdkCallAaUserloginedError = 413000049,		/**<[en]User is logged in. [cn]用户已登录 */
    HWMSDKSdkCallAaAccountlockedError = 413000050,		/**<[en]Account is locked. [cn]账户已锁定 */
    HWMSDKSdkCallAaTerminaltypeError = 413000051,		/**<[en]Terminal type mismatch. [cn]终端类型不匹配 */
    HWMSDKSdkCallAaParsexmlError = 413000052,		/**<[en]Parsing XML error. [cn]解析XML错误 */
    HWMSDKSdkCallAaConnectError = 413000053,		/**<[en]Connecting to server error. [cn]连接服务器错误 */
    HWMSDKSdkCallMediaCfgError = 413000054,		/**<[en]Get media configuration error. [cn]获取媒体配置失败 */
    HWMSDKSdkCallAaGetsrinfoError = 413000055,		/**<[en]Get service permission error. [cn]获取业务权限失败 */
    HWMSDKSdkCallAaLacksrError = 413000056,		/**<[en]Insufficient service permission. [cn]业务权限不足失败 */
    HWMSDKSdkCallNetworkenvError = 413000057,		/**<[en]Network environment error. [cn]网络环境错误 */
    HWMSDKSdkCallServiceConflictError = 413000058,		/**<[en]Service conflict. [cn]业务冲突 */
    HWMSDKSdkCallAaTimeoutError = 413000059,		/**<[en]Connection timeout. [cn]连接超时 */
    HWMSDKSdkCallAaUnkownError = 413000060,		/**<[en]Unknown error. [cn]未知错误 */
    HWMSDKSdkCallPickupAddtipError = 413000061,		/**<[en]Add ringing information error. [cn]添加振铃信息失败 */
    HWMSDKSdkCallPickupRemovetipError = 413000062,		/**<[en]Delete ringing information error. [cn]删除加振铃信息失败 */
    HWMSDKSdkCallPickupCreateringnumError = 413000063,		/**<[en]Create ringing number error. [cn]创建振铃号码失败 */
    HWMSDKSdkCallVvmParamErr = 413000064,		/**<[en]VVM parameter error. [cn]VVM参数错误 */
    HWMSDKSdkCallGetIptInfoErr = 413000065,		/**<[en]Getting registered service error. [cn]获取登记业务错误 */
    HWMSDKSdkCallVvmGetvoicemailErr = 413000066,		/**<[en]Getting voicemail error. [cn]获取语音邮箱错误 */
    HWMSDKSdkCallAttendeeAlreadyExist = 413000067,		/**<[en]Attendee already exists. [cn]与会者已经存在 */
    HWMSDKSdkCallAttendeeNotExist = 413000068,		/**<[en]Attendee does not exist. [cn]与会者不存在 */
    HWMSDKSdkCallCreateConfWndError = 413000069,		/**<[en]Create server video meeting window error. [cn]创建服务器视频会议窗口失败 */
    HWMSDKSdkCallCreateConfWndExist = 413000070,		/**<[en]Video window already exists. [cn][MODIFY]视频窗口已存在 */
    HWMSDKSdkCallGetConfListInfoError = 413000071,		/**<[en]Getting meeting list error. [cn]获取会议列表失败 */
    HWMSDKSdkCallNeedChairmanToOperate = 413000072,		/**<[en]Operating requires host privileges. [cn]需要主持人权限才能操作 */
    HWMSDKSdkCallNoVideoDeviceToOperate = 413000073,		/**<[en]No video device to operate. [cn]没有视频设备可以操作 */
    HWMSDKSdkCallNotStopRefreshreg = 413000074,		/**<[en]Refresh registration is not turned off. [cn]没有关闭刷新注册 */
    HWMSDKSdkCallNotifyOnlineStateError = 413000075,		/**<[en]Online state report error. [cn]在线状态上报失败 */
    HWMSDKSdkCallNotifyNetaddrError = 413000076,		/**<[en]Network address subscription report error. [cn]网络地址本订阅notify上报失败 */
    HWMSDKSdkCallInfoForceunregError = 413000077,		/**<[en]Telepresence account was force unregistered. Information report error. [cn]智真帐号被踢,info上报失败 */
    HWMSDKSdkCallTlsrootcertError = 413000078,		/**<[en]TLS root certificate error. [cn]TLS根证书错误 */
    HWMSDKSdkCallAdAuthFail = 413000079,		/**<[en]AD authentication error. [cn]AD鉴权失败 */
    HWMSDKSdkCallGetConfListInfoDoing = 413000080,		/**<[en]Meeting list is getting. [cn]会议列表正在获取中 */
    HWMSDKSdkCallCallProhibited = 413000081,		/**<[en]Prohibited calls. [cn]禁止呼叫 */
    HWMSDKSdkCallCallNumberUpperLimit = 413000082,		/**<[en]The maximum number of calls has been reached. [cn]呼叫数达上限 */
    HWMSDKSdkCallEncryptCallUpperLimit = 413000083,		/**<[en]The maximum number of encrypted calls has been reached. [cn]加密呼叫数达上限 */
    HWMSDKSdkCallShouldDegradeToAudio = 413000084,		/**<[en]The maximum number of video calls has been reached and needs to downgrade to audio. [cn]超出视频呼叫数，需要降为音频 */
    HWMSDKSdkCallH323idNotexistError = 413000085,		/**<[en]H323 account ID does not exist. [cn]H323账户ID不存在 */
    HWMSDKSdkCallH323AccountinfoError = 413000086,		/**<[en]H323 account information error. [cn]H323账户信息错误 */
    HWMSDKSdkCallNotifyH323AccountError = 413000087,		/**<[en]H323 account information report failed. [cn]H323帐号信息上报失败 */
    HWMSDKSdkCallLocalResourceNotEnough = 413000088,		/**<[en]Insufficient local resources. [cn]本端资源不足 */
    HWMSDKSdkCallCallProtocolNotSupport = 413000089,		/**<[en]The calling protocol is not supported. [cn]不支持该呼叫协议 */
    HWMSDKSdkCallSetH323InfoError = 413000090,		/**<[en]Setting H323 account information error. [cn]设置H323账户信息错误 */
    HWMSDKSdkCallNotifyAccessnumError = 413000091,		/**<[en]Mediax meeting access number reporting failed. [cn]mediax会议接入号上报界面失败 */
    HWMSDKSdkCallNotifyVmrinfoError = 413000092,		/**<[en]Mediax VMR information reporting failed. [cn]上报Mediax VMR信息到界面失败 */
    HWMSDKSdkCallNotifyConflistInfoError = 413000093,		/**<[en]IMS meeting list information reporting failed. [cn]上报获取IMS会议列表信息到界面失败 */
    HWMSDKSdkCallTupInitBlock = 413000094,		/**<[en]TUP initialization is not complete. [cn]tup初始化未完成 */
    HWMSDKSdkCallMsgReturnValueError = 413000095,		/**<[en]Message return value error. [cn]消息返回值错误 */
    HWMSDKSdkCallMsgTooLargeError = 413000096,		/**<[en]Message content too large error. [cn]消息内容太大错误 */
    HWMSDKSdkCallSecureFuncReturnError = 413000097,		/**<[en]Secure function error. [cn]安全函数返回错误 */
    HWMSDKSdkCallMsgRespNullError = 413000098,		/**<[en]message response is empty error. [cn]消息响应为空错误 */
    HWMSDKSdkCallAccountidNotEnableError = 413000099,		/**<[en]Account is not enabled. [cn]帐号未启用 */
    HWMSDKSdkCallCreatCallImplError = 413000100,		/**<[en]Create call control implement error. [cn]创建呼叫控制类错误 */
    HWMSDKSdkCallAlreadyInCallError = 413000101,		/**<[en]Already in call. [cn]已经在呼叫中 */
    HWMSDKSdkCallNoCallExistError = 413000102,		/**<[en]Call does not exist. [cn]呼叫不存在 */
    HWMSDKSdkCallGetMediaConfigFailed = 413000103,		/**<[en]Failed to get media configuration information. [cn]获取媒体配置信息失败 */
    HWMSDKSdkCallCaptureInputdataFailed = 413000104,		/**<[en]Failed to set third-party capture. Calling HME_V_Capture_InputData failed. [cn]设置第三方采集失败, 调用HME_V_Capture_InputData返回失败 */
    HWMSDKSdkCommonSqliteENotInited = 415000001,		/**<[en]DB is not initialized. [cn]db未初始化 */
    HWMSDKSdkCommonEFail = 415000002,		/**<[en]Common failure. [cn]失败 */
    HWMSDKSdkCommonEErrProxyUnfinish = 415000003,		/**<[en]Proxy detection has not been completed. [cn]代理探测还没有完成 */
    HWMSDKSdkTrackEInvalidParameter = 416000001,		/**<[en]Invalid parameter. [cn]参数错误 */
    HWMSDKSdkTrackENotInited = 416000002,		/**<[en]Track module is not initialized. [cn]打点模块未初始化 */
    HWMSDKSdkTrackEEventNotExist = 416000003,		/**<[en]Track event does not exist. [cn]打点事件不存在 */
    HWMSDKSdkTrackENotLogined = 416000004,		/**<[en]Not logged in. [cn]未登录 */
    HWMSDKSdkTrackENoUpload = 416000005,		/**<[en]Upload is not enabled. [cn]未开启上传 */
    HWMSDKSdkCallReasonCode403Forbidden = 510000403,		/**<[en]Server forbidden. [cn]服务器拒绝 */
    HWMSDKSdkCallReasonCode404NotFound = 510000404,		/**<[en]Not found. [cn]未发现 */
    HWMSDKSdkCallReasonCode480TemUnavailable = 510000480,		/**<[en]Temporary unavailable. [cn]临时失效 */
    HWMSDKSdkCallReasonCode486Busyhere = 510000486,		/**<[en]Busy here. [cn]这里忙 */
    HWMSDKSdkCallReasonCode487ReqTeminated = 510000487,		/**<[en]Request terminated. [cn]请求终止 */
    HWMSDKSdkCallReasonCode488NotAcceptableHere = 510000488,		/**<[en]Request is not acceptable here. [cn]这里请求不可接受 */
    HWMSDKSdkCallReasonCode603Decline = 510000603,		/**<[en]Decline. [cn]丢弃 */
    HWMSDKSdkCallReasonCode841HangupWithoutToast = 510000841,		/**<[en]Hangup without toast. [cn]挂断不弹框 */
    HWMSDKSdkCallReasonCode842ConferenceIsLock = 510000842,		/**<[en]Conference is locked. [cn]会议被锁定 */
    HWMSDKSdkSipInvalidparam = 419100001,		/**<[en]Invalid parameter. [cn]错误参数 */
    HWMSDKSdkSipWronguri = 419100002,		/**<[en]Incorrect URI. [cn]错误号码 */
    HWMSDKSdkSipMemallocfailure = 419100003,		/**<[en]Memory allocation failed. [cn]内存分配失败 */
    HWMSDKSdkSipSdprolefailure = 419100004,		/**<[en]SDP error. [cn]SDP错误 */
    HWMSDKSdkSipNoconnection = 419100005,		/**<[en]Connection does not exist. [cn]连接不存在 */
    HWMSDKSdkSipConnectionexpired = 419100006,		/**<[en]Connection failure. [cn]连接失效 */
    HWMSDKSdkSipForbidden = 419100007,		/**<[en]Operation forbidden. [cn]禁止操作 */
    HWMSDKSdkSipWrongstate = 419100008,		/**<[en]State error. [cn]状态错误 */
    HWMSDKSdkSipNolinedata = 419100009,		/**<[en]No corresponding line data. [cn]无对应线路数据 */
    HWMSDKSdkSipNoregister = 419100010,		/**<[en]No corresponding registered instance. [cn]无对应注册实例 */
    HWMSDKSdkSipNodialog = 419100011,		/**<[en]No corresponding call instance. [cn]无对应呼叫实例 */
    HWMSDKSdkSipNosubscribe = 419100012,		/**<[en]No corresponding subscription instance. [cn]无对应订阅实例 */
    HWMSDKSdkSipNorefer = 419100013,		/**<[en]No corresponding Refer instance. [cn]无对应Refer实例 */
    HWMSDKSdkSipNodim = 419100014,		/**<[en]No corresponding DIM instance. [cn]无对应DIM实例 */
    HWMSDKSdkSipCreateheader = 419100015,		/**<[en]Failed to create header. [cn]创建头域失败 */
    HWMSDKSdkSipParseheader = 419100016,		/**<[en]Failed to parse header. [cn]解析头域失败 */
    HWMSDKSdkSipFieldexist = 419100017,		/**<[en]Header not found. [cn]没有找到头域 */
    HWMSDKSdkSipNosdpbody = 419100018,		/**<[en]No SDP message body. [cn]没有sdp消息体 */
    HWMSDKSdkSipGetcap = 419100019,		/**<[en]Failed to get capability. [cn]获取能力失败 */
    HWMSDKSdkSipCommcap = 419100020,		/**<[en]Failed to compare capability. [cn]比较能力失败 */
    HWMSDKSdkSipOpenlcfailed = 419100021,		/**<[en]Failed to open logical channel. [cn]打开逻辑通道失败 */
    HWMSDKSdkSipEncodesdp = 419100022,		/**<[en]Encoding SDP failed. [cn]编码SDP失败 */
    HWMSDKSdkSipDecodesdp = 419100023,		/**<[en]Decoding SDP failed. [cn]解码SDP失败 */
    HWMSDKSdkSipUnsupportsdp = 419100024,		/**<[en]Negotiate to unsupported SDP. [cn]协商到不支持的SDP */
    HWMSDKSdkSipTptdinit = 419100025,		/**<[en]TPTD initialization failed. [cn]TPTD初始化失败 */
    HWMSDKSdkSipTptinit = 419100026,		/**<[en]TPT initialization failed. [cn]TPT初始化失败 */
    HWMSDKSdkSipTxninit = 419100027,		/**<[en]TXN initialization failed. [cn]TXN初始化失败 */
    HWMSDKSdkSipUainit = 419100028,		/**<[en]UA initialization failed. [cn]UA初始化失败 */
    HWMSDKSdkSipGlueinit = 419100029,		/**<[en]GLUE initialization failed. [cn]GLUE初始化失败 */
    HWMSDKSdkSipHllminit = 419100030,		/**<[en]HLLM initialization failed. [cn]HLLM初始化失败 */
    HWMSDKSdkSipVcominit = 419100031,		/**<[en]VCOM initialization failed. [cn]VCOM初始化失败 */
    HWMSDKSdkSipSdpinit = 419100032,		/**<[en]SDP initialization failed. [cn]SDP初始化失败 */
    HWMSDKSdkSipMultiins = 419100033,		/**<[en]Multiple instance error. [cn]多实例错误 */
    HWMSDKSdkSipNoregcb = 419100034,		/**<[en]Insufficient registration control blocks. [cn]注册控制块不足 */
    HWMSDKSdkSipNosubcb = 419100035,		/**<[en]Insufficient subscription control blocks. [cn]订阅控制块不足 */
    HWMSDKSdkSipNodiacb = 419100036,		/**<[en]Insufficient call control blocks. [cn]通话控制块不足 */
    HWMSDKSdkSipNodimcb = 419100037,		/**<[en]Insufficient IM control blocks. [cn]对话外控制块不足 */
    HWMSDKSdkSipParseuritostr = 419100038,		/**<[en]Failed to parse URI xml to string. [cn]解析xml的uri失败 */
    HWMSDKSdkSipEncryptnegoerr = 419100039,		/**<[en]Encryption negotiation failed. [cn]加密协商失败 */
    HWMSDKSdkSipNolocalcap = 419100040,		/**<[en]Local capabilities are not configured. [cn]没有设置本地能力 */
    HWMSDKSdkSipBfcptokenerr = 419100041,		/**<[en]BFCP token error. [cn]bfcp令牌错误 */
    HWMSDKSdkSipDnserr = 419100042,		/**<[en]DNS resolution error. [cn]dns解析错误 */
    HWMSDKSdkSipGetSubStateErr = 419100043,		/**<[en]Failed to get subscription state. [cn]获取订阅状态失败 */
    HWMSDKSdkSipNotSupportIpv4 = 419100044,		/**<[en]IPv4 is not supported. [cn]不支持IPv4 */
    HWMSDKSdkSipNotSupportIpv6 = 419100045,		/**<[en]IPv6 is not supported. [cn]不支持IPv6 */
    HWMSDKSdkSipNotSupportHostType = 419100046,		/**<[en]Unsupported host type. [cn]不支持的主机类型 */
    HWMSDKSdkSipGetTimerError = 419100047,		/**<[en]Failed to get timer. [cn]获取定时器失败 */
    HWMSDKAppCannotAcceptInviteShare = 420000001,		/**<[en]Cannot receive sharing invitations. [cn]无法接收共享邀请 */
    HWMSDKAppReportCheckParamFailed = 420000002,		/**<[en]ReportDTO parameter verification failed. [cn]reportDTO参数校验失败 */
    HWMSDKAppReportFoldCreateFailed = 420000003,		/**<[en]Report folder creation failed. [cn]举报文件夹创建失败 */
    HWMSDKAppReportCompressFailed = 420000004,		/**<[en]Report folder compression failure. [cn]举报文件夹压缩失败 */
    HWMSDKAppReportZipPathEmpty = 420000005,		/**<[en]The path of the ZIP file to be uploaded is empty. [cn]待上传的ZIP文件路径为空 */
    HWMSDKAppReportZipSizeExceedLimit = 420000006,		/**<[en]The size of the ZIP file to be uploaded reaches the maximum. [cn]待上传的ZIP文件大小超过限制 */
    HWMSDKAppReportExceedLimitDaily = 420000007,		/**<[en]The same person reported more than 100 times within 24 hours. [cn]同一个人24小时内举报次数超过100次 */
    HWMSDKUisdkCommonError = 430100001,		/**<[en]Common Error. [cn]通用错误 */
    HWMSDKUisdkApiInvalidParameters = 430100002,		/**<[en]Invalid parameters. [cn]参数错误 */
    HWMSDKUisdkSipCheckTimeout = 430100003,		/**<[en]SIP connection check failed. [cn]SIP连接检查失败 */
    HWMSDKUisdkTimeout = 430100004,		/**<[en]Timeout. [cn]超时 */
    HWMSDKUisdkInProcess = 430100005,		/**<[en]In process. [cn]接口正在处理中 */
    HWMSDKUisdkNotInitedEnd = 430100006,		/**<[en]Not initialized or initialization is not complete. [cn]未初始化或初始化尚未完成。 */
    HWMSDKUisdkNotSupportEnd = 430100007,		/**<[en]Not supported in this release. [cn]此版本不支持。 */
    HWMSDKUisdkOperationInterrupt = 430100008,		/**<[en]Operation interrupt. [cn]操作中断。 */
    HWMSDKUisdkContactNotFound = 430100009,		/**<[en]Contact not found. [cn]联系人不存在 */
    HWMSDKUisdkArgsLengthOverrun = 430100010,		/**<[en]Args length overrun. [cn]参数长度超限 */
    HWMSDKUisdkAppidInfoIllegal = 430100011,		/**<[en]APPID info illegal. [cn]APPID 信息入参不合法 */
    HWMSDKUisdkE2eencryptAlgorithmError = 430100012,		/**<[en]E2EEncrypt algorithm error. [cn]端到端加密算法不对称 */
    HWMSDKUisdkUnloginError = 430200001,		/**<[en]unlogin. [cn]未登录 */
    HWMSDKUisdkRepeatedLoginError = 430200002,		/**<[en]Repeated login. [cn]重复登录 */
    HWMSDKUisdkSipConnectionTimeout = 430200003,		/**<[en]SIP connection timeout. [cn]SIP连接超时 */
    HWMSDKUisdkLoginInvalidPasswordParameter = 430200004,		/**<[en]Invalid login password. [cn]用于登录的密码参数不合法 */
    HWMSDKUisdkPasswordOrAccountEmpty = 430200005,		/**<[en]Password or account empty. [cn]账号或密码不能都为空 */
    HWMSDKUisdkCallInvalidAccountParameter = 430300001,		/**<[en]The calling number, account number or third-party account number cannot be empty. [cn]呼叫号码、账号或者第三方账号不能为空 */
    HWMSDKUisdkCallAccountEmpty = 430300002,		/**<[en]Call account empty. [cn]点对点呼叫账号为空 */
    HWMSDKUisdkCallNicknameEmpty = 430300003,		/**<[en]Call nickname empty. [cn]点对点呼叫名字为空 */
    HWMSDKUisdkJoinconfNeedPassword = 430400001,		/**<[en]Password required to join the meeting. [cn]加入会议需要密码 */
    HWMSDKUisdkInvalidTimezoneParameter = 430400002,		/**<[en]Time zone error. [cn]时区错误 */
    HWMSDKUisdkInvalidConfDurationParameter = 430400003,		/**<[en]The meeting duration is less than 1. [cn]会议时长小于1 */
    HWMSDKUisdkConfInterrupted = 430400004,		/**<[en]Joining the conference is interrupted. [cn]入会被中断 */
    HWMSDKUisdkJoinconfInputInvalidPassword = 430400005,		/**<[en]Password input at least 4 digits. [cn]密码输入至少4位 */
    HWMSDKUisdkJoinconfUserCancel = 430400006,		/**<[en]User voluntarily cancels. [cn]用户主动取消 */
    HWMSDKUisdkInvalidGuestPasswordParameter = 430400007,		/**<[en]The guest password illegal. [cn]来宾密码非法 */
    HWMSDKUisdkNotInConfOrCall = 430400008,		/**<[en]Not in conference or in call. [cn]不在会议或呼叫中 */
    HWMSDKUisdkAlreadyExistConfOrCall = 430400009,		/**<[en]Already exist conf or call. [cn]已存在一路会议或呼叫 */
    HWMSDKUisdkConfidEmpty = 430400010,		/**<[en]ConfId empty. [cn]会议id不能为空 */
    HWMSDKUisdkSubjectTooLong = 430400011,		/**<[en]Subject too long. [cn]会议主题长度不能超过50 */
    HWMSDKUisdkVmrHostPasswordLengthLegal = 430400012,		/**<[en]VMR host password length illegal. [cn]主持人密码长度不合法 */
    HWMSDKUisdkVmrNameEmpty = 430400013,		/**<[en]VMR name empty. [cn]VMR名字为空 */
    HWMSDKUisdkConfStarttimeEarly = 430400014,		/**<[en]Conf starttime early. [cn]会议的开始时间早于当前时间 */
    HWMSDKUisdkShareLocked = 430400015,		/**<[en]Share is locked. [cn]共享被锁定 */
    HWMSDKUisdkNotInDataconf = 430400016,		/**<[en]Not in data conference. [cn]不在数据会议中 */
    HWMSDKUisdkRoleNotSupportOperation = 430400017,		/**<[en]Role not support operation [cn]角色不支持该操作 */
    HWMSDKUisdkHttpServerError = 430500001,		/**<[en]HTTP request, server exception. [cn]HTTP请求，服务器异常 */
    HWMSDKUisdkHttpConnectServerTimeoutError = 430500002,		/**<[en]HTTP request, Connecting to the server times out. [cn]HTTP请求，连接服务器超时 */
    HWMSDKUisdkNoNetworkError = 430500003,		/**<[en]network unavailable. [cn]网络不可用 */
    HWMSDKRtcSdkLeaveReasonServerError = 910000001,		/**<[en]Server error. [cn]服务器异常 */
    HWMSDKRtcSdkLeaveReasonBreakdown = 910000002,		/**<[en]SFU service failure. [cn]sfu服务故障 */
    HWMSDKRtcSdkLeaveReasonServiceUnreachable = 910000003,		/**<[en]Service unavaliable 503. [cn]服务不可达503 */
    HWMSDKRtcSdkLeaveReasonInternalError = 910000004,		/**<[en]Internal error. [cn]内部错误 */
    HWMSDKRtcSdkLeaveReasonKickedOff = 910000005,		/**<[en]Kicked off. [cn]被踢 */
    HWMSDKRtcSdkLeaveReasonSignatureExpired = 910000006,		/**<[en]Signature expired. [cn]签名过期 */
    HWMSDKRtcSdkLeaveReasonReconnectFailed = 910000007,		/**<[en]Reconnect timeout. [cn]重连超时 */
    HWMSDKRtcSdkLeaveReasonNetworkTest = 910000008,		/**<[en]Network detection. [cn]网络检测，UI不需要关注该错误码，不对外体现 */
    HWMSDKRtcSdkLeaveReasonUserRemoved = 910000009,		/**<[en]User is removed. [cn]用户移除 */
    HWMSDKRtcSdkLeaveReasonRoomDismissed = 910000010,		/**<[en]The room is dismissed. [cn]房间解散 */
    HWMSDKRtcSdkSdkInternalError = 990000001,		/**<[en]Internal error. [cn]内部错误 */
    HWMSDKRtcSdkMsgToolarge = 990000002,		/**<[en]Message too large. [cn]消息长度太大 */
    HWMSDKRtcSdkMemNotEnough = 990000003,		/**<[en]Insufficient memory. [cn]内存不足 */
    HWMSDKRtcSdkSynsendMsgErr = 990000004,		/**<[en]Failed to send message synchronously. [cn]同步发送消息失败 */
    HWMSDKRtcSdkParamError = 990000005,		/**<[en]Parameter error. [cn]参数错误 */
    HWMSDKRtcSdkApiCalledInWrongOrder = 990000006,		/**<[en]Call ID order error. [cn]呼叫ID时序错误 */
    HWMSDKRtcSdkSetupLocalViewFail = 990000007,		/**<[en]Failed to set local screen. [cn]设置本端画面失败 */
    HWMSDKRtcSdkStartRemoteStreamViewFail = 990000008,		/**<[en]Failed to open remote screen. [cn]开启远端画面失败 */
    HWMSDKRtcSdkSetDeviceFail = 990000009,		/**<[en]Device configuration failed. [cn]设备配置失败 */
    HWMSDKRtcSdkInitializing = 990000010,		/**<[en]Initializing. [cn]初始化中 */
    HWMSDKRtcSdkUnInitializing = 990000011,		/**<[en]Deinitializing. [cn]去初始化中 */
    HWMSDKRtcSdkLogUploading = 990000012,		/**<[en]Uploading log. [cn]正在日志上传中 */
    HWMSDKRtcSdkMediaPortError = 990000013,		/**<[en]Failed to get media port. [cn]获取媒体端口失败 */
    HWMSDKRtcSdkWatchViewTooMuch = 990000014,		/**<[en]The maximum number view window reached . [cn]选看窗口超过规格数 */
    HWMSDKRtcSdkMediaCmpErr = 990000015,		/**<[en]Media negotiation failed. [cn]媒体协商失败 */
    HWMSDKRtcSdkServerNoResponse = 990000016,		/**<[en]Server no response. [cn]服务器没有响应 */
    HWMSDKRtcSdkUserRoleChangeFail = 990000017,		/**<[en]Role switch failed. [cn]角色切换失败 */
    HWMSDKRtcSdkJoinRoomFail = 990000018,		/**<[en]Failed to join room. [cn]加入房间失败 */
    HWMSDKRtcSdkJoinRoomStatusBusy = 990000019,		/**<[en]Failed to join room. Status is busy. [cn]非空闲状态 */
    HWMSDKRtcSdkJoinRoomServerError = 990000020,		/**<[en]Failed to join room. Server error. [cn]加入房间失败，服务器异常 */
    HWMSDKRtcSdkJoinRoomServiceUnreachable = 990000021,		/**<[en]Failed to join room. Service unavaliable. [cn]加入房间失败，服务不可达 */
    HWMSDKRtcSdkJoinRoomAuthFail = 990000022,		/**<[en]Failed to join room. Authentication failed. [cn]加入房间失败，鉴权失败 */
    HWMSDKRtcSdkJoinRoomAuthRetry = 990000023,		/**<[en]Failed to join room. Authentication retry. [cn]加入房间失败，鉴权重试 */
    HWMSDKRtcSdkJoinRoomAuthClockSync = 990000024,		/**<[en]Failed to join room. Clock synchronization. [cn]加入房间失败，时钟同步 */
    HWMSDKRtcSdkJoinRoomUrlNotRight = 990000025,		/**<[en]Failed to join room. URL error. [cn]加入房间失败，url错误 */
    HWMSDKRtcSdkKickedOff = 990000026,		/**<[en]Kicked off. [cn]被踢 */
    HWMSDKRtcSdkScreenCaptureFail = 990000027,		/**<[en]Share failed. [cn]共享失败 */
    HWMSDKRtcSdkExtMediaOutput = 990000028,		/**<[en]Currently in external media output mode, this operation is forbidden. [cn]当前为外部媒体输出模式，禁用该操作 */
    HWMSDKRtcSdkReconnectFailed = 990000029,		/**<[en]Reconnection failed. [cn]重连失败 */
    HWMSDKRtcSdkServerBreakDown = 990000030,		/**<[en]Server break down. [cn]服务器宕机 */
    HWMSDKRtcSdkSignatureExpired = 990000031,		/**<[en]Signature has expired. [cn]签名已过期 */
    HWMSDKRtcSdkSetRemoteRenderModeFail = 990000032,		/**<[en]Failed to set remote window mode. [cn]设置远端窗口模式失败 */
    HWMSDKRtcSdkSetRemoteAudioMuteFail = 990000033,		/**<[en]Failed to subscribe or unsubscribe audio. [cn]订阅或取消订阅音频失败 */
    HWMSDKRtcSdkConnectOtherRoomFail = 990000034,		/**<[en]Failed to connect to other room. [cn]连接其他房间失败 */
    HWMSDKRtcSdkDisconnectOtherRoomFail = 990000035,		/**<[en]Failed to disconnect other room. [cn]断开连接其他房间失败 */
    HWMSDKRtcSdkSetUseroleNotAllowed = 990000036,		/**<[en]Role switching is not allowed. [cn]不允许角色切换 */
    HWMSDKRtcSdkExtMediaCaptureInput = 990000037,		/**<[en]Currently in third-party capture mode, this operation is forbidden. [cn]当前为第三方采集模式，禁用该操作 */
    HWMSDKRtcSdkSetExtaudioCaptureFail = 990000038,		/**<[en]Failed to set third-party audio capture. [cn]设置第三方音频采集失败 */
    HWMSDKRtcSdkSetExtvideoCaptureFail = 990000039,		/**<[en]Failed to set third-party video capture. [cn]设置第三方视频采集失败 */
    HWMSDKRtcSdkSetShareComputerSoundFail = 990000040,		/**<[en]Failed to set share sound switch. [cn]设置共享声音开关失败 */
    HWMSDKRtcSdkSetLocalAudioMuteFail = 990000041,		/**<[en]Failed to start or stop upstream audio stream. [cn]启停上行音频流失败 */
    HWMSDKRtcSdkSetLocalVideoMuteFail = 990000042,		/**<[en]Failed to start or stop upstream video stream. [cn]启停上行视频流失败 */
    HWMSDKRtcSdkUserRemoved = 990000043,		/**<[en]User is removed. [cn]用户被移除 */
    HWMSDKRtcSdkRoomDismissed = 990000044,		/**<[en]The room is dismissed. [cn]房间被解散 */
    HWMSDKRtcSdkSetupRemoteViewFail = 990000045,		/**<[en]Failed to set remote View. [cn]设置远端View失败 */
};

typedef NS_ENUM(NSInteger, HWMRenderMode) {
    HWMSDKConfRenderWindowsGdi = 10,		/**<Windows GDI显示方案，效率较低 */
    HWMSDKConfRenderWindowsD3d = 11,		/**<Windows Direct3D显示方案，要求用户电脑支持Direct3D 9.0以上的版本 */
    HWMSDKConfRenderWindowsD3dSurface = 12,		/**<Windows Direct3D surface显示方案，主要用于数据会议,需要配套HME_V_Render_DisplayImage使用，要求用户电脑支持Direct3D 9.0以上的版本 */
    HWMSDKConfRenderWindowsD3d11 = 13,		/**<Windows Direct3D11显示方案 */
    HWMSDKConfRenderAppleMetal = 20,
    HWMSDKConfRenderAppleOpengl = 21,
    HWMSDKConfRenderAndroidSurfaceview = 30,		/**<Android平台SurfaceView显示方案，效率较低 */
    HWMSDKConfRenderAndroidGlsurfaceview = 31,		/**<Android平台glSurfaceView显示方案，主流使用模式 */
    HWMSDKConfRenderAndroidNativewindow = 32,		/**<Android平台新增NativeRCS NativeWindow显示方案 */
    HWMSDKConfRenderAndroidMcodecnw = 33,		/**<Android平台MediaCodec+NativeWindow绑定显示方案 */
    HWMSDKConfRenderDefault = 0,		/**<该参数其它平台暂不支持，默认为0 */
};

typedef NS_ENUM(NSInteger, HWMConfRecordType) {
    HWMSDKRecordTypeBan = 0,		/**<[en]Indicates not allowed to record [cn]禁用 */
    HWMSDKRecordTypeRec = 1,		/**<[en]Indicates record [cn]录播 */
    HWMSDKRecordTypeRecLive = 2,		/**<[en]Indicates record and live broadcast [cn]录播+直播 */
    HWMSDKRecordTypeLive = 3,		/**<[en]Indicates live broadcast [cn]直播 */
};

typedef NS_ENUM(NSInteger, HWMConfRoleBefore) {
    HWMConfRoleBeforeInvalid = -1,		/**<[en]Invalid [cn]无效角色 [ios:rename:Invalid] */
    HWMConfRoleBeforeAttendee = 0,		/**<[en]Indicates attendee [cn]普通与会者 [ios:rename:Attendee] */
    HWMConfRoleBeforeChairman = 1,		/**<[en]Indicates chairman [cn]主席 [ios:rename:Chairman] */
    HWMConfRoleBeforeAudience = 2,		/**<[en]Indicates audience [cn]观众 [ios:rename:Audience] */
};

typedef NS_ENUM(NSInteger, HWMAudienceSizeShowMode) {
    HWMAudienceSizeShowModeHiden = 0,		/**<[en]hide mode [cn]隐藏模式 [ios:rename:Hiden] */
    HWMAudienceSizeShowModeShow = 1,		/**<[en]show mode [cn]显示模式 [ios:rename:Show] */
};

typedef NS_ENUM(NSInteger, HWMVmrIdType) {
    HWMVmrIdTypeFixed = 0,		/**<[en]Indicates xxxxx [cn]VmrId是固定类型 [ios:rename:Fixed] */
    HWMVmrIdTypeRandom = 1,		/**<[en]Indicates xxxxx [cn]VmrId是随机类型 [ios:rename:Random] */
};

typedef NS_ENUM(NSInteger, HWMMeetingIdType) {
    HWMMeetingIdTypeRandom = 0,		/**<[en]Indicates random meeting type [cn]随机会议ID [ios:rename:Random] */
    HWMMeetingIdTypePersonal = 1,		/**<[en]Indicates personal meeting type [cn]个人会议ID [ios:rename:Personal] */
    HWMMeetingIdTypeCloud = 2,		/**<[en]Indicates cloud meeting type [cn]云会议ID [ios:rename:Cloud] */
};

typedef NS_ENUM(NSInteger, HWMConfMediaType) {
    HWMConfMediaTypeAudio = 0,		/**<[en]Indicates audio conf [cn]音频会议 [ios:rename:Audio] */
    HWMConfMediaTypeVideo = 1,		/**<[en]Indicates video conf [cn]视频会议 [ios:rename:Video] */
};

typedef NS_ENUM(NSInteger, HWMConfPromptLanguageType) {
    HWMConfPromptLanguageTypeCN = 0,		/**<[en]Indicates ZH_CN [cn]简体中文 [ios:rename:CN] */
    HWMConfPromptLanguageTypeEN = 1,		/**<[en]Indicates EN_US [cn]美国英文 [ios:rename:EN] */
};

typedef NS_ENUM(NSInteger, HWMConfAllowJoinUserType) {
    HWMConfAllowJoinUserTypeAnyone = 0,		/**<[en]Anyone [cn]任何人 [ios:rename:Anyone] */
    HWMConfAllowJoinUserTypeLoginedUser = 1,		/**<[en]logined user [cn]已登录用户 [ios:rename:LoginedUser] */
    HWMConfAllowJoinUserTypeInCompanyUser = 2,		/**<[en]Company user [cn]企业内用户 [ios:rename:InCompanyUser] */
    HWMConfAllowJoinUserTypeInvitedUser = 3,		/**<[en]Invited user [cn]被邀请用户 [ios:rename:InvitedUser] */
};

typedef NS_ENUM(NSInteger, HWMTimezone) {
    HWMTimezoneDefault = 0,		/**<[en]Indicates default [cn]Mediax默认时区值 [ios:rename:Default] */
    HWMTimezoneInteerdateLine = 1,		/**<[en]Indicates International Date Line West [cn]日界线西 [ios:rename:InteerdateLine] */
    HWMTimezoneMidwayIsland = 2,		/**<[en]Indicates Midway Island, Samoa [cn]中途岛，萨摩亚群岛 [ios:rename:MidwayIsland] */
    HWMTimezoneHawii = 3,		/**<[en]Indicates Hawaii [cn]夏威夷 [ios:rename:Hawii] */
    HWMTimezoneAlaska = 4,		/**<[en]Indicates Alaska [cn]阿拉斯加 [ios:rename:Alaska] */
    HWMTimezonePacificTime = 5,		/**<[en]Indicates Pacific Time(US&Canada);Tijuana [cn]太平洋时间(美国和加拿大);蒂华纳 [ios:rename:PacificTime] */
    HWMTimezoneArizona = 6,		/**<[en]Indicates Arizona [cn]亚利桑那 [ios:rename:Arizona] */
    HWMTimezoneMountainTime = 7,		/**<[en]Indicates Mountain Time(US&Canada) [cn]山地时间(美国和加拿大) [ios:rename:MountainTime] */
    HWMTimezoneCentralAmerica = 8,		/**<[en]Indicates Central America [cn]中美洲 [ios:rename:CentralAmerica] */
    HWMTimezoneCentralTime = 9,		/**<[en]Indicates Central Time(US&Canada) [cn]中间时间(美国和加拿大) [ios:rename:CentralTime] */
    HWMTimezoneMexicoCity = 10,		/**<[en]Indicates Mexico City [cn]墨西哥城 [ios:rename:MexicoCity] */
    HWMTimezoneSaskatchewan = 11,		/**<[en]Indicates Saskatchewan [cn]萨斯喀彻温 [ios:rename:Saskatchewan] */
    HWMTimezoneBogota = 12,		/**<[en]Indicates Bogota, Lima, Quito [cn]波哥大，利马，基多 [ios:rename:Bogota] */
    HWMTimezoneEasternTime = 13,		/**<[en]Indicates Eastern Time(US&Canada) [cn]东部时间(美国和加拿大) [ios:rename:EasternTime] */
    HWMTimezoneIndiana = 14,		/**<[en]Indicates Indiana(East) [cn]印第安纳(东部) [ios:rename:Indiana] */
    HWMTimezoneAtlanticTime = 15,		/**<[en]Indicates Atlantic time(Canada) [cn]大西洋时间(加拿大) [ios:rename:AtlanticTime] */
    HWMTimezoneCaracas = 16,		/**<[en]Indicates Caracas, La Paz [cn]加拉加斯，拉巴斯 [ios:rename:Caracas] */
    HWMTimezoneSantiago = 17,		/**<[en]Indicates Santiago [cn]圣地亚哥 [ios:rename:Santiago] */
    HWMTimezoneNewfoundland = 18,		/**<[en]Indicates Newfoundland [cn]纽芬兰 [ios:rename:Newfoundland] */
    HWMTimezoneBrasilia = 19,		/**<[en]Indicates Brasilia [cn]巴西利亚 [ios:rename:Brasilia] */
    HWMTimezoneBuenosAires = 20,		/**<[en]Indicates Buenos Aires, Georgetown [cn]布宜诺斯艾利斯，乔治敦 [ios:rename:BuenosAires] */
    HWMTimezoneGreenLand = 21,		/**<[en]Indicates Greenland [cn]格陵兰 [ios:rename:GreenLand] */
    HWMTimezoneMidAtlantic = 22,		/**<[en]Indicates Mid-Atlantic [cn]中大西洋 [ios:rename:MidAtlantic] */
    HWMTimezoneAzores = 23,		/**<[en]Indicates Azores [cn]亚速尔群岛 [ios:rename:Azores] */
    HWMTimezoneCapeverde = 24,		/**<[en]Indicates Cape Verde Is [cn]佛得角群岛 [ios:rename:Capeverde] */
    HWMTimezoneMonrovia = 25,		/**<[en]Indicates Monrovia [cn]蒙罗维亚 [ios:rename:Monrovia] */
    HWMTimezoneGreenwichMeantime = 26,		/**<[en]Indicates Greenwich Mean Time:Dublin, Edinburgh, Lisbon, London [cn]格林威治标准时：都柏林，爱丁堡，里斯本，伦敦 [ios:rename:GreenwichMeantime] */
    HWMTimezoneAmsterdam = 27,		/**<[en]Indicates Amsterdam, Berlin, Bern, Rome, Stockholm, Vienna [cn]阿姆斯特丹，柏林，伯尔尼，罗马，斯德哥尔摩，维也纳 [ios:rename:Amsterdam] */
    HWMTimezoneBelgrade = 28,		/**<[en]Indicates Belgrade, Bratislava, Budapest, Ljubljana, Prague [cn]贝尔格莱德，布拉迪斯拉发，布达佩斯，卢布尔亚纳，布拉格 [ios:rename:Belgrade] */
    HWMTimezoneBrussels = 29,		/**<[en]Indicates Brussels, Copenhagen, Madrid, Paris [cn]布鲁塞尔，哥本哈根，马德里，巴黎 [ios:rename:Brussels] */
    HWMTimezoneSarajevo = 30,		/**<[en]Indicates Sarajevo, Skopje, Sofija, Vilnius, Warsaw, Zagreb [cn]萨拉热窝，斯科普里，维尔纽斯，索非亚，华沙，萨格勒布 [ios:rename:Sarajevo] */
    HWMTimezoneWestcentralAfrica = 31,		/**<[en]Indicates West Central Africa [cn]中非西部 [ios:rename:WestcentralAfrica] */
    HWMTimezoneAthens = 32,		/**<[en]Indicates Athens, Istanbul, Minsk [cn]雅典，伊斯坦布尔，明斯克 [ios:rename:Athens] */
    HWMTimezoneBucharest = 33,		/**<[en]Indicates Bucharest [cn]布加勒斯特 [ios:rename:Bucharest] */
    HWMTimezoneCairo = 34,		/**<[en]Indicates Cairo [cn]开罗 [ios:rename:Cairo] */
    HWMTimezoneHarare = 35,		/**<[en]Indicates Harare, Pretoria [cn]哈拉雷，比勒陀利亚 [ios:rename:Harare] */
    HWMTimezoneHelsinki = 36,		/**<[en]Indicates Helsinki, Riga, Tallinn [cn]赫尔辛基，里加，塔林 [ios:rename:Helsinki] */
    HWMTimezoneJerusalem = 37,		/**<[en]Indicates Jerusalem [cn]耶路撒冷 [ios:rename:Jerusalem] */
    HWMTimezoneBaghdad = 38,		/**<[en]Indicates Baghdad [cn]巴格达 [ios:rename:Baghdad] */
    HWMTimezoneKuwait = 39,		/**<[en]Indicates Kuwait, Riyadh [cn]科威特，利雅得 [ios:rename:Kuwait] */
    HWMTimezoneMoscow = 40,		/**<[en]Indicates Moscow, St. Petersburg, Volgograd [cn]莫斯科，圣彼得堡，喀山，伏尔加格勒 [ios:rename:Moscow] */
    HWMTimezoneNairobi = 41,		/**<[en]Indicates Nairobi [cn]内罗毕 [ios:rename:Nairobi] */
    HWMTimezoneTehran = 42,		/**<[en]Indicates Tehran [cn]德黑兰 [ios:rename:Tehran] */
    HWMTimezoneAbuDhabi = 43,		/**<[en]Indicates Abu Dhabi, Muscat [cn]阿布扎比，马斯喀特 [ios:rename:AbuDhabi] */
    HWMTimezoneTbilisi = 44,		/**<[en]Indicates Tbilisi, Yerevan [cn]第比利斯，埃里温 [ios:rename:Tbilisi] */
    HWMTimezoneKabul = 45,		/**<[en]Indicates Kabul [cn]喀布尔 [ios:rename:Kabul] */
    HWMTimezoneEkaterinburg = 46,		/**<[en]Indicates Ekaterinburg [cn]叶卡捷琳堡 [ios:rename:Ekaterinburg] */
    HWMTimezoneIslamabad = 47,		/**<[en]Indicates Islamabad, Karachi, Tashkent [cn]伊斯兰堡，卡拉奇，塔什干 [ios:rename:Islamabad] */
    HWMTimezoneCalcutta = 48,		/**<[en]Indicates Calcutta, Chennai, Mumbai, New Delhi [cn]加尔各答，马德拉斯，孟买，新德里 [ios:rename:Calcutta] */
    HWMTimezoneKathmandu = 49,		/**<[en]Indicates Kathmandu [cn]加德满都 [ios:rename:Kathmandu] */
    HWMTimezoneAlmaty = 50,		/**<[en]Indicates Almaty [cn]阿拉木图 [ios:rename:Almaty] */
    HWMTimezoneAstana = 51,		/**<[en]Indicates Astana, Dhaka [cn]阿斯塔纳，达卡 [ios:rename:Astana] */
    HWMTimezoneSrijaya = 52,		/**<[en]Indicates Sri Jayawardenepura [cn]斯里哈亚华登尼普拉 [ios:rename:Srijaya] */
    HWMTimezoneRangoon = 53,		/**<[en]Indicates Rangoon [cn]仰光 [ios:rename:Rangoon] */
    HWMTimezoneBangkok = 54,		/**<[en]Indicates Bangkok, Hanoi, Jakarta [cn]曼谷，雅加达，河内 [ios:rename:Bangkok] */
    HWMTimezoneNovosibirsk = 55,		/**<[en]Indicates Novosibirsk [cn]新西伯利亚 [ios:rename:Novosibirsk] */
    HWMTimezoneBeijing = 56,		/**<[en]Indicates Beijing, Chongqing, Hong Kong, Urumqi, Taipei [cn]北京，重庆，香港，乌鲁木齐，台北 [ios:rename:Beijing] */
    HWMTimezoneKrasnoyarsk = 57,		/**<[en]Indicates Krasnoyarsk, Ulaan Bataar [cn]克拉斯诺亚尔斯克，乌兰巴托 [ios:rename:Krasnoyarsk] */
    HWMTimezoneKualaLumpur = 58,		/**<[en]Indicates Kuala Lumpur, Singapore [cn]吉隆坡，新加坡 [ios:rename:KualaLumpur] */
    HWMTimezonePerth = 59,		/**<[en]Indicates Perth [cn]珀斯 [ios:rename:Perth] */
    HWMTimezoneOsaka = 60,		/**<[en]Indicates Osaka, Sapporo, Tokyo [cn]东京，大阪，札幌 [ios:rename:Osaka] */
    HWMTimezoneSeoul = 61,		/**<[en]Indicates Seoul [cn]汉城 [ios:rename:Seoul] */
    HWMTimezoneYakutsk = 62,		/**<[en]Indicates Yakutsk [cn]雅库茨克 [ios:rename:Yakutsk] */
    HWMTimezoneAdelaide = 63,		/**<[en]Indicates Adelaide [cn]阿德莱德 [ios:rename:Adelaide] */
    HWMTimezoneDarwin = 64,		/**<[en]Indicates Darwin [cn]达尔文 [ios:rename:Darwin] */
    HWMTimezoneBrisbane = 65,		/**<[en]Indicates Brisbane [cn]布里斯班 [ios:rename:Brisbane] */
    HWMTimezoneCanberra = 66,		/**<[en]Indicates Canberra, Melbourne, Sydney [cn]堪培拉，墨尔本，悉尼 [ios:rename:Canberra] */
    HWMTimezoneGuam = 67,		/**<[en]Indicates Guam, Port Moresby [cn]关岛，莫尔兹比港 [ios:rename:Guam] */
    HWMTimezoneHobart = 68,		/**<[en]Indicates Hobart [cn]霍巴特 [ios:rename:Hobart] */
    HWMTimezoneVladivostok = 69,		/**<[en]Indicates Vladivostok [cn]符拉迪沃斯托克 [ios:rename:Vladivostok] */
    HWMTimezoneSolomon = 70,		/**<[en]Indicates Solomon Is., New Caledonia [cn]所罗门群岛，新喀里多尼亚 [ios:rename:Solomon] */
    HWMTimezoneAuckland = 71,		/**<[en]Indicates Auckland, Welington [cn]奥克兰，惠灵顿 [ios:rename:Auckland] */
    HWMTimezoneFiji = 72,		/**<[en]Indicates Fiji, Kamchatka, Marshall Is. [cn]富士，堪察加半岛，马绍尔群岛 [ios:rename:Fiji] */
    HWMTimezoneNukualofa = 73,		/**<[en]Indicates Nuku'alofa [cn]努库阿洛法 [ios:rename:Nukualofa] */
    HWMTimezoneIrkutsk = 74,		/**<[en]Indicates Irkutsk [cn]伊尔库茨克 [ios:rename:Irkutsk] */
    HWMTimezoneCasablanca = 75,		/**<[en]Indicates Casablanca [cn]卡萨布兰卡 [ios:rename:Casablanca] */
    HWMTimezoneBaku = 76,		/**<[en]Indicates Baku [cn]巴库 [ios:rename:Baku] */
    HWMTimezoneMagadan = 77,		/**<[en]Indicates Magadan [cn]马加丹 [ios:rename:Magadan] */
};

typedef NS_ENUM(NSInteger, HWMConfRole) {
    HWMConfRoleAttendeee = 0,		/**<[en]Indicates attendee [cn]普通与会者 [ios:rename:Attendeee] */
    HWMConfRoleHost = 1,		/**<[en]Indicates host [cn]会议主持人 [ios:rename:Host] */
    HWMConfRoleAudience = 2,		/**<[en]Indicates audience [cn]观众 [ios:rename:Audience] */
    HWMConfRoleCohost = 3,		/**<[en]Indicates cohost [cn]联席主持人 [ios:rename:Cohost] */
    HWMConfRoleWaiting = 4,		/**<[en]Indicates waiting [cn]等候室成员 [ios:rename:Waiting] */
};

typedef NS_ENUM(NSInteger, HWMCloudRecordType) {
    HWMSDKCloudRecordStart = 0,		/**<[en]Indicates xxxx. [cn]开始录制 */
    HWMSDKCloudRecordPause = 1,		/**<[en]Indicates xxxx. [cn]暂停录制 */
    HWMSDKCloudRecordContinue = 2,		/**<[en]Indicates xxxx. [cn]继续录制 */
    HWMSDKCloudRecordStop = 3,		/**<[en]Indicates xxxx. [cn]停止录制 */
};

typedef NS_ENUM(NSInteger, HWMSwitchRoleStatusType) {
    HWMSwitchRoleStatusTypeStart = 0,		/**<[en]Indicates xxx [cn]角色转换开始 [ios:rename:Start] */
    HWMSwitchRoleStatusTypeEnd = 1,		/**<[en]Indicates xxx [cn]角色转换结束 [ios:rename:End] */
    HWMSwitchRoleStatusTypeTimeOut = 2,		/**<[en]Indicates xxx [cn]角色转换超时 [ios:rename:TimeOut] */
};

typedef NS_ENUM(NSInteger, HWMStreamType) {
    HWMStreamTypeNone = 0,		/**<[en] [cn]没有流 [ios:rename:none] */
    HWMStreamTypePicture = 1,		/**<[en] [cn]图片流 [ios:rename:picture] */
    HWMStreamTypeVideo = 2,		/**<[en] [cn]视频流 [ios:rename:video] */
};

typedef NS_ENUM(NSInteger, HWMAttendeeType) {
    HWMAttendeeTypeNormal = 0,		/**<[en]Indicates conference soft terminal user [cn]会议软终端用户 [ios:rename:Normal] */
    HWMAttendeeTypeTelepresence = 1,		/**<[en]Indicates telepresence user [cn]智真用户 [ios:rename:Telepresence] */
    HWMAttendeeTypeTerminal = 2,		/**<[en]Indicates conference room or hard terminal [cn]会议室或硬终端 [ios:rename:Terminal] */
    HWMAttendeeTypeOutside = 3,		/**<[en]Indicates outside attendee [cn]外部与会人 [ios:rename:Outside] */
    HWMAttendeeTypeCustomNumber = 4,		/**<[en]Indicates custom number [cn]自定义号码 [ios:rename:CustomNumber] */
    HWMAttendeeTypeMobile = 5,		/**<[en]Indicates user mobile phone number [cn]用户手机号码 [ios:rename:Mobile] */
    HWMAttendeeTypeAnonymous = 6,		/**<[en]Indicates anonymous user [cn]匿名用户 [ios:rename:Anonymous] */
    HWMAttendeeTypeTelephone = 7,		/**<[en]Indicates user telephone [cn]用户固定电话 [ios:rename:Telephone] */
    HWMAttendeeTypeBoard = 8,		/**<[en]Indicates board user [cn]白板用户 [ios:rename:Board] */
    HWMAttendeeTypeIdeaHub = 9,		/**<[en]Indicates ideahub user [cn]海思芯片的大屏设备 [ios:rename:IdeaHub] */
    HWMAttendeeTypeHWVision = 10,		/**<[en]Indicates hwvision user [cn]智慧屏 [ios:rename:HWVision] */
    HWMAttendeeTypeWeLink = 11,		/**<[en]Indicates welinkc user [cn]welink大众版 [ios:rename:WeLink] */
};

typedef NS_ENUM(NSInteger, HWMConfRecordMode) {
    HWMConfRecordModeDisable = 0,		/**<[en]Indicates disable record [cn]禁止录制 [ios:rename:Disable] */
    HWMConfRecordModeLive = 1,		/**<[en]Indicates live [cn]直播模式 [ios:rename:Live] */
    HWMConfRecordModeRecord = 2,		/**<[en]Indicates record broadcast [cn]录播模式 [ios:rename:Record] */
    HWMConfRecordModeLiveAndRecord = 3,		/**<[en]Indicates live broadcast and record broadcast [cn]直播 + 录播模式 [ios:rename:LiveAndRecord] */
};

typedef NS_ENUM(NSInteger, HWMConfAttendeeState) {
    HWMConfAttendeeStateInConf = 0,		/**<[en]Indicates in conference [cn]会议中 [ios:rename:InConf] */
    HWMConfAttendeeStateCalling = 1,		/**<[en]Indicates is calling [cn]正在呼叫 [ios:rename:Calling] */
    HWMConfAttendeeStateJoining = 2,		/**<[en]Indicates is joining conference [cn]正在加入会议 [ios:rename:Joining] */
    HWMConfAttendeeStateLeaved = 3,		/**<[en]Indicates have leaved [cn]已经离开 [ios:rename:Leaved] */
    HWMConfAttendeeStateNoExist = 4,		/**<[en]Indicates not exist [cn]用户不存在 [ios:rename:NoExist] */
    HWMConfAttendeeStateBusy = 5,		/**<[en]Indicates callee is busy [cn]被叫用户忙 [ios:rename:Busy] */
    HWMConfAttendeeStateNoAnswer = 6,		/**<[en]Indicates no answer [cn]用户无应答 [ios:rename:NoAnswer] */
    HWMConfAttendeeStateReject = 7,		/**<[en]Indicates user reject answer [cn]用户拒绝接听 [ios:rename:Reject] */
    HWMConfAttendeeStateFailed = 8,		/**<[en]Indicates call failed [cn]呼叫失败 [ios:rename:Failed] */
};

typedef NS_ENUM(NSInteger, HWMConfState) {
    HWMConfStateSchedule = 0,		/**<[en]Indicates schedule state [cn]预定状态 [ios:rename:Schedule] */
    HWMConfStateCreating = 1,		/**<[en]Indicates be creating state [cn]正在创建状态 [ios:rename:Creating] */
    HWMConfStateGoing = 2,		/**<[en]Indicates conf going state [cn]会议已经开始 [ios:rename:Going] */
    HWMConfStateDestroyed = 3,		/**<[en]Indicates conf is destroyed [cn]会议已经关闭 [ios:rename:Destroyed] */
};

typedef NS_ENUM(NSInteger, HWMVideoWndDisplayMode) {
    HWMSDKVideoWndDisplayZoom = 0,		/**<[en]Indicates stretch mode [cn]拉伸模式 */
    HWMSDKVideoWndDisplayBlackBorder = 1,		/**<[en]Indicates (no stretch) black border mode [cn](不拉伸)黑边模式 */
    HWMSDKVideoWndDisplayCrop = 2,		/**<[en]Indicates (no stretch) crop mode [cn](不拉伸)裁剪模式 */
    HWMSDKVideoWndDisplayAutoAdapt = 6,		/**<[en]Indicates auto adapt. [cn] 自适应模式，用于移动设备 */
};

typedef NS_ENUM(NSInteger, HWMVideoWndOrientation) {
    HWMSDKVideoWndLandscape = 0,		/**<[en]Indicates stretch mode [cn]横屏 */
    HWMSDKVideoWndPortrait = 1,		/**<[en]Indicates (no stretch) black border mode [cn]竖屏 */
};

typedef NS_ENUM(NSInteger, HWMVideoWndMirrorMode) {
    HWMVideoWndMirrorModeDefault = 0,		/**<[en]Indicates no mirror (default mode) [cn]0:不做镜像(默认值) [ios:rename:Default] */
    HWMVideoWndMirrorModeVertical = 1,		/**<[en]Indicates vertical mirror type(x axis mirror) [cn]1:垂直镜像(X轴镜像) [ios:rename:Vertical] */
    HWMVideoWndMirrorModeHorizontal = 2,		/**<[en]Indicates horizontal mirror type(y axis mirror) [cn]2:水平镜像(Y轴镜像) [ios:rename:Horizontal] */
};

typedef NS_ENUM(NSInteger, HWMDeviceType) {
    HWMDeviceTypeMic = 0,		/**<[en]Indicates microphone. [cn]麦克风 [ios:rename:Mic] */
    HWMDeviceTypeSpeaker = 1,		/**<[en]Indicates loudspeaker. [cn]扬声器 [ios:rename:Speaker] */
    HWMDeviceTypeVideo = 2,		/**<[en]Indicates camera. [cn]摄像头 [ios:rename:Video] */
};

typedef NS_ENUM(NSInteger, HWMDeviceOrient) {
    HWMDeviceOrientScreenPortrait = 0,		/**<[en]Indicates xxxx. [cn]竖屏，摄像头在上 [ios:rename:ScreenPortrait] */
    HWMDeviceOrientScreenLandScape = 1,		/**<[en]Indicates xxxx. [cn]横屏，摄像头在右 [ios:rename:ScreenLandScape] */
    HWMDeviceOrientScreenPeversePortrait = 2,		/**<[en]Indicates xxxx. [cn]反向竖屏，摄像头在下 [ios:rename:ScreenPeversePortrait] */
    HWMDeviceOrientScreenReverseLandscape = 3,		/**<[en]Indicates xxxx. [cn]反向横屏，摄像头在左 [ios:rename:ScreenReverseLandscape] */
};

typedef NS_ENUM(NSInteger, HWMSimCallPhase) {
    HWMSimCallPhaseOnSimCall = 0,		/**<[en]Indicates the phase on sim call in. [cn]sim卡来电时 [ios:rename:OnSimCall] */
    HWMSimCallPhaseAfterSimCall = 1,		/**<[en]Indicates the phase after sim call end. [cn]sim卡来电挂断后 [ios:rename:AfterSimCall] */
};

typedef NS_ENUM(NSInteger, HWMAudioIOType) {
    HWMAudioIOTypeInput = 0,		/**<[en]Indicates the input of audio. [cn]音频输入,麦克风等 [ios:rename:input] */
    HWMAudioIOTypeOutput = 1,		/**<[en]Indicates the output of audio. [cn]音频输出,扬声器或耳机等 [ios:rename:output] */
    HWMAudioIOTypeDuplex = 2,		/**<[en]Indicates the input and output of audio. [cn]音频输入和输出 [ios:rename:duplex] */
};

typedef NS_ENUM(NSInteger, HWMHowlStatus) {
    HWMHowlStatusNoHowls = 0,		/**<[en]Indicates xxxx. [cn]无啸叫 [ios:rename:NoHowls] */
    HWMHowlStatusInCallDetectHowls = 1,		/**<[en]Indicates xxxx. [cn]通话过程中检测出啸叫 [ios:rename:InCallDetectHowls] */
    HWMHowlStatusSignalsDetectHowls = 2,		/**<[en]Indicates xxxx. [cn] 信号音检测出啸叫 [ios:rename:SignalsDetectHowls] */
};

typedef NS_ENUM(NSInteger, HWMResumeState) {
    HWMResumeStateIdle = 0,		/**<[en]Indicates xxxx [cn]空闲状态 [ios:rename:Idle] */
    HWMResumeStateResuming = 1,		/**<[en]Indicates xxxx [cn]正在恢复(重连)中，应用程序应在此状态下提示用户 [ios:rename:Resuming] */
    HWMResumeStateResumeSuccess = 2,		/**<[en]Indicates xxxx [cn]恢复(重连)成功 [ios:rename:ResumeSuccess] */
};

typedef NS_ENUM(NSInteger, HWMClientDeviceType) {
    HWMClientDeviceTypeDesktop = 0,		/**<[en]desktop [cn]pc登录 [ios:rename:Desktop] */
    HWMClientDeviceTypeMobile = 1,		/**<[en]mobile [cn]移动端登录 [ios:rename:Mobile] */
    HWMClientDeviceTypePad = 2,		/**<[en]pad [cn]平板登录 [ios:rename:Pad] */
    HWMClientDeviceTypeSmartroom = 3,		/**<[en]smart room [cn]smart room版 [ios:rename:smartroom] */
    HWMClientDeviceTypeMiniPrograms = 4,		/**<[en]MiniPrograms [cn]小程序 [ios:rename:MiniPrograms] */
    HWMClientDeviceTypeWeb = 5,		/**<[en]Web [cn]浏览器 [ios:rename:web] */
    HWMClientDeviceTypeTV = 6,		/**<[en]TV [cn]TV版 [ios:rename:TV] */
    HWMClientDeviceTypeHardTerminal = 7,		/**<[en]HardTerminal [cn]硬终端 [ios:rename:HardTerminal] */
    HWMClientDeviceTypeThirdTerminal = 8,		/**<[en]ThirdTerminal [cn]友商终端 [ios:rename:ThirdTerminal] */
    HWMClientDeviceTypePSTN = 9,		/**<[en]PSTN [cn]PSTN [ios:rename:PSTN] */
    HWMClientDeviceTypeMCU = 10,		/**<[en]MCU [cn]MCU [ios:rename:MCU] */
    HWMClientDeviceTypeOther = 11,		/**<[en]other [cn]其他 [ios:rename:Other] */
    HWMSDKClientDeviceUnknown = 99,		/**<[en]unkown [cn]未知 */
};

typedef NS_ENUM(NSInteger, HWMConfInviteMode) {
    HWMConfInviteModeNormal = 0,		/**<[en]Indicates xxx [cn]正常入会 [ios:rename:Normal] */
    HWMConfInviteModeRetryOfNoStream = 1,		/**<[en]Indicates xxx [cn]无码流重连后入会 [ios:rename:RetryOfNoStream] */
    HWMConfInviteModeRetryOfOutnet = 2,		/**<[en]Indicates xxx [cn]断网重连后 [ios:rename:RetryOfOutnet] */
    HWMConfInviteModeRetryOfTlsUnestablish = 3,		/**<[en]Indicates xxx [cn]tls闪断 [ios:rename:RetryOfTlsUnestablish] */
    HWMConfInviteModeRetryOfPortChange = 4,		/**<[en]Indicates xxx [cn]端口切换 [ios:rename:RetryOfPortChange] */
    HWMConfInviteModeButt = 5,		/**<[ios:rename:Butt] */
};

typedef NS_ENUM(NSInteger, HWMCallType) {
    HWMCallTypeIPAudio = 0,		/**<[en]Indicates IP audio call [cn]IP语音呼叫 [ios:rename:IPAudio] */
    HWMCallTypeIPVideo = 1,		/**<[en]Indicates IP video call [cn]IP视频呼叫 [ios:rename:IPVideo] */
};

typedef NS_ENUM(NSInteger, HWMVmrType) {
    HWMSDKCommercial = 0,		/**<[en]Indicates VMR type. [cn]VMR模式，0商用 */
    HWMSDKFree = 1,		/**<[en]Indicates VMR type. [cn]VMR模式。1试用 */
};

typedef NS_ENUM(NSInteger, HWMLeaveConfMode) {
    HWMLeaveConfModeNormal = 7,		/**<[en]Indicates xxxx. [cn]正常离会 [ios:rename:Normal] */
    HWMLeaveConfModeNoStream = 8,		/**<[en]Indicates xxxx. [cn]无码流重连后离会 [ios:rename:NoStream] */
    HWMLeaveConfModeOutNet = 9,		/**<[en]Indicates xxxx. [cn]断网重连后 [ios:rename:OutNet] */
    HWMLeaveConfModeTlsUnestablish = 10,		/**<[en]Indicates xxxx. [cn]tls闪断 [ios:rename:TlsUnestablish] */
    HWMLeaveConfModeOnConfEnd = 11,		/**<[en]Indicates xxxx. [cn]服务器挂断 [ios:rename:OnConfEnd] */
    HWMLeaveConfModePortChange = 12,		/**<[en]Indicates xxxx. [cn]端口切换 [ios:rename:PortChange] */
    HWMLeaveConfModeNetBreak = 13,		/**<[en]Indicates xxxx. [cn]无码流探测断网离会 [ios:rename:NetBreak] */
    HWMLeaveConfModeOfflineTimeout = 14,		/**<[en]Indicates xxxx. [cn]断网重连超时离会 [ios:rename:OfflineTimeout] */
    HWMLeaveConfModeOnMmrRoomLeave = 15,		/**<[en]Indicates xxxx. [cn]mmr离会 [ios:rename:OnMmrRoomLeave] */
    HWMLeaveConfModeOnRtcRoomLeave = 16,		/**<[en]Indicates xxxx. [cn]rtc离会 [ios:rename:OnRtcRoomLeave] */
};

typedef NS_ENUM(NSInteger, HWMReconnectStatusMode) {
    HWMSDKStatusTypeNormal = 0,
    HWMSDKStatusTypeReconnecting = 1,
    HWMSDKStatusTypeReconnected = 2,
};

typedef NS_ENUM(NSInteger, HWMCameraPosition) {
    HWMCameraPositionBack = 0,		/**<[en]Indicates xxxx. [cn]后置摄像头 [ios:rename:Back] */
    HWMCameraPositionFront = 1,		/**<[en]Indicates xxxx. [cn]前置摄像头 [ios:rename:Front] */
    HWMCameraPositionNotUsed = 2,		/**<[en]Indicates xxxx. [cn]摄像头未使用 [ios:rename:NotUsed] */
    HWMCameraPositionAll = 3,		/**<[en]Indicates xxxx. [cn]不区分前后置摄像头(给PC和MAC端使用时, 用于设置本地画面的镜像模式) [ios:rename:All] */
};

typedef NS_ENUM(NSInteger, HWMCameraMirrorType) {
    HWMSDKMirrorNone = 0,		/**<[en]Indicates xxxx. [cn]不做镜像 */
    HWMSDKMirrorUpDown = 1,		/**<[en]Indicates xxxx. [cn]上下镜像 */
    HWMSDKMirrorLeftRight = 2,		/**<[en]Indicates xxxx. [cn]左右镜像 */
};

typedef NS_ENUM(NSInteger, HWMAudioVqeMode) {
    HWMSDKAudioVqeAuto = 1,		/**<[en]Indicates the audio vqe auto. [cn]自适应模型 */
    HWMSDKAudioVqeNormal = 2,		/**<[en]Indicates the audio vqe normal. [cn]个人电脑普通模式 */
    HWMSDKAudioVqeLoudspeaker = 3,		/**<[en]Indicates the audio vqe loudspeaker. [cn]支持调音台等扩音设备回声削波模式--超大会议室 */
    HWMSDKAudioVqeBoard = 4,		/**<[en]Indicates the audio vqe broad. [cn]电子白板模式 */
};

typedef NS_ENUM(NSInteger, HWMVideoFrameFormat) {
    HWMSDKVideoImageI420 = 100,		/**<[en]Indicates the I420. [cn]I420 */
    HWMSDKVideoImageYv12 = 101,		/**<[en]Indicates the YV12. [cn]YV12 */
    HWMSDKVideoImageYuy2 = 102,		/**<[en]Indicates the YUY2. [cn]YUY2 */
    HWMSDKVideoImageUyvy = 103,		/**<[en]Indicates the UYVY. [cn]UYVY */
    HWMSDKVideoImageNv12 = 104,		/**<[en]Indicates the NV12. [cn]NV12 */
    HWMSDKVideoImageNv21 = 105,		/**<[en]Indicates the NV21. [cn]NV21 */
    HWMSDKVideoImageArgb = 200,		/**<[en]Indicates the ARGB. [cn]ARGB */
    HWMSDKVideoImageRgb24 = 201,		/**<[en]Indicates the RGB24. [cn]RGB24 */
    HWMSDKVideoImageRgb565 = 202,		/**<[en]Indicates the RGB565. [cn]RGB565 */
    HWMSDKVideoImageBgraMac = 203,		/**<[en]Indicates the BGRA_MAC. [cn]BGRA_MAC */
    HWMSDKVideoImageArgb4444 = 204,		/**<[en]Indicates the ARGB4444. [cn]ARGB4444 */
    HWMSDKVideoImageArgb1555 = 205,		/**<[en]Indicates the ARGB1555. [cn]ARGB1555 */
    HWMSDKVideoImageRgba = 206,		/**<[en]Indicates the RGBA. [cn]RGBA */
    HWMSDKVideoImageBgra = 207,		/**<[en]Indicates the BGRA. [cn]BGRA */
    HWMSDKVideoImageJpeg = 300,		/**<[en]Indicates the JPEG. [cn]JPEG */
    HWMSDKVideoImageTextureOes = 400,		/**<[en]Indicates the TEXTURE_OES. [cn]TEXTURE_OES */
    HWMSDKVideoImageTexture2d = 401,		/**<[en]Indicates the TEXTURE_2D. [cn]TEXTURE_2D */
    HWMSDKVideoImageUnknown = 999,		/**<[en]Indicates the UNKNOWN. [cn]UNKNOWN */
};

typedef NS_ENUM(NSInteger, HWMVirtualBackgroundMode) {
    HWMVirtualBackgroundModeClose = 0,		/**<[en]Indicates close mode [cn]关闭背景虚化-默认 [ios:rename:Close] */
    HWMVirtualBackgroundModeOpen = 1,		/**<[en]Indicates open mode [cn]打开背景虚化 [ios:rename:Open] */
    HWMVirtualBackgroundModeImage = 2,		/**<[en]Indicates use image as background [cn]使用图片作为背景 [ios:rename:Image] */
};

typedef NS_ENUM(NSInteger, HWMParticipantCameraState) {
    HWMParticipantCameraStateClose = 0,		/**<[en]Indicates xxxx. [cn]摄像头关闭 [ios:rename:Close] */
    HWMParticipantCameraStateOpen = 1,		/**<[en]Indicates xxxx. [cn]摄像头打开 [ios:rename:Open] */
    HWMParticipantCameraStateUnknow = 2,		/**<[en]Indicates xxxx. [cn]摄像头状态未上报 [ios:rename:Unknow] */
    HWMParticipantCameraStateNoCamera = 3,		/**<[en]Indicates xxxx. [cn]无摄像头 [ios:rename:NoCamera] */
};

typedef NS_ENUM(NSInteger, HWMConfSupportLanguageType) {
    HWMConfSupportLanguageTypeOrigin = 1,		/**<[en]Indicates origin [cn]原声 [ios:rename:Origin] */
    HWMConfSupportLanguageType_CN = 2,		/**<[en]Indicates Chinese [cn]中文 [ios:rename:_CN] */
    HWMConfSupportLanguageType_EN = 3,		/**<[en]Indicates English [cn]英语 [ios:rename:_EN] */
    HWMConfSupportLanguageType_FR = 4,		/**<[en]Indicates French [cn]法语 [ios:rename:_FR] */
    HWMConfSupportLanguageType_DE = 5,		/**<[en]Indicates German [cn]德语 [ios:rename:_DE] */
    HWMConfSupportLanguageType_RU = 6,		/**<[en]Indicates Russian [cn]俄语 [ios:rename:_RU] */
    HWMConfSupportLanguageType_ES = 7,		/**<[en]Indicates Spanish [cn]西班牙语 [ios:rename:_ES] */
    HWMConfSupportLanguageType_PT = 8,		/**<[en]Indicates Portuguese [cn]葡萄牙语 [ios:rename:_PT] */
    HWMConfSupportLanguageType_JA = 9,		/**<[en]Indicates Japanese [cn]日语 [ios:rename:_JA] */
    HWMConfSupportLanguageType_KO = 10,		/**<[en]Indicates Korean [cn]韩语 [ios:rename:_KO] */
    HWMConfSupportLanguageType_AR = 11,		/**<[en]Indicates Arabic [cn]阿拉伯语 [ios:rename:_AR] */
    HWMConfSupportLanguageType_IT = 12,		/**<[en]Indicates Italian [cn]意大利语 [ios:rename:_IT] */
    HWMConfSupportLanguageType_CUSTOM1 = 13,		/**<[en]Indicates self define language 1 [cn]自定义语言1 [ios:rename:_CUSTOM1] */
    HWMConfSupportLanguageType_CUSTOM2 = 14,		/**<[en]Indicates self define language 2 [cn]自定义语言2 [ios:rename:_CUSTOM2] */
    HWMConfSupportLanguageType_CUSTOM3 = 15,		/**<[en]Indicates self define language 3 [cn]自定义语言3 [ios:rename:_CUSTOM3] */
    HWMConfSupportLanguageType_CUSTOM4 = 16,		/**<[en]Indicates self define language 4 [cn]自定义语言4 [ios:rename:_CUSTOM4] */
    HWMConfSupportLanguageType_CUSTOM5 = 17,		/**<[en]Indicates self define language 5 [cn]自定义语言5 [ios:rename:_CUSTOM5] */
    HWMConfSupportLanguageType_CUSTOM6 = 18,		/**<[en]Indicates self define language 6 [cn]自定义语言6 [ios:rename:_CUSTOM6] */
    HWMConfSupportLanguageType_CUSTOM7 = 19,		/**<[en]Indicates self define language 7 [cn]自定义语言7 [ios:rename:_CUSTOM7] */
    HWMConfSupportLanguageType_CUSTOM8 = 20,		/**<[en]Indicates self define language 8 [cn]自定义语言8 [ios:rename:_CUSTOM8] */
    HWMConfSupportLanguageType_CUSTOM9 = 21,		/**<[en]Indicates self define language 9 [cn]自定义语言9 [ios:rename:_CUSTOM9] */
    HWMConfSupportLanguageType_CUSTOM10 = 22,		/**<[en]Indicates self define language 10 [cn]自定义语言10 [ios:rename:_CUSTOM10] */
    HWMConfSupportLanguageType_CUSTOM11 = 23,		/**<[en]Indicates self define language 11 [cn]自定义语言11 [ios:rename:_CUSTOM11] */
    HWMConfSupportLanguageType_CUSTOM12 = 24,		/**<[en]Indicates self define language 12 [cn]自定义语言12 [ios:rename:_CUSTOM12] */
    HWMConfSupportLanguageType_CUSTOM13 = 25,		/**<[en]Indicates self define language 13 [cn]自定义语言13 [ios:rename:_CUSTOM13] */
    HWMConfSupportLanguageType_CUSTOM14 = 26,		/**<[en]Indicates self define language 14 [cn]自定义语言14 [ios:rename:_CUSTOM14] */
    HWMConfSupportLanguageType_CUSTOM15 = 27,		/**<[en]Indicates self define language 15 [cn]自定义语言15 [ios:rename:_CUSTOM15] */
    HWMConfSupportLanguageType_CUSTOM16 = 28,		/**<[en]Indicates self define language 16 [cn]自定义语言16 [ios:rename:_CUSTOM16] */
    HWMConfSupportLanguageType_CUSTOM17 = 29,		/**<[en]Indicates self define language 17 [cn]自定义语言17 [ios:rename:_CUSTOM17] */
    HWMConfSupportLanguageType_CUSTOM18 = 30,		/**<[en]Indicates self define language 18 [cn]自定义语言18 [ios:rename:_CUSTOM18] */
    HWMConfSupportLanguageType_CUSTOM19 = 31,		/**<[en]Indicates self define language 19 [cn]自定义语言19 [ios:rename:_CUSTOM19] */
    HWMConfSupportLanguageType_CUSTOM20 = 32,		/**<[en]Indicates self define language 20 [cn]自定义语言20 [ios:rename:_CUSTOM20] */
    HWMConfSupportLanguageTypeInvalid = 33,		/**<[en]Indicates xxxx [cn]无效值 [ios:rename:Invalid] */
};

typedef NS_ENUM(NSInteger, HWMEncryptMode) {
    HWMEncryptModeAuto = 0,		/**<[en]Indicates auto encrypt mode [cn]自适应加密 [ios:rename:Auto] */
    HWMEncryptModeMust = 1,		/**<[en]Indicates must encrypt mode [cn]强制加密 [ios:rename:Must] */
    HWMEncryptModeNone = 2,		/**<[en]Indicates none encrypt [cn]不加密 [ios:rename:None] */
};

typedef NS_ENUM(NSInteger, HWMConfUserType) {
    HWMConfUserTypeWeb = 0,		/**<[en]Indicates web type [cn]WEB方式 [ios:rename:Web] */
    HWMConfUserTypeMobile = 1,		/**<[en]Indicates mobile terminal [cn]移动软终端 [ios:rename:Mobile] */
    HWMConfUserTypePC = 2,		/**<[en]Indicates pc terminal [cn]PC软终端 [ios:rename:PC] */
};

typedef NS_ENUM(NSInteger, HWMInterpreterStateType) {
    HWMInterpreterStateTypeNormal = 0,		/**<[en]Indicates normal attendee interpreter. [cn]非传译员 [ios:rename:Normal] */
    HWMInterpreterStateTypeNotConfirm = 1,		/**<[en]Indicates unconfirmed interpreter. [cn]未确认的传译员 [ios:rename:NotConfirm] */
    HWMInterpreterStateTypeConfirmed = 2,		/**<[en]Indicates interpreter. [cn]已确认的传译员 [ios:rename:Confirmed] */
};

typedef NS_ENUM(NSInteger, HWMLocalRecordState) {
    HWMLocalRecordStateStopped = 0,		/**<[en]Indicates xxxx. [cn]本地录制未开始/已终止 [ios:rename:Stopped] */
    HWMLocalRecordStateRunning = 1,		/**<[en]Indicates xxxx. [cn]本地录制正在进行 [ios:rename:Running] */
    HWMLocalRecordStateSuspend = 2,		/**<[en]Indicates xxxx. [cn]本地录制已暂停 [ios:rename:Suspend] */
};

typedef NS_ENUM(NSInteger, HWMCloudRecordState) {
    HWMCloudRecordStateStopped = 0,		/**<[en]Indicates xxxx. [cn]云端录制已终止 [ios:rename:Stopped] */
    HWMCloudRecordStateRunning = 1,		/**<[en]Indicates xxxx. [cn]云端录制正在进行 [ios:rename:Running] */
    HWMCloudRecordStateSuspend = 2,		/**<[en]Indicates xxxx. [cn]云端录制暂停 [ios:rename:Suspend] */
};

typedef NS_ENUM(NSInteger, HWMArAssistState) {
    HWMSDKArAssistStateStop = 0,		/**<[en]Indicates stop. [cn]未开始AR协作 */
    HWMSDKArAssistStatePrepare = 1,		/**<[en]Indicates start. [cn]准备进行AR协作 */
    HWMSDKArAssistStateStart = 2,		/**<[en]Indicates start. [cn]正在进行AR协作 */
    HWMSDKArAssistStateFrozenScreen = 3,		/**<[en]Indicates was frozen screen. [cn]已冻屏 */
    HWMSDKArAssistStateUnfrozenScreen = 4,		/**<[en]Indicates is unfrozen screen. [cn]未冻屏 */
    HWMSDKArAssistStateOpenLaserPen = 5,		/**<[en]Indicates is open laser pen. [cn]开启激光笔 */
    HWMSDKArAssistStateCloseLaserPen = 6,		/**<[en]Indicates is close laser pen. [cn]关闭激光笔 */
};

typedef NS_ENUM(NSInteger, HWMConfServerType) {
    HWMConfServerTypeMCU = 0,		/**<[en]Indicates conference server type MCU [cn]MCU会议 [ios:rename:MCU] */
    HWMConfServerTypeMMR = 1,		/**<[en]Indicates conference server type MMR [cn]MMR会议 [ios:rename:MMR] */
    HWMConfServerTypeRTC = 5,		/**<[en]Indicates conference server type RTC [cn]RTC会议 [ios:rename:RTC] */
};

typedef NS_ENUM(NSInteger, HWMConferenceType) {
    HWMSDKConfTypeCommon = 0,		/**<[en]Indicates common conference. [cn]普通会议 */
    HWMSDKConfTypeCycle = 1,		/**<[en]Indicates cycle conference. [cn]周期会议 */
};

typedef NS_ENUM(NSInteger, HWMCycleType) {
    HWMSDKCycleTypeDay = 0,		/**<[en]Indicates cycle by day. [cn]以天为周期 */
    HWMSDKCycleTypeWeek = 1,		/**<[en]Indicates cycle by week. [cn]以周为周期 */
    HWMSDKCycleTypeMonth = 2,		/**<[en]Indicates cycle by month. [cn]以月为周期 */
};

typedef NS_ENUM(NSInteger, HWMDeviceFoldedStateType) {
    HWMDeviceFoldedStateTypeUnfolded = 0,		/**<[en]Indicates xxxx. [cn]设备摊开. [ios:rename:Unfolded] */
    HWMDeviceFoldedStateTypeFolded = 1,		/**<[en]Indicates xxxx. [cn]设备合上. [ios:rename:Folded] */
    HWMDeviceFoldedStateTypeParallelHorizon = 2,		/**<[en]Indicates xxxx. [cn]Indicates xxxx. [ios:rename:ParallelHorizon] */
};

typedef NS_ENUM(NSInteger, HWMGeneralWatchType) {
    HWMGeneralWatchTypeAutoMaxSpeaker = 0,		/**<[en]Indicates automatically select the max speaker. [cn]自动选看最大发言人 [ios:rename:AutoMaxSpeaker] */
    HWMGeneralWatchTypeSpecifiedSelection = 1,		/**<[en]Indicates specified select someone. [cn]指定选看某人 [ios:rename:SpecifiedSelection] */
    HWMGeneralWatchTypeNormalWatch = 2,		/**<[en]Indicates normal watch. [cn]普通选看，区分于最大发言人和手动选看特殊的人 [ios:rename:NormalWatch] */
};

typedef NS_ENUM(NSInteger, HWMGeneralWatchResolutionLevel) {
    HWMGeneralWatchResolutionLevelWatchResolutionSuper = 0,		/**<[en]Indicates resolution 1080P. [cn]超清- 1080P [ios:rename:WatchResolutionSuper] */
    HWMGeneralWatchResolutionLevelWatchResolutionHigh = 1,		/**<[en]Indicates resolution 720P. [cn]高清- 720P [ios:rename:WatchResolutionHigh] */
    HWMGeneralWatchResolutionLevelWatchResolutionStandard = 2,		/**<[en]Indicates resolution 360P. [cn]标清- 360P [ios:rename:WatchResolutionStandard] */
    HWMGeneralWatchResolutionLevelWatchResolutionSmooth = 3,		/**<[en]Indicates resolution 180P. [cn]流畅- 180P [ios:rename:WatchResolutionSmooth] */
    HWMGeneralWatchResolutionLevelWatchResolutionFuzz = 4,		/**<[en]Indicates resolution 90P. [cn]模糊- 90P [ios:rename:WatchResolutionFuzz] */
};

typedef NS_ENUM(NSInteger, HWMAudienceLayoutType) {
    HWMAudienceLayoutTypeSpeaker = 1,		/**<[en]Indicates audience watch speaker mode. [cn]观众观看演讲者模式 [ios:rename:Speaker] */
    HWMAudienceLayoutTypeGallery = 2,		/**<[en]Indicates audience watch multiave mode. [cn]观众观看画廊模式 [ios:rename:Gallery] */
};

typedef NS_ENUM(NSInteger, HWMVideoResolutionMode) {
    HWMVideoResolutionMode1080 = 0,		/**<[en]Indicates video resolution use 1080P. [cn]大画面最大选看分辨率1080P(所在企业要开通1080P权限) [ios:rename:1080] */
    HWMVideoResolutionMode720 = 1,		/**<[en]Indicates video resolution use 720P. [cn]大画面最大选看分辨率720P(不考虑设备性能) [ios:rename:720] */
    HWMVideoResolutionModeAuto = 2,		/**<[en]Indicates video use auto resolution. [cn]视频自动流畅优先(考虑设备性能匹配合适分辨率) [ios:rename:Auto] */
    HWMVideoResolutionMode360 = 3,		/**<[en]Indicates video resolution use 360P. [cn]大画面最大选看分辨率360P(考虑设备性能匹配合适分辨率) [ios:rename:360] */
};

typedef NS_ENUM(NSInteger, HWMClientRecordMode) {
    HWMClientRecordModeOnlyChair = 0,		/**<[en]Indicates allow only chair. [cn]仅允许主持人 [ios:rename:OnlyChair] */
    HWMClientRecordModeAll = 1,		/**<[en]Indicates allow all attendee. [cn]允许所有人 [ios:rename:All] */
    HWMClientRecordModePart = 2,		/**<[en]Indicates allow part attendee. [cn]允许部分人 [ios:rename:Part] */
};

typedef NS_ENUM(NSInteger, HWMSetLanguageChannelType) {
    HWMSDKSetLanguageChannelTypeListen = 0,		/**<[en]Indicates listen [cn]接听频道 */
    HWMSDKSetLanguageChannelTypeSpeak = 1,		/**<[en]Indicates speak [cn]发言频道 */
    HWMSDKSetLanguageChannelTypeListenAndSpeak = 2,		/**<[en]Indicates listen and speak [cn]接听和发言频道 */
    HWMSDKSetLanguageChannelTypeOriginalVoice = 3,		/**<[en]Indicates original voice [cn]背景原声 */
};

typedef NS_ENUM(NSInteger, HWMSubtitileLanguageType) {
    HWMSubtitileLanguageTypeChinese = 0,		/**<[en]Indicates ZH_CN [cn]简体中文 [ios:rename:Chinese] */
    HWMSubtitileLanguageTypeEnglish = 1,		/**<[en]Indicates EN_US [cn]美国英文 [ios:rename:English] */
};

typedef NS_ENUM(NSInteger, HWMConfModeType) {
    HWMSDKModeTypeFree = 0,		/**<[en]Indicates FREE [cn]自由模式 */
    HWMSDKModeTypeFixed = 1,		/**<[en]Indicates FIXED [cn]广播多画面 */
    HWMSDKModeTypeRollcall = 2,		/**<[en]Indicates ROLLCALL [cn]点名模式 */
    HWMSDKModeTypeBroadcast = 3,		/**<[en]Indicates BROADCAST [cn]广播单会场 */
};

typedef NS_ENUM(NSInteger, HWMConfShareMode) {
    HWMSDKModeSupportShare = 0,		/**<[en]Indicates support share [cn]支持共享 */
    HWMSDKModeNotSupportShare = 1,		/**<[en]Indicates not support share [cn]不支持共享 */
    HWMSDKModeShareNeedTips = 2,		/**<[en]Indicates share need tips [cn]共享需要提示 */
};

typedef NS_ENUM(NSInteger, HWMRefreshViewType) {
    HWMRefreshViewTypeLocalPreview = 1,		/**<[en]Indicates local video preview [cn]本地视频预览 [ios:rename:LocalPreview] */
    HWMRefreshViewTypeVideoView = 2,		/**<[en]Indicates general video [cn]普通视频 [ios:rename:VideoView] */
    HWMRefreshViewTypeAuxDataView = 3,		/**<[en]Indicates auxiliary data [cn]辅流视频 [ios:rename:AuxDataView] */
};

typedef NS_ENUM(NSInteger, HWMRefreshViewEvt) {
    HWMRefreshViewEvtAdd = 1,		/**<[en]Indicates add local view [cn]本地view添加 [ios:rename:Add] */
    HWMRefreshViewEvtRemove = 2,		/**<[en]Indicates remove local view [cn]本地view删除 [ios:rename:Remove] */
};

typedef NS_ENUM(NSInteger, HWMConfPairType) {
    HWMConfPairTypeIdle = 0,		/**<[ios:rename:Idle] */
    HWMConfPairTypeAuto = 1,		/**<[ios:rename:Auto] */
    HWMConfPairTypeManual = 2,		/**<[ios:rename:Manual] */
    HWMConfPairTypeQrcode = 3,		/**<[ios:rename:Qrcode] */
};

typedef NS_ENUM(NSInteger, HWMConfPairState) {
    HWMConfPairStateIdle = 0,		/**<[ios:rename:Idle] */
    HWMConfPairStatePairing = 1,		/**<[ios:rename:Pairing] */
    HWMConfPairStatePairSuccess = 2,		/**<[ios:rename:PairSuccess] */
    HWMConfPairStateCancelPairing = 3,		/**<[ios:rename:CancelPairing] */
    HWMConfPairStatePairFailed = 4,		/**<[ios:rename:PairFailed] */
};

typedef NS_ENUM(NSInteger, HWMAutoRegisterMode) {
    HWMSDKStateDisabled = 0,		/**<[en]Indicates disabled. [cn]不注册（默认） */
    HWMSDKStateAuto = 1,		/**<[en]Indicates auto. [cn]自动注册 */
    HWMSDKStateReused = 2,		/**<[en]Indicates reused. [cn]不注册但支持使用已有帐号（手机号匹配到的帐号） */
};

typedef NS_ENUM(NSInteger, HWMEncodeVersionType) {
    HWMEncodeVersionType10 = 10,		/**<[en]Indicates xxxx. [cn]使用1.0编码器，且不支持解码2.0的所有数据终端 [ios:rename:10] */
    HWMEncodeVersionType11 = 11,		/**<[en]Indicates xxxx. [cn]使用1.0编码器，且支持解码2.0的所有数据终端 [ios:rename:11] */
    HWMEncodeVersionType20 = 20,		/**<[en]Indicates xxxx. [cn]使用2.0编码器，且支持解码2.0的CloudLink硬终端 [ios:rename:20] */
    HWMEncodeVersionType30 = 30,		/**<[en]Indicates xxxx. [cn]使用3.0编码器的数据终端 [ios:rename:30] */
};

typedef NS_ENUM(NSInteger, HWMFirewallModeType) {
    HWMFirewallModeTypeStg = 0,		/**<[en]Indicates xxxx. [cn]只开放TCP 443 [ios:rename:Stg] */
    HWMFirewallModeTypeSvn = 1,		/**<[en]Indicates xxxx. [cn]只开放 TCP/UDP443 [ios:rename:Svn] */
    HWMFirewallModeTypeSbc = 2,		/**<[en]Indicates xxxx. [cn]SBC代理 [ios:rename:Sbc] */
    HWMFirewallModeTypeNull = 3,		/**<[en]Indicates xxxx. [cn]直连SC [ios:rename:Null] */
};

typedef NS_ENUM(NSInteger, HWMJoinStatusType) {
    HWMSDKJoinStatusNotInconf = -1,		/**<[en]Indicates not in conf. [cn]不在会议中 */
    HWMSDKJoinStatusInconf = 0,		/**<[en]Indicates in conf. [cn]正常入会 */
    HWMSDKJoinStatusAudienceWaiting = 1,		/**<[en]Indicates audience waiting. [cn]观众等待 */
    HWMSDKJoinStatusAudiencePauseInconf = 2,		/**<[en]Indicates audience pause in conf. [cn]观众会中暂停 */
    HWMSDKJoinStatusGuestWaitingBeforeConf = 3,		/**<[en]Indicates guest waiting before conf. [cn]来宾会前等待 */
    HWMSDKJoinStatusWaitingroom = 4,		/**<[en]Indicates waiting room. [cn]进入等候室 */
};

typedef NS_ENUM(NSInteger, HWMJoinFailureReason) {
    HWMSDKJoinFailureReasonConfNotStart = 0,		/**<[en]Indicates meeting not begin. [cn]会议未开始（默认） */
    HWMSDKJoinFailureReasonVmrConflict = 1,		/**<[en]Indicates VMR conflict. [cn]VMR会议冲突 */
};

typedef NS_ENUM(NSInteger, HWMIncludeOriginalVoiceType) {
    HWMSDKIncludeOriginalVoiceInvalid = 0,		/**<[en]Indicates invalid value [cn]默认无效值。当设置为该值时，是否包含背景原声属性不会被修改 */
    HWMSDKIncludeOriginalVoiceYes = 1,		/**<[en]Indicates include original voice [cn]包含背景原声 */
    HWMSDKIncludeOriginalVoiceNo = 2,		/**<[en]Indicates not include original voice [cn]不包含背景原声 */
};

typedef NS_ENUM(NSInteger, HWMInviteShareType) {
    HWMSDKCancelInviteShare = 0,		/**<[en] [cn]取消邀请共享 */
    HWMSDKInviteShare = 1,		/**<[en] [cn]邀请共享 */
    HWMSDKRejectShare = 2,		/**<[en] [cn]拒绝共享 */
    HWMSDKAgreeToShare = 3,		/**<[en] [cn]同意共享 */
};

typedef NS_ENUM(NSInteger, HWMLowNetWorkType) {
    HWMLowNetWorkTypeAudio = 0,		/**<[en]Indicates audio type [cn]音频弱网 [ios:rename:Audio] */
    HWMLowNetWorkTypeVideo = 1,		/**<[en]Indicates audio type [cn]视频弱网 [ios:rename:Video] */
    HWMLowNetWorkTypeDataconf = 2,		/**<[en]Indicates audio type [cn]数据会议弱网 [ios:rename:Dataconf] */
    HWMLowNetWorkTypeAnyone = 3,		/**<[en]Indicates audio type [cn]音,视,数任意一个弱网 [ios:rename:Anyone] */
};

typedef NS_ENUM(NSInteger, HWMTMMBRMsgType) {
    HWMTMMBRMsgTypeNone = 0,		/**<[en]Indicates no msg. [cn]无效消息 [ios:rename:None] */
    HWMTMMBRMsgTypeCameraOff = 1,		/**<[en]Indicates turn off camera. [cn]关闭摄像头 [ios:rename:CameraOff] */
    HWMTMMBRMsgTypeCameraOn = 2,		/**<[en]Indicates turn on camera. [cn]打开摄像头 [ios:rename:CameraOn] */
    HWMTMMBRMsgTypeDataClose = 3,		/**<[en]Indicates close data. [cn]关闭辅流 [ios:rename:DataClose] */
    HWMTMMBRMsgTypeDataOpen = 4,		/**<[en]Indicates open data. [cn]打开辅流 [ios:rename:DataOpen] */
};

typedef NS_ENUM(NSInteger, HWMRefreshViewMediaType) {
    HWMRefreshViewMediaTypeVideoPreview = 1,		/**<[en]Indicates local video preview [cn]本地视频预览 [ios:rename:VideoPreview] */
    HWMRefreshViewMediaTypeVideo = 2,		/**<[en]Indicates general video [cn]普通视频 [ios:rename:Video] */
    HWMRefreshViewMediaTypeData = 3,		/**<[en]Indicates auxiliary data [cn]辅流 [ios:rename:Data] */
};

typedef NS_ENUM(NSInteger, HWMRefreshViewEvent) {
    HWMRefreshViewEventAdd = 1,		/**<[en]Indicates add local view [cn]本地view添加 [ios:rename:Add] */
    HWMRefreshViewEventRemove = 2,		/**<[en]Indicates remove local view [cn]本地view删除 [ios:rename:Remove] */
};

typedef NS_ENUM(NSInteger, HWMBgTypeErr) {
    HWMSDKBgErrorImgPath = 0,		/**<无效的背景替换图片路径；建议上层提示：您使用的图片路径错误，请将图片放到正确的路径 */
    HWMSDKBgErrorImgType = 1,		/**<无效的背景替换图片格式；建议上层提示：您使用的图片格式错误，请使用正确格式的图片 */
    HWMSDKBgErrorImgSize = 2,		/**<背景替换图片大小错误；建议上层提示：您使用的图片尺寸不对，请使用尺寸合理的图片 */
    HWMSDKBgErrorSegmentPath = 3,		/**<分割进程exe路径错误，建议上层提示：虚拟背景资源路径错误，请您重新安装应用 */
    HWMSDKBgErrorLoadingSegmentProcess = 4,		/**<由于其他原因，比如进程文件已损坏，加载分割进程失败，建议上层提示：分割进程加载失败，功能不可用 */
    HWMSDKBgErrorReloadingSegment = 5,		/**<重新加载虚拟背景资源失败，建议上层提示：提示用户虚拟背景功能不可用，请重启应用 */
    HWMSDKBgStatusLoadingModelSuccess = 6,		/**<背景分割模型资源加载成功，建议上层在收到了该消息之后，才显示虚拟背景功能入口 */
    HWMSDKBgStatusLoadingModelOvertime = 7,		/**<背景分割模型资源加载超时，建议上层提示：提示用户模型加载超时，建议用户重启应用 */
    HWMSDKBgStatusLoadingModelFailed = 8,		/**<背景分割模型资源加载出错，建议上层提示：提示用户模型资源已损坏，请您重新安装应用 */
    HWMSDKBgStatusLoadingModel = 9,		/**<背景分割模型资源正在加载中 */
    HWMSDKBgStatusHandleFrameOvertime = 10,		/**<背景分割图像混合操作超时, 建议上层提示：虚拟背景切割头像出现异常，请您重新安装应用 */
    HWMSDKBgStatusHandleBuilt = 11,		/**<初始值, 不生效 */
};

typedef NS_ENUM(NSInteger, HWMAudioRouteType) {
    HWMAudioRouteTypeSpeak = 0,		/**<[en]Indicates xxx [cn]扬声器 [ios:rename:Speak] */
    HWMAudioRouteTypeEarpiece = 1,		/**<[en]Indicates xxx [cn]听筒 [ios:rename:Earpiece] */
    HWMAudioRouteTypeHeadset = 2,		/**<[en]Indicates xxx [cn]耳机 [ios:rename:Headset] */
    HWMAudioRouteTypeBluetooth = 3,		/**<[en]Indicates xxx [cn]蓝牙 [ios:rename:Bluetooth] */
};

typedef NS_ENUM(NSInteger, HWMCameraStartErrorType) {
    HWMSDKNone = 0,		/**<[en]Invited error none [cn]摄像头无错误 */
    HWMSDKCommonFailed = 1,		/**<[en]Invited common failed [cn]通用错误 */
    HWMSDKBeused = 2,		/**<[en]Invited be used [cn]被占用 */
    HWMSDKNoStream = 3,		/**<[en]Invited 5s no stream [cn]本地采集5秒无码流 */
};

typedef NS_ENUM(NSInteger, HWMCPUTooHighType) {
    HWMSDKCaloseCamera = 0,		/**<[en]Invited xxx [cn]cpu过高导致摄像头关闭 */
    HWMSDKForce720p = 1,		/**<[en]Invited xxx [cn]强制720P导致CPU过高 */
};

typedef NS_ENUM(NSInteger, HWMDevicePerformanceLevel) {
    HWMDevicePerformanceLevelLow = 0,		/**<[en]device performance level low [cn]设备性能低等级 [ios:rename:Low] */
    HWMDevicePerformanceLevelMiddle = 1,		/**<[en]device performance level middle [cn]设备性能中等级 [ios:rename:Middle] */
    HWMDevicePerformanceLevelHigh = 2,		/**<[en]device performance level high [cn]设备性能高等级 [ios:rename:High] */
};

typedef NS_ENUM(NSInteger, HWMAiModelType) {
    HWMSDKAiModelTypeAudioAinr = 1,
    HWMSDKAiModelTypeAudioVad = 2,
    HWMSDKAiModelTypeAudioHc = 3,
};

typedef NS_ENUM(NSInteger, HWMAiModelLoadType) {
    HWMSDKAiModelLoadTypeUnload = 0,
    HWMSDKAiModelLoadTypeLoad = 1,
};

typedef NS_ENUM(NSInteger, HWMCpuLevel) {
    HWMSDKCallCpuLevelLow = 0,
    HWMSDKCallCpuLevelMiddle = 1,
    HWMSDKCallCpuLevelHigh = 2,
};

typedef NS_ENUM(NSInteger, HWMSpeakerModeWndType) {
    HWMSDKSpeakerModeWndNormal = 0,		/**<[en]Indicates display window normal. [cn]正常显示（多窗口） */
    HWMSDKSpeakerModeWndSingle = 1,		/**<[en]Indicates single window. [cn]单窗口 */
};

typedef NS_ENUM(NSInteger, HWMDeviceStatus) {
    HWMSDKDeviceOff = 0,		/**<[en]xxxx. [cn]摄像头/扬声器/麦克风设备关闭 */
    HWMSDKDeviceOn = 1,		/**<[en]xxxx. [cn]摄像头/扬声器/麦克风设备开启 */
    HWMSDKDeviceNone = 2,		/**<[en]xxxx. [cn]无摄像头/扬声器/麦克风设备 */
};

typedef NS_ENUM(NSInteger, HWMAudioDeviceErrCode) {
    HWMSDKAudioDeviceErrNotifyOk = 0,		/**<成功 */
    HWMSDKAudioDeviceErrNotifyNodataRestartFailed = 1,		/**<音频设备无数据，重启失败 */
    HWMSDKAudioDeviceErrNotifyUnknow = 8209,		/**<未知错误 */
    HWMSDKAudioDeviceErrNotifyNoDevice = 8216,		/**<没有设备 */
    HWMSDKAudioDeviceErrNotifyOnExclusiveMode = 8224,		/**<音频设备处于独占模式，且被其他应用独占，可以通知用户取消独占模式 */
    HWMSDKAudioDeviceErrNotifyAccessDenied = 8225,		/**<音频设备API无法访问，可能是设备隐私权限设置问题，由于驱动问题或者防火墙设置的问题 */
    HWMSDKAudioDeviceErrNotifyEndpointCreateFailed = 8226,		/**<音频设备API终端创建失败，音频设备被拔出，或者已重新配置，禁用，删除了音频硬件或关联的硬件资源不可用。使用其他音频设备，重启或者更新驱动 */
    HWMSDKAudioDeviceErrNotifyMmsyserrInvalparam = 8227,		/**<音频设备API非法参数，目前已知是杀毒软件导致 */
    HWMSDKAudioDeviceErrNotifyMmsyserrNodriver = 8228,		/**<音频设备API返回无驱动，需要用户升级驱动 */
    HWMSDKAudioDeviceErrNotifyAudioServerNotRunning = 8229,		/**<用户windows audio服务未启动，或者启动失败 */
};

typedef NS_ENUM(NSInteger, HWMCommercialStatusType) {
    HWMSDKCommercialStatusInactive = 0,		/**<[en]Indicates commercial inactive. [cn]未激活 */
    HWMSDKCommercialStatusActivate = 1,		/**<[en]Indicates commercial activate. [cn]已激活 */
};

typedef NS_ENUM(NSInteger, HWMInviteOpenMicType) {
    HWMSDKOpenMicCommon = 0,		/**<[en]Indicates open mic common. [cn]普通开麦 */
    HWMSDKOpenMicRollcall = 1,		/**<[en]Indicates open mic rollcall. [cn]点名开麦 */
    HWMSDKOpenMicChair = 2,		/**<[en]Indicates open mic be chairman. [cn]申请或转移主持人开麦 */
    HWMSDKOpenMicMuteAll = 3,		/**<[en]Indicates mute/unmute all operate. [cn]全场静音/取消静音操作 */
};

typedef NS_ENUM(NSInteger, HWMAudioFrameType) {
    HWMSDKAudioFrameTypePcm16 = 0,
};

typedef NS_ENUM(NSInteger, HWMVideoImageFormat) {
    HWMSDKVideoImageFormatYuv420p = 0,		/**<[en]Indicates yuv 420P.[cn]yuv 420P格式 */
    HWMSDKVideoImageFormatYuv422i = 1,		/**<[en]Indicates yuv 422I.[cn]yuv 422I格式 */
    HWMSDKVideoImageFormatRgb24 = 2,		/**<[en]Indicates yuv RGB24.[cn]yuv RGB24格式 */
    HWMSDKVideoImageFormatRgba = 3,		/**<[en]Indicates yuv RGBA.[cn]yuv RGBA格式 */
    HWMSDKVideoImageFormatBgra = 4,		/**<[en]Indicates yuv BGRA.[cn]yuv BGRA格式 */
};

typedef NS_ENUM(NSInteger, HWMLocalRecordOperation) {
    HWMSDKLocalRecordOperationStart = 0,
    HWMSDKLocalRecordOperationStoped = 1,
    HWMSDKLocalRecordOperationPaused = 2,
    HWMSDKLocalRecordOperationResumed = 3,
};

typedef NS_ENUM(NSInteger, HWMStopLocalRecordReason) {
    HWMSDKStopLocalRecordInputUi = 0,
    HWMSDKStopLocalRecordLeaveConf = 1,
    HWMSDKStopLocalRecordRoleChanged = 2,
    HWMSDKStopLocalRecordDiskSpaceNotEnough = 3,
    HWMSDKStopLocalRecordCreateFileFailed = 4,
    HWMSDKStopLocalRecordAudioFrameEmpty = 5,
    HWMSDKStopLocalRecordAllocateBufferFailed = 6,
    HWMSDKStopLocalRecordMovetoWaitingroom = 7,
};

typedef NS_ENUM(NSInteger, HWMTargetLanguageType) {
    HWMSDKSubtitleLanguageDefault = 0,		/**<[en]Indicates is default lan. [cn]默认不翻译 */
    HWMSDKSubtitleLanguageCn = 1,		/**<[en]Indicates is Chinese lan. [cn]中文 */
    HWMSDKSubtitleLanguageEn = 2,		/**<[en]Indicates is English lan. [cn]英文 */
    HWMSDKSubtitleLanguageGe = 3,		/**<[en]Indicates is Germany lan. [cn]德文 */
};

typedef NS_ENUM(NSInteger, HWMChatPermission) {
    HWMSDKChatPermissionForbiddenAll = 1,		/**<[en]Indicates forbidden all[cn]全员禁止 */
    HWMSDKChatPermissionPrivateOnly = 2,		/**<[en]Indicates private only[cn]仅允许私聊 */
    HWMSDKChatPermissionPublicOnly = 3,		/**<[en]Indicates public only[cn]仅允许公开聊天 */
    HWMSDKChatPermissionFreeTalk = 4,		/**<[en]Indicates free talk[cn]允许自由聊天 */
};

typedef NS_ENUM(NSInteger, HWMAnnotationPermission) {
    HWMSDKAnnotationPermissionAll = 0,		/**<[en]Indicates allow all[cn]全员允许 */
    HWMSDKAnnotationPermissionSharerOnly = 1,		/**<[en]Indicates Sharer only[cn]仅允许共享者 */
};

typedef NS_ENUM(NSInteger, HWMAuthType) {
    HWMAuthTypeAccount = 0,		/**<[en]Indicates account+password authentication. [cn]帐号鉴权 [ios:rename:Account] */
    HWMAuthTypeAPPID = 1,		/**<[en]Indicates the app ID authentication. [cn]应用ID鉴权 [ios:rename:APPID] */
    HWMAuthTypeToken = 2,		/**<[en]Indicates the register token auth type. [cn]注册时鉴权 [ios:rename:Token] */
    HWMAuthTypeVerifyCode = 3,		/**<[en]Indicates the verifycode auth type. [cn]验证码登录 [ios:rename:VerifyCode] */
    HWMAuthTypeWeChat = 4,		/**<[en]Indicates the wechat auth type. [cn]微信登录验证 [ios:rename:WeChat] */
    HWMAuthTypeUSGToken = 5,		/**<[en]Indicates the refresh token auth type. [cn]usg长token登录usg [ios:rename:USGToken] */
};

typedef NS_ENUM(NSInteger, HWMClientType) {
    HWMClientTypeWin = 0,		/**<[en]Indicates win. [cn]win平台 [ios:rename:Win] */
    HWMClientTypeMac = 1,		/**<[en]Indicates mac. [cn]mac平台 [ios:rename:Mac] */
    HWMClientTypeAndroid = 2,		/**<[en]Indicates android. [cn]android平台 [ios:rename:Android] */
    HWMClientTypeIos = 3,		/**<[en]Indicates ios. [cn]ios平台 [ios:rename:Ios] */
    HWMClientTypeHWMTVMeeting = 4,		/**<[en]Indicates hwm tv. [cn]tv版 [ios:rename:HWMTVMeeting] */
    HWMClientTypeAndroidPad = 5,		/**<[en]Indicates android pad. [cn]android pad [ios:rename:AndroidPad] */
    HWMClientTypeIosPad = 6,		/**<[en]Indicates iPad. [cn]iPad平台 [ios:rename:IosPad] */
    HWMClientTypeMaxhubMeeting = 7,		/**<[en]Indicates maxhub . [cn]maxhub [ios:rename:MaxhubMeeting] */
    HWMClientTypeSmartroom = 8,		/**<[en]Indicates Indicates smartroom. [cn]smartroom [ios:rename:smartroom] */
};

typedef NS_ENUM(NSInteger, HWMLoginState) {
    HWMLoginStateUnLogin = 0,		/**<[en]Indicates xxxxxx. [cn]未登录 [ios:rename:UnLogin] */
    HWMLoginStateLogining = 1,		/**<[en]Indicates xxxxxx. [cn]登录中 [ios:rename:Logining] */
    HWMLoginStateLogined = 2,		/**<[en]Indicates xxxxxx. [cn]已登录 [ios:rename:Logined] */
    HWMLoginStateLogouting = 3,		/**<[en]Indicates xxxxxx. [cn]注销中 [ios:rename:Logouting] */
};

typedef NS_ENUM(NSInteger, HWMLoginConfServerType) {
    HWMLoginConfServerTypeMCU = 0,		/**<[en]Indicates xxxxxx. [cn] MCU会议 [ios:rename:MCU] */
    HWMLoginConfServerTypeMMR = 1,		/**<[en]Indicates xxxxxx. [cn] MMR会议 [ios:rename:MMR] */
    HWMLoginConfServerTypeRTC = 5,		/**<[en]Indicates xxxxxx. [cn] RTC会议 [ios:rename:RTC] */
};

typedef NS_ENUM(NSInteger, HWMLoginCorpType) {
    HWMLoginCorpTypeEnterprise = 0,		/**<[en]xxxxx. [cn]企业版 [ios:rename:Enterprise] */
    HWMLoginCorpTypePublicRegister = 1,		/**<[en]xxxxx. [cn]公共企业，手机、邮箱注册时会放到该企业内 [ios:rename:PublicRegister] */
    HWMLoginCorpTypePublicVision = 2,		/**<[en]xxxxx. [cn]公共企业，智慧屏用户自动开户时会放到该企业内 [ios:rename:PublicVision] */
    HWMLoginCorpTypePublicWhiteBoard = 3,		/**<[en]xxxxx. [cn]公共企业，大屏用户自动开户时会放到该企业内 [ios:rename:PublicWhiteBoard] */
    HWMLoginCorpTypePublicConsumer = 4,		/**<[en]xxxxx. [cn]公共TOC消费者企业 [ios:rename:PublicConsumer] */
    HWMLoginCorpTypeFree = 5,		/**<[en]xxxxx. [cn]免费版 [ios:rename:Free] */
    HWMLoginCorpTypeProfessional = 6,		/**<[en]xxxxx. [cn]专业版 [ios:rename:Professional] */
};

typedef NS_ENUM(NSInteger, HWMKickoutReason) {
    HWMKickoutReasonLoginElseWhere = 0,		/**<[en]Indicates the account has logged in to another terminal. [cn]在其他终端上登录 [ios:rename:LoginElseWhere] */
    HWMKickoutReasonAccountStopUse = 1,		/**<[en]Indicates the account is disabled by the server. [cn]帐号被服务端停止使用 [ios:rename:AccountStopUse] */
    HWMKickoutReasonAccountExpired = 2,		/**<[en]Indicates the account has expired. [cn]帐号过期 [ios:rename:AccountExpired] */
    HWMKickoutReasonAccountModifyPwd = 3,		/**<[en]Indicates the Password has modified. [cn]Portal修改密码 [ios:rename:AccountModifyPwd] */
};

typedef NS_ENUM(NSInteger, HWMPromptLanguageType) {
    HWMPromptLanguageTypeZHCN = 0,		/**<[en]Indicates ZH_CN [cn]简体中文 [ios:rename:ZHCN] */
    HWMPromptLanguageTypeENUS = 1,		/**<[en]Indicates EN_US [cn]美国英文 [ios:rename:ENUS] */
};

typedef NS_ENUM(NSInteger, HWMApnsEnvType) {
    HWMApnsEnvTypeProduction = 1,		/**<[en]Indicates production environment. [cn]生产环境 [ios:rename:Production] */
    HWMApnsEnvTypeTest = 2,		/**<[en]Indicates test environment. [cn]测试环境 [ios:rename:Test] */
};

typedef NS_ENUM(NSInteger, HWMApnsCertType) {
    HWMApnsCertType1 = 1,		/**<[en]Indicates certificate type 1. [cn]证书类型1 [ios:rename:1] */
    HWMApnsCertType2 = 2,		/**<[en]Indicates certificate type 2. [cn]证书类型2 [ios:rename:2] */
    HWMApnsCertType3 = 3,		/**<[en]Indicates certificate type 3. [cn]证书类型3 [ios:rename:3] */
    HWMApnsCertType4 = 4,		/**<[en]Indicates certificate type 4. [cn]证书类型4 [ios:rename:4] */
    HWMApnsCertType5 = 5,		/**<[en]Indicates certificate type 5. [cn]证书类型5 [ios:rename:5] */
};

typedef NS_ENUM(NSInteger, HWMPushOperationType) {
    HWMPushOperationTypeRegister = 0,		/**<[en]Indicates register the push service. [cn]注册PUSH服务 [ios:rename:Register] */
    HWMPushOperationTypeUnRegister = 1,		/**<[en]Indicates deregister the push service. [cn]注销PUSH服务 [ios:rename:UnRegister] */
    HWMPushOperationTypeClose = 2,		/**<[en]Indicates close the push service. [cn]关闭PUSH服务 [ios:rename:Close] */
};

typedef NS_ENUM(NSInteger, HWMPasswordType) {
    HWMPasswordTypeTemp = 0,		/**<[en]Indicates the temporary password. [cn]临时密码 [ios:rename:Temp] */
    HWMPasswordTypeForm = 1,		/**<[en]Indicates the standard password. [cn]正式密码 [ios:rename:Form] */
};

typedef NS_ENUM(NSInteger, HWMLoginClientType) {
    HWMLoginClientTypeClientWeb = 0,		/**<[en]Indicates web client. [cn]Web客户端类型 [ios:rename:ClientWeb] */
    HWMLoginClientTypeCloudlinkPC = 5,		/**<[en]cloudlink pc. [cn]cloudlink win类型 [ios:rename:CloudlinkPC] */
    HWMLoginClientTypeCloudlinkMobile = 6,		/**<[en]cloudlink mobile [cn]cloudlink 手机类型 [ios:rename:CloudlinkMobile] */
    HWMLoginClientTypeWorkplacePC = 16,		/**<[en]workplace pc [cn]workplace win类型 [ios:rename:WorkplacePC] */
    HWMLoginClientTypeCloudlinkPad = 24,		/**<[en]pad [cn]cloudlink pad类型 [ios:rename:CloudlinkPad] */
};

typedef NS_ENUM(NSInteger, HWMThirdClientType) {
    HWMThirdClientTypeMobile = 0,		/**<[en]Indicates mobile client. [cn]手机客户端 [ios:rename:Mobile] */
    HWMThirdClientTypePAD = 1,		/**<[en]Indicates PAD client. [cn]pad客户端 [ios:rename:PAD] */
    HWMThirdClientTypePC = 2,		/**<[en]Indicates PC client. [cn]pc客户端 [ios:rename:PC] */
    HWMThirdClientTypeTV = 3,		/**<[en]Indicates TV client. [cn]电视客户端； [ios:rename:TV] */
    HWMThirdClientTypeBoard = 4,		/**<[en]Indicates BOARD client. [cn]大屏客户端 [ios:rename:Board] */
};

typedef NS_ENUM(NSInteger, HWMUserCorpInfoNotifyType) {
    HWMUserCorpInfoNotifyTypeUserDelete = 0,		/**<[en] [cn]用户已注销 [ios:rename:UserDelete] */
    HWMUserCorpInfoNotifyTypeUserJoinTheCorp = 1,		/**<[en] [cn]您已加入新的企业（接受邀请、创建企业 变成新企业内的用户） [ios:rename:UserJoinTheCorp] */
    HWMUserCorpInfoNotifyTypeUserLeaveTheCorp = 2,		/**<[en] [cn]您已被移出当前企业（企业管理员删除、解散、 用户主动离开企业变成注册用户） [ios:rename:UserLeaveTheCorp] */
    HWMUserCorpInfoNotifyTypeUserReset = 3,		/**<[en] [cn]用户重置 [ios:rename:UserReset] */
    HWMUserCorpInfoNotifyTypeVmrChange = 4,		/**<[en] [cn]VMR重置 [ios:rename:VmrChange] */
    HWMUserCorpInfoNotifyTypeUserNameChange = 5,		/**<[en] [cn]用户名变更 [ios:rename:userNameChange] */
    HWMUserCorpInfoNotifyTypeUserStatusChange = 6,		/**<[en] [cn]用户状态变化 [ios:rename:userStatusChange] */
};

typedef NS_ENUM(NSInteger, HWMAdminType) {
    HWMSDKAdminInvild = -1,		/**<[en]Indicates unknow. [cn]无效值 */
    HWMSDKAdminDefault = 0,		/**<[en]Indicates default administrator. [cn]默认管理员 */
    HWMSDKAdminNormal = 1,		/**<[en]Indicates administrator. [cn]普通管理员 */
    HWMSDKAdminUser = 2,		/**<[en]Indicates user. [cn]非管理员 */
};

typedef NS_ENUM(NSInteger, HWMEnterpriseScale) {
    HWMEnterpriseScaleUnknown = 0,		/**<[en] [cn]未知 [ios:rename:Unknown] */
    HWMEnterpriseScaleMini = 1,		/**<[en] [cn]1-50人 [ios:rename:Mini] */
    HWMEnterpriseScaleSmall = 2,		/**<[en] [cn]51-100人 [ios:rename:Small] */
    HWMEnterpriseScaleMedium = 3,		/**<[en] [cn]101-250人 [ios:rename:Medium] */
    HWMEnterpriseScaleLarge = 4,		/**<[en] [cn]251-500人 [ios:rename:Large] */
    HWMEnterpriseScaleExtraLarge = 5,		/**<[en] [cn]500人以上 [ios:rename:ExtraLarge] */
};

typedef NS_ENUM(NSInteger, HWMEnterpriseIndustry) {
    HWMEnterpriseIndustryUnknown = 0,		/**<[en] [cn]未知 [ios:rename:Unknown] */
    HWMEnterpriseIndustryInternet = 1,		/**<[en] [cn]互联网 [ios:rename:Internet] */
    HWMEnterpriseIndustryITAndCommunications = 2,		/**<[en] [cn]IT&通信 [ios:rename:ITAndCommunications] */
    HWMEnterpriseIndustryEcommerce = 3,		/**<[en] [cn]电子商务 [ios:rename:Ecommerce] */
    HWMEnterpriseIndustryBigData = 4,		/**<[en] [cn]大数据 [ios:rename:BigData] */
    HWMEnterpriseIndustryGame = 5,		/**<[en] [cn]游戏 [ios:rename:Game] */
    HWMEnterpriseIndustryOnlineAudioAndVideo = 6,		/**<[en] [cn]在线音视频 [ios:rename:OnlineAudioAndVideo] */
    HWMEnterpriseIndustryConstructEstate = 7,		/**<[en] [cn]建筑和地产 [ios:rename:ConstructEstate] */
    HWMEnterpriseIndustryEducation = 8,		/**<[en] [cn]教育 [ios:rename:Education] */
    HWMEnterpriseIndustryFinance = 9,		/**<[en] [cn]金融 [ios:rename:Finance] */
    HWMEnterpriseIndustryMedia = 10,		/**<[en] [cn]媒资 [ios:rename:Media] */
    HWMEnterpriseIndustryEnergy = 11,		/**<[en] [cn]能源 [ios:rename:Energy] */
    HWMEnterpriseIndustryHealthcare = 12,		/**<[en] [cn]医疗健康 [ios:rename:Healthcare] */
    HWMEnterpriseIndustryGovernment = 13,		/**<[en] [cn]政府和政务 [ios:rename:Government] */
    HWMEnterpriseIndustryProductionAndManufacturing = 14,		/**<[en] [cn]生产和制造 [ios:rename:ProductionAndManufacturing] */
    HWMEnterpriseIndustryService = 15,		/**<[en] [cn]服务业 [ios:rename:Service] */
    HWMEnterpriseIndustryIndividual = 16,		/**<[en] [cn]个人用户 [ios:rename:Individual] */
    HWMEnterpriseIndustryOther = 17,		/**<[en] [cn]其它 [ios:rename:Other] */
};

typedef NS_ENUM(NSInteger, HWMVerifyType) {
    HWMSDKRegisterOrLogin = 0,		/**<[en] register or login by mobile or email [cn]手机或邮箱注册或登录 */
    HWMSDKModifyMessage = 1,		/**<[en] modify mobile or email [cn]修改手机或邮箱 */
    HWMSDKCancelCorp = 2,		/**<[en] cancel corp [cn]解散企业 */
    HWMSDKQuitCorp = 3,		/**<[en] quit corp [cn]退出企业 */
    HWMSDKDeregister = 4,		/**<[en] deregister account [cn]注销帐号 */
};

typedef NS_ENUM(NSInteger, HWMSliderCheckType) {
    HWMSliderCheckTypeLogin = 0,		/**<登录 [ios:rename:Login] */
    HWMSliderCheckTypeForgotPassword = 1,		/**<忘记密码 [ios:rename:ForgotPassword] */
    HWMSliderCheckTypeWelinkPortalLogin = 2,		/**<weLink portal登录 [ios:rename:WelinkPortalLogin] */
    HWMSliderCheckTypeUserVerifyCode = 3,		/**<用户验证码 [ios:rename:UserVerifyCode] */
};

typedef NS_ENUM(NSInteger, HWMUserIdType) {
    HWMUserIdTypeUserID = 0,		/**<[en]Indicates xxx. [cn]用户ID [ios:rename:UserID] */
    HWMUserIdTypeThirdAccount = 1,		/**<[en]Indicates xxx. [cn]第三方账户 [ios:rename:ThirdAccount] */
};

typedef NS_ENUM(NSInteger, HWMBindStatus) {
    HWMSDKNotBind = 0,		/**<[en]Indicates user has not binded. [cn]用户未绑定 */
    HWMSDKBindByApp = 1,		/**<[en]Indicates user has binded by app. [cn]通过APP绑定 */
    HWMSDKBindByWechat = 2,		/**<[en]Indicates user has binded by wechat. [cn]通过微信绑定 */
};

typedef NS_ENUM(NSInteger, HWMCorpApplicantStatus) {
    HWMSDKApplyApplicant = 1,		/**<[en]Indicates [cn]待审核 */
    HWMSDKApplyReject = 2,		/**<[en]Indicates [cn]已拒绝 */
};

typedef NS_ENUM(NSInteger, HWMUploadFileType) {
    HWMSDKUploadFileTypeComplaint = 0,		/**<[en]Indicates the complaint file. [cn]吐槽文件 */
    HWMSDKUploadFileTypeLog = 1,		/**<[en]Indicates the log file. [cn]日志文件 */
};

typedef NS_ENUM(NSInteger, HWMAuthServerType) {
    HWMSDKAuthServerTypeOauth2 = 0,		/**<[en]Indicates user has not binded. [cn]单点登录 */
};

typedef NS_ENUM(NSInteger, HWMLoginBasicConfRole) {
    HWMSDKLoginConfRoleAttendee = 0,		/**<[en]Indicates attendee [cn]普通与会者 */
    HWMSDKLoginConfRoleChairman = 1,		/**<[en]Indicates chairman [cn]主席 */
    HWMSDKLoginConfRoleAudience = 2,		/**<[en]Indicates audience [cn]观众 */
};

typedef NS_ENUM(NSInteger, HWMLoginSurveySubmitType) {
    HWMSDKLoginSurveySubmmitPresented = 0,		/**<[en]Indicates attendee [cn]呈现上报 */
    HWMSDKLoginSurveySubmmitNssSatisfy = 1,		/**<[en]Indicates chairman [cn]满意反馈 */
};

typedef NS_ENUM(NSInteger, HWMLoginSubEventType) {
    HWMSDKLoginHwNss = 1,		/**<[en]Indicates attendee [cn]华为满意度 */
    HWMSDKLoginConfNss = 2,		/**<[en]Indicates chairman [cn]会议满意 */
    HWMSDKLoginConfNotice = 3,		/**<[en]Indicates chairman [cn]公告 */
};

typedef NS_ENUM(NSInteger, HWMRedirectType) {
    HWMSDKNoRedirect = 0,		/**<[en]no need redirect. [cn]不需要重定向 */
    HWMSDKRedirectToOtherAddr = 1,		/**<[en]redirect to other huawei cloud server address. [cn]重定向到新的华为云服务地址 */
    HWMSDKRedirectToWelink = 2,		/**<[en]redirect to welink. [cn]重定向到welink */
    HWMSDKRedirectToIdeamanager = 3,		/**<[en]redirect to ideamanager. [cn]重定向到ideamanager */
};

typedef NS_ENUM(NSInteger, HWMActivePlatformType) {
    HWMSDKPlatformHuaweiMeeting = 0,		/**<[en]huawei meeting [cn]华为云 */
    HWMSDKPlatformWelink = 1,		/**<[en]welink [cn]welink */
    HWMSDKPlatformIdeamanager = 2,		/**<[en]ideamanager. [cn]ideamanager */
};

typedef NS_ENUM(NSInteger, HWMVerifyMode) {
    HWMVerifyModeNone = 0,		/**<[en]Indicates no authentication. [cn]不认证 [ios:rename:None] */
    HWMVerifyModeServer = 1,		/**<[en]Indicates authentication server. [cn]认证服务端 [ios:rename:Server] */
};

typedef NS_ENUM(NSInteger, HWMLoginChannelType) {
    HWMSDKChannelTypeNative = 0,		/**<[en]Indicates native [cn]原生模式 */
    HWMSDKChannelTypeSignalProxy = 1,		/**<[en]Indicates signal proxy [cn]信令代理模式 */
    HWMSDKChannelTypeMixed = 2,		/**<[en]Indicates mixed [cn]混合模式 */
};

typedef NS_ENUM(NSInteger, HWMNetworkAccessType) {
    HWMSDKAccessTypeAuto = 0,		/**<[en]Indicates auto [cn]默认值 */
    HWMSDKAccessTypeInner = 1,		/**<[en]Indicates inner [cn]公司内网接入 */
    HWMSDKAccessTypeOuter = 2,		/**<[en]Indicates outter [cn]公司外网接入 */
};

typedef NS_ENUM(NSInteger, HWMAuthTypePrivate) {
    HWMAuthTypePrivateAccount = 0,		/**<[en]Indicates account+password authentication. [cn]帐号鉴权 [ios:rename:Account] */
    HWMAuthTypePrivateMiddleToken = 1,		/**<[en]Indicates the ticket authentication. [cn]中台toke登录usg [ios:rename:MiddleToken] */
    HWMAuthTypePrivateAPPID = 2,		/**<[en]Indicates the app ID authentication. [cn]应用ID鉴权 [ios:rename:APPID] */
    HWMAuthTypePrivateAuthCode = 3,		/**<[en]Indicates the android smart auth type. [cn]安卓智慧屏 [ios:rename:AuthCode] */
    HWMAuthTypePrivateRegisterToken = 4,		/**<[en]Indicates the register token auth type. [cn]注册时鉴权 [ios:rename:RegisterToken] */
    HWMAuthTypePrivateVerifyCode = 5,		/**<[en]Indicates the verifycode auth type. [cn]验证码登录 [ios:rename:VerifyCode] */
    HWMAuthTypePrivateWeChat = 6,		/**<[en]Indicates the wechat auth type. [cn]微信登录验证 [ios:rename:WeChat] */
    HWMAuthTypePrivateUSGToken = 7,		/**<[en]Indicates the refresh token auth type. [cn]usg长token登录usg [ios:rename:USGToken] */
    HWMSDKAuthSsoPrivate = 8,		/**<[en]Indicates the sso auth type. [cn]sso登录验证 */
    HWMSDKAuthNoncePrivate = 9,		/**<[en]Indicates the nonce auth type. [cn]nonce登录验证 */
    HWMAuthTypePrivateButt = 10,		/**<[ios:rename:Butt] */
};

typedef NS_ENUM(NSInteger, HWMUserStatus) {
    HWMUserStatusUserEnable = 0,		/**<[en]Indicates user status enable. [cn]用户状态-启用 [ios:rename:userEnable] */
    HWMUserStatusUserDisable = 1,		/**<[en]Indicates user status disable.. [cn]用户状态-禁用 [ios:rename:userDisable] */
};

typedef NS_ENUM(NSInteger, HWMPairRoleType) {
    HWMSDKConfPairRoleServer = 0,
    HWMSDKConfPairRoleClient = 1,
};

typedef NS_ENUM(NSInteger, HWMCallPairReasonType) {
    HWMSDKConfCancelPairSoftTerminalInitiate = 0,		/**<[en]Indicates soft client initiate. [cn]软终端发起 */
    HWMSDKConfCancelPairHardTerminalInitiate = 1,		/**<[en]Indicates hard client initiate. [cn]硬终端发起 */
    HWMSDKConfCancelPairAbnormalHeartbeat = 2,		/**<[en]Indicates abnormal heartbeat. [cn]心跳异常 */
    HWMSDKConfCancelPairSendMakePairFail = 3,		/**<[en]Indicates sending "makepair" failed. [cn]发送"makepair"失败 */
    HWMSDKConfCancelPairSendMakePairResponseFail = 4,		/**<[en]Indicates sending "makepair_response" failed. [cn]发送"makepair_response"失败 */
    HWMSDKConfCancelPairSoftTerminalTimerError = 5,		/**<[en]Indicates soft client timer error. [cn]软终端定时器错误 */
    HWMSDKConfCancelPairParseMakePairResponseFail = 6,		/**<[en]Indicates parsing "makepair_response" info failed. [cn]解析"makepair_response"info消息失败 */
    HWMSDKConfCancelPairSoftTerminalSendNotifyToUiFail = 7,		/**<[en]Indicates sending notify to UI failed. [cn]软终端向UI发送消息失败 */
    HWMSDKConfCancelPairCommandRequestTimeout = 8,		/**<[en]Indicates no receiving command back when request time out. [cn]请求超时未收到 响应命令 */
    HWMSDKConfCancelPairSendCancelPairFail = 9,		/**<[en]Indicates sending "cancelpair" failed. [cn]发送"cancelpair"失败 */
    HWMSDKConfCancelPairHardTerminalTimerError = 10,		/**<[en]Indicates hard client timer error. [cn]硬终端定时器错误 */
    HWMSDKConfCancelPairAuthFail = 11,		/**<[en]Indicates authentication fail. [cn]配对鉴权失败 */
    HWMSDKConfCancelPairUserNumLimited = 12,		/**<[en]Indicates user number of paired limited. [cn]配对用户数达到上限 */
    HWMSDKConfCancelPairProhibitPair = 13,		/**<[en]Indicates pair prohibited. [cn]硬终端禁用配对 */
    HWMSDKConfCancelPairHardTerminalNotPermit = 14,		/**<[en]Indicates hard terminal not allow pair. [cn]硬终端拒绝配对 */
    HWMSDKConfCancelPairHardTerminalSendNotifyToUiFail = 15,		/**<[en]Indicates sending notify to UI failed. [cn]硬终端向UI发送消息失败 */
    HWMSDKConfCancelPairSoftTerminalSendSubscribeFail = 16,		/**<[en]Indicates soft client send subscribe failed. [cn]软终端发送订阅会话状态消息失败 */
    HWMSDKConfCancelPairSoftTerminalReceiveSubscribeResultTimeout = 17,		/**<[en]Indicates soft client receive subscribe result time out. [cn]软终端接收订阅结果超时 */
    HWMSDKConfCancelPairSoftTerminalSubscribeResultFail = 18,		/**<[en]Indicates soft client subscribe failed. [cn]软终端订阅会话状态失败 */
    HWMSDKConfCancelPairSoftTerminalSendConferenceLinkageFail = 19,		/**<[en]Indicates soft client sending conference linkage failed. [cn]软终端发送会议联动消息失败 */
    HWMSDKConfCancelPairSoftTerminalReceiveConferenceLinkageResultTimeout = 20,		/**<[en]Indicates soft client receive conference linkage result time out. [cn]软终端接收会议联动结果超时 */
    HWMSDKConfCancelPairSoftTerminalConferenceLinkageFail = 21,		/**<[en]Indicates soft client conference linkage failed. [cn]软终端会议联动失败 */
};

typedef NS_ENUM(NSInteger, HWMVideoWndType) {
    HWMVideoWndTypeRemote = 0,		/**<[en]Indicates remote video window [cn]远端视频窗口 [ios:rename:Remote] */
    HWMVideoWndTypeLocal = 1,		/**<[en]Indicates local video window [cn]本地视频窗口 [ios:rename:Local] */
    HWMVideoWndTypePreview = 2,		/**<[en]Indicates preview window [cn]预览窗口 [ios:rename:Preview] */
    HWMVideoWndTypeData = 3,		/**<[en]Indicates auxiliary data window [cn]辅流窗口 [ios:rename:Data] */
};

typedef NS_ENUM(NSInteger, HWMBasicConfRole) {
    HWMSDKBasicConfRoleAttendee = 0,		/**<[en]Indicates attendee [cn]普通与会者 */
    HWMSDKBasicConfRoleChairman = 1,		/**<[en]Indicates chairman [cn]主席 */
    HWMSDKBasicConfRoleAudience = 2,		/**<[en]Indicates audience [cn]观众 */
};

typedef NS_ENUM(NSInteger, HWMSurveySubmitType) {
    HWMSDKSurveySubmmitPresented = 0,		/**<[en]Indicates attendee [cn]呈现上报 */
    HWMSDKSurveySubmmitNssSatisfy = 1,		/**<[en]Indicates chairman [cn]满意反馈 */
};

typedef NS_ENUM(NSInteger, HWMSubEventType) {
    HWMSDKHwNss = 0,		/**<[en]Indicates attendee [cn]华为满意度 */
    HWMSDKConfNss = 1,		/**<[en]Indicates chairman [cn]会议满意 */
    HWMSDKConfNotice = 2,		/**<[en]Indicates chairman [cn]公告 */
};

typedef NS_ENUM(NSInteger, HWMNonceType) {
    HWMSDKQueryNonceVote = 0,		/**<[en]Indicates query vote nonce type [cn]投票Noce查询 */
};

typedef NS_ENUM(NSInteger, HWMShareConnectStatus) {
    HWMSDKShareConnectedSuccess = 0,		/**<[en]Indicates The share conference is successfully connected and can use share capability. [cn]共享会议连接成功，可以使用共享能力 */
    HWMSDKShareConnecting = 1,		/**<[en]Indicates The share conference is connecting. [cn]共享会议正在连接中 */
    HWMSDKShareConnectedFailed = 2,		/**<[en]Indicates The share conference is connected failed, no sharing capability. [cn]共享会议连接失败 */
};

typedef NS_ENUM(NSInteger, HWMShareType) {
    HWMSDKShareTypeScreen = 0,		/**<[en]Indicates screen sharing. [cn]屏幕共享 */
    HWMSDKShareTypeProgram = 1,		/**<[en]Indicates program sharing. [cn]程序共享 */
    HWMSDKShareTypeWhiteboard = 2,		/**<[en]Indicates whiteboard sharing. [cn]白板共享 */
};

typedef NS_ENUM(NSInteger, HWMShareWatchingStatus) {
    HWMSDKShareWatchingStatusStart = 0,		/**<[en]Indicates start to receive shares. [cn]开始观看共享 */
    HWMSDKShareWatchingStatusRecv = 1,		/**<[en]Indicates receiving and sharing. [cn]观看共享中 */
    HWMSDKShareWatchingStatusStop = 2,		/**<[en]Indicates stop receiving shares. [cn]停止观看共享 */
    HWMSDKShareWatchingStatusError = 3,		/**<[en]Indicates failed to receive sharing. [cn]观看共享异常 */
};

typedef NS_ENUM(NSInteger, HWMSharingStopReason) {
    HWMSDKTokenSnatched = 0,		/**<[en]Indicates the token is snatched. [cn]token被抢 */
    HWMSDKNetworkError = 1,		/**<[en]Indicates network error. [cn]网络异常 */
};

typedef NS_ENUM(NSInteger, HWMUtilsNetDetectQos) {
    HWMUtilsNetDetectQosGood = 0,		/**<[en]Indicates the net quality is excellent. [cn]网络质量优秀 [ios:rename:Good] */
    HWMUtilsNetDetectQosNormal = 1,		/**<[en]Indicates the net quality is good. [cn]网络质量一般 [ios:rename:Normal] */
    HWMUtilsNetDetectQosBad = 2,		/**<[en]Indicates the net quality is bad. [cn]网络质量差 [ios:rename:Bad] */
    HWMUtilsNetDetectQosDisconnect = 3,		/**<[en]Indicates could not connect. [cn]网络无法链接 [ios:rename:Disconnect] */
};

typedef NS_ENUM(NSInteger, HWMPenStyle) {
    HWMPenStyleSolid = 0,		/**<[en]Indicates the entity pen. [cn]实体笔 [ios:rename:Solid] */
    HWMPenStyleDash = 1,		/**<[en]Indicates the dash pen. [cn]虚线笔 [ios:rename:Dash] */
    HWMPenStyleDot = 2,		/**<[en]Indicates the dot pen. [cn]点笔 [ios:rename:Dot] */
    HWMPenStyleDashDot = 3,		/**<[en]Indicates the dash dot pen. [cn]虚线点笔 [ios:rename:DashDot] */
    HWMPenStyleDashDotDot = 4,		/**<[en]Indicates the dash dot dot pen. [cn]虚线点点笔 [ios:rename:DashDotDot] */
    HWMPenStyleOrdinary = 5,		/**<[en]Indicates an ordinary pen. [cn]普通画笔 [ios:rename:Ordinary] */
    HWMPenStyleInsideFrame = 6,		/**<[en]Indicates the inside frame pen. [cn]内框笔 [ios:rename:InsideFrame] */
    HWMPenStyleUserStyle = 7,		/**<[en]Indicates the user to customize the pen. [cn]用户自定义笔 [ios:rename:UserStyle] */
    HWMPenStyleAlternate = 8,		/**<[en]Indicates the alternate pen. [cn]间隔线笔 [ios:rename:Alternate] */
};

typedef NS_ENUM(NSInteger, HWMBrushStyle) {
    HWMBrushStyleNull = 0,		/**<[en]Indicates empty brush. [cn]空画刷 [ios:rename:Null] */
    HWMBrushStyleSolid = 1,		/**<[en]Indicates solid brush. [cn]实体画刷 [ios:rename:Solid] */
    HWMBrushStyleGradient = 2,		/**<[en]Indicates gradient brush. [cn]渐变画刷 [ios:rename:Gradient] */
    HWMBrushStyleHatch = 3,		/**<[en]Indicates hatch brush. [cn]阴影画刷 [ios:rename:Hatch] */
    HWMBrushStylePattern = 4,		/**<[en]Indicates pattern brush. [cn]图形画刷 [ios:rename:Pattern] */
};

typedef NS_ENUM(NSInteger, HWMHitTestMode) {
    HWMHitTestModeAll = 0,		/**<[en]Indicates all annotation in the region [cn]区域内的全部标注 [ios:rename:All] */
    HWMHitTestModeOthers = 1,		/**<[en]Indicates all annotation except someone [cn]除某人外的全部标注 [ios:rename:Others] */
    HWMHitTestModeSomeone = 2,		/**<[en]Indicates someone's annotation [cn]某人的标注 [ios:rename:Someone] */
};

typedef NS_ENUM(NSInteger, HWMRemoteControlType) {
    HWMSDKRemoteControlGet = 0,
    HWMSDKRemoteControlDel = 1,
    HWMSDKRemoteControlBeReject = 2,
    HWMSDKRemoteControlRequest = 3,
};

typedef NS_ENUM(NSInteger, HWMPenWidthLevelType) {
    HWMSDKPenWidthlevel1 = 1,
    HWMSDKPenWidthlevel2 = 2,
    HWMSDKPenWidthlevel3 = 3,
    HWMSDKPenWidthlevel4 = 4,
};

typedef NS_ENUM(NSInteger, HWMShareReconnectState) {
    HWMSDKShareReconnecting = 0,
    HWMSDKShareReconnecedSuccess = 1,
    HWMSDKShareReconnecedFailed = 2,
};

typedef NS_ENUM(NSInteger, HWMDataConfNotifyMessageType) {
    HWMSDKMessageOutOfMemory = 1,		/**<[en]out of memory notify. [cn]内存不足通知 */
    HWMSDKMessageMonitorRemoved = 2,		/**<[en]monitor moved. [cn]屏幕共享由于显示器被拔出而停止 */
};

#endif /* HWMSDKCommonDefine_h */
