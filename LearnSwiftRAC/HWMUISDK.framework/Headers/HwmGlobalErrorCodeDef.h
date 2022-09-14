 /**
 * @file HwmGlobalErrorCodeDef.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief 全局错误码枚举定义.
 */

#ifndef __HWM_GLOBAL_ERROR_CODE_DEF_H__
#define __HWM_GLOBAL_ERROR_CODE_DEF_H__


typedef enum tagSDKERR
{
    SDKERR_UNKOWN = -1,                                                     /**< [en]Unknown error. 
                                                                                 [cn]未知错误 */
    SDKERR_SUCCESS = 0,                                                     /**< [en]Success. 
                                                                                 [cn]成功 */

    /* CMS错误码 */
    CMS_CONF_BAD_REQUEST = 111070001,                                       /**< [en]Request error. 
                                                                                 [cn]请求错误 */
    CMS_CONF_INSUFFICIENT_PERMISSIONS = 111070002,                          /**< [en]Insufficient permissions. 
                                                                                 [cn]权限不足 */
    CMS_CONF_EXCEPTION = 111070003,                                         /**< [en]System processing failure. 
                                                                                 [cn]系统处理失败 */
    CMS_CONF_AUTH_FAIL = 111070004,                                         /**< [en]Meeting authentication failed. 
                                                                                 [cn]校验失败 */
    CMS_CONF_DATA_NOT_FOUND = 111070005,                                    /**< [en]Meeting does not exist. 
                                                                                 [cn]会议不存在 */
    CMS_VMR_DATA_NOT_FOUND = 111070006,                                     /**< [en]Personal cloud meeting room does not exist. 
                                                                                 [cn]个人云会议室不存在 */
    CMS_ACCESS_NUMBER_NOT_FOUND = 111070007,                                /**< [en]Meeting access number does not exist. 
                                                                                 [cn]会议接入号不存在 */
    CMS_CONF_NOTICE_MODEL_CONFIG_ERROR = 111070008,                         /**< [en]Meeting notification could not be sent. 
                                                                                 [cn]会议通知模板配置错误 */
    CMS_CONF_AUTHEN_NEED_PASSWORD = 111070009,                              /**< [en]Meeting password cannot be left blank. 
                                                                                 [cn]会议密码不能为空 */
    CMS_CONF_ROLE_AUTHENTICATION_FAILED = 111070010,                        /**< [en]Insufficient permissions to view this meeting. 
                                                                                 [cn]权限不足,无法查看会议 */
    CMS_CONF_GET_STARTED_CONF_EXCEPTION = 111070100,                        /**< [en]Get started meeting exception. 
                                                                                 [cn]获取召开会议异常 */
    CMS_CONF_START_EXCEPTION = 111070101,                                   /**< [en]Start meeting exception. 
                                                                                 [cn]开始会议异常 */
    CMS_CONF_APPLY_IVR_RESOURCE_EXCEPTION = 111070102,                      /**< [en]Apply IVR resource exception. 
                                                                                 [cn]申请IVR资源异常 */
    CMS_START_IVRCONF_EXCEPTION = 111070103,                                /**< [en]Start IVR meeting exception. 
                                                                                 [cn]开始IVR会议异常 */
    CMS_CONF_APPLY_PARTICIPANT_RESOURCE_EXCEPTION = 111070104,              /**< [en]Apply site resource exception. 
                                                                                 [cn]申请会场资源异常 */
    CMS_START_SUBCONF_EXCEPTION = 111070105,                                /**< [en]Start sub meeting exception. 
                                                                                 [cn]开始子会议异常 */
    CMS_CONF_ADD_CHANNEL_EXCEPTION = 111070106,                             /**< [en]Add channel exception. 
                                                                                 [cn]创建级联通道异常 */
    CMS_CONF_MOVE_AND_APPLY_RESOURCE_EXCEPTION = 111070107,                 /**< [en]Move and apply site resource exception. 
                                                                                 [cn]移动会场申请资源异常 */
    CMS_START_CONF_EXCEPTION = 111070108,                                   /**< [en]Start meeting exception. 
                                                                                 [cn]开启会议异常 */
    CMS_CONF_GET_STARTED_VMRCONF_EXCEPTION = 111070109,                     /**< [en]Get started cloud meeting exception. 
                                                                                 [cn]获取召开云会议室会议异常 */
    CMS_CONF_INVITE_PARTICIPANT_EXCEPTION = 111070110,                      /**< [en]Invite site exception. 
                                                                                 [cn]邀请会场异常 */
    CMS_REQUEST_TOKEN_IS_NULL = 111070111,                                  /**< [en]Request token is null. 
                                                                                 [cn]请求token为空 */
    CMS_CONF_RENAME_PARTICIPANT_EXCEPTION = 111070112,                      /**< [en]Rename site exception. 
                                                                                 [cn]重命名会场异常 */
    CMS_CONF_HANGUP_EXCEPTION = 111070113,                                  /**< [en]Hangup site exception. 
                                                                                 [cn]会场挂断异常 */
    CMS_CONF_BULK_HANGUP_EXCEPTION = 111070114,                             /**< [en]Mass hangup site exception. 
                                                                                 [cn]会场批量挂断异常 */
    CMS_CONF_DELETE_ATTENDEE_EXCEPTION = 111070115,                         /**< [en]Delete attendee exception. 
                                                                                 [cn]删除与会者异常 */
    CMS_CONF_BULK_DELETE_ATTENDEE_EXCEPTION = 111070116,                    /**< [en]Mass delete attendee exception. 
                                                                                 [cn]批量删除与会者异常 */
    CMS_SCHEDULE_CYCLE_CONF_EXCEPTION = 111070117,                          /**< [en]Book cycle meeting exception. 
                                                                                 [cn]预定周期会议异常 */
    CMS_MODIFY_CYCLE_CONF_EXCEPTION = 111070118,                            /**< [en]Modify cycle meeting exception. 
                                                                                 [cn]修改周期会议异常 */
    CMS_CREATE_CYCLE_CONF_EXCEPTION = 111070119,                            /**< [en]Create cycle meeting exception. 
                                                                                 [cn]创建周期会议异常 */
    CMS_REGION_DATA_NOT_FOUND = 111070120,                                  /**< [en]Region data not found. 
                                                                                 [cn]区域信息获取失败 */
    CMS_FORBIDDEN_SUBSCRIBE = 111070121,                                    /**< [en]Forbidden subscribe. 
                                                                                 [cn]禁止订阅 */
    CMS_CANCEL_SUBSCRIBE_FAIL = 111070122,                                  /**< [en]Cancel subscribe fail. 
                                                                                 [cn]取消订阅失败 */
    CMS_CONF_SYSPORTAL_SERVICE_EXCEPTION = 111071001,                       /**< [en]Sysportal service exception. 
                                                                                 [cn]Sysportal服务运行异常 */
    CMS_CONF_EXECUTOR_RUN_EXCEPTION = 111071002,                            /**< [en]Conf service exception. 
                                                                                 [cn]Conf服务运行异常 */
    CMS_CONF_ID_NOT_EXIST = 111071003,                                      /**< [en]Failed to create the meeting. Try again later. 
                                                                                 [cn]创建会议失败，请稍后重试 */
    CMS_VMR_ONLY_ALLOW_CHAIR_START_CONF = 111071004,                        /**< [en]This cloud meeting room does not allow guests to join before the host. 
                                                                                 [cn]VMR会议不允许来宾在主席入会前入会 */
    CMS_VMR_CONF_CONFLICT = 111071005,                                      /**< [en]This cloud meeting room has been scheduled for another meeting during this period. 
                                                                                 [cn]VMR会议时间冲突，该时间段此会议室已有预约会议 */
    CMS_VMR_IMMEDIATELY_CONF_DURATION_NOT_ENOUGH = 111071006,               /**< [en]Insufficient cloud meeting time. 
                                                                                 [cn]VMR会议时长不足 */
    CMS_VMR_SCHEDULE_RELATION_NOT_EXIST = 111071007,                        /**< [en]Meeting does not exist. 
                                                                                 [cn]VMR预约关系不存在 */
    CMS_CONF_QUERY_LIST_FAIL = 111071008,                                   /**< [en]Cannot query meeting list. 
                                                                                 [cn]查询会议列表失败 */
    CMS_CONF_MODIFY_IMMEDIATELY_VMR_FAIL = 111071009,                       /**< [en]Cannot change cloud meeting into immediate meeting. 
                                                                                 [cn]不支持修改VMR会议为立即会议 */
    CMS_CONF_MODIFY_VMR_FLAG_FAIL = 111071010,                              /**< [en]Cannot modify cloud meeting flag. 
                                                                                 [cn]不支持修改云会议室标识 */
    CMS_VMR_CONF_NOT_REACH_PREPARE_TIME = 111071011,                        /**< [en]The cloud meeting has not yet started. Please wait. 
                                                                                 [cn]VMR会议未到准备时间点 */
    CMS_CONF_NOT_VMR = 111071012,                                           /**< [en]Not cloud meeting. 
                                                                                 [cn]非VMR会议 */
    CMS_CONF_START_TIME_LESS_THAN_CURRENT_TIME = 111071013,                 /**< [en]Start time less than current time. 
                                                                                 [cn]会议开始时间不能早于系统当前时间 */
    CMS_CONF_START_TIME_OVER_MAX_SCHEDULE_TIME = 111071014,                 /**< [en]Start time over max schedule time. 
                                                                                 [cn]会议开始时间超出最大预订时间范围 */
    CMS_CONF_DURATION_OVER_RANGE = 111071015,                               /**< [en]Duration over range. 
                                                                                 [cn]时长超出范围 */
    CMS_CONF_PARAMS_NULL_EXCEPTION = 111071016,                             /**< [en]Cycle ID list null exception. 
                                                                                 [cn]取消周期会议ID列表不能为空 */
    CMS_CONF_SIZE_OVER_RANGE = 111071017,                                   /**< [en]Meeting size over range. 
                                                                                 [cn]与会方数超出范围 */
    CMS_CONF_MEDIA_TYPES_ILLEGAL = 111071018,                               /**< [en]Invalid media type. 
                                                                                 [cn]媒体类型非法 */
    CMS_CONF_CONFERENCE_TYPE_ILLEGAL = 111071019,                           /**< [en]Invalid meeting type. 
                                                                                 [cn]会议类型非法 */
    CMS_CONF_CYCLE_PARAMS_NULL_EXCEPTION = 111071020,                       /**< [en]Cycle params null exception. 
                                                                                 [cn]周期会议时,必须携带周期会议参数 */
    CMS_CONF_LENGTH_OVER_RANGE = 111071021,                                 /**< [en]Duration over range. 
                                                                                 [cn]会议时长超出范围 */
    CMS_CONF_SUBJECT_LENGTH_TOO_LONG = 111071022,                           /**< [en]Subject length too long. 
                                                                                 [cn]会议主题超长 */
    CMS_CONF_GROUPURI_LENGTH_TOO_LONG = 111071023,                          /**< [en]Group URI length too long. 
                                                                                 [cn]groupuri超长 */
    CMS_CONF_EMAIL_ILLEGAL = 111071024,                                     /**< [en]Invalid email address format. 
                                                                                 [cn]邮箱地址不合法 */
    CMS_CONF_SMS_ILLEGAL = 111071025,                                       /**< [en]Invalid mobile number format. 
                                                                                 [cn]手机号不合法 */
    CMS_CONF_DEPTNAME_TOO_LONG = 111071026,                                 /**< [en]Department name too long. 
                                                                                 [cn]部门名称过长 */
    CMS_CONF_WELCOME_VOICE_NOT_IN_RANGE = 111071027,                        /**< [en]Invalid welcome voice enable value. 
                                                                                 [cn]入会欢迎词开关不在范围内 */
    CMS_CONF_ENTER_PROMPT_NOT_IN_RANGE = 111071028,                         /**< [en]Invalid enter voice enable value. 
                                                                                 [cn]入会提示音开关不在范围内 */
    CMS_CONF_LEAVE_PROMPT_NOT_IN_RANGE = 111071029,                         /**< [en]Invalid leave voice enable value. 
                                                                                 [cn]离会提示音开关不在范围内 */
    CMS_CONF_REMINDERS_ILLEGAL = 111071030,                                 /**< [en]Invalid reminders value. 
                                                                                 [cn]会议提醒非法 */
    CMS_CONF_ALLOW_RECORD_NOT_IN_RANGE = 111071031,                         /**< [en]Invalid allow record value. 
                                                                                 [cn]会议是否启用网络录制取值非法 */
    CMS_CONF_AUTO_RECORD_NOT_IN_RANGE = 111071032,                          /**< [en]Invalid auto record value. 
                                                                                 [cn]会议是否自动启动录制取值非法 */
    CMS_CONF_USER_TYPE_NOT_IN_RANGE = 111071033,                            /**< [en]Invalid user type value. 
                                                                                 [cn]会预定者的用户类型非法 */
    CMS_CONF_ENCRYPT_MODE_NOT_IN_RANGE = 111071034,                         /**< [en]Invalid encrypt mode value. 
                                                                                 [cn]加密类型非法 */
    CMS_CONF_LANGUAGE_NOT_IN_RANGE = 111071035,                             /**< [en]Invalid language value. 
                                                                                 [cn]语言非法 */
    CMS_CONF_AUTO_PROLONG_NOT_IN_RANGE = 111071036,                         /**< [en]Invalid auto prolong value. 
                                                                                 [cn]是否自动延长会议取值非法 */
    CMS_CONF_VMRID_TOO_LONG = 111071037,                                    /**< [en]VmrID too long. 
                                                                                 [cn]vmrid超长 */
    CMS_CONF_RECORD_TYPE_NOT_IN_RANGE = 111071038,                          /**< [en]Invalid record type value. 
                                                                                 [cn]录播类型非法 */
    CMS_CONF_LIVE_ADDRESS_TOO_LONG = 111071039,                             /**< [en]Live address too long. 
                                                                                 [cn]主流直播地址超长 */
    CMS_CONF_AUX_ADDRESS_TOO_LONG = 111071040,                              /**< [en]Aux address too long. 
                                                                                 [cn]辅流直播地址超长 */
    CMS_CONF_CYCLE_PARAMS_STARTDATE_NULL = 111071041,                       /**< [en]Null start date for cycle meeting. 
                                                                                 [cn]周期会议时,起始日期为空 */
    CMS_CONF_CYCLE_PARAMS_ENDDATE_NULL = 111071042,                         /**< [en]Null end date for cycle meeting. 
                                                                                 [cn]周期会议时,结束日期为空 */
    CMS_CONF_CYCLE_PARAMS_CYCLE_ILLEGAL = 111071043,                        /**< [en]Invalid cycle type value for cycle meeting. 
                                                                                 [cn]周期会议时,周期类型非法 */
    CMS_CONF_CYCLE_PARAMS_INTERVAL_NOT_IN_RANGE = 111071044,                /**< [en]Invalid interval for cycle meeting. 
                                                                                 [cn]周期会议时,interval非法 */
    CMS_CONF_CYCLE_PARAMS_POINT_NULL_EXCEPTION = 111071045,                 /**< [en]Null point for cycle meeting. 
                                                                                 [cn]周期会议时,point为空 */
    CMS_CONF_CYCLE_PARAMS_POINT_NOT_IN_RANGE = 111071046,                   /**< [en]Invalid point value for cycle meeting. 
                                                                                 [cn]周期会议时,point非法 */
    CMS_CONF_VMR_FLAG_NOT_IN_RANGE = 111071047,                             /**< [en]Invalid vmr flag value. 
                                                                                 [cn]vmrFlag非法 */
    CMS_CONF_RECORD_AUX_STREAM_NOT_IN_RANGE = 111071048,                    /**< [en]Invalid record auxStream. 
                                                                                 [cn]recordAuxStream非法 */
    CMS_CONF_MULTI_STREAM_FLAG_NOT_IN_RANGE = 111071049,                    /**< [en]Invalid multiStream flag. 
                                                                                 [cn]multiStreamFlag非法 */
    CMS_CONF_AUDIENCE_FLAG_NOT_IN_RANGE = 111071050,                        /**< [en]Invalid audience flag. 
                                                                                 [cn]audienceFlag非法 */
    CMS_CONF_LIVE_CHANNEL_ID_NOT_EXISTED = 111071051,                       /**< [en]Invalid liveChannel ID. 
                                                                                 [cn]liveChannelID不存在 */
    CMS_CONF_ANONYMOUS_LOGIN_LOCKED = 111071052,                            /**< [en]Anonymous login is locked. Try again later. 
                                                                                 [cn]匿名登录锁定,请稍后重试 */
    CMS_CONF_LINK_LOGIN_LOCKED = 111071053,                                 /**< [en]Link login is locked. Try again later. 
                                                                                 [cn]链接登录锁定,请稍后重试 */
    CMS_CONF_IDENTIFIER_NOT_ENOUGH = 111071054,                             /**< [en]Not enough Meeting ID. 
                                                                                 [cn]会议ID不足 */
    CMS_CONF_IDENTIFIER_APPLY_FAILED = 111071055,                           /**< [en]Failed to apply meeting ID. 
                                                                                 [cn]会议ID申请失败 */
    CMS_CONF_IDENTIFIER_RELEASE_FAILED = 111071056,                         /**< [en]Failed to release meeting ID. 
                                                                                 [cn]会议ID释放失败 */
    CMS_CONF_LIVE_ROOM_ISUSED = 111071057,                                  /**< [en]Live room is used. 
                                                                                 [cn]直播房间已被占用 */
    CMS_NOT_ALLOWED_GUEST_FIRST_JOIN = 111071058,                           /**< [en]The meeting has not yet started. Please wait. 
                                                                                 [cn]当前会议还未召开,请耐心等待 */
    CMS_CONF_SIZE_OVER_COMMUNAL_VMR_MAXNUM = 111071059,                     /**< [en]Meeting size over range. 
                                                                                 [cn]与会方数超出上限 */
    CMS_ORG_CONCURRENT_PARTICIPANTS_NUMBER_IS_ZERO = 111071060,             /**< [en]The enterprise cannot create meetings because it has not purchased any concurrent meeting resources. 
                                                                                 [cn]企业未配置并发会议资源,无法使用个人会议ID和随机会议ID发起会议 */
    CMS_PARAMETER_VERIFIED_FAIL = 111071061,                                /**< [en]Parameter verify failed. 
                                                                                 [cn]参数校验失败 */
    CMS_JSON_CONVERSION_FAILED = 111071062,                                 /**< [en]Json conversion failed. 
                                                                                 [cn]JSON转换失败 */
    CMS_CONF_USER_NOT_VMR_OWNER = 111071063,                                /**< [en]Not cloud meeting room owner. 
                                                                                 [cn]非云会议室拥有者 */
    CMS_VMR_CONF_CONFLICT_AS_VMR_ALREADY_STARTED = 111071064,               /**< [en]This cloud meeting room has been started for another meeting during this period. 
                                                                                 [cn]VMR会议冲突,当前已有会议正在召开 */
    CMS_CONF_MODIFY_FAIL_AS_CONF_ALREADY_STARTED = 111071065,               /**< [en]This meeting cannot be modified because it is already started. 
                                                                                 [cn]正在召开会议,无法编辑会议详情 */
    CMS_CONF_ATTENDEES_NUMBER_EXCEED_LIMIT = 111071066,                     /**< [en]Attendees amount over range. 
                                                                                 [cn]与会方数量超出上限 */
    CMS_CONF_CANCEL_FAIL_AS_CONF_STARTED = 111071067,                       /**< [en]This meeting cannot be canceled because it is already started. 
                                                                                 [cn]会议正在召开中，不允许取消会议 */
    CMS_CONF_PWD_ENCRYPT_FAILED = 111071068,                                /**< [en]Meeting password encrypt failed. 
                                                                                 [cn]会议密码加密失败 */
    CMS_CONF_NOCONF_IN_SELECTED_TIME = 111071069,                           /**< [en]No meeting during this period. 
                                                                                 [cn]选定的时间中没有会议 */
    CMS_SUB_CYCCONF_CANNOT_MODIFY_LIVE_ROOM = 111071070,                    /**< [en]Sub cycle meeting cannot modify live room. 
                                                                                 [cn]周期会议子会议不允许修改直播房间 */
    CMS_STOP_ONLINE_CONF_EXCEPTION = 111071071,                             /**< [en]Stop online meeting exception. 
                                                                                 [cn]结束会议失败 */
    CMS_CONF_CLOSED_RECENTLY = 111071072,                                   /**< [en]Meeting is ended. 
                                                                                 [cn]会议已经结束 */
    CMS_CONF_NOT_ALLOW_ANONYMOUS = 111071073,                               /**< [en]Not allow anonymous user. 
                                                                                 [cn]会议不允许匿名用户呼入 */
    CMS_CONF_ONLY_ALLOW_USER_IN_ORG = 111071074,                            /**< [en]Only allow user in organization. 
                                                                                 [cn]会议只允许企业内用户呼入 */
    CMS_CONF_ONLY_ALLOW_USER_INVITED = 111071075,                           /**< [en]Only allow invited user. 
                                                                                 [cn]会议只允许被邀请用户呼入 */
    CMS_BATCH_EXPORT_HIS_CONF_LIST_CONFLICT = 111071076,                    /**< [en]Batch export task for history meeting list during this period. 
                                                                                 [cn]当前有正在执行的批量导出任务 */
    CMS_CONF_ONLY_ALLOW_USER_INVITED_AND_USER_IN_ORG = 111071077,           /**< [en]Only allow invited user and user in organization. 
                                                                                 [cn]会议只允许被邀请或者企业内用户用户呼入 */
    CMS_WELINK_C_CONCURRENT_PARTICIPANTS_NUMBER_IS_NOT_ENOUGH = 111071078,  /**< [en]Max current participants amount reached. 
                                                                                 [cn]企业单会议并发方数已达上限 */
    CMS_CONF_CTD_PARAM_ILLEGAL = 111071079,                                 /**< [en]Invalid CTD param. 
                                                                                 [cn]ctd会议参数不合法 */
    CMS_GUEST_PWD_ILLEGAL = 111071080,                                      /**< [en]Invalid guest password. 
                                                                                 [cn]来宾密码不合法 */
    CMS_GUEST_PWD_CONFLICT_WITH_CONF_ID = 111071081,                        /**< [en]Guest password conflict with meeting ID. 
                                                                                 [cn]来宾密码与会议ID冲突 */
    CMS_CONF_NUM_UP_TO_LIMIT = 111071082,                                   /**< [en]Max meeting amount reached. 
                                                                                 [cn]会议数达到上限 */
    CMS_CONF_RANDOM_INVALID = 111071083,                                    /**< [en]Invalid meeting random number. 
                                                                                 [cn]无效的会议随机数 */
    CMS_EXPORT_HIS_CONF_UP_TO_LIMIT = 111071084,                            /**< [en]Max export history meeting list times reached. 
                                                                                 [cn]导出历史会议次数超出允许的值 */
    CMS_MULTI_PIC_TOO_MANY_LAYOUTS = 111071085,                             /**< [en]Max multi view layouts reached. 
                                                                                 [cn]会议多画面布局超出限制 */
    CMS_MULTI_PIC_MANUAL_TYPE_INVALID = 111071086,                          /**< [en]Max multi view invalid manual type. 
                                                                                 [cn]会议多画面模式非法 */
    CMS_MULTI_PIC_TOO_MANY_SUBPICS = 111071087,                             /**< [en]Max multi view sub view amount reached. 
                                                                                 [cn]会议多画面子画面个数超出限制 */
    CMS_MULTI_PIC_TOO_MANY_SUBNUMBERS = 111071088,                          /**< [en]Max multi view sub view numbers reached. 
                                                                                 [cn]会议多画面子画面会场数超出限制 */
    CMS_WEBINAR_COMMON_NON_CONVERT = 111071089,                             /**< [en]Webinar and common meeting cannot be converted to each other. 
                                                                                 [cn]网络研讨会不能修改为普通会议,普通会议也不能修改为网络研讨会 */
    CMS_NOT_ALLOW_AUDIENCE = 111071090,                                     /**< [en]Not allow add audience. 
                                                                                 [cn]不支持添加观众 */
    CMS_CONF_PWD_AUTH_FAILED = 111071091,                                   /**< [en]Meeting password authentication failed. 
                                                                                 [cn]密码错误 */
    CMS_FILE_EXPORT_TASK_FAILED = 111071092,                                /**< [en]File export task failed. 
                                                                                 [cn]导出文件任务失败 */
    CMS_FILE_EXPORT_TASK_DOWNLOADING = 111071093,                           /**< [en]File export task is downloading. 
                                                                                 [cn]导出文件正在处理中 */
    CMS_CONF_FORBID_AUDIENCE_JOIN = 111071094,                              /**< [en]Not allow audience to join. 
                                                                                 [cn]会议不允许观众入会 */
    CMS_CONF_NEED_GET_WEBINAR_CONF_DTO = 111071095,                         /**< [en]Need to get WEBINAR_CONF_DTO object. 
                                                                                 [cn]需要获取WEBINAR_CONF_DTO对象 */
    CMS_CUSTOM_LANGUAGE_NUM_OVER_RANGE = 111071096,                         /**< [en]User-defined languages over range. 
                                                                                 [cn]自定义语言个数超出范围 */
    CMS_ORG_NOT_SUPPORT_SIMULTANEOUS_INTERPRETATION = 111071097,            /**< [en]Your enterprise does not support simultaneous interpretation. 
                                                                                 [cn]企业不支持同声传译 */
    CMS_NEED_SET_INTERPRETER_GROUPS = 111071098,                            /**< [en]Need to set interpreter groups. 
                                                                                 [cn]需要设置传译组信息 */
    CMS_INTERPRETER_LANGUAGE_ILLEGAL = 111071099,                           /**< [en]Invalid interpretation language. 
                                                                                 [cn]传译组语言非法 */
    CMS_CONF_LANGUAGE_NUM_UP_TO_MAX = 111071100,                            /**< [en]Max languages in a meeting are reached. 
                                                                                 [cn]单会议最大支持16种语言 */
    CMS_INTERPRETER_GROUP_ID_REPEATED = 111071101,                          /**< [en]This interpreter group ID already exists. 
                                                                                 [cn]传译组的组号重复 */
    CMS_INTERPRETER_NUM_IN_ONE_GROUP_UP_TO_MAX = 111071102,                 /**< [en]Max interpreters in the interpreter group reached. 
                                                                                 [cn]传译组中传译员的个数达到上限 */
    CMS_INTERPRETER_REPEATED = 111071103,                                   /**< [en]This interpreter already exists in an interpreter group. 
                                                                                 [cn]传译员重复 */
    CMS_INVALID_INTERPRETER = 111071104,                                    /**< [en]Invalid interpreter account. 
                                                                                 [cn]传译员帐号不存在 */
    CMS_GUEST_PWD_CONFLICT_WITH_CHAIR_PWD = 111071105,                      /**< [en]Guest password conflict with chairman password. 
                                                                                 [cn]来宾密码与主席密码冲突 */
    CMS_ONLINE_CONF_IN_COMMUNAL = 111071106,                                /**< [en]Meeting is holding. 
                                                                                 [cn]云会议室已有会议正在召开 */
    CMS_AUDIENCE_PWD_ILLEGAL = 111071107,                                   /**< [en]Invalid audience password. 
                                                                                 [cn]观众密码不合法 */
    CMS_AUDIENCE_PWD_CONFLICT_WITH_CONF_ID = 111071108,                     /**< [en]Audience password conflict with meeting id. 
                                                                                 [cn]观众密码与会议ID冲突 */
    CMS_AUDIENCE_PWD_CONFLICT_WITH_CHAIR_PWD = 111071109,                   /**< [en]Audience password conflict with chairman password. 
                                                                                 [cn]观众密码与主席密码冲突 */
    CMS_ONLY_RTC_CONF_SUPPORT_E2E_ENCRYPT = 111071110,                      /**< [en]Only RTC meeting support E2E encrypt. 
                                                                                 [cn]非RTC会议不支持端到端加密 */
    CMS_AUDIENCE_PWD_CONFLICT_WITH_GUEST_PWD = 111071111,                   /**< [en]Audience password conflict with guest password. 
                                                                                 [cn]观众密码与来宾密码冲突 */
    CMS_VMRIDTYPE_CANNOT_MODIFY = 111071112,                                /**< [en]Cloud meeting room ID type cannot be modified. 
                                                                                 [cn]不支持修改会议ID类型 */
    CMS_VMRID_CANNOT_MODIFY = 111071113,                                    /**< [en]Cloud meeting room type cannot be modified. 
                                                                                 [cn]不支持修改VMR类型 */
    CMS_VMR_FLAG_CANNOT_MODIFY = 111071114,                                 /**< [en]Cloud meeting room flag cannot be modified. 
                                                                                 [cn]不支持修改VMR标识 */
    CMS_SUB_CYCCONF_MODIFY_TIME_OVER_RANGE = 111071119,                     /**< [en]Sub cycle meeting modify time over range. 
                                                                                 [cn]周期会议修改时间超出范围 */
    CMS_CONF_APPLY_RESOURCE_FAILED = 111072001,                             /**< [en]Application for meeting resources failed. 
                                                                                 [cn]申请资源失败 */
    CMS_CONF_RELEASE_RESOURCE_FAILED = 111072002,                           /**< [en]Failed to release meeting resources. 
                                                                                 [cn]释放资源失败 */
    CMS_CONF_IS_CLOSING = 111072003,                                        /**< [en]The meeting is ending. 
                                                                                 [cn]会议正在结束 */
    CMS_CONF_IS_STARTING = 111072004,                                       /**< [en]The meeting is starting. 
                                                                                 [cn]会议正在开始 */
    CMS_CONF_NOT_STARTED = 111072005,                                       /**< [en]The meeting has not yet started. 
                                                                                 [cn]会议还未开始 */
    CMS_CONF_IS_CLOSED = 111072006,                                         /**< [en]The meeting has ended. 
                                                                                 [cn]会议已经结束 */
    CMS_CONF_INVITE_PARTICIPANT_FAILED = 111072007,                         /**< [en]Site invitation failed. 
                                                                                 [cn]邀请会场失败 */
    CMS_CONF_PARTICIPANT_NOT_EXIST = 111072008,                             /**< [en]Site does not exist. 
                                                                                 [cn]会场不存在 */
    CMS_CONF_PARTICIPANT_HANG_UP_FAILED = 111072009,                        /**< [en]Failed to disconnect the site. 
                                                                                 [cn]挂断会场失败 */
    CMS_CONF_NOT_SUPPORT = 111072010,                                       /**< [en]Coming soon... 
                                                                                 [cn]功能暂未支持,敬请期待... */
    CMS_CONF_STATUS_ILLEGAL = 111072011,                                    /**< [en]Meeting status incorrect. 
                                                                                 [cn]会议状态非法 */
    CMS_CONF_GENERIC_CTL_PARTICIPANT_FAILED = 111072012,                    /**< [en]Site control operation failed. 
                                                                                 [cn]会场会控操作失败 */
    CMS_VMR_CURRENT_CONF_NOT_GOAL_CONF = 111072013,                         /**< [en]The cloud meeting room is in use by another meeting. 
                                                                                 [cn]当前VMR会议非目标会议 */
    CMS_VMR_CONF_IS_EXPIRED = 111072014,                                    /**< [en]The meeting has ended. 
                                                                                 [cn]VMR会议已过期 */
    CMS_VMR_CONF_IS_NOT_ARRIVE_START_TIME = 111072015,                      /**< [en]The meeting has not yet started. 
                                                                                 [cn]VMR会议还未开始 */
    CMS_VMR_CONF_WITH_SCHEDULE_NOT_EXIST = 111072016,                       /**< [en]Meeting does not exist. 
                                                                                 [cn]VMR预约记录不存在 */
    CMS_CONF_HAS_NO_ATTENDEE = 111072017,                                   /**< [en]Meeting has no attendee. 
                                                                                 [cn]会议与会者不存在 */
    CMS_CONF_CHAIRMAN_PWD_EXCEPTION = 111072018,                            /**< [en]Application for chairman password exception. 
                                                                                 [cn]申请主席密码错误 */
    CMS_CONF_NOT_FIND_CANMOVESITE_EXCEPTION = 111072019,                    /**< [en]Not found site which can be moved exception. 
                                                                                 [cn]没有找到可以移动的会场 */
    CMS_CONF_NOT_SUPPORT_RECORD = 111072020,                                /**< [en]The current meeting is not a recording meeting. Recording is not supported. 
                                                                                 [cn]非录播会议不支持录制 */
    CMS_RECORD_RESOURCE_NOT_ENOUGH = 111072021,                             /**< [en]System processing failure. 
                                                                                 [cn]录播调度失败 */
    CMS_RECORD_SHEDULE_FAIL = 111072022,                                    /**< [en]Insufficient recording resources in the system. 
                                                                                 [cn]录播资源不足 */
    CMS_CONF_NOT_HAVE_PART = 111072023,                                     /**< [en]There are no participants in this meeting. 
                                                                                 [cn]会议中没有与会人 */
    CMS_CONF_NO_PARTICIPANT_JOINED = 111072024,                             /**< [en]Operation failed. No sites have joined this meeting. 
                                                                                 [cn]请确保会议中已有会场入会 */
    CMS_AUDIO_CONF_NOT_SUPPORT = 111072025,                                 /**< [en]Voice meeting does not support this function. 
                                                                                 [cn]语音会议不支持该功能 */
    CMS_AUDIO_SITE_NOT_SUPPORT = 111072026,                                 /**< [en]The voice site does not support this operation. 
                                                                                 [cn]语音会场不支持该操作 */
    CMS_AUDIO_SITE_IN_MULTI_PIC = 111072027,                                /**< [en]Voice sites cannot be displayed in custom continuous presence. 
                                                                                 [cn]手动设置的多画面中无法显示语音会场 */
    CMS_NO_SITE_IN_MULTI_PIC = 111072028,                                   /**< [en]At least one site must have custom continuous presence configured. 
                                                                                 [cn]手动设置的多画面中需最少设置一个会场 */
    CMS_ASSISTANT_PIC_NUM_MORE_THEN_ONE = 111072029,                        /**< [en]At most one presentation pane is allowed in custom continuous presence. 
                                                                                 [cn]手工设置的多画面最多只允许一个辅流子画面 */
    CMS_VAS_SUB_PIC_CONTAINS_USER_MORE_THEN_ONE = 111072030,                /**< [en]In the voice-activated continuous presence mode, each pane can only support a single user. 
                                                                                 [cn]声控多画面模式下,每个子画面最多只允许一个用户 */
    CMS_SITE_CALL_NUMBER_IS_EMPTY = 111072031,                              /**< [en]The number used for the site to join the meeting cannot be left blank. 
                                                                                 [cn]与会者的入会号码不允许为空 */
    CMS_SITE_CALL_NUMBER_LENGTH_TOO_LONG = 111072032,                       /**< [en]The number used for the site to join the meeting is too long. 
                                                                                 [cn]与会者的入会号码长度超过系统允许的最大值 */
    CMS_SITE_CALL_NUMBER_ILLEGAL_URI = 111072033,                           /**< [en]The format of the number used for joining the meeting is incorrect. (Correct format: User name@Domain name/IP address:Port number or Country code plus phone number) 
                                                                                 [cn]与会者的入会号码格式非法(支持SIP、TEL号码格式) */
    CMS_SITE_NAME_LENGTH_TOO_LONG = 111072034,                              /**< [en]Length of site name too long. 
                                                                                 [cn]与会者的名称长度超过系统允许的最大值 */
    CMS_SITE_ROLE_NOT_IN_RANGE = 111072035,                                 /**< [en]The site role type is outside the allowed range. 
                                                                                 [cn]与会者的角色类型不在系统允许的取值范围内 */
    CMS_SITE_EMAIL_LENGTH_TOO_LONG = 111072036,                             /**< [en]Length of site email address too long. 
                                                                                 [cn]与会者的邮箱地址长度超过系统允许的最大值 */
    CMS_SITE_SMS_LENGTH_TOO_LONG = 111072037,                               /**< [en]Length of site mobile number too long. 
                                                                                 [cn]与会者的手机号码长度超过系统允许的最大值 */
    CMS_SITE_MUTE_NOT_IN_RANGE = 111072038,                                 /**< [en]The value for whether a site is muted after it first joins the meeting is outside the allowed range. 
                                                                                 [cn]与会者入会后是否静音的取值不在系统允许的取值范围内 */
    CMS_SITE_AUTO_INVITE_NOT_IN_RANGE = 111072039,                          /**< [en]The value for whether to automatically invite a site is outside the allowed range. 
                                                                                 [cn]与会者是否自动邀请的取值不在系统允许的取值范围内 */
    CMS_VIEW_TYPE_NOT_IN_RANGE = 111072040,                                 /**< [en]The host's site viewing type is outside the allowed range. 
                                                                                 [cn]主席选看类型取值不在系统允许的取值范围内 */
    CMS_SET_MULTI_PIC_MANUAL_SET_NOT_IN_RANGE = 111072041,                  /**< [en]The value of the continuous presence setting mode is outside the allowed range. 
                                                                                 [cn]设置多画面方式取值不在系统允许的取值范围内 */
    CMS_SWITCH_TIME_NOT_IN_RANGE = 111072042,                               /**< [en]The polling time is outside the allowed range. 
                                                                                 [cn]轮询显示时间取值不在系统允许的取值范围内 */
    CMS_SET_MULTI_PIC_IMAGE_TYPE_IS_EMPTY = 111072043,                      /**< [en]The pane type cannot be left blank. 
                                                                                 [cn]画面类型不允许为空 */
    CMS_SET_MULTI_PIC_IMAGE_TYPE_IS_NOT_MATCH = 111072044,                  /**< [en]Invalid pane type. 
                                                                                 [cn]画面类型非法 */
    CMS_ON_OFF_NOT_IN_RANGE = 111072045,                                    /**< [en]The value of the switch is outside the allowed range. 
                                                                                 [cn]开关项取值不在系统允许的取值范围内 */
    CMS_SITE_NAME_IS_EMPTY = 111072046,                                     /**< [en]The site name cannot be left blank. 
                                                                                 [cn]与会者的名称不允许为空 */
    CMS_SITE_NEW_NAME_LENGTH_TOO_LONG = 111072047,                          /**< [en]Site name too long. 
                                                                                 [cn]与会者的名称超过系统允许的最大值 */
    CMS_MCU_NOT_SUPPORT_SET_MULTI_PIC = 111072048,                          /**< [en]Continuous presence is not supported. Ask the administrator to configure related data on the MCU. 
                                                                                 [cn]不支持多画面,请联系管理员开启MCU配置 */
    CMS_RESPONSE_TIME_OUT = 111072049,                                      /**< [en]Response timed out. Try again later. 
                                                                                 [cn]等待响应超时 */
    CMS_CONF_LOCKED = 111072050,                                            /**< [en]Meeting locked. 
                                                                                 [cn]会议被锁定 */
    CMS_CONF_MODE_IS_EMPTY = 111072051,                                     /**< [en]The meeting display mode is empty. 
                                                                                 [cn]会议显示模式为空 */
    CMS_CONF_MODE_NOT_IN_RANGE = 111072052,                                 /**< [en]The meeting display mode is outside the allowed range. 
                                                                                 [cn]会议显示模式不在系统允许的取值范围内 */
    CMS_CONF_IMAGE_TYPE_NOT_IN_RANGE = 111072053,                           /**< [en]The meeting pane type is outside the allowed range. 
                                                                                 [cn]会议画面类型不在系统允许的取值范围内 */
    CMS_TEXT_TYPE_IS_EMPTY = 111072054,                                     /**< [en]The banner or caption type is empty. 
                                                                                 [cn]横幅或字幕类型为空 */
    CMS_TEXT_IS_EMPTY = 111072055,                                          /**< [en]The banner or caption content is empty. 
                                                                                 [cn]横幅或字幕的内容为空 */
    CMS_TEXT_IS_TOO_LONG = 111072056,                                       /**< [en]The banner or caption content cannot exceed 2,000 bytes. 
                                                                                 [cn]横幅或字幕的内容长度超过2000字节 */
    CMS_REQUEST_BODY_IS_NULL = 111072057,                                   /**< [en]The request message body is empty. 
                                                                                 [cn]请求消息体为空 */
    CMS_SUB_PIC_INDEX_MORE_THAN_PIC_NUM = 111072058,                        /**< [en]The pane index is greater than the total number of panes. 
                                                                                 [cn]子画面索引大于画面总数 */
    CMS_CONF_NO_CHAIR_SITE = 111072059,                                     /**< [en]Meeting has no host. 
                                                                                 [cn]会议中没有主席 */
    CMS_NORMAL_SITE_NOT_SUPPORT_VIEW = 111072060,                           /**< [en]Regular participants cannot perform this operation. 
                                                                                 [cn]当前普通与会方类型不支持该操作 */
    CMS_CHAIR_POLLING_FORBIDDEN_VIEW = 111072061,                           /**< [en]You have set host polling and cannot select a specific site to view or set continuous presence. 
                                                                                 [cn]前主席正在轮询观看会场,不能单独选看其他会场或会议多画面 */
    CMS_SVC_SITE_NOT_SUPPORT_VIEW = 111072062,                              /**< [en]You cannot select a site to view on the web page. Perform the operation on the terminal. 
                                                                                 [cn]当前主席与会方类型不支持该操作 */
    CMS_RSE_RESREAPPLY = 111072063,                                         /**< [en]Applying for recording resources... 
                                                                                 [cn]录制资源重新申请错误码 */
    CMS_CONF_CTR_LOGIN_LOCKED = 111072064,                                  /**< [en]Too many failed login attempts. Try again later. 
                                                                                 [cn]会控登录锁定 */
    CMS_CONF_NOT_FOUND_OR_AUTH_FAILED = 111072065,                          /**< [en]The meeting ID or password is incorrect. Check the ID and password and try again. 
                                                                                 [cn]会议不存在或密码错误 */
    CMS_ORG_NOT_BUY_RECSPACE = 111072066,                                   /**< [en]The enterprise has not purchased any recording storage space. 
                                                                                 [cn]企业未购买录播空间 */
    CMS_ORG_RECSPACE_NOT_ENOUGH = 111072067,                                /**< [en]Insufficient enterprise recording storage space. 
                                                                                 [cn]企业录播空间已满 */
    CMS_CONF_SETLIVE_FAILED = 111072068,                                    /**< [en]Failed to start live broadcast. Try again later. 
                                                                                 [cn]启动直播失败 */
    CMS_CONF_CHAIR_FORBIDDEN_HAND = 111072069,                              /**< [en]Not allow to hand up for host. 
                                                                                 [cn]不允许指定会议主席举手发言 */
    CMS_GUEST_NO_PERMISSION_OPERATION = 111072070,                          /**< [en]The operation is not allowed for guest. 
                                                                                 [cn]来宾不允许进行该操作 */
    CMS_NO_PERMISSION_OPERATE_OTHERS = 111072071,                           /**< [en]The operation is only allowed for yourself. 
                                                                                 [cn]仅能对自己进行操作 */
    CMS_NO_CONF_CTL_CAP_NO_CHAIR = 111072072,                               /**< [en]Not allow to apply host for attendees who do not have meeting control abilites. 
                                                                                 [cn]没有会控能力的与会者不允许设置为主席 */
    CMS_NOTIFY_MSG_IS_EXPIRED = 111072073,                                  /**< [en]Notify message is expired. 
                                                                                 [cn]推送消息已过期 */
    CMS_TRUNK_APPLY_CHAIR_FORBID = 111072074,                               /**< [en]Only participants with a number registered on HUAWEI CLOUD can be set as the host. 
                                                                                 [cn]云下会场不能成为主席 */
    CMS_CONF_CLOSE_HUNG_UP = 111072075,                                     /**< [en]Hung up site for meeting ended. 
                                                                                 [cn]会议结束挂断会场 */
    CMS_CHAIR_HUNG_UP = 111072076,                                          /**< [en]Hung up site by host. 
                                                                                 [cn]主席挂断会场 */
    CMS_CHAIR_DEL_SITE_HUNG_UP = 111072077,                                 /**< [en]Hung up site because host deleted site. 
                                                                                 [cn]主席删除会议挂断会场 */
    CMS_RECREATE_CONF_HUNG_UP = 111072078,                                  /**< [en]Hung up site because meeting is recreated. 
                                                                                 [cn]重建会议挂断会场 */
    CMS_MOVE_SITE_FAIL_HUNG_UP = 111072079,                                 /**< [en]Hung up site for moving site failed. 
                                                                                 [cn]移动会场失败挂断会场 */
    CMS_CROSS_REGION_INVITE_SITE_FAIL_HUNG_UP = 111072080,                  /**< [en]Hung up site for inviting site cross region failed. 
                                                                                 [cn]跨region邀请会场失败挂断会场 */
    CMS_INVITE_EXCEPTION_HUNG_UP = 111072081,                               /**< [en]Hung up site for invitation exception. 
                                                                                 [cn]邀请会场失败挂断会场 */
    CMS_REPEAT_JOIN_HUNG_UP = 111072082,                                    /**< [en]Hung up site for joining meeting repeatedly. 
                                                                                 [cn]会场重复入会挂断会场 */
    CMS_LOCK_SHARE_FAILED = 111072083,                                      /**< [en]Lock sharing failed. 
                                                                                 [cn]锁定共享失败 */
    CMS_TRUNK_SET_ONE_MULTIPIC_FORBID = 111072084,                          /**< [en]This site does not support 1-screen layout. 
                                                                                 [cn]云下会场禁止设置在多画面一画面中 */
    CMS_CONF_NOT_SUPPORT_REALTIME_SUBTITLE = 111072085,                     /**< [en]Not support realtime subtitle. 
                                                                                 [cn]会议不支持实时字幕 */
    CMS_CONF_REALTIME_SUBTITLE_PID_NULL = 111072086,                        /**< [en]Realtime subtitle pid is null. 
                                                                                 [cn]会议实时字幕指定发言人列表为空 */
    CMS_CONF_REALTIME_SUBTITLE_PID_WRONG = 111072087,                       /**< [en]Invalid realtime subtitle pid. 
                                                                                 [cn]会议实时字幕指定发言人ID有误或已离会 */
    CMS_CONF_REALTIME_SUBTITLE_SET_FAIL = 111072088,                        /**< [en]Failed to set realtime subtitle. 
                                                                                 [cn]会议实时字幕设置失败 */
    CMS_CONF_NOT_ALLOW_CHANGE_AUDIENCE_SPEAK_STATUS = 111072089,            /**< [en]Not allow audience to change speaker status. 
                                                                                 [cn]不允许观众解闭音 */
    CMS_CONF_SPEAKABLE_ONLY_FOR_AUDIENCE = 111072090,                       /**< [en]Allow/forbid audience to speak only for audience. 
                                                                                 [cn]主持人允许/禁止观众说话接口只能操作观众 */
    CMS_CONF_NOT_SUPPORT_SIMULTANEOUS_INTERPRETATION = 111072091,           /**< [en]This meeting does not support simultaneous interpretation. 
                                                                                 [cn]会议不支持同声传译 */
    CMS_CONF_INTERPRETER_GROUP_IS_EMPTY = 111072092,                        /**< [en]Interpreter group is empty. 
                                                                                 [cn]会议当前传译组为空,请先配置传译组 */
    CMS_CONF_NOT_ENABLE_SIMULTANEOUS_INTERPRETATION = 111072093,            /**< [en]This meeting has not enable simultaneous interpretation. 
                                                                                 [cn]会议未开启同声传译 */
    CMS_PARTICIPANT_IS_NOT_INTERPRETER = 111072094,                         /**< [en]This site is not interpreter. 
                                                                                 [cn]当前会场非传译员 */
    CMS_PARTICIPANT_NOT_CONFIRM_INTERPRETER = 111072095,                    /**< [en]This site has not yet confirmed interpreter identity. 
                                                                                 [cn]传译员未确认身份 */
    CMS_PARTICIPANT_LANGUAGE_ILLEGAL = 111072096,                           /**< [en]Invalid site language. 
                                                                                 [cn]会场选择的语言非法 */
    CMS_PARTICIPANT_IS_CONFIRMED_INTERPRETER = 111072097,                   /**< [en]This site is confirmed interpreter. 
                                                                                 [cn]当前会场是已确认的传译员 */
    CMS_PARTICIPANT_LISTEN_NOT_EQUAL_SPEAK = 111072098,                     /**< [en]This site listen channel is different from speak channel. 
                                                                                 [cn]普通会场听说频道不一致 */
    CMS_SET_CONF_LANGUAGE_CHANNEL_LIST_FAILED = 111072099,                  /**< [en]Failed to set interpretation languages. Try again. 
                                                                                 [cn]设置会议语言频道失败 */
    CMS_SET_PARTICIPANT_LANGUAGE_CHANNEL_FAILED = 111072100,                /**< [en]Failed to set interpretation channel. Try again. 
                                                                                 [cn]设置会场语言频道失败 */
    CMS_OVER_MAX_PARTICIPANT_NUMBER = 111072101,                            /**< [en]Max participant amount reached. 
                                                                                 [cn]超过设置的会议方数 */
    CMS_OVER_MAX_ALLOW_HAND_NUMBER = 111072102,                             /**< [en]Max allowed handup amount reached. 
                                                                                 [cn]观众超过最大允许举手数 */
    CMS_OVER_MAX_ALLOW_SPEAK_NUMBER = 111072103,                            /**< [en]Max allowed speaking amount reached. 
                                                                                 [cn]观众超过最大允许发言数 */
    CMS_SET_VIRTUAL_AUDIO_CSD_SITE_FAILED = 111072104,                      /**< [en]Failed to set virtual audio CSD site. 
                                                                                 [cn]设置级联通道虚拟语言会场失败 */
    CMS_CONF_NOT_SUPPORT_COHOST = 111072105,                                /**< [en]This meeting does not support cohost. 
                                                                                 [cn]该会议未启用联席主持人 */
    CMS_PARTICIPANT_NOT_SUPPORT_COHOST = 111072106,                         /**< [en]This site does not support cohost. 
                                                                                 [cn]该会场不支持联席主持人 */
    CMS_CHAIR_CANNOT_BE_COHOST = 111072107,                                 /**< [en]Host cannot be set to cohost. 
                                                                                 [cn]不支持设置主持人为联席主持人 */
    CMS_AUDIENCE_CANNOT_BE_COHOST = 111072108,                              /**< [en]Audience cannot be set to cohost. 
                                                                                 [cn]不支持设置观众为联席主持人 */
    CMS_NEED_CHECK_COHOST_PERMISSION = 111072109,                           /**< [en]Need to check cohost permission. 
                                                                                 [cn]需要去主会议所在region判断是否为联席主持人 */
    CMS_COHOST_CANNOT_OPERATE_CHAIR = 111072110,                            /**< [en]Cohost cannot operate host. 
                                                                                 [cn]联席主持人不能操作主持人 */
    CMS_PARTICIPANT_NOT_SUPPORT_INVITE_SHARE = 111072111,                   /**< [en]This site does not support share invitation. 
                                                                                 [cn]当前会场不支持邀请共享能力 */
    CMS_HEART_BEAT_FAIL_HING_UP = 111072201,                                /**< [en]Hung up site because heart beat failed. 
                                                                                 [cn]与终端心跳中断导致挂断会场 */
    CMS_AUDIENCE_VMR_LOGIC_RESOURCE_NOT_ENOUGH = 111072202,                 /**< [en]Insufficient audience cloud meeting room logic resources. 
                                                                                 [cn]观众数超过VMR套餐中的观众最大并发资源数 */
    CMS_PARTICIPANT_VMR_LOGIC_RESOURCE_NOT_ENOUGH = 111072203,              /**< [en]Insufficient participant cloud meeting room logic resources. 
                                                                                 [cn]主持人与嘉宾超过VMR套餐中的最大并发资源数 */
    CMS_STARTED_FAIL_WEBINAR_RESOURCE_NOT_ENOUGH = 111072204,               /**< [en]Insufficient webinar resources, so started failed. 
                                                                                 [cn]网络研讨会套餐已经有在线会议,被占用,激活失败 */
    CMS_ONLY_RTC_CONF_SUPPORT_LOCAL_RECORD = 111072205,                     /**< [en]Only RTC conf support local record. 
                                                                                 [cn]非RTC会议不支持本地录制 */
    CMS_E2E_PARAMETER_ILLEGAL = 111072206,                                  /**< [en]Invalid E2E encryption parameter. 
                                                                                 [cn]端到端加密参数非法 */
    CMS_DISABLE_ROLE_SWITCH_OVER = 111072207,                               /**< [en]Not allow to switch role in webinar. 
                                                                                 [cn]网络研讨会不允许进行角色转换 */
    CMS_TERMINAL_NOT_SUPPORT_LOCAL_RECORD = 111072208,                      /**< [en]The client version used by the user is too early. Cannot start local recording. 
                                                                                 [cn]客户端不支持本地录制 */
    CMS_CONF_IS_UNDER_AR_ASSIST = 111072211,                                /**< [en]Meeting is under AR assist.
                                                                                 [cn]会议已经在进行AR协作 */
    CMS_AUDIENCE_CANNOT_BE_CHAIRMAN = 111072213,                            /**< [en]Audience cannot be set to host. 
                                                                                 [cn]观众不能设置为主持人 */
    CMS_RENAME_CONTAINS_SENSITIVEWORDS = 111072214,                         /**< [en]Rename param contains sensitive words. 
                                                                                 [cn]改名涉及敏感词错误 */
    CMS_USER_DATA_USER_INFO_NOT_EXIST = 111073001,                          /**< [en]User does not exist. 
                                                                                 [cn]用户不存在 */
    CMS_USER_DATA_ORG_INFO_NOT_EXIST = 111073002,                           /**< [en]Department does not exist. 
                                                                                 [cn]组织不存在 */
    CMS_USER_DATA_USER_INFO_ILLEGAL = 111073003,                            /**< [en]Invalid username format. 
                                                                                 [cn]用户非法 */
    CMS_USER_DATA_ORG_INFO_ILLEGAL = 111073004,                             /**< [en]Invalid department name format. 
                                                                                 [cn]组织非法 */
    CMS_USER_DATA_ORG_INFO_QUERY_FAILED = 111073005,                        /**< [en]Could not query department. 
                                                                                 [cn]查询组织失败 */
    CMS_ASSIGN_ANONYMOUS_FAILED = 111073006,                                /**< [en]Application for anonymous user failed. 
                                                                                 [cn]申请匿名用户失败 */
    CMS_VMR_DATA_STATUS_ILLEGAL = 111073007,                                /**< [en]Invalid cloud meeting room package status. 
                                                                                 [cn]VMR套餐状态非法 */
    CMS_RELEASE_ANONYMOUS_FAILED = 111073008,                               /**< [en]Failed to Release anonymous user. 
                                                                                 [cn]释放匿名用户失败 */
    CMS_WELINK_C_NOT_SUPPORT_CYCLE_CONF = 111073009,                        /**< [en]Not support cycle meeting for welinkC. 
                                                                                 [cn]WeLinkC 不支持预约周期会议 */
    CMS_WELINK_C_NOT_SUPPORT_VMR_CONF = 111073010,                          /**< [en]Not support cloud meeting room for welinkC. 
                                                                                 [cn]WeLinkC 不支持预约VMR会议 */
    CMS_GET_WE_LINK_TOKEN_FAILED = 111073011,                               /**< [en]Failed to get Welink token. 
                                                                                 [cn]获取WeLink Proxy Token失败 */
    CMS_GET_M_TO_M_TOKEN_FAILED = 111073012,                                /**< [en]Failed to Get M to M token. 
                                                                                 [cn]获取机机帐号Token失败 */
    CMS_WEBINAR_VMR_DATA_STATUS_ILLEGAL = 111073013,                        /**< [en]Invalid webinar cloud meeting package status. 
                                                                                 [cn]网络研讨会VMR套餐状态非法 */
    CMS_PROLONG_TIMES_OVER_LIMIT = 111073014,                               /**< [en]Max extend times for cloud meeting trial version reached. 
                                                                                 [cn]会议延长次数超出VMR试用套餐可延长的最大次数 */
    CMS_PROLONG_DURATION_OVER_LIMIT = 111073015,                            /**< [en]Max extend duration for cloud meeting trial version reached. 
                                                                                 [cn]会议延长时间超出VMR试用套餐单次会议最大时长 */
    CMS_RFEE_VMR_NOT_SUPPORT_AUTO_PROLONG = 111073016,                      /**< [en]Not support auto extend meeting for cloud meeting trial version. 
                                                                                 [cn]VMR试用套餐不支持自动延长 */
    CMS_IDO_CONF_CHAIR_EXIST = 111074001,                                   /**< [en]This meeting host already exists. 
                                                                                 [cn]IDO主席已经存在 */
    CMS_IDO_NOT_CONF_CHAIR = 111074002,                                     /**< [en]No meeting host permissions. 
                                                                                 [cn]无IDO主席权限 */
    CMS_IDO_OVER_CONF_MAX_DURATION = 111074003,                             /**< [en]Failed to extend the meeting. Max meeting duration reached. 
                                                                                 [cn]延长会议失败,会议已达到最大时长 */
    CMS_IDO_SET_CONF_DURATION_FAIL = 111074004,                             /**< [en]Failed to extend the meeting. The service processing is abnormal. 
                                                                                 [cn]延长会议失败,服务处理异常 */
    CMS_START_TIMER_FAIL = 111075001,                                       /**< [en]Failed to start timer. 
                                                                                 [cn]启动定时器失败 */
    CMS_MODIFY_TIMER_FAIL = 111075002,                                      /**< [en]Failed to end timer. 
                                                                                 [cn]停止定时器失败 */
    CMS_JSON_PARSE_FAIL = 111075003,                                        /**< [en]Json parse failed. 
                                                                                 [cn]json转换异常 */
    CMS_CONF_PORTAL_PARTICIPANT_HANGUP_BY_CHAIR_IDO = 111076001,            /**< [en]Released by host. 
                                                                                 [cn]会场被终端主席挂断 */
    CMS_CONF_PORTAL_PARTICIPANT_HANGUP_BY_CHAIR_REST = 111076002,           /**< [en]Released by portal host. 
                                                                                 [cn]会场被portal主席挂断 */
    CMS_CONF_PORTAL_PARTICIPANT_VMR_LOGIC_RESOURCE_NOT_ENOUGH = 111076003,  /**< [en]Max number of participants reached. 
                                                                                 [cn]超出VMR最大方数 */
    CMS_CONF_PORTAL_PARTICIPANT_RESOURCE_NOT_ENOUGH = 111076004,            /**< [en]Insufficient enterprise resources. 
                                                                                 [cn]企业并发数不足 */
    CMS_CONF_PORTAL_PARTICIPANT_NO_RESPONSE = 111076005,                    /**< [en]Not answered. 
                                                                                 [cn]会场无响应 */
    CMS_CONF_PORTAL_PARTICIPANT_NOT_EXIST = 111076006,                      /**< [en]User does not exist. 
                                                                                 [cn]会场不存在 */
    CMS_CONF_PORTAL_PARTICIPANT_UNAVAILABLE = 111076007,                    /**< [en]Offline. 
                                                                                 [cn]会场离线 */
    CMS_CONF_PORTAL_PARTICIPANT_BUSY = 111076008,                           /**< [en]Busy. 
                                                                                 [cn]忙 */
    CMS_CONF_PORTAL_PARTICIPANT_REFUSED = 111076009,                        /**< [en]Rejected by user. 
                                                                                 [cn]拒接 */
    CMS_CONF_PORTAL_PARTICIPANT_LEAVE = 111076010,                          /**< [en]Released by user. 
                                                                                 [cn]会场挂断 */
    CMS_CONF_PORTAL_PARTICIPANT_MEDIA_RESOURCE_NOT_ENOUGH = 111076011,      /**< [en]Insufficient meeting resources in the system. 
                                                                                 [cn]媒体资源不足 */
    CMS_PSTN_SERVICE_UNAVAILABLE = 111076012,                               /**< [en]Outbound calling disabled. 
                                                                                 [cn]PSTN服务未开通 */
    CMS_CONF_APPLY_ADDRESS_TOKEN_FAILED = 111076013,                        /**< [en]Application for address token failed. 
                                                                                 [cn]申请地址本鉴权信息失败 */
    CMS_CONF_PORTAL_PARTICIPANT_TIMEOUT = 111076014,                        /**< [en]Call failed. 
                                                                                 [cn]SIP呼叫超时 */
    CMS_CONF_PORTAL_OVER_MAX_PARTICIPANT_NUMBER = 111076015,                /**< [en]Max number of participants reached. 
                                                                                 [cn]超过设置的会议方数 */
    CMS_CONF_PORTAL_PARTICIPANT_COMMON_ERROR = 111076099,                   /**< [en]Common error. 
                                                                                 [cn]通常失败 */
    CMS_RSE_SERVER_INFO_NOT_EXIST = 111077001,                              /**< [en]RSE server info does not exist. 
                                                                                 [cn]RSE录播相关错误码 */
    CMS_CONF_NOT_SUPPORT_AI_RECORD = 111077101,                             /**< [en]Not support AI record. 
                                                                                 [cn]会议不支持AI会议纪要 */
    CMS_CONF_RE_APPLY_AI_RECORD_RES = 111077102,                            /**< [en]Reapplying for AI record resource. 
                                                                                 [cn]正在重新申请会议纪要资源 */
    CMS_AI_RECORD_RESOURCE_NOT_ENOUGH = 111077103,                          /**< [en]Insufficient AI record resource. 
                                                                                 [cn]AI会议纪要资源不足 */
    CMS_CONF_IS_IN_AI_RECORD = 111077104,                                   /**< [en]In AI recording, the meeting cannot stop live or recording. 
                                                                                 [cn]会议处于AI会议纪要状态,不允许停止录制/直播 */
    CMS_RECORD_FILE_NOT_EXIST_OR_HAVE_NO_RIGHT = 111077201,                 /**< [en]Record file does not exist or have no permission. 
                                                                                 [cn]录播文件已删除或您无权观看,请确认后重试 */
    CMS_RSE_AUTH_FAILED = 111077202,                                        /**< [en]RSE authentication failed. 
                                                                                 [cn]RSE机机鉴权失败 */
    CMS_MULTI_REGION_NO_AVAILABLE_REGION = 111078000,                       /**< [en]No available region in multi region. 
                                                                                 [cn]没有可用Region */
    CMS_MULTI_REGION_NO_AVAILABLE_GLOBAL = 111078001,                       /**< [en]No available global in multi region. 
                                                                                 [cn]没有可用Global */
    CMS_MULTI_REGION_DISPATCH_REGION_ERROR = 111078001,                     /**< [en]Dispatch region error in multi region. 
                                                                                 [cn]多region 分发region错误 */
    CMS_DATA_PARAM_QUERY_XML_FAILED = 111079000,                            /**< [en]Failed to phrase big data param query xml. 
                                                                                 [cn]大参数查询xml解析失败 */
    CMS_ANONYMOUS_ASSIGN_XML_FAILED = 111079001,                            /**< [en]Failed to phrase anonymous assign xml. 
                                                                                 [cn]匿名帐号分配xml解析失败 */
    CMS_PARTICIPANT_BAD_REQUEST = 111080001,                                /**< [en]Bad request. 
                                                                                 [cn]请求消息参数错误 */
    CMS_PARTICIPANT_INSUFFICIENT_PERMISSIONS = 111080002,                   /**< [en]Insufficient permissions. 
                                                                                 [cn]用户无权限进行该操作 */
    CMS_PARTICIPANT_DATA_NOT_FOUND = 111080004,                             /**< [en]Site data not found or deleted. 
                                                                                 [cn]会场不存在或已被删除 */
    CMS_PARTICIPANT_IS_INVITING = 111081001,                                /**< [en]Site is inviting. 
                                                                                 [cn]会场正在通话中 */
    CMS_PARTICIPANT_CONF_NOT_EXIST = 111081002,                             /**< [en]Site meeting does not exist or is ended. 
                                                                                 [cn]会场所在会议不存在或已结束 */
    CMS_PARTICIPANT_APPLY_RESOURCE_FAILED = 111081003,                      /**< [en]Failed to apply site resource. 
                                                                                 [cn]申请会场资源失败 */
    CMS_PARTICIPANT_RELEASE_RESOURCE_FAILED = 111081004,                    /**< [en]Failed to release site resource. 
                                                                                 [cn]释放会场资源失败 */
    CMS_PARTICIPANT_APPLY_MEDIA_RESOURCE_FAILED = 111081005,                /**< [en]Failed to apply site media resource. 
                                                                                 [cn]申请会场媒体资源失败 */
    CMS_PARTICIPANT_AUTHENTICATION_FAILED = 111081006,                      /**< [en]Authentication failed. 
                                                                                 [cn]认证失败 */
    CMS_PARTICIPANT_CONF_IS_LOCKED = 111081007,                             /**< [en]Meeting is locked. 
                                                                                 [cn]会议已经被锁定 */
    CMS_PARTICIPANT_CONF_LOGIN_LOCKED = 111081009,                          /**< [en]Login is locked because max authentication times reached. 
                                                                                 [cn]会议鉴权失败次数已达上限被锁定 */
    CMS_PARTICIPANT_CONTROL_NOT_SUPPORT = 111082001,                        /**< [en]Not support this control. 
                                                                                 [cn]不支持该会控 */
    CMS_PARTICIPANT_NO_RESPONSE = 111082002,                                /**< [en]No response. 
                                                                                 [cn]无响应 */
    CMS_PARTICIPANT_NOT_EXIST = 111082003,                                  /**< [en]Site not exist. 
                                                                                 [cn]会场不存在 */
    CMS_PARTICIPANT_UNAVAILABLE = 111082004,                                /**< [en]Site unavailable. 
                                                                                 [cn]会场离线 */
    CMS_PARTICIPANT_BUSY = 111082005,                                       /**< [en]Site busy. 
                                                                                 [cn]会场正忙 */
    CMS_PARTICIPANT_REFUSED = 111082006,                                    /**< [en]Site refused. 
                                                                                 [cn]会场拒接 */
    CMS_PARTICIPANT_LEAVE = 111082007,                                      /**< [en]Site leave. 
                                                                                 [cn]会场挂断 */
    CMS_PSTN_SERVICE_CLOSED = 111082008,                                    /**< [en]PSTN service is closed. 
                                                                                 [cn]PSTN服务关闭 */
    CMS_PARTTICIPANT_INVITE_TIMEOUT = 111082009,                            /**< [en]SIP invitation timeout. 
                                                                                 [cn]SIP呼叫超时 */
    CMS_PARTICIPANT_RSE_NOT_EXIST = 111083001,                              /**< [en]RSE does not exist. 
                                                                                 [cn]RSE设备不存在 */
    CMS_PARTICIPANT_EXECUTE_DTMF_FAILED = 111084001,                        /**< [en]Failed to execute DTMF. 
                                                                                 [cn]执行DTMF失败 */
    CMS_PARTICIPANT_GET_STARTED_CONF_EXCEPTION = 111084002,                 /**< [en]Get started meeting exception. 
                                                                                 [cn]启动会议异常 */
    CMS_PARTICIPANT_CALL_MCUSIDE_EXCEPTION = 111084003,                     /**< [en]Call MCU side exception. 
                                                                                 [cn]呼叫MCU端异常 */
    CMS_PARTICIPANT_JOIN_CALL_EXCEPTION = 111084004,                        /**< [en]Join call exception. 
                                                                                 [cn]加入呼叫异常 */
    CMS_PARTICIPANT_INVITE_EXCEPTION = 111084005,                           /**< [en]Invite exception. 
                                                                                 [cn]邀请异常 */
    CMS_PARTICIPANT_CALL_TERMINALSIDE_EXCEPTION = 111084006,                /**< [en]Call terminal side exception. 
                                                                                 [cn]呼叫端侧异常 */
    CMS_PARTICIPANT_ANSWER_EXCEPTION = 111084007,                           /**< [en]Answer exception. 
                                                                                 [cn]应答异常 */
    CMS_PARTICIPANT_GENERIC_CTL_EXCEPTION = 111084008,                      /**< [en]Common CTL exception. 
                                                                                 [cn]通用CTL异常 */
    CMS_PARTICIPANT_HANGUP_EXCEPTION = 111084009,                           /**< [en]Hangup exception. 
                                                                                 [cn]挂断异常 */
    CMS_PARTICIPANT_INFORM_CAPABILITY_EXCEPTION = 111084010,                /**< [en]Notify capability exception. 
                                                                                 [cn]通知能力异常 */
    CMS_PARTICIPANT_UPDATE_MT_EXCEPTION = 111084011,                        /**< [en]Update MT exception. 
                                                                                 [cn]更新MT异常 */
    CMS_PARTICIPANT_NEGOTIATE_EXCEPTION = 111084012,                        /**< [en]Negotiate exception. 
                                                                                 [cn]协商异常 */
    CMS_PARTICIPANT_CONF_NOT_SUPPORT = 111084013,                           /**< [en]Not support this meeting. 
                                                                                 [cn]不支持该会议 */
    CMS_RTC_INVITE_NOT_ALLOWED_JOIN_CONF = 111084014,                       /**< [en]Not allowed join meeting in RTC inviting because guests are not invited. 
                                                                                 [cn]RTC外邀入会,来宾不在被邀请名单中,拒绝入会 */
    CMS_URI_JOIN_XML_FAILED = 111089002,                                    /**< [en]Failed to phrase URI join xml. 
                                                                                 [cn]链接入会XML解析失败 */
    CMS_DATA_JOIN_FAIL = 111090001,                                         /**< [en]Failed to join data meeting. 
                                                                                 [cn]数据入会失败 */
    CMS_DATA_JOIN_OVERTIME = 111090002,                                     /**< [en]Join data meeting overtime. 
                                                                                 [cn]数据入会超时 */
    CMS_AUTH_SLIDE_GET_IMAGE_FAILED = 111100001,                            /**< [en]Failed to get slider image. 
                                                                                 [cn]获取滑块图片失败 */
    CMS_AUTH_SLIDE_VERIFY_CHECK_FAILED = 111100002,                         /**< [en]Slider check failed. 
                                                                                 [cn]滑块校验失败 */
    CMS_AUTH_INVALID_RANDOM = 111100003,                                    /**< [en]Invalid random number. 
                                                                                 [cn]无效的随机数 */
    CMS_AUTH_INVALID_SLIDER_TOKEN = 111100004,                              /**< [en]Invalid slider token. 
                                                                                 [cn]无效滑块token */
    CMS_AUTH_NEED_CHECK_SLIDER = 111100005,                                 /**< [en]Need to check slider. 
                                                                                 [cn]需要滑块校验 */
    CMS_AUTH_INVALID_SMS = 111100006,                                       /**< [en]Invalid SMS phone number. 
                                                                                 [cn]非法的手机号 */
    CMS_SEND_VERIFY_CODE_FAIL = 111100007,                                  /**< [en]Failed to send verification code. 
                                                                                 [cn]发送验证码失败 */
    CMS_AUTH_VERIFY_CODE_EXPIRED = 111100008,                               /**< [en]Verification code expired. 
                                                                                 [cn]验证码已过期 */
    CMS_AUTH_VERIFY_CODE_FAIL = 111100009,                                  /**< [en]Verification code error. 
                                                                                 [cn]验证码错误 */
    CMS_AUTH_VERIFY_CODE_FAIL_CNT_EXCEED = 111100010,                       /**< [en]Max verification code check times reached. 
                                                                                 [cn]验证码错误超过最大次数 */
    CMS_AUTH_INVALID_UUID = 111100011,                                      /**< [en]The uuid is invalid, you need to re-verify the phone number. 
                                                                                 [cn]uuid无效,需要重新验证手机号 */
    CMS_CONF_NOT_ON_LOCAL_STATION = 111100012,                              /**< [en]The meeting is not on this site. 
                                                                                 [cn]会议不在本站点 */
    CMS_AUTH_NEED_MOBILE_VERIFY = 111100013,                                /**< [en]Need to verify the mobile phone number. Overseas access to China, free enterprises need to verify the mobile phone verification code. 
                                                                                 [cn]需要验证手机号，海外接入国内，免费企业需要进行手机验证码校验 */
    CMS_IM_ADD_GROUP_FAILED = 111110001,                                    /**< [en]Failed to add IM group. 
                                                                                 [cn]添加群组失败 */
    CMS_IM_DISBAND_GROUP_FAILED = 111110002,                                /**< [en]Failed to disband IM group. 
                                                                                 [cn]删除群组失败 */
    CMS_IM_ADD_MEMBER_FAILED = 111110003,                                   /**< [en]Failed to add IM member. 
                                                                                 [cn]添加成员失败 */
    CMS_IM_REMOVE_MEMBER_FAILED = 111110004,                                /**< [en]Failed to remove IM member. 
                                                                                 [cn]删除成员失败 */
    CMS_FAILED = 112010001,                                                 /**< [en]Common failure. 
                                                                                 [cn]通用失败 */
    CMS_NULL_PARAM = 112010002,                                             /**< [en]Null param. 
                                                                                 [cn]参数为空 */
    CMS_PARTICIPANT_NOT_FOUND = 112010003,                                  /**< [en]Participant not found. 
                                                                                 [cn]未找到参与者 */
    CMS_CONFERENCE_NOT_FOUND = 112010004,                                   /**< [en]Meeting not found. 
                                                                                 [cn]会议不存在 */
    CMS_SIP_INVITE_TIMEOUT_NO_RCV = 112010005,                              /**< [en]SIP invite information timeout. 
                                                                                 [cn]invite消息超时 */
    CMS_SIP_INVITE_FAILED = 112010006,                                      /**< [en]SIP invite information failed. 
                                                                                 [cn]invite消息失败 */
    CMS_SIP_INFO_TIMEOUT = 112010007,                                       /**< [en]SIP information timeout. 
                                                                                 [cn]info响应超时 */
    CMS_SIP_INFO_FAILED = 112010008,                                        /**< [en]SIP information failed. 
                                                                                 [cn]info响应失败 */
    CMS_WAIT_FIRST_CALL_FAILED = 112010009,                                 /**< [en]System processing failed. 
                                                                                 [cn]系统处理失败 */
    CMS_PARTICIPANT_DIALOG_FAILED = 112010010,                              /**< [en]System processing failed. 
                                                                                 [cn]系统处理失败 */
    CMS_INVITE_MRS_FAILED = 112010011,                                      /**< [en]Failed to invite MRS. 
                                                                                 [cn]呼叫mrs失败 */
    CMS_INVITE_PARTICIPANT_FAILED = 112010012,                              /**< [en]Failed to invite participant. 
                                                                                 [cn]呼叫终端失败 */
    CMS_INFORM_CONF_INFO_FAILED = 112010013,                                /**< [en]Data meeting join information failed. 
                                                                                 [cn]数据入会Info失败 */
    CMS_START_CONF_FAILED = 112010014,                                      /**< [en]Failed to start meeting. 
                                                                                 [cn]召开会议失败 */
    CMS_MEDIA_NEGOTIATION_FAILURE = 112010015,                              /**< [en]Media negotiation failed. 
                                                                                 [cn]媒体协商失败 */
    CMS_USER_REJECTED = 112010016,                                          /**< [en]User rejects. 
                                                                                 [cn]用户拒绝 */
    CMS_USER_BUSY = 112010017,                                              /**< [en]User is busy. 
                                                                                 [cn]用户忙 */
    CMS_NO_CALL_RIGHT = 112010018,                                          /**< [en]No call permission. 
                                                                                 [cn]没有呼叫权限 */
    CMS_UNKNOWN_CALLEE = 112010019,                                         /**< [en]Unknown callee. 
                                                                                 [cn]未知被叫人 */
    CMS_NO_USER_RESPONDING = 112010020,                                     /**< [en]No user response. 
                                                                                 [cn]没有用户响应 */
    CMS_JOIN_CONF_TIMEOUT = 112010021,                                      /**< [en]Join meeting timed out. 
                                                                                 [cn]加入会议超时 */
    CMS_SESSION_RELEASED = 112010022,                                       /**< [en]Session has been released. 
                                                                                 [cn]会话已释放 */
    CMS_CALLEE_NOT_REGISTERED = 112010023,                                  /**< [en]Callee is not registered. 
                                                                                 [cn]被叫人未注册 */
    CMS_SIP_INVITE_TIMEOUT_RCV1XX = 112010024,                              /**< [en]SIP invite timed out. 
                                                                                 [cn]SIP邀请超时 */
    CMS_USER_SESSION_TIMER_TIMEOUT_HANGUP = 112010025,                      /**< [en]User Session timer times out and hangs up. 
                                                                                 [cn]用户Session timer 超时挂断 */
    CMS_RCV_USER_BYE_MRS_HANGUP = 112010026,                                /**< [en]The participant bye hangs up on the MRS side. 
                                                                                 [cn]与会者腿MRS侧bye挂断 */
    CMS_RCV_USER_BYE_PART_HANGUP = 112010027,                               /**< [en]The participant bye hangs up on terminal side. 
                                                                                 [cn]与会者腿终端侧bye挂断 */
    CMS_NO_RTP_STREAM_HUNG_UP = 112010028,                                  /**< [en]No RTP stream hang up. 
                                                                                 [cn]无码流挂断 */
    CMS_SYSPORTAL_EXCEPTION = 112100000,                                    /**< [en]Sysportal exception. 
                                                                                 [cn]系统异常 */
    CMS_BAD_REQUEST = 112100001,                                            /**< [en]Bad request. 
                                                                                 [cn]请求异常 */
    CMS_ILLEGAL_REQUEST = 112100002,                                        /**< [en]Illegal request. 
                                                                                 [cn]非法请求 */
    CMS_DATA_NOT_FOUND = 112100003,                                         /**< [en]Data not found. 
                                                                                 [cn]数据未获取到 */
    CMS_DATA_DUPLICATE = 112100004,                                         /**< [en]Data duplication. 
                                                                                 [cn]数据重复 */
    CMS_APPLY_TYPE_NOT_SUPPORT = 112100006,                                 /**< [en]The requested type is not supported. 
                                                                                 [cn]请求的类型不支持 */
    CMS_SAVE_NOTICE_MODEL_FAILED = 112100007,                               /**< [en]Failed to save notification template. 
                                                                                 [cn]保存通知模板失败 */
    CMS_SAVE_DATA_FAILED = 112100008,                                       /**< [en]Failed to save data. 
                                                                                 [cn]保存数据失败 */
    CMS_QUERY_DATA_FAILED = 112100009,                                      /**< [en]Failed to query data. 
                                                                                 [cn]查询数据失败 */
    CMS_DELETE_DATA_FAILED = 112100010,                                     /**< [en]Failed to delete data. 
                                                                                 [cn]删除数据失败 */
    CMS_NEED_RESET_PASSWORD = 112100011,                                    /**< [en]Password reset required. 
                                                                                 [cn]需要重置密码 */
    CMS_AUTH_FAILED = 112100012,                                            /**< [en]Incorrect old password. 
                                                                                 [cn]旧密码错误 */
    CMS_NEW_PASSWORD_EQUALS_OLD_PASSWORD = 112100013,                       /**< [en]The new password cannot be the same as the old password. 
                                                                                 [cn]新密码不能与旧密码相同 */
    CMS_PASSWORD_TOO_SIMPLE = 112100014,                                    /**< [en]Insufficient password complexity and low security. 
                                                                                 [cn]密码复杂度不够,安全性低 */
    CMS_LEHGTH_NOTMEET_STANDARD = 112100015,                                /**< [en]The length does not meet the requirements. 
                                                                                 [cn]长度不符合要求 */
    CMS_RSE_IS_IN_CONFERENCE = 112100016,                                   /**< [en]RSE is in meeting. 
                                                                                 [cn]RSE在会议中 */
    CMS_RSE_IS_DELETING = 112100017,                                        /**< [en]RSE to be deleted. 
                                                                                 [cn]RSE待删除 */
    CMS_RSE_LIST_CONF_FAILED = 112100018,                                   /**< [en]Failed to query the meeting list. 
                                                                                 [cn]查询会议列表失败 */
    CMS_AUTH_LOCKED = 112100019,                                            /**< [en]User has been locked out. Try again later. 
                                                                                 [cn]用户已被锁定,请稍后重新登录 */
    CMS_LIVE_CHANNEL_NAME_EXISTED = 112100022,                              /**< [en]The live room channel name exists. 
                                                                                 [cn]频道名称已存在 */
    CMS_CONFID_PREFIX_CANNOT_DECREASE = 112100023,                          /**< [en]Failed to modify system configuration items for duplicated meeting ID prefix. 
                                                                                 [cn]修改系统配置项失败,会议ID前缀重复 */
    CMS_CONFID_PREFIX_DUPLICATE = 112100024,                                /**< [en]CONFID prefix can only be added, not modified or deleted. 
                                                                                 [cn]CONFID前缀只能增加,不能修改和删除 */
    CMS_LIVE_CHANNEL_URL_EXISTED = 112100025,                               /**< [en]The live room channel url exists. 
                                                                                 [cn]直播房间地址已存在 */
    CMS_LIVE_ROOM_ISUSED = 112100026,                                       /**< [en]The live room has been occupied. 
                                                                                 [cn]直播房间已被使用 */
    CMS_LIVE_ROOM_NOT_EXIST = 112100027,                                    /**< [en]The live room does not exist. 
                                                                                 [cn]直播房间不存在 */
    CMS_LIVE_ROOM_RELEASE_FAIL = 112100028,                                 /**< [en]Live room release failed. 
                                                                                 [cn]直播房间释放失败 */
    CMS_REQUEST_MISSING_HEADER_OR_PARAM = 112100029,                        /**< [en]The request is missing header or param. 
                                                                                 [cn]请求缺失头域 */
    CMS_LIVE_MAIN_URL_EXISTED = 112100030,                                  /**< [en]The Live main stream URL already exists. 
                                                                                 [cn]音视频推流地址已存在 */
    CMS_LIVE_AUX_URL_EXISTED = 112100031,                                   /**< [en]The Live auxiliary stream URL already exists. 
                                                                                 [cn]辅流演示推流地址已存在 */
    CMS_PWD_IS_WEAK_PASSWORD = 112100032,                                   /**< [en]Password is weak. 
                                                                                 [cn]密码为弱密码 */
    CMS_LIVE_ROOM_ISUSED_FAIL = 112100033,                                  /**< [en]The live room is occupied. 
                                                                                 [cn]直播房间被占用 */
    CMS_SAVE_PART_ATTENDEES_SINCE_TOO_MANY = 112100034,                     /**< [en]Save part of attendees since max attendees size reached. 
                                                                                 [cn]因为与会者数量超出上限只保存部分 */
    CMS_EXPORT_DATA_FAIL = 112100035,                                       /**< [en]Failed to export data. 
                                                                                 [cn]导出数据失败 */
    CMS_IMPORT_DATA_FAIL = 112100036,                                       /**< [en]Failed to import data. 
                                                                                 [cn]导入数据失败 */
    CMS_FILE_EXCEEDS_MAXIMUM_SIZE = 112100037,                              /**< [en]Max file size reached. 
                                                                                 [cn]文件大小超出上限 */
    CMS_LVS_TARGET_ADDRESS_EXISTED = 112100038,                             /**< [en]LVS target address exists. 
                                                                                 [cn]lvs的目标地址已存在 */
    CMS_LVS_PORT_EXISTED = 112100039,                                       /**< [en]LVS port existed. 
                                                                                 [cn]lvs端口重复 */
    CMS_NOT_ALLOWED_MODIFY_GLOBAL_STANDBY = 112100040,                      /**< [en]Not allow to modify global standby config. 
                                                                                 [cn]Global只有主机可以修改配置； */
    CMS_MCU_INSULATE_ADDR_EXIST = 112100041,                                /**< [en]MCU insulation IP address exists. 
                                                                                 [cn]mcu隔离的IP已经存在 */
    CMS_MCU_INSULATE_ADDR_CANT_MODIFY = 112100042,                          /**< [en]MCU insulation IP address cannot be modified. 
                                                                                 [cn]mcu隔离的IP不能修改 */
    CMS_SBC_ADDR_EXIST = 112100043,                                         /**< [en]SBC address exists. 
                                                                                 [cn]SBC配置的地址已经存在 */
    CMS_INTERNAL_EXCEPTION = 112100044,                                     /**< [en]Internal exception. 
                                                                                 [cn]内部错误异常 */
    CMS_SYS_CONFIG_DELETE_EXCEPTION = 112100045,                            /**< [en]System config delete exception. 
                                                                                 [cn]系统配置不允许被删除 */
    CMS_NO_ISBC_ACCESS_ADDR = 112100046,                                    /**< [en]No ISBC access address. 
                                                                                 [cn]企业id无法获取关联SBC地址 */
    CMS_MEDIA_TYPE_NEED_HD = 112100047,                                     /**< [en]Media type need to be HD because the organization enable Full HD capability. 
                                                                                 [cn]企业已开启全高清功能,媒体设置不能低于1080P/8M */
    CMS_INTERPRETER_LANGUAGE_ABBREVIATION_REPEATED = 112100061,             /**< [en]Same interpreter language abbreviation exists. 
                                                                                 [cn]语言缩写重复 */
    CMS_INTERPRETER_LANGUAGE_NAME_REPEATED = 112100062,                     /**< [en]Same interpreter language name exists. 
                                                                                 [cn]语言名称重复 */
    CMS_MODIFY_MCU_WARNING = 112100063,                                     /**< [en]MCU type is MIXED and insulation config is not configured, or MCU meeting exsists when modifying mcu connection settings. 
                                                                                 [cn]修改MCU连接配置告警,以下两种场景会导致:1.MCU存在会议 2.修改类型为MIXED未配置隔离 */
    CMS_ADD_MCU_WARNING = 112100064,                                        /**< [en]MCU type is MIXED and insulation config is not configured when adding mcu connection settings. 
                                                                                 [cn]新增MCU连接配置告警,MCU类型为MIXED且未配置隔离 */
    CMS_MODIFY_MCUINSULATE_WARNING = 112100065,                             /**< [en]MCU type is MIXED when modifying MCU insulation config or disbanding enterprise. 
                                                                                 [cn]修改MCU隔离配置时,解除企业绑定时MCU类型为MIXED */
    CMS_DEL_MCUINSULATE_WARNING = 112100066,                                /**< [en]MCU type is MIXED when deleting MCU insulation config. 
                                                                                 [cn]删除MCU隔离配置时,MCU类型为MIXED */
    CMS_MCU_TYPE_INCOMPATIBLE = 112100067,                                  /**< [en]This gateway type is incompatible with MCU. 
                                                                                 [cn]MCU与网关类型不兼容 */
    CMS_MEDIARES_MEDIA_RESOURCE_NOT_ENOUGH = 115021001,                     /**< [en]Insufficient media resource. 
                                                                                 [cn]媒体资源不足 */
    CMS_MEDIARES_CONF_NOT_EXIST = 115021002,                                /**< [en]Meeting does not exist. 
                                                                                 [cn]会议不存在 */
    CMS_MEDIARES_MEDIA_RESOURCE_NOT_EXIST = 115021003,                      /**< [en]Media resource does not exist. 
                                                                                 [cn]媒体资源不存在 */
    CMS_MEDIARES_BANDWIDTH_RESOURCE_NOT_ENOUGH = 115021005,                 /**< [en]Insufficient media bandwidth resource. 
                                                                                 [cn]带宽资源不足 */
    CMS_MEDIARES_DEVICE_FAULT = 115021006,                                  /**< [en]Media device fault. 
                                                                                 [cn]设备故障 */
    CMS_LOGIC_RES_NOT_ENOUGH = 115022000,                                   /**< [en]Insufficient common logic resource. 
                                                                                 [cn]通用的逻辑资源不足 */
    CMS_LOGICRES_PNUM_RESOURCE_NOT_ENOUGH = 115022001,                      /**< [en]Insufficient meeting resources in the enterprise. 
                                                                                 [cn]企业会议并发方数不足 */
    CMS_LOGICRES_PORT_RESOURCE_NOT_ENOUGH = 115022002,                      /**< [en]Insufficient logic port resource. 
                                                                                 [cn]逻辑资源端口资源不满足 */
    CMS_LOGICRES_LSNUM_RESOURCE_NOT_ENOUGH = 115022003,                     /**< [en]Live broadcast resources have not been purchased or are insufficient. 
                                                                                 [cn]企业直播推流方数不足 */
    CMS_MEDIARES_DEVICE_NOT_EXIST = 115022004,                              /**< [en]Media device does not exist. 
                                                                                 [cn]媒体设备不存在 */
    CMS_ID_RESOURCE_NOT_ENOUGH = 115023001,                                 /**< [en]Insufficient ID resources. 
                                                                                 [cn]ID资源不足 */
    CMS_RMS_SERVICE_ERROR = 115024001,                                      /**< [en]RMS service exception. 
                                                                                 [cn]RMS服务异常 */
    CMS_LIVE_ROOM_IN_USE = 115025001,                                       /**< [en]The live room has already been occupied. 
                                                                                 [cn]直播房间已经被使用 */
    CMS_LIVE_ROOM_NOT_EXISTED = 115025002,                                  /**< [en]The live room does not exist. 
                                                                                 [cn]直播房间不存在 */
    CMS_LIVE_ROOM_RELEASE_FAILED = 115025003,                               /**< [en]Live room release failed. 
                                                                                 [cn]直播房间释放失败 */
    CMS_MCU_HAS_CONF = 115026001,                                           /**< [en]MCU meeting exists. 
                                                                                 [cn]MCU有会议 */
    CMS_COMMON_INVALID_PARAMS = 115029001,                                  /**< [en]Invalid common parameter. 
                                                                                 [cn]通用参数值不合法 */
    CMS_COMMON_NULL_PARAMS = 115029002,                                     /**< [en]Null parameter. 
                                                                                 [cn]参数值为空 */
    CMS_COMMON_SERVICE_INVALID = 115029003,                                 /**< [en]service is not available. 
                                                                                 [cn]服务不可用 */
    CMS_CONFIG_ERROR = 115029004,                                           /**< [en]Configuration exception. 
                                                                                 [cn]配置异常 */
    CMS_DUPLICATE_APPLY_RESOURCE = 115029005,                               /**< [en]Duplicately apply resources. 
                                                                                 [cn]重复申请资源 */
    CMS_WAIT_APPLY_RESOURCE = 115029006,                                    /**< [en]Waiting for applying resources. 
                                                                                 [cn]等待申请资源中 */
    CMS_COMMON_UNKNOWN = 115029999,                                         /**< [en]Unknown error. 
                                                                                 [cn]未知错误 */
    CMS_USER_AUTHENTICATION_FAILED = 118000000,                             /**< [en]User authentication failed. 
                                                                                 [cn]用户鉴权失败 */
    CMS_USER_TOKEN_AUTH_FAILED = 118000001,                                 /**< [en]User token authentication failed. 
                                                                                 [cn]usg token 鉴权失败 */
    CMS_USER_AUTHENTICATION_LOCKED = 118000002,                             /**< [en]User authentication account lockout. 
                                                                                 [cn]usg鉴权帐号锁定 */
    CMS_WAITING_ROOM_ADD_MEMBER_FAILED = 111112001,                         /**< [en]Failed to enter the waiting room. 
                                                                                 [cn]入等候室失败 */
    CMS_WAITING_ROOM_MOVE_MEMBER_FAILED = 111112002,                        /**< [en]Failed to exit the waiting room. 
                                                                                 [cn]出等候室失败 */
    CMS_WAITING_ROOM_CACHE_OPT_FAILED = 111112003,                          /**< [en]Waiting room cache operation failed. 
                                                                                 [cn]等候室缓存操作失败 */
    CMS_NOT_ALLOW_COHOST_TO_WAITING_ROOM = 111112004,                       /**< [en]Co-hosts cannot be moved into the waiting room. 
                                                                                 [cn]联席主持人不能被移入等候室 */
    CMS_NOT_ALLOW_ENABLE_WAITING_ROOM = 111112005,                          /**< [en]Not allowed to enable waiting room. 
                                                                                 [cn]不允许启用等候室 */
    CMS_CLIENT_NOT_SUPPORT = 111112008,                                     /**< [en]Not support this feature according to client capabilities. 
                                                                                 [cn]客户端能力不支持此特性 */
    CMS_WAITING_USER_LIMIT = 111081010,                                     /**< [en]Waiting user restrictions. 
                                                                                 [cn]等候用户限制 */

    /* USG错误码 */
    USG_SERVER_BUSY = 200000001,                                            /**< [en]Server is busy. Please try again later. 
                                                                                 [cn]服务器正忙 请稍后再试 */      
    USG_INTERNAL_ERR = 200000002,                                           /**< [en]Internal error. Please contact SRE. 
                                                                                 [cn]服务器正忙 请联系SRE */
    USG_PARAM_ERR = 200000003,                                              /**< [en]Invalid parameter. Please check whether the parameters are valid. 
                                                                                 [cn]请求参数错误 请检查参数是否合法 */
    USG_ILLEGAL_REQ = 200000004,                                            /**< [en]Illegal request. Please check the value of the request header field X-Auth-Token or X-Access-Token. 
                                                                                 [cn]非法请求 请检查请求头域X-Auth-Token或X-Access-Token的值 */
    USG_UPGRADING = 200000005,                                              /**< [en]Forbidden access during the version upgrade. 
                                                                                 [cn]系统正在升级，暂时不可访问。如对您造成不便，十分抱歉 */
    USG_CORP_USER_NUMBER_MAX = 201040005,                                   /**< [en]Max number of users reached. Please check the purchased meeting users. 
                                                                                 [cn]用户总数超过限制，请检查购买的会议用户 */
    USG_VMR_PWD_SAME_AS_CHAIRMAN_PWD = 201080006,                           /**< [en]The host password and the guest password cannot be the same. Please confirm the input parameters. 
                                                                                 [cn]主席密码和来宾密码不能相同 请确认输入参数 */
    USG_VMR_PWM_SAME_AS_MEETING_PWD = 201080017,                            /**< [en]Same as meeting password. 
                                                                                 [cn]和会议密码相同 */
    USG_INVITATION_ENABLE_INVALID = 201510001,                              /**< [en]No invite permission to get an invite code. 
                                                                                 [cn]没有邀请权限去获取邀请码 */
    USG_CORP_APPLICANT_INVALID = 201510003,                                 /**< [en]Invalid application. 
                                                                                 [cn]申请失效 */
    USG_TOKEN_IS_CRATER_BY_OTHERSITE = 206020001,                           /**< [en]Token is created by disaster recovery site. 
                                                                                 [cn]token是容灾站点创建 */
    USG_TOKEN_IS_INVAILD_BY_KICKOFF = 206020002,                            /**< [en]Token is invalid due to being kicked. 
                                                                                 [cn]token由于被踢失效 */
    USG_USER_NOT_EXIST = 206030000,                                         /**< [en]The user does not exist. 
                                                                                 [cn]系统中不存在该用户 */
    USG_FIND_VERCODE_FAIL = 206030001,                                      /**< [en]The verification code is incorrect or has expired. Please obtain a new one. 
                                                                                 [cn]验证码错误或失效，请重新获取 */
    USG_VERCODE_ERR = 206030002,                                            /**< [en]Incorrect verification code. 
                                                                                 [cn]验证码错误 */
    USG_NOT_PHONE_AND_EMAIL = 206030003,                                    /**< [en]Failed to send the verification code. 
                                                                                 [cn]发送验证码失败 */
    USG_RESEND_NOT_ALLOW = 206030004,                                       /**< [en]Try to get a new verification code 180s later. 
                                                                                 [cn]请在180秒后重新发送验证码 */
    USG_NOT_SUPPORT_MODIFY_PWD = 206030005,                                 /**< [en]The password cannot be changed. 
                                                                                 [cn]系统不支持修改密码 */
    USG_OLD_PWD_WRONG = 206030006,                                          /**< [en]The old password is incorrect. 
                                                                                 [cn]旧密码错误 */
    USG_INVALID_NEW_PWD_LEN = 206030007,                                    /**< [en]The length of the new password does not meet the requirements. 
                                                                                 [cn]新密码长度不符合要求 */
    USG_INVALID_PWD_LEVEL = 206030008,                                      /**< [en]The password complexity does not meet the requirements. 
                                                                                 [cn]密码复杂度不满足要求 */
    USG_CANNOT_SAME_WITH_HISTROY_PWD = 206030009,                           /**< [en]The new password must be different from the previous old passwords. 
                                                                                 [cn]设置的密码不能与最近旧密码相同 */
    USG_REPEAT_CHAR_NUM_TOO_MUCH = 206030010,                               /**< [en]The password cannot contain three or more of the same characters consecutively. 
                                                                                 [cn]密码不能包含3个以上重复字符 */
    USG_PWD_TOO_FREQUENTLY = 206030011,                                     /**< [en]The password cannot be changed within 5 minutes upon the last password change. 
                                                                                 [cn]修改密码后，5分钟内不能更新密码 */
    USG_CANNOT_CONTAIN_ACCOUNT = 206030012,                                 /**< [en]The password cannot contain the account or the reverse order of the account. 
                                                                                 [cn]密码不能与帐号或其逆序帐号相同 */
    USG_MANY_SAME_WITH_OLD_PWD = 206030013,                                 /**< [en]At least two characters must be different between the new and old passwords. 
                                                                                 [cn]新密码相较于旧密码至少要有两个不同的字符 */
    USG_CONTAINS_INVAILD = 206030014,                                       /**< [en]Invalid password format. 
                                                                                 [cn]密码格式不正确 */
    USG_USER_LOCKED = 206030015,                                            /**< [en]The user is locked and will be locked in 60s. 
                                                                                 [cn]用户已被锁定，请60秒后重试 */
    USG_NO_RIGHT_TO_RESET_PWD = 206030016,                                  /**< [en]Have no right to reset other's password. 
                                                                                 [cn]没有权限重置密码 */
    USG_FROGET_PWD_OVER_10_TIMES = 206030018,                               /**< [en]The number of password retrieval times in a day has reached the maximum(10 times). 
                                                                                 [cn]一天内忘记密码次数达到最大值（10次） */
    USG_NO_CORRESPOND_TERMIAL_TYPE = 206040000,                             /**< [en]No corresponding terminal type. 
                                                                                 [cn]无对应的终端类型 */
    USG_PASSWORD_SECURITY_LOW = 201040016,                                  /**< [en]Password security is low. Please set another password. 
                                                                                 [cn]密码安全性低，请设置其他密码 */
    USG_LOGINVERIFY_CODE_INVAILD = 206060014,                               /**< [en]Invalid verification code. 
                                                                                 [cn]验证码非法 */
    USG_LOGINVERIFY_CODE_EXCCED_MAX = 206060015,                            /**< [en]Max verification codes check times reached. 
                                                                                 [cn]验证码次数超过最大次数 */
    USG_INVALID_TOKEN = 206020000,                                          /**< [en]Invalid authentication information. Please check the value of the request header field X-Auth-Token or X-Access-Token. 
                                                                                 [cn]鉴权信息无效 请检查请求头域X-Auth-Token或X-Access-Token的值 */
    USG_ERR_PASSWORD = 206010000,                                           /**< [en]User name or password error. 
                                                                                 [cn]用户名或密码错误 */
    USG_NORMAL_USER_CANNOT_LOGIN = 206010036,                               /**< [en]Normal users cannot log in. 
                                                                                 [cn]普通用户无法登录 */
    USG_APPID_AUTH_FAILED = 206010025,                                      /**< [en]APPID verification failed. 
                                                                                 [cn]APPID校验失败 */
    USG_APPID_NOT_ALLOW_AUTO_REG = 206010030,                               /**< [en]APPID does not allow automatic registration. 
                                                                                 [cn]APPID不允许自动注册 */
    USG_APPID_AUTH_EXPIRE = 206010057,                                      /**< [en]APPID authentication expires. 
                                                                                 [cn]APPID认证过期 */
    USG_APPID_ACCOUNT_NOT_BIND = 206010058,                                 /**< [en]APPID account is not bound. 
                                                                                 [cn]APPID账户未绑定 */
    USG_APPID_ACCOUNT_DISABLED = 206010007,                                 /**< [en]Account is not activated, no permission to log in. 
                                                                                 [cn]帐号未激活,无权限登录 */
    USG_APPID_AUTO_REG_FAILED = 206010031,                                  /**< [en]APPID auto registration failed. 
                                                                                 [cn]APPID自动注册失败 */
    USG_REQUEST_PARAM_ERROR = 206060011,                                    /**< [en]Request parameter arror. 
                                                                                 [cn]请求参数错误 */
    USG_NEED_SLIDER_VERIFY = 206060009,                                     /**< [en]Slider verification required. 
                                                                                 [cn]需要滑块校验 */
    USG_SLIDER_TOKEN_INVAILD = 206060010,                                   /**< [en]Invalid slider token. 
                                                                                 [cn]滑块token非法 */
    USG_NOT_SUPPORT_SEND_SMS = 206060012,                                   /**< [en]Sending SMS is not supported. 
                                                                                 [cn]不支持发送短信 */
    USG_NOT_ALLOW_REPEAT_SEND = 206060013,                                  /**< [en]Repeated sending is not supported. 
                                                                                 [cn]不支持重复发送 */
    USG_SEND_VERIFY_CODE_IS_LOCKED = 206060008,                             /**< [en]Sending verification code is locked. 
                                                                                 [cn]发送校验码锁定 */
    USG_SEND_VERIFY_CODE_FAILED = 206030023,                                /**< [en]Failed to send verification code. Please contact SRE. 
                                                                                 [cn]发送验证码失败 请联系SRE */
    USG_SEND_SLIDER_FAILED = 206010010,                                     /**< [en]Failed to get verification code, Please contact SRE. 
                                                                                 [cn]获取验证码失败 请联系SRE */
    USG_CHECK_SLIDER_FAILED = 206010012,                                    /**< [en]Verification code check failed. 
                                                                                 [cn]验证码校验失败 */
    USG_PRE_VERIFY_EXPIRE = 201040042,                                      /**< [en]Pre-authentication expired. 
                                                                                 [cn]预验证失效 */
    USG_OTHER_CORP_OWNER = 201020023,                                       /**< [en]This user is already the owner of another corporation and cannot create a new corporation for it. 
                                                                                 [cn]该用户已经是其他企业的所有者,无法为其创建新的企业 */
    USG_NO_INVITE_OTHER_CORP_OWNER = 201040043,                             /**< [en]This user is the owner of another corporation and cannot be invited. 
                                                                                 [cn]该用户是其他企业的所有者,暂无法邀请 */
    USG_INVITE_LINK_INVALID = 201040044,                                    /**< [en]Invalid invite connection. 
                                                                                 [cn]邀请连接非法 */
    USG_USER_IN_WAIT_LIST = 201040045,                                      /**< [en]User is already in waiting list. 
                                                                                 [cn]用户已经在等待列表 */
    USG_USER_EXIST = 201040046,                                             /**< [en]User already exists. 
                                                                                 [cn]用户已存在 */
    USG_NOT_ALLOW_MOD_ACCOUNT = 201040047,                                  /**< [en]Account modification is not allowed. 
                                                                                 [cn]不允许修改账户 */
    USG_USG_VERIFY_CODE_CHECK_EXCCED_MAX = 206030019,                       /**< [en]The number of incorrect verification code input has reached the maximum, Please get it again. 
                                                                                 [cn]验证码输入错误次数超过最大值，请重新获取 */
    USG_AUTO_USER_NOT_ALLOW_MOD_PWD = 206030028,                            /**< [en]The system has enabled SSO login and does not support changing the password. Please retry after the system has disabled SSO login. 
                                                                                 [cn]系统已开启SSO登录,不支持修改密码 系统关闭SSO登录后重试 */
    USG_NEED_VERIFY_CODE = 206010011,                                       /**< [en]Verification code must be filled. 
                                                                                 [cn]验证码不能为空 */
    USG_SSO_AUTH_FAILED = 206010022,                                        /**< [en]SSO login failed. Please contact SRE. 
                                                                                 [cn]SSO登录失败 请联系SRE */
    USG_INVALID_AUTH_TYPE = 206010024,                                      /**< [en]Invalid authentication type. 
                                                                                 [cn]认证类型非法 */
    USG_NETWORK_ERROR = 206010029,                                          /**< [en]Network error. 
                                                                                 [cn]网络异常 */
    USG_HWACCOUNT_AUTH_FAILED = 206010042,                                  /**< [en]Huawei account authentication failed. 
                                                                                 [cn]华为账户认证失败 */
    USG_SITE_MISMATCHED = 206010064,                                        /**< [en]Site mismatch. 
                                                                                 [cn]站点不匹配 */
    USG_CONFLICT_PHONE = 206010065,                                         /**< [en]Phone number conflict. 
                                                                                 [cn]电话冲突 */
    USG_CONFLICT_EMAIL = 206010066,                                         /**< [en]E-mail conflict. 
                                                                                 [cn]邮箱冲突 */
    USG_HWACCOUNT_BIND_FAILED = 206060017,                                  /**< [en]Failed to bind Huawei account. 
                                                                                 [cn]华为账户绑定失败 */
    USG_AUTH_TYPE_ERR = 206010027,                                          /**< [en]Authentication type error. 
                                                                                 [cn]校验类型错误 */
    USG_JUMP_LOGIN_FAIL = 206010013,                                        /**< [en]Jump login failed. Please contact SRE. 
                                                                                 [cn]跳转登录失败 请联系SRE */
    USG_HUAWEI_MODIFY_PWD = 206030031,                                      /**< [en]Forgot password for Huawei account. 
                                                                                 [cn]华为帐号忘记密码 */
    USG_USER_NUM_EXCEED = 206010070,                                        /**< [en]The number of users has reached the maximum. 
                                                                                 [cn]用户数超过上限 */
    AUTH_WECHAT_LOGIN_FAILED = 206010071,                                   /**< [en]WeChat authentication failed. 
                                                                                 [cn]微信鉴权失败 */
    USG_LOG_UPLOAD_TIMES_EXCEED = 211060003,                                /**< [en]The maximum times of log uploads has been reached. 
                                                                                 [cn]日志上传次数达到最大限制 */
    USG_AUTH_NOT_SUPPORT_SSO = 206010023,                                   /**< [en]SSO login is not supported. 
                                                                                 [cn]不支持sso登录 */
    USG_CHANGE_SITE_AND_NEXT_REQUEST = 206010074,                           /**< [en]International sites support site changing re-login. 
                                                                                 [cn]国际站点支持切站点重登 */
    USG_ACCOUNT_IS_UNBOUND = 206010075,                                     /**< [en]Account has been unbound. 
                                                                                 [cn]账号已经解绑 */
    USG_CAN_NOT_UNBOUND = 201050022,                                        /**< [en]Terminal does not allow unbinding. 
                                                                                 [cn]终端不允许解绑 */
    USG_ACTIVE_NOT_IDEAHUB_CODE = 211030046,                                /**< [en]Not the ideahub activation code. 
                                                                                 [cn]不是ideahub激活码 */
    USG_ACTIVE_INVALID_ACTIVE_CODE = 201050015,                             /**< [en]Invalid activation code. 
                                                                                 [cn]激活码错误 */
    USG_ACTIVE_CODE_NOT_EXIT = 201050012,                                   /**< [en]Activation code does not exist. 
                                                                                 [cn]激活码不存在 */
    USG_ACTIVE_FAIL = 201050021,                                            /**< [en]Activation failed. 
                                                                                 [cn]激活失败 */
    USG_ACTIVE_CODE_OVERDUE = 201040031,                                    /**< [en]Activation code overdue.
                                                                                 [cn]激活码过期 */
    
    /* SDK自定义错误码 - 会议 */
    SDK_COMMON_FAIL = 411000001,                                            /**< [en]Common failure. 
                                                                                 [cn]失败 */   
    SDK_PARAM_ERROR = 411000002,                                            /**< [en]Parameter error. 
                                                                                 [cn]参数错误 */
    SDK_CONF_NOT_EXIST = 411000003,                                         /**< [en]Meeting does not exist. 
                                                                                 [cn]会议不存在 */
    SDK_CONF_EXIST = 411000004,                                             /**< [en]A meeting already exists. 
                                                                                 [cn]已经有会议存在 */
    SDK_CONF_STATE_ERROR = 411000005,                                       /**< [en]Meeting state error. 
                                                                                 [cn]会议状态异常 */
    SDK_CALL_GET_DEVICE_FAILED = 411000006,                                 /**< [en]Failed to get device. 
                                                                                 [cn]获取设备异常 */
    SDK_CALL_SET_DEVICE_FAILED = 411000007,                                 /**< [en]Failed to set device. 
                                                                                 [cn]设置设备异常 */
    SDK_NO_DEVICE_CAN_USED = 411000008,                                     /**< [en]No device available. 
                                                                                 [cn]无可用设备 */
    SDK_ONLY_MOBILE_SUPPORT = 411000009,                                    /**< [en]This operation is only supported on mobile. 
                                                                                 [cn]只有移动端支持该操作 */
    SDK_ACCESS_ERROR = 411000010,                                           /**< [en]Network access error. 
                                                                                 [cn]网络接入错误 */
    SDK_SERVICE_DOING = 411000011,                                          /**< [en]Other supplementary service is running. 
                                                                                 [cn]正在进行其他补充业务 */
    SDK_ERR_MEM_ERROR = 411000012,                                          /**< [en]Memory allocation error. 
                                                                                 [cn]分配内存错误 */
    SDK_ERR_INITIALIZE_FAILED = 411000013,                                  /**< [en]Initialization failed. 
                                                                                 [cn]初始化失败 */
    SDK_USER_DOES_NOT_EXIST = 411000014,                                    /**< [en]User does not exist. 
                                                                                 [cn]用户不存在 */
    SDK_DATACONF_NOT_JOIN = 411000015,                                      /**< [en]Did not join the data meeting. 
                                                                                 [cn]未加入数据会议 */
    SDK_CALL_AND_CONF_NOT_EXIST = 411000016,                                /**< [en]Neither meeting nor call exists. 
                                                                                 [cn]会议和呼叫均不存在 */
    SDK_SVN_DETECT_FAILED = 411000017,                                      /**< [en]SVN port detection failed. 
                                                                                 [cn]svn端口探测不通 */
    SDK_ERR_WRITE_FILE_FAILED = 411000018,                                  /**< [en]Failed to write file. 
                                                                                 [cn]写文件失败 */
    SDK_ERR_RTC_NOT_SUPPORT_STG = 411000019,                                /**< [en]RTC does not support STG mode. 
                                                                                 [cn]RTC不支持STG模式 */
    SDK_ERR_RTC_LIB_LOAD_FAILED = 411000020,                                /**< [en]Failed to load RTC library. RTC meeting is not supported. 
                                                                                 [cn]rtc库加载失败，不支持rtc会议 */
    SDK_ERR_SWITCH_ROLE_CONF_PAUSE = 411000021,                             /**< [en]The meeting is in the audience pause state when changing roles. 
                                                                                 [cn]转角色的时候会议正处于观众暂停观看状态 */
    SDK_CONF_NOT_IN_CALL = 411000022,                                       /**< [en]Not in call. 
                                                                                 [cn]不在呼叫中 */
    SDK_CONF_OR_CALL_NOT_EXIST = 411000023,                                 /**< [en]Meeting or call does not exist. 
                                                                                 [cn]会议或者呼叫不存在 */
    SDK_CONF_PAIR_STATE_NOT_ALLOW = 411000024,                              /**< [en]Pairing state not allowed. 
                                                                                 [cn]配对状态不允许 */
    SDK_CONF_PAIR_QUERY_FAIL = 411000025,                                   /**< [en]Pairing request failed. 
                                                                                 [cn]配对请求失败 */
    SDK_CONF_PAIR_OVER_LIMIT = 411000026,                                   /**< [en]Pairing exceeds limit. 
                                                                                 [cn]配对超出限制 */
    SDK_CONF_PAIR_ERROR_COMMON = 411000027,                                 /**< [en]Pairing common error. 
                                                                                 [cn]配对通用错误 */
    SDK_CONF_PAIR_ENTER_FAILED = 411000028,                                 /**< [en]Pairing and joining the meeting failed. 
                                                                                 [cn]配对入会失败 */
    SDK_CONF_PAIR_ENTER_BUSY = 411000029,                                   /**< [en]Pairing and joining the meeting is busy. 
                                                                                 [cn]配对入会忙 */
    SDK_CONF_PAIR_ENTER_INVALID = 411000030,                                /**< [en]Pairing and joining the meeting is invalid. 
                                                                                 [cn]配对入会无效 */
    SDK_CONF_PAIR_ENTER_MULTI = 411000031,                                  /**< [en]Multiple clicks at the same time to pair and join the meeting error. 
                                                                                 [cn]同时多次点击入会错误 */
    SDK_CONF_PAIR_UNESTABLISHED_OR_PRIRING = 411000032,                     /**< [en]Pairing is not established or is being established. 
                                                                                 [cn]配对未建立或正在建立中 */
    SDK_CONF_EXTERN_INPUT_CAMERA_NOT_OPEN = 411000033,                      /**< [en]The camera is not turned on in the third-party capture mode. 
                                                                                 [cn]第三方采集模式下摄像头未打开 */
    SDK_CONF_CREAT_RTC_ENGINE_FAILED = 411000034,                           /**< [en]RTC engine creation failed. 
                                                                                 [cn]RTC 引擎创建失败 */
    SDK_CONF_NOT_IN_CONF = 411000035,                                       /**< [en]Not in a meeting. 
                                                                                 [cn]不在会议中 */
    
    SDK_NO_STREAM_END_CONF_NET_BREAK = 411000100,                           /**< [en]End the meeting with no stream due to disconnection of network. 
                                                                                 [cn]无码流结束会议网络断开 */
    SDK_NO_STREAM_END_CONF_REJOIN_FAIL = 411000101,                         /**< [en]End the meeting with no stream because fail to re-join meeting. 
                                                                                 [cn]无码流结束会议重入会失败 */
    
    SDK_CHECK_PARAM_NULL_POINTER = 411000102,                               /**< [en]Null pointer exception. 
                                                                                 [cn]空指针异常 */
    SDK_CHECK_PARAM_NOT_ALLOW_NULL = 411000103,                             /**< [en]Parameters cannot be empty. 
                                                                                 [cn]参数不许为空 */
    SDK_ENCRYPT_DECRTPT_FUNC_NOT_MACTCH = 411000104,                        /**< [en]Indicates encrypt and decrtpt func not match. 
                                                                                 [cn]加解密算法不匹配 */
    SDK_LOAD_USER_DEFINED_DLL_FAILED = 411000105,                           /**< [en]Indicates Loading User-Defined DLLs failed . 
                                                                                 [cn]加载用户自定义dll失败 */
    
    /* SDK自定义错误码 - 登录 */
    SDK_LOGIN_MSG_THREAD_UNINIT = 412100001,                                /**< [en]The message processing thread is not initialized. 
                                                                                 [cn]消息处理线程未初始化 */
    SDK_LOGIN_PARAM_ERROR = 412100002,                                      /**< [en]Parameter error. 
                                                                                 [cn]参数错误 */
    SDK_LOGIN_TIMEOUT = 412100003,                                          /**< [en]Timeout. 
                                                                                 [cn]超时 */
    SDK_LOGIN_MEM_ERROR = 412100004,                                        /**< [en]Memory allocation error. 
                                                                                 [cn]分配内存错误 */
    SDK_LOGIN_XML_ERROR = 412100005,                                        /**< [en]XML parsing error. 
                                                                                 [cn]XML解析出错 */
    SDK_LOGIN_DNS_ERROR = 412100006,                                        /**< [en]DNS resolution error. 
                                                                                 [cn]DNS解析异常 */
    SDK_LOGIN_REQUEST_FAILED = 412100007,                                   /**< [en]Request message failed. 
                                                                                 [cn]请求消息异常 */
    SDK_LOGIN_AUTH_FAILED = 412100008,                                      /**< [en]Authentication failed. 
                                                                                 [cn]鉴权失败 */
    SDK_LOGIN_SERVICE_ERROR = 412100009,                                    /**< [en]Server error. 
                                                                                 [cn]服务器异常 */
    SDK_LOGIN_ACCOUNT_LOCKED = 412100010,                                   /**< [en]Account is locked. 
                                                                                 [cn]帐号被锁定 */
    SDK_LOGIN_TIMER_ERROR = 412100011,                                      /**< [en]Create timer error. 
                                                                                 [cn]创建定时器错误 */
    SDK_LOGIN_CA_VERIFY_FAILED = 412100012,                                 /**< [en]Server CA certificate verification failed. 
                                                                                 [cn]服务器CA证书校验失败 */
    SDK_LOGIN_NETWORK_ERROR = 412100013,                                    /**< [en]Network error. 
                                                                                 [cn]网络异常 */
    SDK_LOGIN_SERVER_REDIRECT = 412100014,                                  /**< [en]Server redirect. 
                                                                                 [cn]服务器返回重定向地址 */
    SDK_LOGIN_AUTH_ACCOUNT_DIACTIVE = 412100015,                            /**< [en]Account is not activated. 
                                                                                 [cn]帐号未激活 */
    SDK_LOGIN_JSON_ERROR = 412100016,                                       /**< [en]JSON parsing error. 
                                                                                 [cn]JSON解析失败 */
    SDK_LOGIN_CURLE_EXTERN_CONNECT_TIMEOUT = 412100017,                     /**< [en]The proxy communication times out and the TCP link building fails. Probably because the proxy configuration is incorrect. 
                                                                                 [cn]代理通信超时，tcp建链失败，大概率是代理配置错误 */
    SDK_LOGIN_CURLE_EXTERN_CLOSED_BY_PROXY = 412100018,                     /**< [en]Disconnected by the proxy. Probably because the server address is misconfigured. 
                                                                                 [cn]接被代理断开，大概率是服务器地址配置错误 */
    SDK_LOGIN_CURLE_EXTERN_PROXY_ADDR_OR_PORT_ERROR = 412100019,            /**< [en]The TCP link establishment timed out. Probably because the proxy domain name or port configuration is incorrect. 
                                                                                 [cn]tcp建链超时，大概率是proxy域名或者端口配置错误 */
    SDK_LOGIN_CURLE_EXTERN_PROXY_PERMISSION_DENIED = 412100020,             /**< [en]The authentication process failed. The user does not have proxy permission and needs to apply for proxy permission. 
                                                                                 [cn]认证鉴权过程失败，用户没有proxy权限，需要申请proxy权限 */
    SDK_LOGIN_CURLE_EXTERN_USER_OR_PWD_ERROR = 412100021,                   /**< [en]The authentication process failed. The proxy user name or password is incorrect. 
                                                                                 [cn]认证鉴权过程失败，代理用户名或者密码错误 */
    SDK_LOGIN_CURLE_EXTERN_AUTH_TYPE_ERROR = 412100022,                     /**< [en]The authentication process failed. Incorrect authentication type. User name and password are required. The user needs to be prompted for input. 
                                                                                 [cn]认证鉴权过程失败，错误的认证类型，同时需要用户名、密码，需要提示用户输入 */
    SDK_LOGIN_CURLE_EXTERN_AUTH_ERROR = 412100023,                          /**< [en]The authentication process failed. Other unknown errors. It may be that the authentication method is not supported. The user needs to be prompted to try again. 
                                                                                 [cn]认证鉴权过程失败，其他未知错误，有可能是不支持认证方式，建议弹框提示用户重新发起 */
    /* libcurl标准错误码转换 */
    SDK_LOGIN_CURLE_COULDNT_RESOLVE_PROXY = 412100024,                      /**< [en]The authentication process failed. Unable to resolve gateway. 
                                                                                 [cn]认证鉴权过程失败，无法解析网关 */
    SDK_LOGIN_CURLE_COULDNT_RESOLVE_HOST = 412100025,                       /**< [en]The authentication process failed. Unable to resolve host. 
                                                                                 [cn]认证鉴权过程失败，无法解析主机 */
    SDK_LOGIN_CURLE_COULDNT_CONNECT = 412100026,                            /**< [en]The authentication process failed. Unable to connect. 
                                                                                 [cn]认证鉴权过程失败，无法连接 */
    SDK_LOGIN_CURLE_OPERATION_TIMEDOUT = 412100027,                         /**< [en]The authentication process failed. Operation times out. 
                                                                                 [cn]认证鉴权过程失败，操作超时 */
    SDK_LOGIN_MSG_TOOLARGE = 412100028,                                     /**< [en]Message length too long. 
                                                                                 [cn]消息长度太大 */
    SDK_LOGIN_BASE64_ENCODE_ERROR = 412100029,                              /**< [en]Base64 encryption failed. 
                                                                                 [cn]base64加密失败 */
    SDK_LOGIN_XML_PARSE_ERROR = 412100030,                                  /**< [en]XML parsing error. 
                                                                                 [cn]XML解析出错 */
    SDK_LOGIN_SECURE_LIB_ERROR = 412100031,                                 /**< [en]Secure function error. 
                                                                                 [cn]安全函数失败 */
    SDK_LOGIN_FIREWALL_DETECT_PARAM_ERROR = 412100032,                      /**< [en]Firewall detection parameter error. 
                                                                                 [cn]防火墙检测参数错误 */
    SDK_LOGIN_BUILD_STG_TUNNEL_FAIL = 412100033,                            /**< [en]Failed to create STG tunnel. 
                                                                                 [cn]创建STG隧道失败 */
    SDK_LOGIN_UPDATE_STG_SERVER_ERROR = 412100034,                          /**< [en]Failed to update STG service. 
                                                                                 [cn]更新STG服务失败 */
    SDK_LOGIN_TUP_CPYPT_ENCRYPT_ERROR = 412100035,                          /**< [en]Encryption failed. 
                                                                                 [cn]加密失败 */
    SDK_LOGIN_IN_DOWNLOADING_CANNOT_DOWNLOAD_AGAIN = 412100036,             /**< [en]Do not allow duplicate downloads. 
                                                                                 [cn]不允许重复下载 */
    SDK_LOGIN_FILE_OPEART_FAIL = 412100037,                                 /**< [en]File operation failed. 
                                                                                 [cn]文件操作失败 */
    SDK_LOGIN_RSP_BODY_NULL = 412100038,                                    /**< [en]The request message returns empty. 
                                                                                 [cn]请求消息返回空 */ 
    SDK_LOGIN_PROBE_SERVER_NUMBER_ZERO_ERR = 412100039,                     /**< [en]The number of detection servers is 0 error. 
                                                                                 [cn]探测服务器数为0错误 */
    SDK_LOGIN_GET_BEST_LOCAL_IP_FAIL = 412100040,                           /**< [en]Failed to get local IP address. 
                                                                                 [cn]获取本地IP失败 */
    
    SDK_LOGINLOGIC_GENERAL = 412200001,                                     /**< [en]Internal error. 
                                                                                 [cn]内部错误 */
    SDK_LOGINLOGIC_PARAM_ERROR = 412200002,                                 /**< [en]Parameter error. 
                                                                                 [cn]参数错误 */
    SDK_LOGINLOGIC_REQUEST_TIMEOUT = 412200003,                             /**< [en]Network timeout. 
                                                                                 [cn]网络超时 */
    SDK_LOGINLOGIC_NETWORK_ERROR = 412200004,                               /**< [en]Network Error. 
                                                                                 [cn]网络错误 */
    SDK_LOGINLOGIC_NEED_MOBILEBIND = 412200005,                             /**< [en]Need to bind mobile phone. 
                                                                                 [cn]需要绑定手机 */
    SDK_LOGINLOGIC_NEED_MAILBIND = 412200006,                               /**< [en]Need to bind email. 
                                                                                 [cn]需要绑定邮箱 */
    SDK_LOGINLOGIC_HAS_INITED = 412200007,                                  /**< [en]Has initialized already. 
                                                                                 [cn]重复初始化 */
    SDK_LOGINLOGIC_STATE_MACHINE_RUN_FAILED = 412200008,                    /**< [en]State machine execution failed. 
                                                                                 [cn]状态机执行失败 */
    SDK_LOGINLOGIC_START_TIMER_ERROR = 412200009,                           /**< [en]Failed to start timer. 
                                                                                 [cn]开启定时器失败 */
    SDK_LOGINLOGIC_NEED_MODIFY_PASSWORD = 412200010,                        /**< [en]The user is prompted to change the password when logging in for the first time. 
                                                                                 [cn]首次登录，提示用户修改密码 */
    SDK_LOGINLOGIC_UNKOWN_AUTH_TYPE = 412200011,                            /**< [en]Unknown authentication type. 
                                                                                 [cn]未知鉴权类型 */
    
    /* SDK自定义错误码 - 会控 */
    SDK_CONFCTRL_GENERAL = 414100001,                                       /**< [en]Common error. 
                                                                                 [cn]一般错误 */
    SDK_CONFCTRL_PARAM_ERROR = 414100002,                                   /**< [en]Parameter error. 
                                                                                 [cn]参数错误 */
    SDK_CONFCTRL_TIMEOUT = 414100003,                                       /**< [en]Timeout. 
                                                                                 [cn]超时 */
    SDK_CONFCTRL_MEM_ERROR = 414100004,                                     /**< [en]Memory allocation error. 
                                                                                 [cn]分配内存错误 */   
    SDK_CONFCTRL_DNS_ERROR = 414100005,                                     /**< [en]DNS resolution error. 
                                                                                 [cn]DNS解析异常 */
    SDK_CONFCTRL_REQUEST_FAILED = 414100006,                                /**< [en]Request message failed. 
                                                                                 [cn]请求消息异常 */
    SDK_CONFCTRL_AUTH_FAILED = 414100007,                                   /**< [en]Authentication failed. 
                                                                                 [cn]鉴权失败 */
    SDK_CONFCTRL_SERVICE_ERROR = 414100008,                                 /**< [en]Server error. 
                                                                                 [cn]服务器异常 */
    SDK_CONFCTRL_TIMER_ERROR = 414100009,                                   /**< [en]Create timer error. 
                                                                                 [cn]创建定时器错误 */
    SDK_CONFCTRL_START_TIMER_ERROR = 414100010,                             /**< [en]Start timer error. 
                                                                                 [cn]开启定时器错误 */
    SDK_CONFCTRL_CONF_BLOCK_FULL = 414100011,                               /**< [en]The meeting control block is full. Please release the control block that is not in use. 
                                                                                 [cn]会控控制块已满，请释放没在使用的控制块 */
    SDK_CONFCTRL_CURLE_EXTERN_CONNECT_TIMEOUT = 414100012,                  /**< [en]The proxy communication times out and the TCP link building fails. Probably because the proxy configuration is incorrect. 
                                                                                 [cn]代理通信超时，tcp建链失败，大概率是代理配置错误 */
    SDK_CONFCTRL_CURLE_EXTERN_CLOSED_BY_PROXY = 414100013,                  /**< [en]Disconnected by the proxy. Probably because the server address is misconfigured. 
                                                                                 [cn]接被代理断开，大概率是服务器地址配置错误 */
    SDK_CONFCTRL_CURLE_EXTERN_PROXY_ADDR_OR_PORT_ERROR = 414100014,         /**< [en]The TCP link establishment timed out. Probably because the proxy domain name or port configuration is incorrect. 
                                                                                 [cn]tcp建链超时，大概率是proxy域名或者端口配置错误 */
    SDK_CONFCTRL_CURLE_EXTERN_PROXY_PERMISSION_DENIED = 414100015,          /**< [en]The authentication process failed. The user does not have proxy permission and needs to apply for proxy permission. 
                                                                                 [cn]认证鉴权过程失败，用户没有proxy权限，需要申请proxy权限 */
    SDK_CONFCTRL_CURLE_EXTERN_USER_OR_PWD_ERROR = 414100016,                /**< [en]The authentication process failed. The proxy user name or password is incorrect. 
                                                                                 [cn]认证鉴权过程失败，代理用户名或者密码错误 */
    SDK_CONFCTRL_CURLE_EXTERN_AUTH_TYPE_ERROR = 414100017,                  /**< [en]The authentication process failed. Incorrect authentication type. User name and password are required. The user needs to be prompted for input. 
                                                                                 [cn]认证鉴权过程失败，错误的认证类型，同时需要用户名、密码，需要提示用户输入 */
    SDK_CONFCTRL_CURLE_EXTERN_AUTH_ERROR = 414100018,                       /**< [en]The authentication process failed. Other unknown errors. It may be that the authentication method is not supported. The user needs to be prompted to try again. 
                                                                                 [cn]认证鉴权过程失败，其他未知错误，有可能是不支持认证方式，建议弹框提示用户重新发起 */
    SDK_CONFCTRL_CURLE_COULDNT_RESOLVE_PROXY = 414100019,                   /**< [en]Curl proxy exception. 
                                                                                 [cn]curl代理异常 */
    SDK_CONFCTRL_CURLE_COULDNT_RESOLVE_HOST = 414100020,                    /**< [en]Curl host exception. 
                                                                                 [cn]curl主机异常 */
    SDK_CONFCTRL_CURLE_COULDNT_CONNECT = 414100021,                         /**< [en]Curl connection exception. 
                                                                                 [cn]curl连接异常 */
    SDK_CONFCTRL_CURLE_OPERATION_TIMEDOUT = 414100022,                      /**< [en]Curl operation timed out. 
                                                                                 [cn]curl操作超时 */
    SDK_CONFCTRL_MSG_TOO_LARGE = 414100023,                                 /**< [en]Message length too long. 
                                                                                 [cn]会控消息内容过大 */
    SDK_CONFCTRL_PTHREAD_CREAT_ERROR = 414100024,                           /**< [en]Failed to create thread. 
                                                                                 [cn]创建线程失败 */
    SDK_CONFCTRL_SEC_FUNC_RETURN_ERROR = 414100025,                         /**< [en]Secure function error. 
                                                                                 [cn]安全函数返回错误 */
    SDK_CONFCTRL_JSON_PARSE_FAILED = 414100026,                             /**< [en]JSON parsing failed. 
                                                                                 [cn]解析json体失败 */
    SDK_CONFCTRL_TOKEN_IS_NULL_ERROR = 414100027,                           /**< [en]WS token is empty. 
                                                                                 [cn]ws token值为空 */
    SDK_CONFCTRL_RETURN_JSON_ERROR = 414100028,                             /**< [en]Return JSON data error. 
                                                                                 [cn]返回json数据异常 */
    SDK_CONFCTRL_CREAT_CONF_BASIC_ERROR = 414100029,                        /**< [en]Failed to create meeting control block. 
                                                                                 [cn]创建会议控制块失败 */
    SDK_CONFCTRL_GET_CONF_BASIC_BY_HANDLE_ERROR = 414100030,                /**< [en]Failed to get meeting control block. 
                                                                                 [cn]获取会议控制块失败 */
    SDK_CONFCTRL_GET_CONF_BASIC_BY_CALLID_ERROR = 414100031,                /**< [en]Failed to get meeting control block by CallId. 
                                                                                 [cn]通过CallId获取会议控制块失败 */
    SDK_CONFCTRL_DESTORY_CONF_BASIC_ERROR = 414100032,                      /**< [en]Destroying the meeting control block failed. 
                                                                                 [cn]销毁会议控制块失败 */
    SDK_CONFCTRL_CREAT_CONF_TMP_INFO_NOT_FOUND = 414100033,                 /**< [en]Temporary creating meeting information not found. 
                                                                                 [cn]找不到创会临时信息 */
    SDK_CONFCTRL_GET_PARTICIPANT_ID_FAILED = 414100034,                     /**< [en]Failed to get participant ID. 
                                                                                 [cn]获取参会者ID失败 */
    SDK_CONFCTRL_GET_MT_BY_PARTICIPANT_ID_FAILED = 414100035,               /**< [en]Failed to get MT by participant ID. 
                                                                                 [cn]通过ParticipantId获取MT失败 */
    SDK_CONFCTRL_GET_SELFINFO_ERROR = 414100036,                            /**< [en]Failed to get self information by participant ID. 
                                                                                 [cn]通过ParticipantId获取selfinfo失败 */
    SDK_CONFCTRL_GET_PARTICIPANT_BY_MT_FAILED = 414100037,                  /**< [en]Failed to get participant information by MT. 
                                                                                 [cn]通过MT获取会议成员信息失败 */
    SDK_CONFCTRL_NEED_MAUAL_INVITE_ERROR = 414100038,                       /**< [en]Manual invitation required. 
                                                                                 [cn]需要手动邀请 */
    SDK_CONFCTRL_HAD_NOTIFY_CONFINFO_BEFORE = 414100039,                    /**< [en]The major parameters of the meeting have been reported. 
                                                                                 [cn]已上报过会议大参数 */
    SDK_CONFCTRL_NOT_SUPPORT_SUBTITLE = 414100040,                          /**< [en]Subtitles are not supported. 
                                                                                 [cn]不支持字幕 */
    SDK_CONFCTRL_CONF_END_TIMEOUOT = 414100041,                             /**< [en]Meeting Hang Up - Timeout. 
                                                                                 [cn]会议挂断 - 超时 */
    SDK_CONFCTRL_CONF_END_NOSTREAM = 414100042,                             /**< [en]Meeting Hang Up - No Streaming. 
                                                                                 [cn]会议挂断 - 无码流 */
    SDK_CONFCTRL_CONF_END_CHAIR_HANGUP = 414100043,                         /**< [en]Meeting hung up - Hung up by the host. 
                                                                                 [cn]会议挂断 - 被主持人挂断 */
    SDK_CONFCTRL_CONF_END_STOP_CONF = 414100044,                            /**< [en]Meeting Hang Up - Meeting has ended. 
                                                                                 [cn]会议挂断 - 会议已结束 */
    SDK_CONFCTRL_CONF_END_LEAVE_CONF = 414100045,                           /**< [en]End of meeting due to leave meeting. 
                                                                                 [cn]离会导致的会议结束 */
    SDK_CONFCTRL_MSG_PROC_FUN_REG_FAIL = 414100046,                         /**< [en]Message queue processing function registration failed. 
                                                                                 [cn]消息队列处理函数注册失败 */
    SDK_CONFCTRL_MSG_PROC_FUN_UNREG_FAIL = 414100047,                       /**< [en]Message queue processing function deregistration failed. 
                                                                                 [cn]消息队列处理函数去注册失败 */
    SDK_CONFCTRL_CONF_END_REJECT_CONF = 414100048,                          /**< [en]Meeting ended due to reject meeting. 
                                                                                 [cn]拒绝会议导致的会议结束 */
    SDK_CONFCTRL_CONF_END_SELF_END = 414100049,                             /**< [en]Meeting ended by self. 
                                                                                 [cn]自己结束会议导致的会议结束 */
    SDK_CONFCTRL_VIEWER_EXCEEDS_LIMIT = 414100050,                          /**< [en]The meeting control module is not initialized. 
                                                                                 [cn]会控模块未初始化 */
    SDK_CONFCTRL_SPECIAL_WATCH_EXCEEDS_LIMIT = 414100051,                   /**< [en]The watching special site reaches the maximum. 
                                                                                 [cn]选看的特殊会场超过限制 */
    SDK_CONFCTRL_WATCH_HD_EXCEEDS_LIMIT = 414100052,                        /**< [en]The watching HD site reaches the maximum. 
                                                                                 [cn]选看的高清会场超过限制 */
    SDK_CONFCTRL_WATCH_SD_EXCEEDS_LIMIT = 414100053,                        /**< [en]The watching SD site reaches the maximum. 
                                                                                 [cn]选看的标清会场超过限制 */
    SDK_CONFCTRL_WATCH_SPECIFICATIONS_EXCEEDS_LIMIT = 414100054,            /**< [en]The watching specification reaches the maximum. 
                                                                                 [cn]选看的规格超过限制  */
    SDK_CONFCTRL_WATCH_INNER_ERROR = 414100055,                             /**< [en]Watching internal errors. 
                                                                                 [cn]选看内部错误 */
    SDK_CONFCTRL_WATCH_RENDER_REPEATS = 414100056,                          /**< [en]Duplicated watch render. 
                                                                                 [cn]选看的句柄重复 */
    SDK_CONFCTRL_HTTP_RECV_FAILED = 414100057,                              /**< [en]HTTP request error. 
                                                                                 [cn]HTTP请求错误 */
    SDK_CONFCTRL_TRACK_REQUEST_TIMEOUT = 414100058,                         /**< [en]Websocket request timeout. 
                                                                                 [cn]websocket请求超时 */
    SDK_CONFCTRL_TRACK_LOAD_FAILED = 414100059,                             /**< [en]Loading failed. 
                                                                                 [cn]加载错误 */
    SDK_CONFCTRL_CONF_END_TIMEOUT_HANGUP = 414100061,                       /**< [en]The meeting ends due to the timeout of guest waiting before meeting or the timeout of the meeting control heartbeat. 
                                                                                 [cn]会前等待页面时间超时或者会控心跳超时导致的会议结束 */
    SDK_CONFCTRL_CONF_END_CONCLUDE = 414100062,                             /**< [en]The meeting ends due to being canceled. 
                                                                                 [cn]会议被取消预约导致的会议结束 */
    SDK_CONFCTRL_CONF_END_NETWORK_FAILED = 414100063,                       /**< [en]The meeting ends due to network error when guest waiting before meeting. 
                                                                                 [cn]会前等待页面网络异常导致的会议结束 */
    
    /* SDK自定义错误码 - 呼叫 */
    SDK_CALL_GENERAL_ERROR = 413000001,                                     /**< [en]Common error. 
                                                                                 [cn]一般错误 */
    SDK_CALL_PARAM_ERROR = 413000002,                                       /**< [en]Parameter error. 
                                                                                 [cn]参数错误 */
    SDK_CALL_MEM_ERROR = 413000003,                                         /**< [en]Memory allocation error. 
                                                                                 [cn]分配内存错误 */                                 
    SDK_CALL_SYSTEM_ERROR = 413000004,                                      /**< [en]System error. 
                                                                                 [cn]系统错误 */
    SDK_CALL_MSG_ERROR = 413000005,                                         /**< [en]Message sending error. 
                                                                                 [cn]发送消息错误 */
    SDK_CALL_CFG_ERROR = 413000006,                                         /**< [en]Get system configuration error. 
                                                                                 [cn]获取系统配置错误 */
    SDK_CALL_NET_ERROR = 413000007,                                         /**< [en]Physical network error. 
                                                                                 [cn]物理网络错误 */
    SDK_CALL_ACCESS_ERROR = 413000008,                                      /**< [en]Network access error. 
                                                                                 [cn]网络接入错误 */
    SDK_CALL_TIMER_ERROR = 413000009,                                       /**< [en]Create timer error. 
                                                                                 [cn]创建定时器错误 */
    SDK_CALL_STATE_ERROR = 413000010,                                       /**< [en]Call state error. 
                                                                                 [cn]呼叫状态错误 */
    SDK_CALL_OPERATE_ERROR = 413000011,                                     /**< [en]Other operation in progress error. 
                                                                                 [cn]正在进行其他操作错误 */
    SDK_CALL_REQSRV_ERROR = 413000012,                                      /**< [en]Requesting the master to start call error. 
                                                                                 [cn][MODIFY]请求主控进行呼叫开始错误  */
    SDK_CALL_REQRES_ERROR = 413000013,                                      /**< [en]Requesting audio resource error. 
                                                                                 [cn]申请音频资源错误 */
    SDK_CALL_SERVICE_DOING = 413000014,                                     /**< [en]Other supplementary service is running. 
                                                                                 [cn]正在进行其他补充业务 */
    SDK_CALL_CALLRECORD_ERROR = 413000015,                                  /**< [en]Record call error. 
                                                                                 [cn]记录通话记录错误 */
    SDK_CALL_MPROC_ERROR = 413000016,                                       /**< [en]Media process error. 
                                                                                 [cn]媒体进程返回的错误 */
    SDK_CALL_MAX_CALL_ERROR = 413000017,                                    /**< [en]Maximum number of calls reached. 
                                                                                 [cn]超过最大呼叫路数 */
    SDK_CALL_SIPID_NOTEXIT_ERROR = 413000018,                               /**< [en]SIP account ID does not exist. 
                                                                                 [cn]SIP账户ID不存在 */
    SDK_CALL_CALLID_NOEXIT_ERROR = 413000019,                               /**< [en]Call ID does not exist. 
                                                                                 [cn]呼叫ID不存在 */
    SDK_CALL_REGISTERING_ERROR = 413000020,                                 /**< [en]Failed due to registering. 
                                                                                 [cn]正在注册中导致失败 */
    SDK_CALL_REGIST_FALL_ERROR = 413000021,                                 /**< [en]Registration failed. 
                                                                                 [cn]注册失败 */
    SDK_CALL_DEREGIST_FALL_ERROR = 413000022,                               /**< [en]Deregistration failed. 
                                                                                 [cn]注销失败 */
    SDK_CALL_SET_SIP_INFO_ERROR = 413000023,                                /**< [en]Setting account information error. 
                                                                                 [cn]设置账户信息错误 */
    SDK_CALL_SETACCOUNT_ERROR = 413000024,                                  /**< [en]Setting SIP account error. 
                                                                                 [cn]设置SIP帐号失败 */
    SDK_CALL_NOTIFYSIPACCOUNT_ERROR = 413000025,                            /**< [en]Reporting SIP account information error. 
                                                                                 [cn]上报SIP帐号信息失败 */
    SDK_CALL_SIPSEVER_ERROR = 413000026,                                    /**< [en]Server information error. 
                                                                                 [cn]服务器信息错误 */
    SDK_CALL_SIPACCOUNTINFO_ERROR = 413000027,                              /**< [en]SIP account information error. 
                                                                                 [cn]账户信息错误 */
    SDK_CALL_SIPC_ERROR = 413000028,                                        /**< [en]SIPC execution error. 
                                                                                 [cn]SIPC执行错误 */
    SDK_CALL_UNREGISTER_ERROR = 413000029,                                  /**< [en]Not registered error. 
                                                                                 [cn]未注册错误 */
    SDK_CALL_SUB_FALL_ERROR = 413000030,                                    /**< [en]Call Sip interface to subscribe error. 
                                                                                 [cn]调用Sip接口订阅失败 */
    SDK_CALL_DESUBING_ERROR = 413000031,                                    /**< [en]Canceling subscription error. 
                                                                                 [cn]注销订阅中错误 */
    SDK_CALL_SUBING_ERROR = 413000032,                                      /**< [en]Subscribing error. 
                                                                                 [cn]订阅中错误 */
    SDK_CALL_LOCAL_MAX_CONFER_ERROR = 413000033,                            /**< [en]Only one local meeting is allowed. 
                                                                                 [cn]只允许一个本地会议 */
    SDK_CALL_LOCAL_CONFER_NOEXIT_ERROR = 413000034,                         /**< [en]Local meeting is not created. 
                                                                                 [cn]本地会议未创建 */
    SDK_CALL_LOCAL_CONFER_NOMATCH_ERROR = 413000035,                        /**< [en]The participant line does not match the chair account. 
                                                                                 [cn]与会者线路与主席账户不匹配 */
    SDK_CALL_CONF_STATE_ERROR = 413000036,                                  /**< [en]Local meeting state error. 
                                                                                 [cn]本地会议状态错误 */
    SDK_CALL_JOINTSTATENOTIFY_ERROR = 413000037,                            /**< [en]Failed to report the linkage state of the IP Phone. 
                                                                                 [cn]IP Phone端联动状态上报失败 */
    SDK_CALL_CONFID_NOTEXIST_ERROR = 413000038,                             /**< [en]Meeting ID does not exist. 
                                                                                 [cn]会议ID不存在 */
    SDK_CALL_CONF_VIDEO_HOLD_ERROR = 413000039,                             /**< [en]Video hold error. 
                                                                                 [cn]视频保持失败 */
    SDK_CALL_CONF_VIDEO_UNHOLD_ERROR = 413000040,                           /**< [en]Video unhold error. 
                                                                                 [cn]视频恢复失败 */
    SDK_CALL_MAX_SERVER_CONF_ERROR = 413000041,                             /**< [en]The maximum number of server meeting reached. 
                                                                                 [cn]服务器会议个数超出 */
    SDK_CALL_AA_REQRANDOMNUM_ERROR = 413000042,                             /**< [en]Get AA random number error. 
                                                                                 [cn]获取AA随机数失败 */
    SDK_CALL_AA_LOGIN_ERROR = 413000043,                                    /**< [en]AA login error. 
                                                                                 [cn]AA登陆失败 */
    SDK_CALL_CONF_VIDEO_TYPE_NO_MATCH = 413000044,                          /**< [en]Meeting type mismatch. 
                                                                                 [cn]会议类型不匹配 */
    SDK_CALL_CONF_VIDEO_START_ERROR = 413000045,                            /**< [en]Failed to start video meeting. 
                                                                                 [cn]视频会议开启失败 */
    SDK_CALL_AA_NOMAINSERVER_ERROR = 413000046,                             /**< [en]AA no master server. 
                                                                                 [cn]AA无主服务器 */
    SDK_CALL_AA_PASSWORD_ERROR = 413000047,                                 /**< [en]Password error. 
                                                                                 [cn]密码错误 */
    SDK_CALL_AA_USERNAME_ERROR = 413000048,                                 /**< [en]Username error. 
                                                                                 [cn]用户名错误 */
    SDK_CALL_AA_USERLOGINED_ERROR = 413000049,                              /**< [en]User is logged in. 
                                                                                 [cn]用户已登录 */
    SDK_CALL_AA_ACCOUNTLOCKED_ERROR = 413000050,                            /**< [en]Account is locked. 
                                                                                 [cn]账户已锁定 */
    SDK_CALL_AA_TERMINALTYPE_ERROR = 413000051,                             /**< [en]Terminal type mismatch. 
                                                                                 [cn]终端类型不匹配 */
    SDK_CALL_AA_PARSEXML_ERROR = 413000052,                                 /**< [en]Parsing XML error. 
                                                                                 [cn]解析XML错误 */
    SDK_CALL_AA_CONNECT_ERROR = 413000053,                                  /**< [en]Connecting to server error. 
                                                                                 [cn]连接服务器错误 */
    SDK_CALL_MEDIA_CFG_ERROR = 413000054,                                   /**< [en]Get media configuration error. 
                                                                                 [cn]获取媒体配置失败 */
    SDK_CALL_AA_GETSRINFO_ERROR = 413000055,                                /**< [en]Get service permission error. 
                                                                                 [cn]获取业务权限失败 */
    SDK_CALL_AA_LACKSR_ERROR = 413000056,                                   /**< [en]Insufficient service permission. 
                                                                                 [cn]业务权限不足失败 */
    SDK_CALL_NETWORKENV_ERROR = 413000057,                                  /**< [en]Network environment error. 
                                                                                 [cn]网络环境错误 */
    SDK_CALL_SERVICE_CONFLICT_ERROR = 413000058,                            /**< [en]Service conflict. 
                                                                                 [cn]业务冲突 */
    SDK_CALL_AA_TIMEOUT_ERROR = 413000059,                                  /**< [en]Connection timeout. 
                                                                                 [cn]连接超时 */
    SDK_CALL_AA_UNKOWN_ERROR = 413000060,                                   /**< [en]Unknown error. 
                                                                                 [cn]未知错误 */
    SDK_CALL_PICKUP_ADDTIP_ERROR = 413000061,                               /**< [en]Add ringing information error. 
                                                                                 [cn]添加振铃信息失败 */
    SDK_CALL_PICKUP_REMOVETIP_ERROR = 413000062,                            /**< [en]Delete ringing information error. 
                                                                                 [cn]删除加振铃信息失败 */
    SDK_CALL_PICKUP_CREATERINGNUM_ERROR = 413000063,                        /**< [en]Create ringing number error. 
                                                                                 [cn]创建振铃号码失败 */
    SDK_CALL_VVM_PARAM_ERR = 413000064,                                     /**< [en]VVM parameter error. 
                                                                                 [cn]VVM参数错误 */
    SDK_CALL_GET_IPT_INFO_ERR = 413000065,                                  /**< [en]Getting registered service error. 
                                                                                 [cn]获取登记业务错误 */
    SDK_CALL_VVM_GETVOICEMAIL_ERR = 413000066,                              /**< [en]Getting voicemail error. 
                                                                                 [cn]获取语音邮箱错误 */
    SDK_CALL_ATTENDEE_ALREADY_EXIST = 413000067,                            /**< [en]Attendee already exists. 
                                                                                 [cn]与会者已经存在 */
    SDK_CALL_ATTENDEE_NOT_EXIST = 413000068,                                /**< [en]Attendee does not exist. 
                                                                                 [cn]与会者不存在 */
    SDK_CALL_CREATE_CONF_WND_ERROR = 413000069,                             /**< [en]Create server video meeting window error. 
                                                                                 [cn]创建服务器视频会议窗口失败 */
    SDK_CALL_CREATE_CONF_WND_EXIST = 413000070,                             /**< [en]Video window already exists. 
                                                                                 [cn][MODIFY]视频窗口已存在 */
    SDK_CALL_GET_CONF_LIST_INFO_ERROR = 413000071,                          /**< [en]Getting meeting list error. 
                                                                                 [cn]获取会议列表失败 */
    SDK_CALL_NEED_CHAIRMAN_TO_OPERATE = 413000072,                          /**< [en]Operating requires host privileges. 
                                                                                 [cn]需要主持人权限才能操作 */
    SDK_CALL_NO_VIDEO_DEVICE_TO_OPERATE = 413000073,                        /**< [en]No video device to operate. 
                                                                                 [cn]没有视频设备可以操作 */
    SDK_CALL_NOT_STOP_REFRESHREG = 413000074,                               /**< [en]Refresh registration is not turned off. 
                                                                                 [cn]没有关闭刷新注册 */
    SDK_CALL_NOTIFY_ONLINE_STATE_ERROR = 413000075,                         /**< [en]Online state report error. 
                                                                                 [cn]在线状态上报失败 */
    SDK_CALL_NOTIFY_NETADDR_ERROR = 413000076,                              /**< [en]Network address subscription report error. 
                                                                                 [cn]网络地址本订阅notify上报失败 */
    SDK_CALL_INFO_FORCEUNREG_ERROR = 413000077,                             /**< [en]Telepresence account was force unregistered. Information report error. 
                                                                                 [cn]智真帐号被踢,info上报失败 */
    SDK_CALL_TLSROOTCERT_ERROR = 413000078,                                 /**< [en]TLS root certificate error. 
                                                                                 [cn]TLS根证书错误 */
    SDK_CALL_AD_AUTH_FAIL = 413000079,                                      /**< [en]AD authentication error. 
                                                                                 [cn]AD鉴权失败 */
    SDK_CALL_GET_CONF_LIST_INFO_DOING = 413000080,                          /**< [en]Meeting list is getting. 
                                                                                 [cn]会议列表正在获取中 */
    SDK_CALL_CALL_PROHIBITED = 413000081,                                   /**< [en]Prohibited calls. 
                                                                                 [cn]禁止呼叫 */
    SDK_CALL_CALL_NUMBER_UPPER_LIMIT = 413000082,                           /**< [en]The maximum number of calls has been reached. 
                                                                                 [cn]呼叫数达上限 */
    SDK_CALL_ENCRYPT_CALL_UPPER_LIMIT = 413000083,                          /**< [en]The maximum number of encrypted calls has been reached. 
                                                                                 [cn]加密呼叫数达上限 */
    SDK_CALL_SHOULD_DEGRADE_TO_AUDIO = 413000084,                           /**< [en]The maximum number of video calls has been reached and needs to downgrade to audio. 
                                                                                 [cn]超出视频呼叫数，需要降为音频 */
    SDK_CALL_H323ID_NOTEXIST_ERROR = 413000085,                             /**< [en]H323 account ID does not exist. 
                                                                                 [cn]H323账户ID不存在 */
    SDK_CALL_H323_ACCOUNTINFO_ERROR = 413000086,                            /**< [en]H323 account information error. 
                                                                                 [cn]H323账户信息错误 */
    SDK_CALL_NOTIFY_H323_ACCOUNT_ERROR = 413000087,                         /**< [en]H323 account information report failed. 
                                                                                 [cn]H323帐号信息上报失败 */
    SDK_CALL_LOCAL_RESOURCE_NOT_ENOUGH = 413000088,                         /**< [en]Insufficient local resources. 
                                                                                 [cn]本端资源不足 */
    SDK_CALL_CALL_PROTOCOL_NOT_SUPPORT = 413000089,                         /**< [en]The calling protocol is not supported. 
                                                                                 [cn]不支持该呼叫协议 */
    SDK_CALL_SET_H323_INFO_ERROR = 413000090,                               /**< [en]Setting H323 account information error. 
                                                                                 [cn]设置H323账户信息错误 */
    SDK_CALL_NOTIFY_ACCESSNUM_ERROR = 413000091,                            /**< [en]Mediax meeting access number reporting failed. 
                                                                                 [cn]mediax会议接入号上报界面失败 */
    SDK_CALL_NOTIFY_VMRINFO_ERROR = 413000092,                              /**< [en]Mediax VMR information reporting failed. 
                                                                                 [cn]上报Mediax VMR信息到界面失败 */
    SDK_CALL_NOTIFY_CONFLIST_INFO_ERROR = 413000093,                        /**< [en]IMS meeting list information reporting failed. 
                                                                                 [cn]上报获取IMS会议列表信息到界面失败 */
    SDK_CALL_TUP_INIT_BLOCK = 413000094,                                    /**< [en]TUP initialization is not complete. 
                                                                                 [cn]tup初始化未完成 */
    SDK_CALL_MSG_RETURN_VALUE_ERROR = 413000095,                            /**< [en]Message return value error. 
                                                                                 [cn]消息返回值错误 */
    SDK_CALL_MSG_TOO_LARGE_ERROR = 413000096,                               /**< [en]Message content too large error. 
                                                                                 [cn]消息内容太大错误 */
    SDK_CALL_SECURE_FUNC_RETURN_ERROR = 413000097,                          /**< [en]Secure function error. 
                                                                                 [cn]安全函数返回错误 */
    SDK_CALL_MSG_RESP_NULL_ERROR = 413000098,                               /**< [en]message response is empty error. 
                                                                                 [cn]消息响应为空错误 */
    SDK_CALL_ACCOUNTID_NOT_ENABLE_ERROR = 413000099,                        /**< [en]Account is not enabled. 
                                                                                 [cn]帐号未启用 */
    SDK_CALL_CREAT_CALL_IMPL_ERROR = 413000100,                             /**< [en]Create call control implement error. 
                                                                                 [cn]创建呼叫控制类错误 */
    SDK_CALL_ALREADY_IN_CALL_ERROR = 413000101,                             /**< [en]Already in call. 
                                                                                 [cn]已经在呼叫中 */
    SDK_CALL_NO_CALL_EXIST_ERROR = 413000102,                               /**< [en]Call does not exist. 
                                                                                 [cn]呼叫不存在 */
    SDK_CALL_GET_MEDIA_CONFIG_FAILED = 413000103,                           /**< [en]Failed to get media configuration information. 
                                                                                 [cn]获取媒体配置信息失败 */
    SDK_CALL_CAPTURE_INPUTDATA_FAILED = 413000104,                          /**< [en]Failed to set third-party capture. Calling HME_V_Capture_InputData failed. 
                                                                                 [cn]设置第三方采集失败, 调用HME_V_Capture_InputData返回失败 */
    
    /* 公共模块全局错误码 */
    SDK_COMMON_SQLITE_E_NOT_INITED = 415000001,                             /**< [en]DB is not initialized. 
                                                                                 [cn]db未初始化 */
    SDK_COMMON_E_FAIL = 415000002,                                          /**< [en]Common failure. 
                                                                                 [cn]失败 */
    SDK_COMMON_E_ERR_PROXY_UNFINISH = 415000003,                            /**< [en]Proxy detection has not been completed. 
                                                                                 [cn]代理探测还没有完成 */
    
    /* 打点模块全局错误码 */
    SDK_TRACK_E_INVALID_PARAMETER = 416000001,                              /**< [en]Invalid parameter. 
                                                                                 [cn]参数错误 */
    SDK_TRACK_E_NOT_INITED = 416000002,                                     /**< [en]Track module is not initialized. 
                                                                                 [cn]打点模块未初始化 */
    SDK_TRACK_E_EVENT_NOT_EXIST = 416000003,                                /**< [en]Track event does not exist. 
                                                                                 [cn]打点事件不存在 */
    SDK_TRACK_E_NOT_LOGINED = 416000004,                                    /**< [en]Not logged in. 
                                                                                 [cn]未登录 */
    SDK_TRACK_E_NO_UPLOAD = 416000005,                                      /**< [en]Upload is not enabled. 
                                                                                 [cn]未开启上传 */
    
    SDK_CALL_REASON_CODE_403_FORBIDDEN = 510000403,                         /**< [en]Server forbidden. 
                                                                                 [cn]服务器拒绝 */
    SDK_CALL_REASON_CODE_404_NOT_FOUND = 510000404,                         /**< [en]Not found. 
                                                                                 [cn]未发现 */
    SDK_CALL_REASON_CODE_480_TEM_UNAVAILABLE = 510000480,                   /**< [en]Temporary unavailable. 
                                                                                 [cn]临时失效 */
    SDK_CALL_REASON_CODE_486_BUSYHERE = 510000486,                          /**< [en]Busy here. 
                                                                                 [cn]这里忙 */
    SDK_CALL_REASON_CODE_487_REQ_TEMINATED = 510000487,                     /**< [en]Request terminated. 
                                                                                 [cn]请求终止 */
    SDK_CALL_REASON_CODE_488_NOT_ACCEPTABLE_HERE = 510000488,               /**< [en]Request is not acceptable here. 
                                                                                 [cn]这里请求不可接受 */
    SDK_CALL_REASON_CODE_603_DECLINE = 510000603,                           /**< [en]Decline. 
                                                                                 [cn]丢弃 */
    SDK_CALL_REASON_CODE_841_HANGUP_WITHOUT_TOAST = 510000841,              /**< [en]Hangup without toast. 
                                                                                 [cn]挂断不弹框 */
    SDK_CALL_REASON_CODE_842_CONFERENCE_IS_LOCK = 510000842,                /**< [en]Conference is locked.
                                                                                 [cn]会议被锁定 */
    
    /* SDK自定义错误码 - SIP */
    SDK_SIP_INVALIDPARAM = 419100001,                                       /**< [en]Invalid parameter. 
                                                                                 [cn]错误参数 */
    SDK_SIP_WRONGURI = 419100002,                                           /**< [en]Incorrect URI. 
                                                                                 [cn]错误号码 */
    SDK_SIP_MEMALLOCFAILURE = 419100003,                                    /**< [en]Memory allocation failed. 
                                                                                 [cn]内存分配失败 */
    SDK_SIP_SDPROLEFAILURE = 419100004,                                     /**< [en]SDP error. 
                                                                                 [cn]SDP错误 */
    SDK_SIP_NOCONNECTION = 419100005,                                       /**< [en]Connection does not exist. 
                                                                                 [cn]连接不存在 */
    SDK_SIP_CONNECTIONEXPIRED = 419100006,                                  /**< [en]Connection failure. 
                                                                                 [cn]连接失效 */
    SDK_SIP_FORBIDDEN = 419100007,                                          /**< [en]Operation forbidden. 
                                                                                 [cn]禁止操作 */
    SDK_SIP_WRONGSTATE = 419100008,                                         /**< [en]State error. 
                                                                                 [cn]状态错误 */
    SDK_SIP_NOLINEDATA = 419100009,                                         /**< [en]No corresponding line data. 
                                                                                 [cn]无对应线路数据 */
    SDK_SIP_NOREGISTER = 419100010,                                         /**< [en]No corresponding registered instance. 
                                                                                 [cn]无对应注册实例 */
    SDK_SIP_NODIALOG = 419100011,                                           /**< [en]No corresponding call instance. 
                                                                                 [cn]无对应呼叫实例 */
    SDK_SIP_NOSUBSCRIBE = 419100012,                                        /**< [en]No corresponding subscription instance. 
                                                                                 [cn]无对应订阅实例 */
    SDK_SIP_NOREFER = 419100013,                                            /**< [en]No corresponding Refer instance. 
                                                                                 [cn]无对应Refer实例 */
    SDK_SIP_NODIM = 419100014,                                              /**< [en]No corresponding DIM instance. 
                                                                                 [cn]无对应DIM实例 */
    SDK_SIP_CREATEHEADER = 419100015,                                       /**< [en]Failed to create header. 
                                                                                 [cn]创建头域失败 */
    SDK_SIP_PARSEHEADER = 419100016,                                        /**< [en]Failed to parse header. 
                                                                                 [cn]解析头域失败 */
    SDK_SIP_FIELDEXIST = 419100017,                                         /**< [en]Header not found. 
                                                                                 [cn]没有找到头域 */
    SDK_SIP_NOSDPBODY = 419100018,                                          /**< [en]No SDP message body. 
                                                                                 [cn]没有sdp消息体 */
    SDK_SIP_GETCAP = 419100019,                                             /**< [en]Failed to get capability. 
                                                                                 [cn]获取能力失败 */
    SDK_SIP_COMMCAP = 419100020,                                            /**< [en]Failed to compare capability. 
                                                                                 [cn]比较能力失败 */
    SDK_SIP_OPENLCFAILED = 419100021,                                       /**< [en]Failed to open logical channel. 
                                                                                 [cn]打开逻辑通道失败 */
    SDK_SIP_ENCODESDP = 419100022,                                          /**< [en]Encoding SDP failed. 
                                                                                 [cn]编码SDP失败 */
    SDK_SIP_DECODESDP = 419100023,                                          /**< [en]Decoding SDP failed. 
                                                                                 [cn]解码SDP失败 */
    SDK_SIP_UNSUPPORTSDP = 419100024,                                       /**< [en]Negotiate to unsupported SDP. 
                                                                                 [cn]协商到不支持的SDP */
    SDK_SIP_TPTDINIT = 419100025,                                           /**< [en]TPTD initialization failed. 
                                                                                 [cn]TPTD初始化失败 */
    SDK_SIP_TPTINIT = 419100026,                                            /**< [en]TPT initialization failed. 
                                                                                 [cn]TPT初始化失败 */
    SDK_SIP_TXNINIT = 419100027,                                            /**< [en]TXN initialization failed. 
                                                                                 [cn]TXN初始化失败 */
    SDK_SIP_UAINIT = 419100028,                                             /**< [en]UA initialization failed. 
                                                                                 [cn]UA初始化失败 */
    SDK_SIP_GLUEINIT = 419100029,                                           /**< [en]GLUE initialization failed. 
                                                                                 [cn]GLUE初始化失败 */
    SDK_SIP_HLLMINIT = 419100030,                                           /**< [en]HLLM initialization failed. 
                                                                                 [cn]HLLM初始化失败 */
    SDK_SIP_VCOMINIT = 419100031,                                           /**< [en]VCOM initialization failed. 
                                                                                 [cn]VCOM初始化失败 */
    SDK_SIP_SDPINIT = 419100032,                                            /**< [en]SDP initialization failed. 
                                                                                 [cn]SDP初始化失败 */
    SDK_SIP_MULTIINS = 419100033,                                           /**< [en]Multiple instance error. 
                                                                                 [cn]多实例错误 */
    SDK_SIP_NOREGCB = 419100034,                                            /**< [en]Insufficient registration control blocks. 
                                                                                 [cn]注册控制块不足 */
    SDK_SIP_NOSUBCB = 419100035,                                            /**< [en]Insufficient subscription control blocks. 
                                                                                 [cn]订阅控制块不足 */
    SDK_SIP_NODIACB = 419100036,                                            /**< [en]Insufficient call control blocks. 
                                                                                 [cn]通话控制块不足 */
    SDK_SIP_NODIMCB = 419100037,                                            /**< [en]Insufficient IM control blocks. 
                                                                                 [cn]对话外控制块不足 */
    SDK_SIP_PARSEURITOSTR = 419100038,                                      /**< [en]Failed to parse URI xml to string. 
                                                                                 [cn]解析xml的uri失败 */
    SDK_SIP_ENCRYPTNEGOERR = 419100039,                                     /**< [en]Encryption negotiation failed. 
                                                                                 [cn]加密协商失败 */
    SDK_SIP_NOLOCALCAP = 419100040,                                         /**< [en]Local capabilities are not configured. 
                                                                                 [cn]没有设置本地能力 */
    SDK_SIP_BFCPTOKENERR = 419100041,                                       /**< [en]BFCP token error. 
                                                                                 [cn]bfcp令牌错误 */
    SDK_SIP_DNSERR = 419100042,                                             /**< [en]DNS resolution error. 
                                                                                 [cn]dns解析错误 */
    SDK_SIP_GET_SUB_STATE_ERR = 419100043,                                  /**< [en]Failed to get subscription state. 
                                                                                 [cn]获取订阅状态失败 */
    SDK_SIP_NOT_SUPPORT_IPV4 = 419100044,                                   /**< [en]IPv4 is not supported. 
                                                                                 [cn]不支持IPv4 */
    SDK_SIP_NOT_SUPPORT_IPV6 = 419100045,                                   /**< [en]IPv6 is not supported. 
                                                                                 [cn]不支持IPv6 */
    SDK_SIP_NOT_SUPPORT_HOST_TYPE = 419100046,                              /**< [en]Unsupported host type. 
                                                                                 [cn]不支持的主机类型 */
    SDK_SIP_GET_TIMER_ERROR = 419100047,                                    /**< [en]Failed to get timer. 
                                                                                 [cn]获取定时器失败 */
    
    /* 终端自身错误码 */
    APP_CANNOT_ACCEPT_INVITE_SHARE = 420000001,                             /**< [en]Cannot receive sharing invitations. 
                                                                                 [cn]无法接收共享邀请 */
    APP_REPORT_CHECK_PARAM_FAILED = 420000002,                              /**< [en]ReportDTO parameter verification failed. 
                                                                                 [cn]reportDTO参数校验失败 */
    APP_REPORT_FOLD_CREATE_FAILED = 420000003,                              /**< [en]Report folder creation failed. 
                                                                                 [cn]举报文件夹创建失败 */
    APP_REPORT_COMPRESS_FAILED = 420000004,                                 /**< [en]Report folder compression failure. 
                                                                                 [cn]举报文件夹压缩失败 */
    APP_REPORT_ZIP_PATH_EMPTY = 420000005,                                  /**< [en]The path of the ZIP file to be uploaded is empty. 
                                                                                 [cn]待上传的ZIP文件路径为空 */
    APP_REPORT_ZIP_SIZE_EXCEED_LIMIT = 420000006,                           /**< [en]The size of the ZIP file to be uploaded reaches the maximum. 
                                                                                 [cn]待上传的ZIP文件大小超过限制 */
    APP_REPORT_EXCEED_LIMIT_DAILY = 420000007,                              /**< [en]The same person reported more than 100 times within 24 hours. 
                                                                                 [cn]同一个人24小时内举报次数超过100次 */
    /** UISDK 自定义错误码,占用43XXXXXXX start */

    UISDK_COMMON_ERROR = 430100001,                                         /**< [en]Common Error. 
                                                                                 [cn]通用错误 */
    UISDK_API_INVALID_PARAMETERS = 430100002,                               /**< [en]Invalid parameters. 
                                                                                 [cn]参数错误 */
    UISDK_SIP_CHECK_TIMEOUT = 430100003,                                    /**< [en]SIP connection check failed.
                                                                                 [cn]SIP连接检查失败 */
    UISDK_TIMEOUT = 430100004,                                              /**< [en]Timeout.
                                                                                 [cn]超时 */
    UISDK_IN_PROCESS = 430100005,                                           /**< [en]In process.
                                                                                 [cn]接口正在处理中 */
    UISDK_NOT_INITED_END = 430100006,                                       /**< [en]Not initialized or initialization is not complete.
                                                                                 [cn]未初始化或初始化尚未完成。*/
    UISDK_NOT_SUPPORT_END = 430100007,                                      /**< [en]Not supported in this release.
                                                                                 [cn]此版本不支持。*/
    UISDK_OPERATION_INTERRUPT = 430100008,                                  /**< [en]Operation interrupt.
                                                                                 [cn]操作中断。*/
    UISDK_CONTACT_NOT_FOUND = 430100009,                                    /**< [en]Contact not found.
                                                                                 [cn]联系人不存在 */
    UISDK_ARGS_LENGTH_OVERRUN = 430100010,                                  /**< [en]Args length overrun.
                                                                                 [cn]参数长度超限 */
    UISDK_APPID_INFO_ILLEGAL = 430100011,                                   /**< [en]APPID info illegal.
                                                                                 [cn]APPID 信息入参不合法 */
    UISDK_E2EENCRYPT_ALGORITHM_ERROR = 430100012,                           /**< [en]E2EEncrypt algorithm error.
                                                                                 [cn]端到端加密算法不对称 */
    UISDK_UNLOGIN_ERROR = 430200001,                                        /**< [en]unlogin. 
                                                                                 [cn]未登录 */
    UISDK_REPEATED_LOGIN_ERROR = 430200002,                                 /**< [en]Repeated login. 
                                                                                 [cn]重复登录 */
    UISDK_SIP_CONNECTION_TIMEOUT = 430200003,                               /**< [en]SIP connection timeout. 
                                                                                 [cn]SIP连接超时 */
    UISDK_LOGIN_INVALID_PASSWORD_PARAMETER = 430200004,                     /**< [en]Invalid login password.
                                                                                 [cn]用于登录的密码参数不合法 */
    UISDK_PASSWORD_OR_ACCOUNT_EMPTY = 430200005,                            /**< [en]Password or account empty.
                                                                                 [cn]账号或密码不能都为空 */
    UISDK_CALL_INVALID_ACCOUNT_PARAMETER = 430300001,                       /**< [en]The calling number, account number or third-party account number cannot be empty. 
                                                                                 [cn]呼叫号码、账号或者第三方账号不能为空 */
    UISDK_CALL_ACCOUNT_EMPTY = 430300002,                                   /**< [en]Call account empty.
                                                                                 [cn]点对点呼叫账号为空 */
    UISDK_CALL_NICKNAME_EMPTY = 430300003,                                  /**< [en]Call nickname empty.
                                                                                 [cn]点对点呼叫名字为空 */
    UISDK_JOINCONF_NEED_PASSWORD = 430400001,                               /**< [en]Password required to join the meeting. 
                                                                                 [cn]加入会议需要密码 */
    UISDK_INVALID_TIMEZONE_PARAMETER = 430400002,                           /**< [en]Time zone error. 
                                                                                 [cn]时区错误 */
    UISDK_INVALID_CONF_DURATION_PARAMETER = 430400003,                      /**< [en]The meeting duration is less than 1. 
                                                                                 [cn]会议时长小于1 */
    UISDK_CONF_INTERRUPTED = 430400004,                                     /**< [en]Joining the conference is interrupted. 
                                                                                 [cn]入会被中断 */
    UISDK_JOINCONF_INPUT_INVALID_PASSWORD = 430400005,                      /**< [en]Password input at least 4 digits. 
                                                                                 [cn]密码输入至少4位 */
    UISDK_JOINCONF_USER_CANCEL = 430400006,                                 /**< [en]User voluntarily cancels. 
                                                                                 [cn]用户主动取消 */
    UISDK_INVALID_GUEST_PASSWORD_PARAMETER = 430400007,                     /**< [en]The guest password illegal. 
                                                                                 [cn]来宾密码非法 */
    UISDK_NOT_IN_CONF_OR_CALL = 430400008,                                  /**< [en]Not in conference or in call.
                                                                                 [cn]不在会议或呼叫中 */
    UISDK_ALREADY_EXIST_CONF_OR_CALL = 430400009,                           /**< [en]Already exist conf or call.
                                                                                 [cn]已存在一路会议或呼叫 */
    UISDK_CONFID_EMPTY = 430400010,                                         /**< [en]ConfId empty.
                                                                                 [cn]会议id不能为空 */
    UISDK_SUBJECT_TOO_LONG = 430400011,                                     /**< [en]Subject too long.
                                                                                 [cn]会议主题长度不能超过50 */
    UISDK_VMR_HOST_PASSWORD_LENGTH_LEGAL = 430400012,                       /**< [en]VMR host password length illegal.
                                                                                 [cn]主持人密码长度不合法 */
    UISDK_VMR_NAME_EMPTY = 430400013,                                       /**< [en]VMR name empty.
                                                                                 [cn]VMR名字为空 */
    UISDK_CONF_STARTTIME_EARLY = 430400014,                                 /**< [en]Conf starttime early.
                                                                                 [cn]会议的开始时间早于当前时间 */
    UISDK_SHARE_LOCKED = 430400015,                                         /**< [en]Share is locked.
                                                                                 [cn]共享被锁定 */
    UISDK_NOT_IN_DATACONF = 430400016,                                      /**< [en]Not in data conference.
                                                                                 [cn]不在数据会议中 */
    UISDK_ROLE_NOT_SUPPORT_OPERATION = 430400017,                           /**< [en]Role not support operation
                                                                                 [cn]角色不支持该操作 */
    UISDK_HTTP_SERVER_ERROR = 430500001,                                    /**< [en]HTTP request, server exception. 
                                                                                 [cn]HTTP请求，服务器异常 */
    UISDK_HTTP_CONNECT_SERVER_TIMEOUT_ERROR = 430500002,                    /**< [en]HTTP request, Connecting to the server times out. 
                                                                                 [cn]HTTP请求，连接服务器超时 */
    UISDK_NO_NETWORK_ERROR = 430500003,                                     /**< [en]network unavailable. 
                                                                                 [cn]网络不可用 */
    /** UISDK 自定义错误码 end*/

    /* RTC模块全局错误码 */
    RTC_SDK_LEAVE_REASON_SERVER_ERROR = 910000001,                          /**< [en]Server error. 
                                                                                 [cn]服务器异常 */
    RTC_SDK_LEAVE_REASON_BREAKDOWN = 910000002,                             /**< [en]SFU service failure. 
                                                                                 [cn]sfu服务故障 */
    RTC_SDK_LEAVE_REASON_SERVICE_UNREACHABLE = 910000003,                   /**< [en]Service unavaliable 503. 
                                                                                 [cn]服务不可达503 */
    RTC_SDK_LEAVE_REASON_INTERNAL_ERROR = 910000004,                        /**< [en]Internal error. 
                                                                                 [cn]内部错误 */
    RTC_SDK_LEAVE_REASON_KICKED_OFF = 910000005,                            /**< [en]Kicked off. 
                                                                                 [cn]被踢 */
    RTC_SDK_LEAVE_REASON_SIGNATURE_EXPIRED = 910000006,                     /**< [en]Signature expired. 
                                                                                 [cn]签名过期 */
    RTC_SDK_LEAVE_REASON_RECONNECT_FAILED = 910000007,                      /**< [en]Reconnect timeout. 
                                                                                 [cn]重连超时 */
    RTC_SDK_LEAVE_REASON_NETWORK_TEST = 910000008,                          /**< [en]Network detection. 
                                                                                 [cn]网络检测，UI不需要关注该错误码，不对外体现 */
    RTC_SDK_LEAVE_REASON_USER_REMOVED = 910000009,                          /**< [en]User is removed. 
                                                                                 [cn]用户移除 */
    RTC_SDK_LEAVE_REASON_ROOM_DISMISSED = 910000010,                        /**< [en]The room is dismissed. 
                                                                                 [cn]房间解散 */
    RTC_SDK_SDK_INTERNAL_ERROR = 990000001,                                 /**< [en]Internal error. 
                                                                                 [cn]内部错误 */
    RTC_SDK_MSG_TOOLARGE = 990000002,                                       /**< [en]Message too large. 
                                                                                 [cn]消息长度太大 */
    RTC_SDK_MEM_NOT_ENOUGH = 990000003,                                     /**< [en]Insufficient memory. 
                                                                                 [cn]内存不足 */
    RTC_SDK_SYNSEND_MSG_ERR = 990000004,                                    /**< [en]Failed to send message synchronously. 
                                                                                 [cn]同步发送消息失败 */
    RTC_SDK_PARAM_ERROR = 990000005,                                        /**< [en]Parameter error. 
                                                                                 [cn]参数错误 */
    RTC_SDK_API_CALLED_IN_WRONG_ORDER = 990000006,                          /**< [en]Call ID order error. 
                                                                                 [cn]呼叫ID时序错误 */
    RTC_SDK_SETUP_LOCAL_VIEW_FAIL = 990000007,                              /**< [en]Failed to set local screen. 
                                                                                 [cn]设置本端画面失败 */
    RTC_SDK_START_REMOTE_STREAM_VIEW_FAIL = 990000008,                      /**< [en]Failed to open remote screen. 
                                                                                 [cn]开启远端画面失败 */
    RTC_SDK_SET_DEVICE_FAIL = 990000009,                                    /**< [en]Device configuration failed. 
                                                                                 [cn]设备配置失败 */
    RTC_SDK_INITIALIZING = 990000010,                                       /**< [en]Initializing. 
                                                                                 [cn]初始化中 */
    RTC_SDK_UN_INITIALIZING = 990000011,                                    /**< [en]Deinitializing. 
                                                                                 [cn]去初始化中 */
    RTC_SDK_LOG_UPLOADING = 990000012,                                      /**< [en]Uploading log. 
                                                                                 [cn]正在日志上传中 */
    RTC_SDK_MEDIA_PORT_ERROR = 990000013,                                   /**< [en]Failed to get media port. 
                                                                                 [cn]获取媒体端口失败 */
    RTC_SDK_WATCH_VIEW_TOO_MUCH = 990000014,                                /**< [en]The maximum number view window reached . 
                                                                                 [cn]选看窗口超过规格数 */
    RTC_SDK_MEDIA_CMP_ERR = 990000015,                                      /**< [en]Media negotiation failed. 
                                                                                 [cn]媒体协商失败 */
    RTC_SDK_SERVER_NO_RESPONSE = 990000016,                                 /**< [en]Server no response. 
                                                                                 [cn]服务器没有响应 */
    RTC_SDK_USER_ROLE_CHANGE_FAIL = 990000017,                              /**< [en]Role switch failed. 
                                                                                 [cn]角色切换失败  */
    RTC_SDK_JOIN_ROOM_FAIL = 990000018,                                     /**< [en]Failed to join room. 
                                                                                 [cn]加入房间失败 */
    RTC_SDK_JOIN_ROOM_STATUS_BUSY = 990000019,                              /**< [en]Failed to join room. Status is busy. 
                                                                                 [cn]非空闲状态 */
    RTC_SDK_JOIN_ROOM_SERVER_ERROR = 990000020,                             /**< [en]Failed to join room. Server error. 
                                                                                 [cn]加入房间失败，服务器异常 */
    RTC_SDK_JOIN_ROOM_SERVICE_UNREACHABLE = 990000021,                      /**< [en]Failed to join room. Service unavaliable. 
                                                                                 [cn]加入房间失败，服务不可达 */
    RTC_SDK_JOIN_ROOM_AUTH_FAIL = 990000022,                                /**< [en]Failed to join room. Authentication failed. 
                                                                                 [cn]加入房间失败，鉴权失败 */
    RTC_SDK_JOIN_ROOM_AUTH_RETRY = 990000023,                               /**< [en]Failed to join room. Authentication retry. 
                                                                                 [cn]加入房间失败，鉴权重试 */
    RTC_SDK_JOIN_ROOM_AUTH_CLOCK_SYNC = 990000024,                          /**< [en]Failed to join room. Clock synchronization. 
                                                                                 [cn]加入房间失败，时钟同步 */
    RTC_SDK_JOIN_ROOM_URL_NOT_RIGHT = 990000025,                            /**< [en]Failed to join room. URL error. 
                                                                                 [cn]加入房间失败，url错误 */
    RTC_SDK_KICKED_OFF = 990000026,                                         /**< [en]Kicked off. 
                                                                                 [cn]被踢 */
    RTC_SDK_SCREEN_CAPTURE_FAIL = 990000027,                                /**< [en]Share failed. 
                                                                                 [cn]共享失败 */
    RTC_SDK_EXT_MEDIA_OUTPUT = 990000028,                                   /**< [en]Currently in external media output mode, this operation is forbidden. 
                                                                                 [cn]当前为外部媒体输出模式，禁用该操作 */
    RTC_SDK_RECONNECT_FAILED = 990000029,                                   /**< [en]Reconnection failed. 
                                                                                 [cn]重连失败 */
    RTC_SDK_SERVER_BREAK_DOWN = 990000030,                                  /**< [en]Server break down. 
                                                                                 [cn]服务器宕机 */
    RTC_SDK_SIGNATURE_EXPIRED = 990000031,                                  /**< [en]Signature has expired. 
                                                                                 [cn]签名已过期 */
    RTC_SDK_SET_REMOTE_RENDER_MODE_FAIL = 990000032,                        /**< [en]Failed to set remote window mode. 
                                                                                 [cn]设置远端窗口模式失败 */
    RTC_SDK_SET_REMOTE_AUDIO_MUTE_FAIL = 990000033,                         /**< [en]Failed to subscribe or unsubscribe audio. 
                                                                                 [cn]订阅或取消订阅音频失败 */
    RTC_SDK_CONNECT_OTHER_ROOM_FAIL = 990000034,                            /**< [en]Failed to connect to other room. 
                                                                                 [cn]连接其他房间失败 */
    RTC_SDK_DISCONNECT_OTHER_ROOM_FAIL = 990000035,                         /**< [en]Failed to disconnect other room. 
                                                                                 [cn]断开连接其他房间失败 */
    RTC_SDK_SET_USEROLE_NOT_ALLOWED = 990000036,                            /**< [en]Role switching is not allowed. 
                                                                                 [cn]不允许角色切换 */
    RTC_SDK_EXT_MEDIA_CAPTURE_INPUT = 990000037,                            /**< [en]Currently in third-party capture mode, this operation is forbidden. 
                                                                                 [cn]当前为第三方采集模式，禁用该操作 */
    RTC_SDK_SET_EXTAUDIO_CAPTURE_FAIL = 990000038,                          /**< [en]Failed to set third-party audio capture. 
                                                                                 [cn]设置第三方音频采集失败 */
    RTC_SDK_SET_EXTVIDEO_CAPTURE_FAIL = 990000039,                          /**< [en]Failed to set third-party video capture. 
                                                                                 [cn]设置第三方视频采集失败 */
    RTC_SDK_SET_SHARE_COMPUTER_SOUND_FAIL = 990000040,                      /**< [en]Failed to set share sound switch. 
                                                                                 [cn]设置共享声音开关失败 */
    RTC_SDK_SET_LOCAL_AUDIO_MUTE_FAIL = 990000041,                          /**< [en]Failed to start or stop upstream audio stream. 
                                                                                 [cn]启停上行音频流失败 */
    RTC_SDK_SET_LOCAL_VIDEO_MUTE_FAIL = 990000042,                          /**< [en]Failed to start or stop upstream video stream. 
                                                                                 [cn]启停上行视频流失败 */
    RTC_SDK_USER_REMOVED = 990000043,                                       /**< [en]User is removed. 
                                                                                 [cn]用户被移除 */
    RTC_SDK_ROOM_DISMISSED = 990000044,                                     /**< [en]The room is dismissed. 
                                                                                 [cn]房间被解散 */
    RTC_SDK_SETUP_REMOTE_VIEW_FAIL = 990000045,                             /**< [en]Failed to set remote View. 
                                                                                 [cn]设置远端View失败 */

}SDKERR;


#endif /* __HWM_GLOBAL_ERROR_CODE_DEF_H__ */
