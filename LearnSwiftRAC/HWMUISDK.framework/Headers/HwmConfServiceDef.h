/**
 * @file HwmConfServiceDef.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */


#ifndef __HWM_CONF_SERVICE_DEF_H__
#define __HWM_CONF_SERVICE_DEF_H__

#import "HwmSdkCommonDef.h"
#import "HwmNativeSdkDef.h"
#import "HwmGlobalErrorCodeDef.h"

BEGIN_HWM_SDK_NAMESPACE
#pragma pack(push, 8)



/**
* [en]This struct is used to describe hme render mode
* [cn]配对参数
*/
typedef enum tagRenderMode
{
    HWM_CONF_RENDER_WINDOWS_GDI = 10,               /**< Windows GDI显示方案，效率较低 */
    HWM_CONF_RENDER_WINDOWS_D3D = 11,               /**< Windows Direct3D显示方案，要求用户电脑支持Direct3D 9.0以上的版本 */
    HWM_CONF_RENDER_WINDOWS_D3D_SURFACE = 12,       /**< Windows Direct3D surface显示方案，主要用于数据会议,需要配套HME_V_Render_DisplayImage使用，要求用户电脑支持Direct3D 9.0以上的版本 */
    HWM_CONF_RENDER_WINDOWS_D3D11 = 13,             /**< Windows Direct3D11显示方案 */

    HWM_CONF_RENDER_APPLE_METAL = 20,               //iOS platform metal，mac doesn't support
    HWM_CONF_RENDER_APPLE_OPENGL = 21,              //iOS platform opengl， mac doesn't support

    HWM_CONF_RENDER_ANDROID_SURFACEVIEW = 30,       /**< Android平台SurfaceView显示方案，效率较低 */
    HWM_CONF_RENDER_ANDROID_GLSURFACEVIEW = 31,     /**< Android平台glSurfaceView显示方案，主流使用模式 */
    HWM_CONF_RENDER_ANDROID_NATIVEWINDOW = 32,      /**< Android平台新增NativeRCS NativeWindow显示方案 */
    HWM_CONF_RENDER_ANDROID_MCODECNW = 33,          /**< Android平台MediaCodec+NativeWindow绑定显示方案*/
    HWM_CONF_RENDER_DEFAULT = 0                     /**< 该参数其它平台暂不支持，默认为0*/
} RenderMode;

/**
* [en]This enum is used to describe record type<br>
* [cn]录制类型
* @mobile:disable
*/
typedef enum tagConfRecordType
{
    RECORD_TYPE_BAN = 0,           /**< [en]Indicates not allowed to record
                                    <br>[cn]禁用 */
    RECORD_TYPE_REC,               /**< [en]Indicates record
                                    <br>[cn]录播*/
    RECORD_TYPE_REC_LIVE,          /**< [en]Indicates record and live broadcast
                                    <br>[cn]录播+直播*/
    RECORD_TYPE_LIVE               /**< [en]Indicates live broadcast
                                    <br>[cn]直播 */
}ConfRecordType;

/**
* [en]This enum is used to describe conference role<br>
* [cn]会议成员角色
*/
typedef enum tagConfRoleBefore
{
    CON_ROLE_INVALID = -1,    /**< [en]Invalid
                                   [cn]无效角色
                                   [ios:rename:Invalid] */
    CON_ROLE_ATTENDEE = 0,    /**< [en]Indicates attendee
                                   [cn]普通与会者
                                   [ios:rename:Attendee] */
    CON_ROLE_CHAIRMAN,        /**< [en]Indicates chairman
                                   [cn]主席
                                   [ios:rename:Chairman] */
    CON_ROLE_AUDIENCE         /**< [en]Indicates audience
                                   [cn]观众
                                   [ios:rename:Audience] */
}ConfRoleBefore;

/**
* [en]
* [cn]显示观众观看模式
*/
typedef enum tagAudienceSizeShowMode
{
    AUDIENCE_HIDE_MODE = 0,                         /**< [en]hide mode
                                                    <br>[cn]隐藏模式
                                                     [ios:rename:Hiden] */
    AUDIENCE_SHOW_MODE,                             /**< [en]show mode
                                                    <br>[cn]显示模式
                                                     [ios:rename:Show] */
}AudienceSizeShowMode;

/**
* [en]
* [cn]Vmr会议ID类型
*/
typedef enum tagVmrIdType
{
    FIXED_ID,                       /**< [en]Indicates xxxxx
                                         [cn]VmrId是固定类型
                                         [ios:rename:Fixed] */

    RANDOM_ID                       /**< [en]Indicates xxxxx
                                         [cn]VmrId是随机类型
                                         [ios:rename:Random] */
}VmrIdType;

typedef enum tagMeetingIdType
{
    RANDOM_MEETING_TYPE = 0,                    /**< [en]Indicates random meeting type
                                                     [cn]随机会议ID
                                                     [ios:rename:Random] */
    PERSONAL_MEETING_TYPE,                      /**< [en]Indicates personal meeting type
                                                     [cn]个人会议ID
                                                     [ios:rename:Personal] */
    CLOUD_MEETING_TYPE,                         /**< [en]Indicates cloud meeting type
                                                     [cn]云会议ID
                                                     [ios:rename:Cloud] */
}MeetingIdType;


typedef enum tagConfMediaType
{
    CONF_MEDIA_AUDIO = 0,                     /**< [en]Indicates audio conf
                                                     [cn]音频会议
                                                     [ios:rename:Audio] */
    CONF_MEDIA_VIDEO                          /**< [en]Indicates video conf
                                                     [cn]视频会议
                                                     [ios:rename:Video] */
}ConfMediaType;

/**
 * [en]This enum is used to describe language<br>
 * [cn]语言
 */
typedef enum tagConfPromptLanguageType
{
    CONF_PROMPT_LANGUAGE_ZH_CN = 0,         /**< [en]Indicates ZH_CN
                                                     [cn]简体中文
                                                     [ios:rename:CN]*/
    CONF_PROMPT_LANGUAGE_EN_US,              /**< [en]Indicates EN_US
                                                     [cn]美国英文
                                                     [ios:rename:EN]*/
}ConfPromptLanguageType;

/**
 * [en]allow join conference user type.
 * [cn]允许加入会议的用户类型
 */
typedef enum tagConfAllowJoinUserType
{
    CONF_ALLOW_JOIN_ANYONE = 0,                 /**< [en]Anyone
                                                         [cn]任何人
                                                         [ios:rename:Anyone]*/
    CONF_ALLOW_JOIN_LOGINED_USER,               /**< [en]logined user
                                                         [cn]已登录用户
                                                         [ios:rename:LoginedUser]*/
    CONF_ALLOW_JOIN_IN_COMPANY_USER,            /**< [en]Company user
                                                         [cn]企业内用户
                                                         [ios:rename:InCompanyUser]*/
    CONF_ALLOW_JOIN_INVITED_USER,               /**< [en]Invited user
                                                         [cn]被邀请用户
                                                         [ios:rename:InvitedUser]*/
}ConfAllowJoinUserType;

/**
 * [en]This enum is used to describe timezone <br>
 * [cn]时区
 */
typedef enum tagTimezone
{
    TIMEZONE_DEFAULT = 0 ,             /**< [en]Indicates default
                                                       <br>[cn]Mediax默认时区值
                                                       [ios:rename:Default]*/
    TIMEZONE_INTERDATE_LINE = 1,       /**< [en]Indicates International Date Line West
                                                       <br>[cn]日界线西
                                                       [ios:rename:InteerdateLine]*/
    TIMEZONE_MIDWAY_ISLAND,            /**< [en]Indicates Midway Island, Samoa
                                                       <br>[cn]中途岛，萨摩亚群岛
                                                       [ios:rename:MidwayIsland]*/
    TIMEZONE_HAWAII,                   /**< [en]Indicates Hawaii
                                                       <br>[cn]夏威夷
                                                       [ios:rename:Hawii]*/
    TIMEZONE_ALASKA,                   /**< [en]Indicates Alaska
                                                       <br>[cn]阿拉斯加
                                                       [ios:rename:Alaska]*/
    TIMEZONE_PACIFIC_TIME,             /**< [en]Indicates Pacific Time(US&Canada);Tijuana
                                                       <br>[cn]太平洋时间(美国和加拿大);蒂华纳
                                                       [ios:rename:PacificTime]*/
    TIMEZONE_ARIZONA,                  /**< [en]Indicates Arizona
                                                       <br>[cn]亚利桑那
                                                       [ios:rename:Arizona]*/
    TIMEZONE_MOUNTAIN_TIME,            /**< [en]Indicates Mountain Time(US&Canada)
                                                       <br>[cn]山地时间(美国和加拿大)
                                        [ios:rename:MountainTime]*/
    TIMEZONE_CENTRAL_AMERICA,          /**< [en]Indicates Central America
                                                       <br>[cn]中美洲
                                        [ios:rename:CentralAmerica]*/
    TIMEZONE_CENTRAL_TIME,             /**< [en]Indicates Central Time(US&Canada)
                                                       <br>[cn]中间时间(美国和加拿大)
                                                       [ios:rename:CentralTime]*/
    TIMEZONE_MEXICO_CITY,              /**< [en]Indicates Mexico City
                                                       <br>[cn]墨西哥城
                                                       [ios:rename:MexicoCity]*/
    TIMEZONE_SASKATCHEWAN,             /**< [en]Indicates Saskatchewan
                                                       <br>[cn]萨斯喀彻温
                                                       [ios:rename:Saskatchewan]*/
    TIMEZONE_BOGOTA,                   /**< [en]Indicates Bogota, Lima, Quito
                                                       <br>[cn]波哥大，利马，基多
                                                       [ios:rename:Bogota]*/
    TIMEZONE_EASTERN_TIME,             /**< [en]Indicates Eastern Time(US&Canada)
                                                       <br>[cn]东部时间(美国和加拿大)
                                                       [ios:rename:EasternTime]*/
    TIMEZONE_INDIANA,                  /**< [en]Indicates Indiana(East)
                                                       <br>[cn]印第安纳(东部)
                                                       [ios:rename:Indiana]*/
    TIMEZONE_ATLANTIC_TIME,            /**< [en]Indicates Atlantic time(Canada)
                                                       <br>[cn]大西洋时间(加拿大)
                                                       [ios:rename:AtlanticTime]*/
    TIMEZONE_CARACAS,                  /**< [en]Indicates Caracas, La Paz
                                                       <br>[cn]加拉加斯，拉巴斯
                                                       [ios:rename:Caracas]*/
    TIMEZONE_SANTIAGO,                 /**< [en]Indicates Santiago
                                                       <br>[cn]圣地亚哥
                                                       [ios:rename:Santiago]*/
    TIMEZONE_NEWFOUNDLAND,             /**< [en]Indicates Newfoundland
                                                       <br>[cn]纽芬兰
                                                       [ios:rename:Newfoundland]*/
    TIMEZONE_BRASILIA,                 /**< [en]Indicates Brasilia
                                                       <br>[cn]巴西利亚
                                                       [ios:rename:Brasilia]*/
    TIMEZONE_BUENOS_AIRES,             /**< [en]Indicates Buenos Aires, Georgetown
                                                       <br>[cn]布宜诺斯艾利斯，乔治敦
                                                       [ios:rename:BuenosAires]*/
    TIMEZONE_GREENLAND,                /**< [en]Indicates Greenland
                                                       <br>[cn]格陵兰
                                                       [ios:rename:GreenLand]*/
    TIMEZONE_MID_ATLANTIC,             /**< [en]Indicates Mid-Atlantic
                                                       <br>[cn]中大西洋
                                                       [ios:rename:MidAtlantic]*/
    TIMEZONE_AZORES,                   /**< [en]Indicates Azores
                                                       <br>[cn]亚速尔群岛
                                                       [ios:rename:Azores]*/
    TIMEZONE_CAPEVERDE,                /**< [en]Indicates Cape Verde Is
                                                       <br>[cn]佛得角群岛
                                                       [ios:rename:Capeverde]*/
    TIMEZONE_MONROVIA,                 /**< [en]Indicates Monrovia
                                                       <br>[cn]蒙罗维亚
                                                       [ios:rename:Monrovia]*/
    TIMEZONE_GREENWICH_MEANTIME,       /**< [en]Indicates Greenwich Mean Time:Dublin, Edinburgh, Lisbon, London
                                                       <br>[cn]格林威治标准时：都柏林，爱丁堡，里斯本，伦敦
                                                       [ios:rename:GreenwichMeantime]*/
    TIMEZONE_AMSTERDAM,                /**< [en]Indicates Amsterdam, Berlin, Bern, Rome, Stockholm, Vienna
                                                       <br>[cn]阿姆斯特丹，柏林，伯尔尼，罗马，斯德哥尔摩，维也纳
                                                       [ios:rename:Amsterdam]*/
    TIMEZONE_BELGRADE,                 /**< [en]Indicates Belgrade, Bratislava, Budapest, Ljubljana, Prague
                                                       <br>[cn]贝尔格莱德，布拉迪斯拉发，布达佩斯，卢布尔亚纳，布拉格
                                                       [ios:rename:Belgrade]*/
    TIMEZONE_BRUSSELS,                 /**< [en]Indicates Brussels, Copenhagen, Madrid, Paris
                                                       <br>[cn]布鲁塞尔，哥本哈根，马德里，巴黎
                                                       [ios:rename:Brussels]*/
    TIMEZONE_SARAJEVO,                 /**< [en]Indicates Sarajevo, Skopje, Sofija, Vilnius, Warsaw, Zagreb
                                                       <br>[cn]萨拉热窝，斯科普里，维尔纽斯，索非亚，华沙，萨格勒布
                                                       [ios:rename:Sarajevo]*/
    TIMEZONE_WESTCENTRAL_AFRICA,       /**< [en]Indicates West Central Africa
                                                       <br>[cn]中非西部
                                                       [ios:rename:WestcentralAfrica]*/
    TIMEZONE_ATHENS,                     /**< [en]Indicates Athens, Istanbul, Minsk
                                                       <br>[cn]雅典，伊斯坦布尔，明斯克
                                                       [ios:rename:Athens]*/
    TIMEZONE_BUCHAREST,                 /**< [en]Indicates Bucharest
                                                       <br>[cn]布加勒斯特
                                                       [ios:rename:Bucharest]*/
    TIMEZONE_CAIRO,                     /**< [en]Indicates Cairo
                                                       <br>[cn]开罗
                                                       [ios:rename:Cairo]*/
    TIMEZONE_HARARE,                    /**< [en]Indicates Harare, Pretoria
                                                       <br>[cn]哈拉雷，比勒陀利亚
                                                       [ios:rename:Harare]*/
    TIMEZONE_HELSINKI,                 /**< [en]Indicates Helsinki, Riga, Tallinn
                                                       <br>[cn]赫尔辛基，里加，塔林
                                                       [ios:rename:Helsinki]*/
    TIMEZONE_JERUSALEM,                   /**< [en]Indicates Jerusalem
                                                       <br>[cn]耶路撒冷
                                                       [ios:rename:Jerusalem]*/
    TIMEZONE_BAGHDAD,                     /**< [en]Indicates Baghdad
                                                       <br>[cn]巴格达
                                                       [ios:rename:Baghdad]*/
    TIMEZONE_KUWAIT,                     /**< [en]Indicates Kuwait, Riyadh
                                                       <br>[cn]科威特，利雅得
                                                       [ios:rename:Kuwait]*/
    TIMEZONE_MOSCOW,                    /**< [en]Indicates Moscow, St. Petersburg, Volgograd
                                                       <br>[cn]莫斯科，圣彼得堡，喀山，伏尔加格勒
                                                       [ios:rename:Moscow]*/
    TIMEZONE_NAIROBI,                     /**< [en]Indicates Nairobi
                                                       <br>[cn]内罗毕
                                                       [ios:rename:Nairobi]*/
    TIMEZONE_TEHRAN,                    /**< [en]Indicates Tehran
                                                       <br>[cn]德黑兰
                                                       [ios:rename:Tehran]*/
    TIMEZONE_ABU_DHABI,                /**< [en]Indicates Abu Dhabi, Muscat
                                                       <br>[cn]阿布扎比，马斯喀特
                                                       [ios:rename:AbuDhabi]*/
    TIMEZONE_TBILISI,                     /**< [en]Indicates Tbilisi, Yerevan
                                                       <br>[cn]第比利斯，埃里温
                                                       [ios:rename:Tbilisi]*/
    TIMEZONE_KABUL,                     /**< [en]Indicates Kabul
                                                       <br>[cn]喀布尔
                                                       [ios:rename:Kabul]*/
    TIMEZONE_EKATERINBURG,             /**< [en]Indicates Ekaterinburg
                                                       <br>[cn]叶卡捷琳堡
                                                       [ios:rename:Ekaterinburg]*/
    TIMEZONE_ISLAMABAD,                 /**< [en]Indicates Islamabad, Karachi, Tashkent
                                                       <br>[cn]伊斯兰堡，卡拉奇，塔什干
                                                       [ios:rename:Islamabad]*/
    TIMEZONE_CALCUTTA,                 /**< [en]Indicates Calcutta, Chennai, Mumbai, New Delhi
                                                       <br>[cn]加尔各答，马德拉斯，孟买，新德里
                                                       [ios:rename:Calcutta]*/
    TIMEZONE_KATHMANDU,                   /**< [en]Indicates Kathmandu
                                                       <br>[cn]加德满都
                                                       [ios:rename:Kathmandu]*/
    TIMEZONE_ALMATY,                     /**< [en]Indicates Almaty
                                                       <br>[cn]阿拉木图
                                                       [ios:rename:Almaty]*/
    TIMEZONE_ASTANA,                     /**< [en]Indicates Astana, Dhaka
                                                       <br>[cn]阿斯塔纳，达卡
                                                       [ios:rename:Astana]*/
    TIMEZONE_SRIJAYA,                  /**< [en]Indicates Sri Jayawardenepura
                                                       <br>[cn]斯里哈亚华登尼普拉
                                                       [ios:rename:Srijaya]*/
    TIMEZONE_RANGOON,                     /**< [en]Indicates Rangoon
                                                       <br>[cn]仰光
                                                       [ios:rename:Rangoon]*/
    TIMEZONE_BANGKOK,                     /**< [en]Indicates Bangkok, Hanoi, Jakarta
                                                       <br>[cn]曼谷，雅加达，河内
                                                       [ios:rename:Bangkok]*/
    TIMEZONE_NOVOSIBIRSK,                 /**< [en]Indicates Novosibirsk
                                                       <br>[cn]新西伯利亚
                                                       [ios:rename:Novosibirsk]*/
    TIMEZONE_BEIJING,                     /**< [en]Indicates Beijing, Chongqing, Hong Kong, Urumqi, Taipei
                                                       <br>[cn]北京，重庆，香港，乌鲁木齐，台北
                                                       [ios:rename:Beijing]*/
    TIMEZONE_KRASNOYARSK,                 /**< [en]Indicates Krasnoyarsk, Ulaan Bataar
                                                       <br>[cn]克拉斯诺亚尔斯克，乌兰巴托
                                                       [ios:rename:Krasnoyarsk]*/
    TIMEZONE_KUALA_LUMPUR,             /**< [en]Indicates Kuala Lumpur, Singapore
                                                       <br>[cn]吉隆坡，新加坡
                                                       [ios:rename:KualaLumpur]*/
    TIMEZONE_PERTH,                     /**< [en]Indicates Perth
                                                       <br>[cn]珀斯
                                                       [ios:rename:Perth]*/
    TIMEZONE_OSAKA,                     /**< [en]Indicates Osaka, Sapporo, Tokyo
                                                       <br>[cn]东京，大阪，札幌
                                                       [ios:rename:Osaka]*/
    TIMEZONE_SEOUL,                     /**< [en]Indicates Seoul
                                                       <br>[cn]汉城
                                                       [ios:rename:Seoul]*/
    TIMEZONE_YAKUTSK,                     /**< [en]Indicates Yakutsk
                                                       <br>[cn]雅库茨克
                                                       [ios:rename:Yakutsk]*/
    TIMEZONE_ADELAIDE,                 /**< [en]Indicates Adelaide
                                                       <br>[cn]阿德莱德
                                                       [ios:rename:Adelaide]*/
    TIMEZONE_DARWIN,                     /**< [en]Indicates Darwin
                                                       <br>[cn]达尔文
                                                       [ios:rename:Darwin]*/
    TIMEZONE_BRISBANE,                 /**< [en]Indicates Brisbane
                                                       <br>[cn]布里斯班
                                                       [ios:rename:Brisbane]*/
    TIMEZONE_CANBERRA,                    /**< [en]Indicates Canberra, Melbourne, Sydney
                                                       <br>[cn]堪培拉，墨尔本，悉尼
                                                       [ios:rename:Canberra]*/
    TIMEZONE_GUAM,                     /**< [en]Indicates Guam, Port Moresby
                                                       <br>[cn]关岛，莫尔兹比港
                                                       [ios:rename:Guam]*/
    TIMEZONE_HOBART,                    /**< [en]Indicates Hobart
                                                       <br>[cn]霍巴特
                                                       [ios:rename:Hobart]*/
    TIMEZONE_VLADIVOSTOK,               /**< [en]Indicates Vladivostok
                                                       <br>[cn]符拉迪沃斯托克
                                                       [ios:rename:Vladivostok]*/
    TIMEZONE_SOLOMON,                    /**< [en]Indicates Solomon Is., New Caledonia
                                                       <br>[cn]所罗门群岛，新喀里多尼亚
                                                       [ios:rename:Solomon]*/
    TIMEZONE_AUCKLAND,                 /**< [en]Indicates Auckland, Welington
                                                       <br>[cn]奥克兰，惠灵顿
                                                       [ios:rename:Auckland]*/
    TIMEZONE_FIJI,                     /**< [en]Indicates Fiji, Kamchatka, Marshall Is.
                                                       <br>[cn]富士，堪察加半岛，马绍尔群岛
                                                       [ios:rename:Fiji]*/
    TIMEZONE_NUKUALOFA,                 /**< [en]Indicates Nuku'alofa
                                                       <br>[cn]努库阿洛法
                                                       [ios:rename:Nukualofa]*/
    TIMEZONE_IRKUTSK,                     /**< [en]Indicates Irkutsk
                                                       <br>[cn]伊尔库茨克
                                                       [ios:rename:Irkutsk]*/
    TIMEZONE_CASABLANCA,                  /**< [en]Indicates Casablanca
                                                       <br>[cn]卡萨布兰卡
                                                       [ios:rename:Casablanca]*/
    TIMEZONE_BAKU,                     /**< [en]Indicates Baku
                                                       <br>[cn]巴库
                                                       [ios:rename:Baku]*/
    TIMEZONE_MAGADAN,                     /**< [en]Indicates Magadan
                                                       <br>[cn]马加丹
                                                       [ios:rename:Magadan]*/
}Timezone;


/**
 * [en]This enum is used to describe conference role<br>
 * [cn]会议成员角色
 */
typedef enum tagConfRole
{
    ROLE_ATTENDEE = 0,             /**< [en]Indicates attendee
                                        [cn]普通与会者
                                        [ios:rename:Attendeee]*/
    ROLE_HOST,                     /**< [en]Indicates host
                                        [cn]会议主持人
                                        [ios:rename:Host]*/
    ROLE_AUDIENCE,                 /**< [en]Indicates audience
                                        [cn]观众
                                        [ios:rename:Audience]*/
    ROLE_COHOST,                   /**< [en]Indicates cohost
                                        [cn]联席主持人
                                        [ios:rename:Cohost]*/
    ROLE_WAITING,                  /**< [en]Indicates waiting
                                        [cn]等候室成员
                                        [ios:rename:Waiting]*/
}ConfRole;

typedef enum tagCloudRecordType
{
    CLOUD_RECORD_START = 0,      /**< [en]Indicates xxxx. [cn]开始录制 */
    CLOUD_RECORD_PAUSE,          /**< [en]Indicates xxxx. [cn]暂停录制 */
    CLOUD_RECORD_CONTINUE,       /**< [en]Indicates xxxx. [cn]继续录制 */
    CLOUD_RECORD_STOP            /**< [en]Indicates xxxx. [cn]停止录制 */
}CloudRecordType;

typedef enum tagSwitchRoleStatusType
{
    SWITCH_ROLE_START,    /**< [en]Indicates xxx
                                [cn]角色转换开始
                                [ios:rename:Start]*/
    SWITCH_ROLE_END,      /**< [en]Indicates xxx
                                [cn]角色转换结束
                                [ios:rename:End]*/
    SWITCH_ROLE_TIMEOUT,  /**< [en]Indicates xxx
                                [cn]角色转换超时
                                [ios:rename:TimeOut]*/
    SWITCH_ROLE_BUTT,     /**< [en]Indicates xxx
                                [cn]无效值
                                [ios:rename:Butt]*/
} SwitchRoleStatusType;

/**
* [en]This enum is used to describe xxx.
* [cn]网络研讨会角色切换信息
*/
typedef struct tagSwitchRoleInfo
{
    ConfRole destRole;                      /**< [en]xxxxx.[cn]目标角色 */
    SwitchRoleStatusType status;            /**< [en]xxxxx.[cn]角色转换状态 */
} SwitchRoleInfo;


/**
* [en]This enum is used to describe xxx.
* [cn]显示观众数
*/
typedef struct tagShowAudienceSizeInfo
{
    AudienceSizeShowMode audienceSizeShowMode;       /**< [en]Indicates show mode.[cn]观众显示策略 */
    HWM_UINT32 actualAudienceSize;                   /**< [en]Indicates audience real.[cn]实际观众数量 */
    HWM_UINT32 multipliedAudienceSize;               /**< [en]Indicates audience multiple.[cn]倍增后的观众数量 */
} ShowAudienceSizeInfo;

/**
* [en]This enum is used to describe xxx.
* [cn]会议结束时的录制信息
*/
typedef struct tagRecordNotifyWhenConfEndInfo
{
    HWM_BOOL   haveRecord;                           /**< [en]xxxxxx.[cn]会议是否有录播 */
    HWM_UINT32 recordType;                           /**< [en]xxxxxx.[cn]录制类型 */ 
    HWM_BOOL   isChairMan;                           /**< [en]xxxxxx.[cn]是否是主席 */ 
    HWM_BOOL   isCreator;                            /**< [en]xxxxxx.[cn]是否是创建者 */  
    HWM_BOOL   hasCreator;                           /**< [en]xxxxxx.[cn]有无创建者 */ 
    HWM_CHAR   name[HWM_MAX_NAME_LEN];               /**< [en]xxxxxx.[cn]与会者名称  */ 
}RecordNotifyWhenConfEndInfo;

/**
* [en]This enum is used to describe stream type<br>
* [cn]流类型
*/
typedef enum StreamType
{
    STREAM_TYPE_NONE = 0,         /**< [en]
                                   <br>[cn]没有流
                                   [ios:rename:none]*/
    STREAM_TYPE_PICTURE,          /**< [en]
                                   <br>[cn]图片流
                                   [ios:rename:picture]*/
    STREAM_TYPE_VIDEO,            /**< [en]
                                   <br>[cn]视频流
                                   [ios:rename:video]*/
}StreamType;

/**
* [en]This enum is used to describe attendee type<br>
* [cn]成员类型
*/
typedef enum tagAttendeeType
{
    ATTENDEE_TYPE_NORMAL = 0,      /**< [en]Indicates conference soft terminal user
                                   <br>[cn]会议软终端用户
                                    [ios:rename:Normal]*/
    ATTENDEE_TYPE_TELEPRESENCE,    /**< [en]Indicates telepresence user
                                   <br>[cn]智真用户
                                    [ios:rename:Telepresence]*/
    ATTENDEE_TYPE_TERMINAL,        /**< [en]Indicates conference room or hard terminal
                                   <br>[cn]会议室或硬终端
                                    [ios:rename:Terminal]*/
    ATTENDEE_TYPE_OUTSIDE,         /**< [en]Indicates outside attendee
                                   <br>[cn]外部与会人
                                    [ios:rename:Outside]*/
    ATTENDEE_TYPE_CUSTOMNUMBER,    /**< [en]Indicates custom number
                                   <br>[cn]自定义号码
                                    [ios:rename:CustomNumber]*/
    ATTENDEE_TYPE_MOBILE,          /**< [en]Indicates user mobile phone number
                                   <br>[cn]用户手机号码
                                    [ios:rename:Mobile]*/
    ATTENDEE_TYPE_ANONYMOUS,       /**< [en]Indicates anonymous user
                                   <br>[cn]匿名用户
                                    [ios:rename:Anonymous]*/
    ATTENDEE_TYPE_TELEPHONE,       /**< [en]Indicates user telephone
                                   <br>[cn]用户固定电话
                                    [ios:rename:Telephone]*/
    ATTENDEE_TYPE_BOARD,           /**< [en]Indicates board user
                                   <br>[cn]白板用户
                                    [ios:rename:Board]*/
    ATTENDEE_TYPE_IDEAHUB,         /**< [en]Indicates ideahub user
                                   <br>[cn]海思芯片的大屏设备
                                    [ios:rename:IdeaHub]*/
    ATTENDEE_TYPE_HWVISION,        /**< [en]Indicates hwvision user
                                   <br>[cn]智慧屏
                                    [ios:rename:HWVision]*/
    ATTENDEE_TYPE_WELINKC          /**< [en]Indicates welinkc user
                                   <br>[cn]welink大众版
                                    [ios:rename:WeLink]*/
}AttendeeType;



/**
 * [en]This enum is used to describe conference recording mode.
 * [cn]会议录制模式
 */
typedef enum tagConfRecordMode
{
    CONF_RECORD_DISABLE,                /**< [en]Indicates disable record
                                                 [cn]禁止录制
                                                 [ios:rename:Disable]*/
    CONF_RECORD_LIVE,                   /**< [en]Indicates live
                                                 [cn]直播模式
                                                 [ios:rename:Live]*/
    CONF_RECORD_RECORD,                 /**< [en]Indicates record broadcast
                                                 [cn]录播模式
                                                 [ios:rename:Record]*/
    CONF_RECORD_LIVE_AND_RECORD,        /**< [en]Indicates live broadcast and record broadcast
                                                 [cn]直播 + 录播模式
                                                 [ios:rename:LiveAndRecord]*/
}ConfRecordMode;


/**
 * [en]This enum is used to describe attendee state.
 * [cn]成员状态
 */
typedef enum tagConfAttendeeState
{
    CONF_ATTENDEE_STATE_IN_CONF = 0,     /**< [en]Indicates in conference
                                                         [cn]会议中
                                                         [ios:rename:InConf]*/
    CONF_ATTENDEE_STATE_CALLING,         /**< [en]Indicates is calling
                                                         [cn]正在呼叫
                                                         [ios:rename:Calling]*/
    CONF_ATTENDEE_STATE_JOINING,         /**< [en]Indicates is joining conference
                                                         [cn]正在加入会议
                                                         [ios:rename:Joining]*/
    CONF_ATTENDEE_STATE_LEAVED,          /**< [en]Indicates have leaved
                                                         [cn]已经离开
                                                         [ios:rename:Leaved]*/
    CONF_ATTENDEE_STATE_NO_EXIST,        /**< [en]Indicates not exist
                                                         [cn]用户不存在
                                                         [ios:rename:NoExist]*/
    CONF_ATTENDEE_STATE_BUSY,            /**< [en]Indicates callee is busy
                                                         [cn]被叫用户忙
                                                         [ios:rename:Busy]*/
    CONF_ATTENDEE_STATE_NO_ANSWER,       /**< [en]Indicates no answer
                                                         [cn]用户无应答
                                                         [ios:rename:NoAnswer]*/
    CONF_ATTENDEE_STATE_REJECT,          /**< [en]Indicates user reject answer
                                                         [cn]用户拒绝接听
                                                         [ios:rename:Reject]*/
    CONF_ATTENDEE_STATE_CALL_FAILED,     /**< [en]Indicates call failed
                                                         [cn]呼叫失败
                                                         [ios:rename:Failed]*/
}ConfAttendeeState;


/**
 * [en]This enum is used to describe conference state.
 * [cn]会议状态
 */
typedef enum tagConfState
{
    CONF_STATE_SCHEDULE = 0,     /**< [en]Indicates schedule state
                                             [cn]预定状态
                                             [ios:rename:Schedule]*/
    CONF_STATE_CREATING,         /**< [en]Indicates be creating state
                                             [cn]正在创建状态
                                             [ios:rename:Creating]*/
    CONF_STATE_GOING,            /**< [en]Indicates conf going state
                                             [cn]会议已经开始
                                             [ios:rename:Going]*/
    CONF_STATE_DESTROYED,        /**< [en]Indicates conf is destroyed
                                             [cn]会议已经关闭
                                             [ios:rename:Destroyed]*/
}ConfState;


/**
 * [en]This enumeration is used to describe the video window display type
 * [cn]视频窗口显示类型
 */
typedef enum tagVideoWndDisplayMode
{
    VIDEO_WND_DISPLAY_ZOOM = 0,                 /**< [en]Indicates stretch mode
                                                     [cn]拉伸模式 */
    VIDEO_WND_DISPLAY_BLACK_BORDER = 1,         /**< [en]Indicates (no stretch) black border mode
                                                     [cn](不拉伸)黑边模式 */
    VIDEO_WND_DISPLAY_CROP = 2,                 /**< [en]Indicates (no stretch) crop mode
                                                     [cn](不拉伸)裁剪模式 */
    VIDEO_WND_DISPLAY_AUTO_ADAPT = 6,           /**< [en]Indicates auto adapt.
                                                     [cn] 自适应模式，用于移动设备 */
}VideoWndDisplayMode;

/**
* [en]This enumeration is used to describe the video window display type
* [cn]视频窗口横竖屏类型
*/
typedef enum tagVideoWndOrientation
{
    VIDEO_WND_LANDSCAPE = 0,                 /**< [en]Indicates stretch mode
                                                [cn]横屏 */
    VIDEO_WND_PORTRAIT  = 1,         /**< [en]Indicates (no stretch) black border mode
                                                [cn]竖屏 */
}VideoWndOrientation;


/**
 * [en]This enumeration is used to describe the video window mirror mode
 * [cn]视频窗口镜像类型
 */
typedef enum tagVideoWndMirrorMode
{
    VIDEO_WND_MIRROR_DEFAULE = 0,        /**< [en]Indicates no mirror (default mode)
                                                     [cn]0:不做镜像(默认值)
                                                     [ios:rename:Default]*/
    VIDEO_WND_MIRROR_VERTICAL,           /**< [en]Indicates vertical mirror type(x axis mirror)
                                                     [cn]1:垂直镜像(X轴镜像)
                                                     [ios:rename:Vertical]*/
    VIDEO_WND_MIRROR_HORIZONTAL,         /**< [en]Indicates horizontal mirror type(y axis mirror)
                                                     [cn]2:水平镜像(Y轴镜像)
                                                     [ios:rename:Horizontal]*/
} VideoWndMirrorMode;

/**
 * [en]This enumeration is used to describe the device type.
 * [cn]设备类型
 */
typedef enum tagDeviceType
{
    DEVICE_MIC,                      /**< [en]Indicates microphone.
                                                 [cn]麦克风
                                                 [ios:rename:Mic]*/
    DEVICE_SPEAKER,                  /**< [en]Indicates loudspeaker.
                                                 [cn]扬声器
                                                 [ios:rename:Speaker]*/
    DEVICE_CAMERA,                   /**< [en]Indicates camera.
                                                 [cn]摄像头
                                                 [ios:rename:Video]*/
}DeviceType;


typedef enum tagDeviceOrient
{
    DEVICE_ORIENT_SCREEN_PORTRAIT = 0,      /**< [en]Indicates xxxx.
                                            [cn]竖屏，摄像头在上
                                             [ios:rename:ScreenPortrait]*/
    DEVICE_ORIENT_SCREEN_LANDSCAPE,         /**< [en]Indicates xxxx.
                                            [cn]横屏，摄像头在右
                                             [ios:rename:ScreenLandScape]*/
    DEVICE_ORIENT_SCREEN_REVERSE_PORTRAIT,  /**< [en]Indicates xxxx.
                                            [cn]反向竖屏，摄像头在下
                                             [ios:rename:ScreenPeversePortrait]*/
    DEVICE_ORIENT_SCREEN_REVERSE_LANDSCAPE, /**< [en]Indicates xxxx.
                                            [cn]反向横屏，摄像头在左
                                             [ios:rename:ScreenReverseLandscape]*/
}DeviceOrient;


typedef enum tagSimCallPhase
{
    ON_SIM_CALL = 0,                        /**< [en]Indicates the phase on sim call in.
                                             [cn]sim卡来电时
                                             [ios:rename:OnSimCall]*/
    AFTER_SIM_CALL,                         /**< [en]Indicates the phase after sim call end.
                                             [cn]sim卡来电挂断后
                                             [ios:rename:AfterSimCall]*/
}SimCallPhase;

typedef enum tagAudioIOType
{
    AUDIO_IO_TYPE_INPUT = 0,                 /**< [en]Indicates the input of audio.
                                             [cn]音频输入,麦克风等
                                             [ios:rename:input]*/
    AUDIO_IO_TYPE_OUTPUT,                    /**< [en]Indicates the output of audio.
                                             [cn]音频输出,扬声器或耳机等
                                             [ios:rename:output]*/
    AUDIO_IO_TYPE_DUPLEX                     /**< [en]Indicates the input and output of audio.
                                             [cn]音频输入和输出
                                             [ios:rename:duplex]*/
}AudioIOType;

typedef enum tagHowlStatus
{
    NO_HOWLS = 0,                         /**< [en]Indicates xxxx.
                                           [cn]无啸叫
                                           [ios:rename:NoHowls]*/
    IN_CALL_DETECT_HOWLS,                  /**< [en]Indicates xxxx.
                                            [cn]通话过程中检测出啸叫
                                            [ios:rename:InCallDetectHowls]*/
    SIGNALS_DETECT_HOWLS,                   /**< [en]Indicates xxxx.
                                             [cn] 信号音检测出啸叫
                                             [ios:rename:SignalsDetectHowls]*/
}HowlStatus;


typedef enum tagResumeState
{
    RESUME_STATE_IDLE,                      /**< [en]Indicates xxxx
                                                     [cn]空闲状态
                                                     [ios:rename:Idle]*/
    RESUME_STATE_RESUMING,                  /**< [en]Indicates xxxx
                                                     [cn]正在恢复(重连)中，应用程序应在此状态下提示用户
                                                     [ios:rename:Resuming]*/
    RESUME_STATE_RESUME_SUCCESS,            /**< [en]Indicates xxxx
                                                     [cn]恢复(重连)成功
                                                     [ios:rename:ResumeSuccess]
                                                     */
}ResumeState;


typedef enum tagClientDeviceType
{
    CLIENT_DEVICE_DESKTOP = 0,    /**< [en]desktop
                                   <br>[cn]pc登录
                                   [ios:rename:Desktop]*/
    CLIENT_DEVICE_MOBILE,         /**< [en]mobile
                                   <br>[cn]移动端登录
                                   [ios:rename:Mobile]*/
    CLIENT_DEVICE_PAD,            /**< [en]pad
                                   <br>[cn]平板登录
                                   [ios:rename:Pad]*/
    CLIENT_DEVICE_SMARTROOM,      /**< [en]smart room
                                    <br>[cn]smart room版
                                    [ios:rename:smartroom]*/
    CLIENT_DEVICE_MINI,           /**< [en]MiniPrograms
                                    <br>[cn]小程序
                                    [ios:rename:MiniPrograms]*/
    CLIENT_DEVICE_WEB,            /**< [en]Web
                                    <br>[cn]浏览器
                                    [ios:rename:web]*/
    CLIENT_DEVICE_TV,             /**< [en]TV
                                    <br>[cn]TV版
                                    [ios:rename:TV]*/
    CLIENT_DEVICE_HARD,           /**< [en]HardTerminal
                                    <br>[cn]硬终端
                                    [ios:rename:HardTerminal]*/
    CLIENT_DEVICE_TYPE_THIRD,     /**< [en]ThirdTerminal
                                    <br>[cn]友商终端
                                    [ios:rename:ThirdTerminal]*/
    CLIENT_DEVICE_PSTN,           /**< [en]PSTN
                                    <br>[cn]PSTN
                                    [ios:rename:PSTN]*/
    CLIENT_DEVICE_MCU,           /**< [en]MCU
                                    <br>[cn]MCU
                                    [ios:rename:MCU]*/
    CLIENT_DEVICE_OTHER,           /**<[en]other
                                    <br>[cn]其他
                                    [ios:rename:Other]*/
    CLIENT_DEVICE_UNKNOWN = 99    /**<[en]unkown
                                    <br>[cn]未知 */

} ClientDeviceType;


typedef enum tagConfInviteMode
{
    CONF_INVITE_NORMAL = 0,              /**< [en]Indicates xxx
                                          [cn]正常入会
                                          [ios:rename:Normal]*/
    CONF_INVITE_RETRY_OF_NOSTREAM,       /**< [en]Indicates xxx
                                          [cn]无码流重连后入会
                                          [ios:rename:RetryOfNoStream]*/
    CONF_INVITE_RETRY_OF_OUTNET,         /**< [en]Indicates xxx
                                          [cn]断网重连后
                                          [ios:rename:RetryOfOutnet]*/
    CONF_INVITE_RETRY_OF_TLS_UNESTABLISH,/**< [en]Indicates xxx
                                          [cn]tls闪断
                                          [ios:rename:RetryOfTlsUnestablish]*/
    CONF_INVITE_RETRY_OF_PORT_CHANGE,    /**< [en]Indicates xxx
                                          [cn]端口切换
                                          [ios:rename:RetryOfPortChange]*/
    CONF_INVITE_BUFF                    /**<[ios:rename:Butt]*/
}ConfInviteMode;


/**
* [en]This enumeration is used to describe the call type.
* [cn]呼叫类型
*/
typedef enum tagCallType
{
    AUDIO,        /**< [en]Indicates IP audio call
                      <br>[cn]IP语音呼叫
                      [ios:rename:IPAudio]*/
    VIDEO,        /**< [en]Indicates IP video call
                      <br>[cn]IP视频呼叫
                      [ios:rename:IPVideo]*/
}CallType;

/**
* [en]
* [cn]VMR类型
*/
typedef enum tagVmrType
{
    COMMERCIAL = 0,   /**< [en]Indicates VMR type. [cn]VMR模式，0商用 */
    FREE,             /**< [en]Indicates VMR type. [cn]VMR模式。1试用 */
    
}VmrType;

/**
* [en]This struct is used to describe leave conference mode.
* [cn]离会模式
*/
typedef enum tagLeaveConfMode
{
    MODE_NORMAL = 7,          /**< [en]Indicates xxxx.
                               [cn]正常离会
                               [ios:rename:Normal]*/
    MODE_NOSTREAM,            /**< [en]Indicates xxxx.
                               [cn]无码流重连后离会
                               [ios:rename:NoStream]*/
    MODE_OUTNET,              /**< [en]Indicates xxxx.
                               [cn]断网重连后
                               [ios:rename:OutNet]*/
    MODE_TLS_UNESTABLISH,     /**< [en]Indicates xxxx.
                               [cn]tls闪断
                               [ios:rename:TlsUnestablish]*/
    MODE_ON_CONF_END,         /**< [en]Indicates xxxx.
                               [cn]服务器挂断
                               [ios:rename:OnConfEnd]*/
    MODE_PORT_CHANGE,         /**< [en]Indicates xxxx.
                               [cn]端口切换
                               [ios:rename:PortChange]*/
    MODE_NET_BREAK,           /**< [en]Indicates xxxx.
                               [cn]无码流探测断网离会
                               [ios:rename:NetBreak]*/
    MODE_OUTNET_TIMEOUT,      /**< [en]Indicates xxxx.
                               [cn]断网重连超时离会
                               [ios:rename:OfflineTimeout]*/
    MODE_ON_MMR_ROOM_LEAVE,   /**< [en]Indicates xxxx.
                               [cn]mmr离会
                               [ios:rename:OnMmrRoomLeave]*/
    MODE_ON_RTC_ROOM_LEAVE,   /**< [en]Indicates xxxx.
                               [cn]rtc离会
                               [ios:rename:OnRtcRoomLeave]*/
}LeaveConfMode;

/**
* [en]This struct is used to describe reconnect status.
* [cn]重连状态
* @mobile:disable
*/
typedef enum tagReconnectStatusMode
{
    STATUS_TYPE_NORMAL,       // 默认值
    STATUS_TYPE_RECONNECTING, // 正在重连，提示用户
    STATUS_TYPE_RECONNECTED   // 重连上
}ReconnectStatusMode;

/**
* [cn]前后置摄像头枚举
*/
typedef enum tagCameraPosition
{
    CAMERA_POSITION_BACK = 0,               /**< [en]Indicates xxxx.
                                             [cn]后置摄像头
                                             [ios:rename:Back]*/
    CAMERA_POSITION_FRONT,                  /**< [en]Indicates xxxx.
                                             [cn]前置摄像头
                                             [ios:rename:Front]*/
    CAMERA_NOT_USED,                        /**< [en]Indicates xxxx.
                                             [cn]摄像头未使用
                                             [ios:rename:NotUsed]*/
    CAMERA_POSITION_ALL                    /**< [en]Indicates xxxx.
                                             [cn]不区分前后置摄像头(给PC和MAC端使用时, 用于设置本地画面的镜像模式)
                                             [ios:rename:All]*/
}CameraPosition;

typedef enum tagCameraMirrorType
{
    MIRROR_NONE = 0,                         /**< [en]Indicates xxxx.
                                                  [cn]不做镜像 */
    MIRROR_UP_DOWN,                          /**< [en]Indicates xxxx.
                                                  [cn]上下镜像 */
    MIRROR_LEFT_RIGHT                        /**< [en]Indicates xxxx.
                                                  [cn]左右镜像 */
}CameraMirrorType;


typedef enum tagAudioVqeMode
{
    AUDIO_VQE_AUTO = 1,               /**< [en]Indicates the audio vqe auto.
                                            [cn]自适应模型 */
    AUDIO_VQE_NORMAL,                 /**< [en]Indicates the audio vqe normal.
                                            [cn]个人电脑普通模式 */
    AUDIO_VQE_LOUDSPEAKER,            /**< [en]Indicates the audio vqe loudspeaker.
                                            [cn]支持调音台等扩音设备回声削波模式--超大会议室*/
    AUDIO_VQE_BOARD,                  /**< [en]Indicates the audio vqe broad.
                                            [cn]电子白板模式*/
}AudioVqeMode;

/**
* [en]This structure is used to describe the video format type.
* [cn]视频流格式类型
*/
typedef enum tagVideoFrameFormat
{
    VIDEO_IMAGE_I420 = 100,             /**< [en]Indicates the I420.
                                             [cn]I420 */
    VIDEO_IMAGE_YV12 = 101,             /**< [en]Indicates the YV12.
                                             [cn]YV12 */
    VIDEO_IMAGE_YUY2 = 102,             /**< [en]Indicates the YUY2.
                                             [cn]YUY2 */
    VIDEO_IMAGE_UYVY = 103,             /**< [en]Indicates the UYVY.
                                             [cn]UYVY */
    VIDEO_IMAGE_NV12 = 104,             /**< [en]Indicates the NV12.
                                             [cn]NV12 */
    VIDEO_IMAGE_NV21 = 105,             /**< [en]Indicates the NV21.
                                             [cn]NV21 */
    VIDEO_IMAGE_ARGB = 200,             /**< [en]Indicates the ARGB.
                                             [cn]ARGB */
    VIDEO_IMAGE_RGB24 = 201,            /**< [en]Indicates the RGB24.
                                             [cn]RGB24 */
    VIDEO_IMAGE_RGB565 = 202,           /**< [en]Indicates the RGB565.
                                             [cn]RGB565 */
    VIDEO_IMAGE_BGRA_MAC = 203,         /**< [en]Indicates the BGRA_MAC.
                                             [cn]BGRA_MAC */
    VIDEO_IMAGE_ARGB4444 = 204,         /**< [en]Indicates the ARGB4444.
                                             [cn]ARGB4444 */
    VIDEO_IMAGE_ARGB1555 = 205,         /**< [en]Indicates the ARGB1555.
                                             [cn]ARGB1555 */
    VIDEO_IMAGE_RGBA = 206,             /**< [en]Indicates the RGBA.
                                             [cn]RGBA */
    VIDEO_IMAGE_BGRA = 207,             /**< [en]Indicates the BGRA.
                                             [cn]BGRA */

    VIDEO_IMAGE_JPEG = 300,             /**< [en]Indicates the JPEG.
                                             [cn]JPEG */

    VIDEO_IMAGE_TEXTURE_OES = 400,      /**< [en]Indicates the TEXTURE_OES.
                                             [cn]TEXTURE_OES */
    VIDEO_IMAGE_TEXTURE_2D = 401,       /**< [en]Indicates the TEXTURE_2D.
                                             [cn]TEXTURE_2D */

    VIDEO_IMAGE_UNKNOWN = 999,          /**< [en]Indicates the UNKNOWN.
                                             [cn]UNKNOWN */

    VIDEO_IMAGE_BUTT = 16,              /**< [en]Indicates the BUTT.
                                             [cn]BUTT */
}VideoFrameFormat;
/**
* [en]This structure is used to describe the camera detail information.
* [cn]摄像头详情信息
*/
typedef struct tagCameraDetailInfo
{
	HWM_UINT32 deviceId;                                          /**< [en]Indicates device ID.
																       [cn]设备ID */
	HWM_UINT32 index;                                             /**< [en]Indicates device index.
																       [cn]设备索引 */
	HWM_CHAR deviceName[HWM_MAX_DISPLAY_NAME_LEN];                /**< [en]Indicates device name.
																	   [cn]设备名称 */
	HWM_UINT32 cameraOrient;                                      /**< [en]Indicates the camera orient
																	   [cn]摄像头角度，移动设备有效 */
	HWM_BOOL isUsing;											  /**< [en]Indicates whether the camera is using
																       [cn]摄像头是否正在使用 */
}CameraDetailInfo;

/**
* [en]This structure is used to describe the microphone detail information.
* [cn]麦克风详情信息
*/
typedef struct tagMicDetailInfo
{
	HWM_UINT32 deviceId;                                          /**< [en]Indicates device ID.
																       [cn]设备ID */
	HWM_UINT32 index;                                             /**< [en]Indicates device index.
																       [cn]设备索引 */
	HWM_CHAR deviceName[HWM_MAX_DISPLAY_NAME_LEN];                /**< [en]Indicates device name.
																	   [cn]设备名称 */
    HWM_BOOL isUsing;                                             /**< [en]Indicates whether the camera is using
																       [cn]麦克风是否正在使用 */
}MicDetailInfo;

/**
* [en]This structure is used to describe the speaker detail information.
* [cn]扬声器详情信息
*/
typedef struct tagSpkDetailInfo
{
	HWM_UINT32 deviceId;                                          /**< [en]Indicates device ID.
																       [cn]设备ID */
	HWM_UINT32 index;                                             /**< [en]Indicates device index.
																       [cn]设备索引 */
	HWM_CHAR deviceName[HWM_MAX_DISPLAY_NAME_LEN];                /**< [en]Indicates device name.
																	   [cn]设备名称 */
    HWM_BOOL isUsing;                                             /**< [en]Indicates whether the camera is using
                                                                       [cn]扬声器是否正在使用 */
}SpkDetailInfo;

/**
* [en]This structure is used to describe the camera devices information.
* [cn]摄像头设备信息
* @mobile:disable
*/
typedef struct tagCameraDeviceInfo
{
    HWM_UINT32 cameraSize;                                        /**< [length for cameraInfo][en]Indicates cameraInfo length.
																       [cn]设备ID */     
    CameraDetailInfo *cameraInfo;
}CameraDeviceInfo;

/**
* [en]This structure is used to describe the microphone devices information.
* [cn]麦克风设备信息
* @mobile:disable
*/
typedef struct tagMicDeviceInfo
{
    HWM_UINT32 micSize;                                        /**< [length for micInfo][en]Indicates cameraInfo length.
                                                                  [cn]设备ID */
    MicDetailInfo *micInfo;
}MicDeviceInfo;

/**
* [en]This structure is used to describe the speaker devices information.
* [cn]扬声器设备信息
* @mobile:disable
*/
typedef struct tagSpkDeviceInfo
{
    HWM_UINT32 spkInfoSize;                                    /**< [length for spkInfo][en]Indicates cameraInfo length.
                                                               [cn]设备ID */
    SpkDetailInfo *spkInfo;

}SpkDeviceInfo;

/**
 * [en]This structure is used to describe hardware codec acceleration information.
 * [cn]硬编解码器加速信息
 */
typedef struct tagHardwareAccelerateCap
{
    HWM_BOOL isSupportHardwareEncoder;          /**< [en]Indicates whether to support hard encoder, 0:not support 1:support.
                                                     [cn]是否支持硬编码器(编码硬件加速) 0:不支持 1:支持 */
    HWM_BOOL isSupportHardwareDecoder;          /**< [en]Indicates whether to support hard decoder, 0:not support 1:support.
                                                     [cn]是否支持硬解码器(解码硬件加速) 0:不支持 1:支持 */
}HardwareAccelerateCap;


/**
* [en]This enumeration is used to describe the vitual background mode.
* [cn]背景虚化、替换模式
*/
typedef enum tagVirtualBackgroundMode
{
    VIRTUAL_BACKGROUND_MODE_CLOSE,        /**< [en]Indicates close mode
                                           [cn]关闭背景虚化-默认
                                           [ios:rename:Close]*/
    VIRTUAL_BACKGROUND_MODE_OPEN,         /**< [en]Indicates open mode
                                           [cn]打开背景虚化
                                           [ios:rename:Open]*/
    VIRTUAL_BACKGROUND_MODE_IMAGE,        /**< [en]Indicates use image as background
                                           [cn]使用图片作为背景
                                           [ios:rename:Image]*/
}VirtualBackgroundMode;


/**
* [en]This structure is used to describe the set virtual background param.
* [cn]设置虚拟背景参数
*/
typedef struct tagVirtualBackgroundInfo
{
    VirtualBackgroundMode mode;                   /**< [en]Indicates virtual background mode. [cn]背景虚化、替换模式 
                                                       [cs_allowNull:N]*/
    HWM_CHAR imagePath[HWM_MAX_FILE_PATH_LEN];    /**< [en]Indicates imagePath.[cn]背景图片地址 
                                                       [cs_allowNull:Y][cs_length:0-512] */
}VirtualBackgroundInfo;

/**
* [en]xxxxx
* [cn]视频帧参数
*/
typedef struct tagVideoFrameParam
{
    VideoFrameFormat format;         /**< [en]Indicates the image format. [cn]图像格式
                                    [cs_allowNull:N] */
    HWM_UINT32 width;          /**< [en]Indicates the width of image.The width is between 90 and 1200 and must be multiple of 4. [cn]图像宽度，作为输入时，范围为[90,1920]，必须是4的整数倍 
                                    [cs_allowNull:N] */ 
    HWM_UINT32 height;         /**< [en]Indicates the height of image.The height is between 90 and 1200 and must be multiple of 2. [cn]图像高度，作为输入时，范围为[90,1200]，必须是2的整数倍 
                                    [cs_allowNull:N] */  
    HWM_UINT32 rotation;       /**< [en]Indicates video display angle. [cn]视频显示角度(0,1,2,3) 
                                    [cs_allowNull:N] */
}VideoFrameParam;

/**
* [en]This struct is used to describe basic call member info
* [cn]呼叫基本成员信息
*/
typedef struct tagCallBasicMemberInfo
{
    HWM_CHAR    number[HWM_MAX_NUMBER_LEN];                 /**< [cs_sensitive:sip][en]Indicates number. [cn]号码 
                                                                 [cs_allowNull:Y][cs_length:0-128] */
    HWM_CHAR    name[HWM_MAX_NAME_LEN];                     /**< [cs_sensitive:name][en]Indicates name. [cn]成员名称 
                                                                 [cs_allowNull:Y][cs_length:0-256] */
    HWM_CHAR    email[HWM_MAX_EMAIL_LEN];                   /**< [cs_sensitive:email][en]Indicates email. [cn]邮箱地址 
                                                                 [cs_allowNull:Y][cs_length:0-96] */
    HWM_CHAR    sms[HWM_MAX_PHONE_LEN];                     /**< [cs_sensitive:phone][en]Indicates sms. [cn]手机号码 
                                                                 [cs_allowNull:Y][cs_length:0-32] */
    HWM_CHAR    accountId[HWM_MAX_ACCOUNT_ID_LEN];          /**< [en]Indicates account id. [cn]与会者帐号
                                                                 [cs_allowNull:Y][cs_length:0-129] */
    HWM_CHAR    thirdAccount[HWM_MAX_ACCOUNT_ID_LEN];   /**< [en]Indicates the third part account. [cn]第三方帐号
                                                                  [cs_allowNull:Y][cs_length:0-129] */
    HWM_CHAR    uuid[HWM_MAX_ACCOUNT_ID_LEN];               /**< [en]Indicates the uuid. [cn]与会者uuid 
                                                                 [cs_allowNull:Y][cs_length:0-129]*/
}CallBasicMemberInfo;

/**
* 发起呼叫参数
*/
typedef struct tagStartCallInfo
{
    CallBasicMemberInfo callerInfo;   /**< [en]Indicates xxxx. [cn]主叫方信息 
                                           [cs_allowNull:Y]*/
    CallBasicMemberInfo calleeInfo;   /**< [en]Indicates xxxx. [cn]被叫方信息 
                                           [cs_allowNull:Y]*/
    CallType callType;                /**< [en]Indicates xxxx. [cn]呼叫类型
                                           [cs_allowNull:Y]*/
    HWM_BOOL isCamOn;                 /**< [en]Indicates xxxx. [cn]是否打开摄像头 
                                           [cs_allowNull:Y]*/
    HWM_BOOL isMicOn;                 /**< [en]Indicates xxxx. [cn]是否打开麦克风 
                                           [cs_allowNull:Y]*/
}StartCallInfo;

/**
* 呼叫结果参数
*/
typedef struct tagStartCallResult
{
    HWM_UINT32 callId;               /**< [en]Indicates xxxx. [cn]呼叫id */
    CallType callType;    /**< [en]Indicates xxxx. [cn]呼叫类型 */
}StartCallResult;

/**
* 接受呼叫参数
*/
typedef struct tagAcceptCallInfo
{
    HWM_BOOL isVideo;             /**< [en]Indicates xxxx. [cn]是否是视频 
                                       [cs_allowNull:Y] */
    HWM_BOOL isCamOn;             /**< [en]Indicates xxxx. [cn]是否打开摄像头 
                                       [cs_allowNull:Y] */
    HWM_BOOL isMicOn;             /**< [en]Indicates xxxx. [cn]是否打开麦克风 
                                       [cs_allowNull:Y] */
}AcceptCallInfo;

/**
* 呼叫音视频转换参数
*/
typedef struct tagSwitchCallTypeParamInfo
{
    HWM_BOOL isCamOn;             /**< [en]Indicates xxxx. [cn]是否打开摄像头 
                                       [cs_allowNull:N] */
    HWM_BOOL isMicOn;             /**< [en]Indicates xxxx. [cn]是否打开麦克风 
                                       [cs_allowNull:N] */
}SwitchCallTypeParamInfo;

/**
* 接受音视频转换参数
*/
typedef struct tagAcceptTransferVideoInfo
{
    HWM_BOOL isAccept;            /**< [en]Indicates xxxx. [cn]是否接受 
                                       [cs_allowNull:N] */
    HWM_BOOL isCamOn;             /**< [en]Indicates xxxx. [cn]是否打开摄像头 
                                       [cs_allowNull:N] */
    HWM_BOOL isMicOn;             /**< [en]Indicates xxxx. [cn]是否打开麦克风 
                                       [cs_allowNull:N] */
}AcceptTransferVideoInfo;

/**
* 来电呼叫信息
*/
typedef struct tagCallInComingInfo
{
    CallType callType;                                    /**< [en]Indicates call type. [cn]呼叫类型*/
    HWM_CHAR displayName[HWM_MAX_DISPLAY_NAME_LEN];            /**< [cs_sensitive:name][en]Indicates the caller's name. [cn]来电姓名 )*/
    HWM_CHAR telephoneNum[HWM_MAX_NUMBER_LEN];                 /**< [cs_sensitive:sip][en]Indicates the caller's number and the outgoing call number as the caller. [cn]来电号码或作为主叫时的呼出号码 */
    HWM_BOOL   isCtd;                                          /**< [en]Indicates whether the conference is ctd conference. [cn]是否是ctd会议 */
}CallInComingInfo;

/**
* 呼叫记录信息体,缓存呼叫信息使用
*/
typedef struct tagCallRecordInfo
{
    HWM_UINT32 callId;                                            /**< [en]Indicates call id. [cn]呼叫ID */
    CallBasicMemberInfo callerInfo;                               /**< [en]Indicates callee infomation. [cn]主叫方信息 */
    CallBasicMemberInfo calleeInfo;                               /**< [en]Indicates callee infomation. [cn]被叫方信息 */
    HWM_INT64 startTime;                                          /**< [en]Indicates calling start time. [cn]呼叫开始时间，精度秒(0时区) */
    HWM_INT64 endTime;                                            /**< [en]Indicates calling end time. [cn]呼叫结束时间，精度秒(0时区) */
    HWM_BOOL isCallOut;                                           /**< [en]Indicates xxx. [cn]是否为主动呼出 */
    HWM_BOOL isCTDCall;                                           /**< [en]Indicates xxx. [cn]是否CTD呼叫 */
    CallType callType;                                            /**< [en]Indicates call type. [cn]呼叫类型 */
    HWM_BOOL isEncrypted;                                         /**< [en]Indicates whether the call is encrypted. [cn]是否加密 */
    HWM_BOOL isCallEstablished;                                   /**< [en]Indicates whether the call is established. [cn]呼叫是否建立 */
    SDKERR errorCode;                                         /**< [en]Indicates failure reason code. [cn]失败原因码 */
    HWM_BOOL isHangUpActively;                                    /**< [en]Indicates whether the calling hangs up actively. [cn]是否主动挂断 */
    HWM_BOOL isPeerEndBusy;                                       /**< [en]Indicates whether the peer end is busy. [cn]对方是否忙碌 */
}CallRecordInfo;


typedef struct tagCallPeerInfo
{
    HWM_CHAR    number[HWM_MAX_NUMBER_LEN];                 /**< [cs_sensitive:sip][en]Indicates number. [cn]号码 */
    HWM_CHAR    name[HWM_MAX_NAME_LEN];                     /**< [cs_sensitive:name][en]Indicates name. [cn]成员名称 */
    HWM_CHAR    accountId[HWM_MAX_ACCOUNT_ID_LEN];          /**< [en]Indicates account id. [cn]与会者帐号*/
    HWM_CHAR    thirdAccount[HWM_MAX_ACCOUNT_ID_LEN];       /**< [en]Indicates the third part account. [cn]第三方帐号*/
    HWM_CHAR    uuid[HWM_MAX_ACCOUNT_ID_LEN];               /**< [en]Indicates the uuid. [cn]用户的uuid */
}CallPeerInfo;

/**
* [en]This structure is used to describe the video window information.
* [cn]视频窗口信息
*/
typedef struct tagMobileViewHandleInfo
{
    HWM_UPTR localViewIdx;
    HWM_UPTR remoteLargeViewIdx;
    HWM_UPTR remoteFirstViewIdx;
    HWM_UPTR remoteSecondViewIdx;
    HWM_UPTR remoteThirdViewIdx;
    HWM_UPTR remoteFourthViewIdx;
    HWM_UPTR remoteFifthViewIdx;
    HWM_UPTR remoteSixthViewIdx;
    HWM_UPTR remoteSevenViewIdx;
    HWM_UPTR remoteEightViewIdx;
}MobileViewHandleInfo;


typedef enum tagParticipantCameraState
{
    PARTICIPANT_CAMERA_STATE_CLOSE = 0,           /**< [en]Indicates xxxx.
                                                       [cn]摄像头关闭
                                                       [ios:rename:Close]*/
    PARTICIPANT_CAMERA_STATE_OPEN,                /**< [en]Indicates xxxx.
                                                       [cn]摄像头打开
                                                       [ios:rename:Open]*/
    PARTICIPANT_CAMERA_STATE_UNKNOW,              /**< [en]Indicates xxxx.
                                                       [cn]摄像头状态未上报
                                                       [ios:rename:Unknow]*/
    PARTICIPANT_CAMERA_STATE_NO_CAMERA            /**< [en]Indicates xxxx.
                                                       [cn]无摄像头
                                                       [ios:rename:NoCamera]*/
}ParticipantCameraState;

typedef enum tagConfSupportLanguageType
{
    SUPPORT_LANGUAGE_TYPE_ORIGIN = 1,    /**< [en]Indicates origin
                                          <br>[cn]原声
                                          [ios:rename:Origin]*/
    SUPPORT_LANGUAGE_TYPE_CN,            /**< [en]Indicates Chinese
                                          <br>[cn]中文
                                          [ios:rename:_CN]*/
    SUPPORT_LANGUAGE_TYPE_EN,            /**< [en]Indicates English
                                          <br>[cn]英语
                                          [ios:rename:_EN]*/
    SUPPORT_LANGUAGE_TYPE_FR,            /**< [en]Indicates French
                                          <br>[cn]法语
                                          [ios:rename:_FR]*/
    SUPPORT_LANGUAGE_TYPE_DE,            /**< [en]Indicates German
                                          <br>[cn]德语
                                          [ios:rename:_DE]*/
    SUPPORT_LANGUAGE_TYPE_RU,            /**< [en]Indicates Russian
                                          <br>[cn]俄语
                                          [ios:rename:_RU]*/
    SUPPORT_LANGUAGE_TYPE_ES,            /**< [en]Indicates Spanish
                                          <br>[cn]西班牙语
                                          [ios:rename:_ES]*/
    SUPPORT_LANGUAGE_TYPE_PT,            /**< [en]Indicates Portuguese
                                          <br>[cn]葡萄牙语
                                          [ios:rename:_PT]*/
    SUPPORT_LANGUAGE_TYPE_JA,            /**< [en]Indicates Japanese
                                          <br>[cn]日语
                                          [ios:rename:_JA]*/
    SUPPORT_LANGUAGE_TYPE_KO,            /**< [en]Indicates Korean
                                          <br>[cn]韩语
                                          [ios:rename:_KO]*/
    SUPPORT_LANGUAGE_TYPE_AR,            /**< [en]Indicates Arabic
                                          <br>[cn]阿拉伯语
                                          [ios:rename:_AR]*/
    SUPPORT_LANGUAGE_TYPE_IT,            /**< [en]Indicates Italian
                                          <br>[cn]意大利语
                                          [ios:rename:_IT]*/
    SUPPORT_LANGUAGE_TYPE_CUSTOM1,       /**< [en]Indicates self define language 1
                                          <br>[cn]自定义语言1
                                          [ios:rename:_CUSTOM1]*/
    SUPPORT_LANGUAGE_TYPE_CUSTOM2,       /**< [en]Indicates self define language 2
                                          <br>[cn]自定义语言2
                                          [ios:rename:_CUSTOM2]*/
    SUPPORT_LANGUAGE_TYPE_CUSTOM3,       /**< [en]Indicates self define language 3
                                          <br>[cn]自定义语言3
                                          [ios:rename:_CUSTOM3]*/
    SUPPORT_LANGUAGE_TYPE_CUSTOM4,       /**< [en]Indicates self define language 4
                                          <br>[cn]自定义语言4
                                          [ios:rename:_CUSTOM4]*/
    SUPPORT_LANGUAGE_TYPE_CUSTOM5,       /**< [en]Indicates self define language 5
                                          <br>[cn]自定义语言5
                                          [ios:rename:_CUSTOM5]*/
    SUPPORT_LANGUAGE_TYPE_CUSTOM6,       /**< [en]Indicates self define language 6
                                          <br>[cn]自定义语言6
                                          [ios:rename:_CUSTOM6]*/
    SUPPORT_LANGUAGE_TYPE_CUSTOM7,       /**< [en]Indicates self define language 7
                                          <br>[cn]自定义语言7
                                          [ios:rename:_CUSTOM7]*/
    SUPPORT_LANGUAGE_TYPE_CUSTOM8,       /**< [en]Indicates self define language 8
                                          <br>[cn]自定义语言8
                                          [ios:rename:_CUSTOM8]*/
    SUPPORT_LANGUAGE_TYPE_CUSTOM9,       /**< [en]Indicates self define language 9
                                          <br>[cn]自定义语言9
                                          [ios:rename:_CUSTOM9]*/
    SUPPORT_LANGUAGE_TYPE_CUSTOM10,       /**< [en]Indicates self define language 10
                                           <br>[cn]自定义语言10
                                           [ios:rename:_CUSTOM10]*/
    SUPPORT_LANGUAGE_TYPE_CUSTOM11,       /**< [en]Indicates self define language 11
                                           <br>[cn]自定义语言11
                                           [ios:rename:_CUSTOM11]*/
    SUPPORT_LANGUAGE_TYPE_CUSTOM12,       /**< [en]Indicates self define language 12
                                           <br>[cn]自定义语言12
                                           [ios:rename:_CUSTOM12]*/
    SUPPORT_LANGUAGE_TYPE_CUSTOM13,       /**< [en]Indicates self define language 13
                                           <br>[cn]自定义语言13
                                           [ios:rename:_CUSTOM13]*/
    SUPPORT_LANGUAGE_TYPE_CUSTOM14,       /**< [en]Indicates self define language 14
                                           <br>[cn]自定义语言14
                                           [ios:rename:_CUSTOM14]*/
    SUPPORT_LANGUAGE_TYPE_CUSTOM15,       /**< [en]Indicates self define language 15
                                           <br>[cn]自定义语言15
                                           [ios:rename:_CUSTOM15]*/
    SUPPORT_LANGUAGE_TYPE_CUSTOM16,       /**< [en]Indicates self define language 16
                                           <br>[cn]自定义语言16
                                           [ios:rename:_CUSTOM16]*/
    SUPPORT_LANGUAGE_TYPE_CUSTOM17,       /**< [en]Indicates self define language 17
                                           <br>[cn]自定义语言17
                                           [ios:rename:_CUSTOM17]*/
    SUPPORT_LANGUAGE_TYPE_CUSTOM18,       /**< [en]Indicates self define language 18
                                           <br>[cn]自定义语言18
                                           [ios:rename:_CUSTOM18]*/
    SUPPORT_LANGUAGE_TYPE_CUSTOM19,       /**< [en]Indicates self define language 19
                                           <br>[cn]自定义语言19
                                           [ios:rename:_CUSTOM19]*/
    SUPPORT_LANGUAGE_TYPE_CUSTOM20,       /**< [en]Indicates self define language 20
                                           <br>[cn]自定义语言20
                                           [ios:rename:_CUSTOM20]*/
    SUPPORT_LANGUAGE_TYPE_INVALID         /**< [en]Indicates xxxx
                                           <br>[cn]无效值
                                           [ios:rename:Invalid]*/
}ConfSupportLanguageType;


/**
* [en]This enum is used to describe encrypt mode<br>
* [cn]加密类型
*/
typedef enum tagEncryptMode
{
    ENCRYPT_MODE_AUTO = 0,      /**< [en]Indicates auto encrypt mode
                                 <br>[cn]自适应加密
                                 [ios:rename:Auto] */
    ENCRYPT_MODE_MUST,          /**< [en]Indicates must encrypt mode
                                 <br>[cn]强制加密
                                 [ios:rename:Must]*/
    ENCRYPT_MODE_NONE           /**< [en]Indicates none encrypt
                                 <br>[cn]不加密
                                 [ios:rename:None]*/
}EncryptMode;


/**
* [en]This enum is used to describe user type<br>
* [cn]用户类型
*/
typedef enum tagConfUserType
{
    CONF_USER_TYPE_WEB = 0,       /**< [en]Indicates web type
                                   <br>[cn]WEB方式
                                   [ios:rename:Web]*/
    CONF_USER_TYPE_MOBILE,        /**< [en]Indicates mobile terminal
                                   <br>[cn]移动软终端
                                   [ios:rename:Mobile]*/
    CONF_USER_TYPE_PC             /**< [en]Indicates pc terminal
                                   <br>[cn]PC软终端
                                   [ios:rename:PC]*/
}ConfUserType;


/**
* [en]This struct is used to describe interpreter state type<br>
* [cn]传译员身份状态
*/
typedef enum tagInterpreterStateType
{
    INTERPRETER_STATE_NORMAL = 0,  /**<[en]Indicates normal attendee interpreter.
                                       [cn]非传译员
                                       [ios:rename:Normal]*/
    INTERPRETER_STATE_NOT_CONFIRM, /**<[en]Indicates unconfirmed interpreter.
                                       [cn]未确认的传译员
                                       [ios:rename:NotConfirm]*/
    INTERPRETER_STATE_CONFIRMED    /**<[en]Indicates interpreter.
                                       [cn]已确认的传译员
                                       [ios:rename:Confirmed]*/
}InterpreterStateType;

typedef struct tagInterpreterInfo
{
    InterpreterStateType interpreterState;     /**< [en]Indicates interpreter state. [cn]传译员身份状态*/
    HWM_BOOL isInterpreter;                 /**< [en]Indicates whether this is an interpreter. [cn]是否是传译员 */
    HWM_BOOL hasConfirm;                    /**< [en]Indicates whether interpreter has been confirmed. [cn]传译员是否确认*/
    ConfSupportLanguageType firstLanguage;  /**< [en]Indicates the interpreter's first language. [cn]传译员第一语言 */
    ConfSupportLanguageType secondLanguage; /**< [en]Indicates the interpreter's second language. [cn]传译员第二语言 */
    ConfSupportLanguageType listenChannel;  /**< [en]Indicates listening channel type. [cn]收听频道语言类型 */
    ConfSupportLanguageType speakChannel;   /**< [en]Indicates speaking channel type. [cn]发言频道语言类型 */
	HWM_BOOL isListenOriginalVoice;         /**< [en]Indicates is listen original voice. [cn]收听时是否包含原声(原声较小) */
}InterpreterInfo;



typedef enum tagLocalRecordStatus
{
    LOCAL_RECORD_STOPPED = 0, /**< [en]Indicates xxxx.
                               [cn]本地录制未开始/已终止
                               [ios:rename:Stopped]*/
    LOCAL_RECORD_RUNNING,     /**< [en]Indicates xxxx.
                               [cn]本地录制正在进行
                               [ios:rename:Running]*/
    LOCAL_RECORD_SUSPEND,     /**< [en]Indicates xxxx.
                               [cn]本地录制已暂停
                               [ios:rename:Suspend]*/
}LocalRecordState;

typedef enum tagCloudRecordStatus
{
    CLOUD_RECORD_STOPPED = 0, /**< [en]Indicates xxxx.
                               [cn]云端录制已终止
                               [ios:rename:Stopped]*/
    CLOUD_RECORD_RUNNING,     /**< [en]Indicates xxxx.
                               [cn]云端录制正在进行
                               [ios:rename:Running]*/
    CLOUD_RECORD_SUSPEND,     /**< [en]Indicates xxxx.
                               [cn]云端录制暂停
                               [ios:rename:Suspend]*/
}CloudRecordState;

/**
 * [en]This enumeration is used to describe ar assist state.
 * [cn]AR协作状态
 */
typedef enum tagArAssistState {
    AR_ASSIST_STATE_STOP = 0,       /**< [en]Indicates stop.
                                    <br>[cn]未开始AR协作 */
    AR_ASSIST_STATE_PREPARE = 1,    /**< [en]Indicates start.
                                    <br>[cn]准备进行AR协作 */
    AR_ASSIST_STATE_START = 2,      /**< [en]Indicates start.
                                    <br>[cn]正在进行AR协作 */
    AR_ASSIST_STATE_FROZEN_SCREEN = 3,  /**< [en]Indicates was frozen screen.
                                        <br>[cn]已冻屏 */
    AR_ASSIST_STATE_UNFROZEN_SCREEN = 4,/**< [en]Indicates is unfrozen screen.
                                        <br>[cn]未冻屏 */
    AR_ASSIST_STATE_OPEN_LASER_PEN = 5, /**< [en]Indicates is open laser pen.
                                        <br>[cn]开启激光笔 */
    AR_ASSIST_STATE_CLOSE_LASER_PEN = 6, /**< [en]Indicates is close laser pen.
                                        <br>[cn]关闭激光笔 */
}ArAssistState;

/**
 * [en]This struct is used to describe attendee base info.
 * [cn]与会者基础信息
 */
typedef struct tagAttendeeBaseInfo
{
    HWM_CHAR    number[HWM_MAX_NUMBER_LEN];            /**< [cs_sensitive:sip][en]Indicates number. [cn]号码 
                                                            [cs_allowNull:Y][cs_length:0-128] */
    HWM_CHAR    name[HWM_MAX_DISPLAY_NAME_LEN];        /**< [cs_sensitive:name][en]Indicates name. [cn]与会者名称 
                                                            [cs_allowNull:Y][cs_length:0-256] */
    HWM_CHAR    email[HWM_MAX_EMAIL_LEN];              /**< [cs_sensitive:email][en]Indicates email. [cn]电子邮箱地址 
                                                            [cs_allowNull:Y][cs_length:0-96] */
    HWM_CHAR    sms[HWM_MAX_NUMBER_LEN];               /**< [cs_sensitive:phone][en]Indicates sms. [cn]短信通知手机号码 
                                                            [cs_allowNull:Y][cs_length:0-128] */
    HWM_CHAR    accountId[HWM_MAX_ACCOUNT_LEN];        /**< [en]Indicates account id. [cn]用户登录帐号 
                                                            [cs_allowNull:Y][cs_length:0-128] */
    HWM_CHAR    userUuid[HWM_MAX_ACCOUNT_LEN];         /**< [en]Indicates user account [cn]与会者唯一标识uuid
                                                            [cs_allowNull:Y][cs_length:0-128] */
    HWM_BOOL    isMute;                                /**< [en]Indicates whether is mute. [cn]是否闭音 
                                                            [cs_allowNull:Y] */
    ConfRole    role;                                  /**< [en]Indicates role. [cn]会议成员角色 
                                                            [cs_allowNull:Y] */
    AttendeeType type;                                 /**< [en]Indicates attendee type. [cn]成员类型 
                                                            [cs_allowNull:N] */
    HWM_CHAR    thirdAccount[HWM_MAX_ACCOUNT_LEN];     /**< [en]Third account. [cn]第三方用户帐号 
                                                            [cs_allowNull:N][cs_length:1-128] */
    HWM_BOOL    isSelf;                                /**< [en]is self. [cn]是否是自己 
                                                            [cs_allowNull:N] */
    HWM_BOOL    isAutoInvite;                          /**< [en]Indicates whether is auto invite [cn]是否自动外邀,仅预约会议时有效 
                                                            [cs_allowNull:N] */
}AttendeeBaseInfo;

typedef struct tagAddAttendeeList
{
    HWM_UINT32 attendeeSize;                  /**< [length for attendees][en]number of attendees. [cn]添加与会者的个数
                                                   [cs_allowNull:N] */
    AttendeeBaseInfo *attendees;              /**< [en]attendees info. [cn]添加与会者的列表 
                                                   [cs_allowNull:N] */
}AddAttendeeList;

/**
* [en]This struct is used to describe attendee base info while in meeting.
* [cn]会中与会者基础信息
*/
typedef struct tagMeetingAttendeeBaseInfo
{
    AttendeeBaseInfo baseInfo;              /**< [extends][en]attendee base info. [cn]与会者基本信息 */
    HWM_UINT32 userId;                      /**< [en]Indicates userId.[cn]与会者唯一标识 */
    HWM_BOOL isHandup;                      /**< [en]Indicates whether is handup.[cn]是否举手 */
    ConfAttendeeState state;                /**< [en]Indicates participant state.[cn]与会者状态 */
    HWM_BOOL isAnonymous;                   /**< [en]Indicates whether is anonymous.[cn]是否匿名用户(匿名方式加入会议) */
    ClientDeviceType clientDeviceType;      /**< [en]Indicates client device type.[cn]终端登录类型  */
    HWM_CHAR orgId[HWM_MAX_ORG_ID_LENGTH];  /**< [en]Indicates org id.[cn]企业id */
    HWM_BOOL isSpeaking;                    /**< [en]Indicates attendee is speaking.[cn]与会者是否在说话 */
    HWM_CHAR pinyin[HWM_MAX_DISPLAY_NAME_LEN];   /**< [pinyin for name][autoFilled][en]Indicates pinyin. [cn]与会者列表里与会者名称的拼音显示 */
    HWM_INT64 joinTimeStamp;                /**< [en]Indicates attendee join conf time stamp(second).[cn]与会者入会时间戳（秒）*/
}MeetingAttendeeBaseInfo;


/**
* [en]This struct is used to describe attendee info.
* [cn]会中与会者信息
*/
typedef struct tagAttendeeInfo
{
    MeetingAttendeeBaseInfo meetingBaseInfo;   /**< [extends][en]attendee base info while in meeting. [cn]会中与会者基本信息 */
    HWM_BOOL isBroadcasted;                    /**< [en]Indicates whether is be boardcasted.[cn]是否被广播 */
    HWM_BOOL isSharing;                        /**< [en]Indicates whether is sharing.[cn]是否正在共享 */
    HWM_BOOL isInviteShare;                    /**< [en]Indicates whether is inviting share.[cn]是否正在被邀请共享 */
    ParticipantCameraState cameraState;        /**< [en]Indicates cameraState.[cn]摄像头状态 */
    InterpreterInfo interpreInfo;                 /**< [en]Indicates InterpreInfo.[cn]传译员信息 */
    HWM_BOOL  canBeSetAsCohost;                /**< [en]Indicates attendee can be seted as cohost.[cn]是否可以设为联席主持人 */
    HWM_BOOL  canBeSetAsAudience;              /**< [en]Indicates attendee can be seted as audience.[cn]是否可以设为观众 */
    ConfMediaType confMediaType;               /**< [en]Indicates  to join the conference by video or not .[cn]是否视频方式加入会议 */
    HWM_BOOL hasLocalRecordPermission;         /**< [en]Indicates has local record permission or not .[cn]是否本地录制权限 */
    LocalRecordState  localRecordState;        /**< [en]Indicates local record status. [cn]本地录制状态 */
    HWM_BOOL    allowSpeaking;                 /**< [en]Indicates audience is allow speaking.[cn]是否能被允许说话 */
    HWM_BOOL     isRollCall;                   /**< [en]Indicates is roll call. [cn]是否点名状态 */
    HWM_BOOL hasInviteOpenMicCapability;       /**< [en]Indicates has invite open mic capability. [cn]是否有邀请打开麦克风的能力 */
    HWM_BOOL hasInviteOpenCamCapability;       /**< [en]Indicates has invite open camera capability. [cn]是否有邀请打开摄像头能力 */
    HWM_BOOL hasInviteShareCapability;         /**< [en]Indicates has invite share capability. [cn]是否有邀请共享能力 */
    HWM_BOOL hasMoveWaitRoomCapability;        /**< [en]Indicates has move wait room capability. [cn]是否可以被移入等候室 */
    HWM_BOOL hasLocalRecordCapability;         /**< [en]Indicates has local record capability. [cn]是否有本地录制能力 */
    HWM_BOOL hasPrivateChatCapability;         /**< [en]Indicates has local record capability. [cn]是否支持私聊功能 */
    ArAssistState arAssistState;               /**< [en]Indicates ar assisting state. [cn]AR协作状态 */
}AttendeeInfo;


typedef struct tagAttendeeList
{
    HWM_UINT32 attendeeSize;                  /**< [length for attendeeInfos][en]attendee size. [cn]与会者列表长度 */
    AttendeeInfo *attendeeInfos;              /**< [en]attendee size. [cn]与会者信息 */
}AttendeeList;

typedef struct tagConfDeviceConfig
{
    HWM_BOOL isMicOn;                       /**< [en]xxxxx [cn]是否开启麦克风 
                                                 [cs_allowNull:Y] */  
    HWM_BOOL isSpkOn;                       /**< [en]xxxxx [cn]是否开启扬声器 
                                                 [cs_allowNull:Y] */ 
    HWM_BOOL isCamOn;                       /**< [en]xxxxx [cn]是否开启摄像头 
                                                 [cs_allowNull:Y]*/ 
}ConfDeviceConfig;


typedef enum tagConfServerType
{
    MCU = 0,      /**< [en]Indicates conference server type MCU
                   <br>[cn]MCU会议
                   [ios:rename:MCU]*/
    MMR = 1,      /**< [en]Indicates conference server type MMR
                    <br>[cn]MMR会议
                    [ios:rename:MMR]*/
    RTC = 5,      /**< [en]Indicates conference server type RTC
                    <br>[cn]RTC会议
                    [ios:rename:RTC]*/
}ConfServerType;

typedef enum tagConferenceType
{
    CONF_TYPE_COMMON = 0,       /**< [en]Indicates common conference. [cn]普通会议 */
    CONF_TYPE_CYCLE,            /**< [en]Indicates cycle conference. [cn]周期会议 */
}ConferenceType;

/**
* [en]cycle type.
* [cn]周期类型
*/
typedef enum tagCycleType
{
    CYCLE_TYPE_DAY = 0,        /**< [en]Indicates cycle by day. [cn]以天为周期 */
    CYCLE_TYPE_WEEK,           /**< [en]Indicates cycle by week. [cn]以周为周期 */
    CYCLE_TYPE_MONTH,          /**< [en]Indicates cycle by month. [cn]以月为周期 */
}CycleType;

typedef struct tagCycleConfParam
{
    HWM_UINT64 startDate;                          /**< [en]Indicates conference start date, . [cn]开始日期-时间戳，精度秒(0时区) */
    HWM_UINT64 endDate;                           /**< [en]Indicates conference end date. [cn]结束日期-时间戳，精度秒(0时区) */
    HWM_UINT32 cycleCount;                        /**< [en]Indicates cycle times. [cn]重复次数 */
    CycleType cycleType;                          /**< [en]Indicates cycle type. [cn]周期类型 */
    HWM_UINT32 interval;                          /**< [en]Indicates cycle interval. [cn]周期区间  1、周期类型选择了按天，表示每几天召开一次，取值范围[1,15]；2、周期类型选择了Week，表示每几周召开一次，取值范围[1,5]；3、周期类型选择了Month，interval表示隔几月，取值范围[1,3] */
    HWM_CHAR listPoints[HWM_MAX_CONF_POINTS_LENGTH];   /**< [en]Indicates conference points. [cn]周期内的会议召开点。仅当按周和月时有效。数据格式(中间用逗号隔开):1,3,5,7 */
    HWM_UINT32 preRemindDays;                     /**< [en]Indicates prior notificate days. [cn]周期子会议提前通知天数。 */
}CycleConfParam;

typedef struct tagSubCycleConfParam
{
    HWM_CHAR subConfID[HWM_MAX_ACCOUNT_ID_LEN];  /**< [en]Indicates sub conference id. [cn]子会议唯一标识UUID */
    ConfMediaType confMediaType;                 /**< [en]Indicates media type [cn]会议媒体类型 */
    HWM_UINT64 startTime;                        /**< [en]Indicates conference start time. [cn]会议起始时间 */
    HWM_UINT64 endTime;                          /**< [en]Indicates conference end time. [cn]会议结束时间 */
    HWM_BOOL isAutoRecord;                       /**< [en]Indicates whether record automatically when conference begin.[cn]会议开始后是否自动开启录制  */
    HWM_UINT32 recordAuthType;                   /**< [en]Indicates record auth type. [cn]录播鉴权方式  0:可通过连接观看/下载（不拼接nonce）1:企业用户可观看/下载 2:与会者可观看/下载 */
    ConfAllowJoinUserType callInRestriction;     /**< [en]Indicates call in restriction. [cn]呼入限制 */
    HWM_BOOL allowGuestStartConf;                /**< [en]Indicates whether is allow guest start conf. [cn]是否允许来宾提前启动会议*/
    HWM_INT32 allowGuestStartConfTime;           /**< [en]Indicates join before host time. [cn]允许来宾提前入会时间范围(单位：分钟) 0-随时，n-提前n分钟启动会议*/
}SubCycleConfParam;

/**
* [en]This struct is used to describe xxx.
* [cn]会议信息共有参数
*/
typedef struct tagConfCommonParam
{
    
    HWM_BOOL  vmrFlag;                                /**< [en]Indicates whether is VMR conference,this param is optional. [cn]可选，是否是VMR会议. 
                                                          [cs_allowNull:Y]*/

    HWM_CHAR  vmrId[HWM_MAX_VMR_ID_LEN];              /**< [en]Indicates VMR conference id . [cn]VMR会议ID. vmrFlag为1时选填 
                                                          [cs_allowNull:Y]*/

    VmrIdType vmrIdType;                             /**< [en]Indicates VMR conference type. [cn]随机会议id;vmrFlag为1才有效
                                                          [cs_allowNull:Y]*/

    ConfMediaType confMediaType;                      /**< [en]XXXX [cn]会议媒体类型
                                                          [cs_allowNull:Y] */

    HWM_CHAR subject[HWM_MAX_SUBJECT_LEN];            /**< [en]XXXX [cn] 会议主题
                                                          [cs_sensitive:name][cs_allowNull:Y][cs_length:1-385]*/

    HWM_UINT32 numOfAttendee;                         /**< [length for attendees][en]length for attendees. [cn]入会者列表的长度 
                                                        [cs_allowNull:N]*/

    AttendeeBaseInfo* attendees;                      /**< [en]XXXX [cn]与会者基础信息
                                                        [cs_allowNull:N] */

    Timezone timezone;                                /**< [en]XXXX [cn]时区
                                                         [cs_allowNull:Y] */

    ConfPromptLanguageType promptLanguage;            /**< [en]XXXX [cn]语言类型
                                                         [cs_allowNull:Y] */

    ConfRecordMode recordMode;                        /**< [en]XXXX [cn]录制类型
                                                         [cs_allowNull:Y] */

    HWM_BOOL isAutoRecord;                            /**< [en]XXXX [cn]是否自动录制
                                                        [cs_allowNull:Y] */

    HWM_BOOL isGuestJoinConfWithoutPwd;               /**< [en]Indicates whether the guests join the conference without password. [cn]是否来宾免密 
                                                           [cs_allowNull:Y]*/

    HWM_CHAR guestPwd[HWM_MAX_CONF_PASSWORD_LEN];    /**< [cs_sensitive:hide][en]Indicates the password for common participants.If the password is null, the server will generate a password randomly.[cn]普通与会者密码，如果空则服务器随机生成 
                                                          [cs_allowNull:Y][cs_length:0-32] */

    ConfAllowJoinUserType confAllowJoinUser;         /**< [en]Indicates the user type allowed to join the conference. [cn]允许入会的用户类型 
                                                          [cs_allowNull:Y]*/

    HWM_BOOL isSendSms;                              /**< [en]Indicates whether it sends the short message.[cn]是否发送短信 
                                                          [cs_allowNull:Y]*/

    HWM_BOOL isSendEmail;                           /**< [en]Indicates whether is send email notify. [cn]是否发送邮件通知
                                                          [cs_allowNull:Y]*/

    HWM_BOOL isOpenWaitingRoom;                      /**< [en]Indicates whether is open waiting room. [cn]是否开启等候室 
                                                          [cs_allowNull:Y]*/
    HWM_BOOL isExperienceConf;                      /**< [en]Indicates is experience conf. [cn]是否为体验会议
                                                          [cs_allowNull:Y]*/
}ConfCommonParam;

typedef struct tagCreateConfParam
{
    HWM_UINT32 confLen;                         /**< [en]Indicates conference length of time, unit is minute  ,this param is optional. [cn]可选，会议持续时长，单位分钟
                                                     [cs_allowNull:Y]*/
    ConfCommonParam confCommonParam;            /**< [en]Indicates xxx. [cn]会议公用参数 
                                                     [cs_allowNull:N] */
    ConfDeviceConfig device;                    /**< [en]device config. [cn]设备信息 
                                                     [cs_allowNull:Y] */
}CreateConfParam;


/**
* [en]This struct is used to describe cancel conf.
* [cn]取消会议
*/
typedef struct tagCancelConfParam
{
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];            /**< [en]confId. [cn]会议ID 
                                                          [cs_allowNull:N][cs_length:1-16] */
    HWM_BOOL isForceCancel;                          /**< [en]force cancel. [cn]是否强制取消，会议开始后可以强制取消
                                                          [cs_allowNull:Y]*/
}CancelConfParam;


typedef struct tagBookConfParam
{
    HWM_INT64 startTime;                        /**< [en]Indicates conference start time, . [cn]可选，会议开始时间（UTC时间），单位为秒。如果没有指定开始时间，则表示会议马上开始 
                                                     [cs_allowNull:Y]*/
    HWM_UINT32 confLen;                         /**< [en]Indicates conference length of time, unit is minute  ,this param is optional. [cn]可选，会议持续时长，单位分钟 
                                                     [cs_allowNull:Y]*/
    ConfCommonParam confCommonParam;            /**< [en]Indicates xxx. [cn]会议公用参数 
                                                     [cs_allowNull:N]*/
    HWM_BOOL isSendCalendarNotify;              /**< [en]Indicates whether is send calendar notify. [cn]是否发送日历通知 
                                                     [cs_allowNull:Y]*/
    HWM_BOOL isUseServerAutoInvite;             /**< [en] [cn]是否以服务器的isautoinvite为准 */

    HWM_BOOL allowGuestStartConf;               /**< [en]Indicates whether is allow guest start conf.[cn]是否允许来宾提前启动会议
                                                     [cs_allowNull:Y]*/
    HWM_INT32 allowGuestStartConfTime;          /**< [en]Indicates join before host time.[cn]允许来宾提前入会时间范围(单位：分钟) 0-随时，n-提前n分钟启动会议
                                                     [cs_allowNull:Y]*/
}BookConfParam;


/**
* [en]xxxxxxx
* [cn]修改会议参数
*/
typedef struct tagModifyConfParam
{
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];       /**< [en]Indicates conference id. [cn]会议id 
                                                     [cs_allowNull:N][cs_length:1-16] */
    HWM_INT64 startTime;                        /**< [en]Indicates conference start time, . [cn]可选，会议开始时间，如果没有指定开始时间，则表示会议马上开始，精度秒(0时区)
                                                     [cs_allowNull:Y] */
    HWM_UINT32 confLen;                         /**< [en]Indicates conference length of time, unit is minute  ,this param is optional. [cn]可选，会议持续时长，单位分钟 
                                                     [cs_allowNull:Y] */
    ConfCommonParam confCommonParam;            /**< [en]Indicates xxx. [cn]会议公用参数 
                                                     [cs_allowNull:N] */
    HWM_BOOL isSendCalendarNotify;              /**< [en]Indicates whether is send calendar notify. [cn]是否发送日历通知 
                                                     [cs_allowNull:Y] */
    HWM_BOOL isUseServerAutoInvite;             /**< [en] [cn]是否以服务器的isautoinvite为准 */

    HWM_BOOL allowGuestStartConf;               /**< [en]Indicates whether is allow guest start conf.[cn]是否允许来宾提前启动会议
                                                     [cs_allowNull:Y]*/
    HWM_INT32 allowGuestStartConfTime;          /**< [en]Indicates join before host time.[cn]允许来宾提前入会时间范围(单位：分钟) 0-随时，n-提前n分钟启动会议
                                                     [cs_allowNull:Y]*/
}ModifyConfParam;

/**
 * [en]This struct is used to describe create conference result.
 * [cn]创建会议结果
 */
typedef struct tagCreateConfResult
{
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];                         /**< [en]Indicates conference id.[cn]会议id */
    HWM_CHAR vmrConfId[HWM_MAX_CONF_ID_LEN];                      /**< [en]Indicates VMR conference id.[cn]VMR会议id */
    HWM_CHAR hostPwd[HWM_MAX_CONF_PASSWORD_LEN];                  /**< [cs_sensitive:hide][en]Indicates conference password. [cn]会议密码 */
    HWM_CHAR guestPwd[HWM_MAX_CONF_PASSWORD_LEN];                 /**< [cs_sensitive:hide][en]Indicates conf guest pwd. [cn]来宾密码*/
    ConfMediaType confMediaType;                                  /**< [en]Indicates xxxxxx. [cn]会议媒体类型 */
    ConfServerType confServerType;                                /**< [en]Indicates conference server type. [cn]会议服务器类型*/
    HWM_CHAR accessNumber[HWM_MAX_CONF_ACCESS_LEN];               /**< [en]Indicates xxxxxxxx. [cn]会议接入码 */
    HWM_CHAR guestJoinUri[HWM_MAX_URL_LEN];                       /**< [en]Indicates guest jion url. [cn]来宾链接*/
    ConfRole confRole;                                            /**< [en]Indicates conf role. [cn]会议角色*/
    HWM_CHAR confSubject[HWM_MAX_SUBJECT_LEN];                    /**< [cs_sensitive:subject][en]Indicates conf subject. [cn]会议主题*/
    HWM_CHAR startTime[HWM_MAX_TIME_FORMATE_LEN];                 /**< [en]Indicates conference start time. [cn]会议开始时间，精度秒(0时区) */
    HWM_CHAR endTime[HWM_MAX_TIME_FORMATE_LEN];                   /**< [en]Indicates conference end time. [cn]会议结束时间 */
    HWM_CHAR schedUserName[HWM_MAX_DISPLAY_NAME_LEN];             /**< [cs_sensitive:name][en]Indicates conf sched user name. [cn]预约者名字*/
    CycleConfParam cycleConfParam;                                /**< [en]Indicates cycle conf param. [cn]周期会议参数*/
    HWM_UINT32 subCycleConfSize;                                  /**< [length for subCycleConfParam][en]Indicates cycle conf param. [cn]子周期会议个数*/
    SubCycleConfParam* subCycleConfParam;                         /**< [en]Indicates cycle conf param. [cn]子周期会议参数*/
}CreateConfResult;

/**
 * [en]This struct is used to describe derect join conf param.
 * [cn]直接入会参数
 */
typedef struct tagJoinConfParam
{
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];                  /**< [en]Indicates conference id.
                                                                [cn]会议id 
                                                                [cs_allowNull:N][cs_length:1-16] */
    HWM_CHAR confPassword[HWM_MAX_CONF_PASSWORD_LEN];      /**< [cs_sensitive:hide][en]Indicates conference password.
                                                                [cn]会议密码 
                                                                [cs_allowNull:Y][cs_length:0-32]*/
    HWM_CHAR confAccessNum[HWM_MAX_CONF_ACCESS_LEN];       /**< [en]Indicates conference access number.
                                                                [cn]会议接入码 
                                                                [cs_allowNull:Y][cs_length:1-64]*/
    HWM_BOOL isVideoConf;                                  /**< [en]Indicates xxx.
                                                                [cn]是否视频会议 
                                                                [cs_allowNull:Y] */
    HWM_BOOL isStopConflictConf;                           /**< [en]Indicates xxx.
                                                                [cn]强制结束和当前VMR会议资源冲突的会议（必需是vmr资源的拥有者才有权限，否则无效） 
                                                                [cs_allowNull:Y] */
    HWM_BOOL isCamOn;                                      /**< [en]Indicates xxx.
                                                                [cn]是否打开摄像头 
                                                                [cs_allowNull:Y] */
    HWM_BOOL isMicOn;                                      /**< [en]Indicates xxx.
                                                                [cn]是否打开麦克风 
                                                                [cs_allowNull:Y] */
    ConfServerType confServerType;                         /**< [en]Indicates the media server type.
                                                                [cn]媒体服务类型，用户级的媒体服务开关指定rtc或者mcu，内部使用 
                                                                [cs_allowNull:Y] */
    ConfInviteMode inviteMode;                             /**< [en]Indicates xxx.
                                                                [cn]入会模式 
                                                                [cs_allowNull:Y] */
}JoinConfParam;

/**
* [en]This struct is used to describe conf join param.
* [cn]会议ID入会参数
*/
typedef struct tagJoinConfByIdParam
{
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];                  /**< [en]Indicates conference id.
                                                                [cn]会议id 
                                                                [cs_allowNull:N]*/
    HWM_CHAR confPassword[HWM_MAX_CONF_PASSWORD_LEN];      /**< [cs_sensitive:hide][en]Indicates conference password.
                                                                [cn]会议密码 
                                                                [cs_allowNull:Y]*/
    HWM_BOOL isCamOn;                                      /**< [en]Indicates whether to enable the camera.
                                                                [cn]是否打开摄像头 
                                                                [cs_allowNull:Y]*/
    HWM_BOOL isMicOn;                                      /**< [en]Indicates whether to unmute the microphone.
                                                                [cn]是否打开麦克风 
                                                                [cs_allowNull:Y]*/
    HWM_BOOL isSpkOn;                                      /**< [en]Indicates whether to enable the speaker.
                                                                [cn]是否打开扬声器 
                                                                [cs_allowNull:Y]*/
    HWM_CHAR nickname[HWM_MAX_DISPLAY_NAME_LEN];           /**< [cs_sensitive:name][en]Indicates show name in conf.
                                                                [cn]会中显示的与会者名称 
                                                                [cs_allowNull:Y][cs_length:0-256]*/
    HWM_BOOL isStopConflictConf;                           /**< [en]Indicates whether stop confilct conf.
                                                                [cn]强制结束和当前VMR会议资源冲突的会议（必需是vmr资源的拥有者才有权限，否则无效）
                                                                [cs_allowNull:Y] */

}JoinConfByIdParam;

/**
* [en]This struct is used to describe anonymous join conf param.
* [cn]匿名入会参数
*/
typedef struct tagAnonymousJoinConfParam
{
    JoinConfByIdParam baseJoinConfParam;                   /**< [extends][en]Indicates xxx.
                                                                [cn]基本入会参数 
                                                                [cs_allowNull:N]*/
    HWM_BOOL isNeedSmsVerify;                              /**< [en]Indicates xxx.
                                                                [cn]是否需要短信验证 
                                                                [cs_allowNull:Y]*/
}AnonymousJoinConfParam;

/**
 * [en]This struct is used to describe conf join param.
 * [cn]链接入会参数
 */
typedef struct tagConfJoinByLinkParam
{
    HWM_CHAR serverUrl[HWM_MAX_URL_LEN];                   /**< [en]Indicates xxx.
                                                                [cn]登录服务器地址 
                                                                [cs_allowNull:N][cs_length:1-256] */
    HWM_UINT32 serverPort;                                 /**< [en]Indicates xxx.
                                                                [cn]登录服务器端口 
                                                                [cs_allowNull:N] */
    HWM_BOOL isVerify;                                     /**< [en]Indicates xxx.
                                                                [cn]登录是否开启证书校验 
                                                                [cs_allowNull:Y] */
    HWM_CHAR caPath[HWM_MAX_FILE_PATH_LEN];                /**< [en]Indicates xxx.
                                                                [cn]登录校验证书路径 
                                                                [cs_allowNull:Y][cs_length:0-512] */
    HWM_CHAR confServerUrl[HWM_MAX_URL_LEN];               /**< [en]Indicates conference id.
                                                                [cn]入会链接地址 
                                                                [cs_allowNull:Y][cs_length:1-256] */
    HWM_CHAR random[HWM_MAX_TOKEN_LEN];                    /**< [en]Indicates conference access number.
                                                                [cn]入会链接随机数 
                                                                [cs_allowNull:Y][cs_length:0-128] */
    HWM_BOOL isCamOn;                                      /**< [en]Indicates xxx.
                                                                [cn]是否打开摄像头 
                                                                [cs_allowNull:Y] */
    HWM_BOOL isMicOn;                                      /**< [en]Indicates xxx.
                                                                [cn]是否打开麦克风 
                                                                [cs_allowNull:Y] */
    HWM_BOOL isSpkOn;                                      /**< [en]Indicates xxx.
                                                                [cn]是否打开扬声器
                                                                [cs_allowNull:Y] */
    HWM_BOOL isNeedSmsVerify;                              /**< [en]Indicates xxx.
                                                                [cn]是否需要短信实名验证,为TRUE表示验证码链接入会 
                                                                [cs_allowNull:Y] */
    HWM_BOOL isNeedPwdMapVal;                              /**< [en]Indicates xxx.
                                                                [cn]是否需要密码映射值,为TRUE表示密码映射值链接入会 
                                                                [cs_allowNull:Y] */
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];                  /**< [en]Indicates xxx.
                                                                [cn]会议id, isNeedPwdMapVal为TRUE时使用
                                                                [cs_allowNull:Y][cs_length:0-16] */
    HWM_CHAR confPwdMapVal[HWM_MAX_PASSWORD_LEN];          /**< [cs_sensitive:hide][en]Indicates xxx.
                                                                [cn]会议密码映射值, isNeedPwdMapVal为TRUE时使用 
                                                                [cs_allowNull:Y][cs_length:0-128] */
    HWM_CHAR confIdPrefix[HWM_MAX_CONF_ID_PREFIX_LEN];     /**< [en]Indicates xxx.
                                                                [cn]会议id所属站点的前缀 
                                                                [cs_allowNull:Y][cs_length:0-32] */
    HWM_CHAR nickName[HWM_MAX_DISPLAY_NAME_LEN];           /**< [cs_sensitive:name][en]Indicates show name in conf.
                                                                [cn]会中显示的与会者名称 
                                                                [cs_allowNull:Y][cs_length:0-256] */
    HWM_BOOL hasLogined;                                   /**< [en]Indicates show name in conf.
                                                                [cn]是否登录 
                                                                [cs_allowNull:N] */
}ConfJoinByLinkParam;

typedef struct tagAcceptConfParam
{
    HWM_UINT32 confHandle;        /**< [en]confHandle, from OnConfIncomingNotify [cn]会议句柄，来自OnConfIncomingNotify 
                                       [cs_allowNull:N]*/
    HWM_BOOL isVideo;             /**< [en]is video [cn]是否视频接入 
                                       [cs_allowNull:Y]*/
    HWM_BOOL isCamOn;             /**< [en]whether open camera [cn]是否打开摄像头 
                                       [cs_allowNull:Y]*/
    HWM_BOOL isMicOn;             /**< [en]whether open microphone [cn]是否打开麦克风 
                                       [cs_allowNull:Y]*/
}AcceptConfParam;

typedef struct tagConfConnectedInfo
{
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];                  /**< [en]Indicates conference id.[cn]会议id */
    HWM_CHAR vmrConfId[HWM_MAX_CONF_ID_LEN];               /**< [en]Indicates vmr conference id.[cn]会议vmrId */
    HWM_CHAR confSubject[HWM_MAX_SUBJECT_LEN];             /**< [cs_sensitive:hide][en]Indicates conf subject. [cn]会议主题*/
    ConfServerType confServerType;                         /**< [en]Indicates conference server type. [cn]会议服务器类型*/
    ConfMediaType confMediaType;                           /**< [en]Indicates conference media type. [cn]会议媒体类型*/
    HWM_BOOL isSvc;                                        /**< [en]Indicates conference is svc . [cn]会议是否多流*/
    HWM_BOOL isCallTransConf;                              /**< [en]Indicates xxxxx.[cn]是否呼叫转会议 */
}ConfConnectedInfo;

/**
* [en]This struct is used to describe conference base info.
* [cn]会议基础信息
*/
typedef struct tagConfBaseInfo
{
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];							/**< [en]Indicates conference id.[cn]会议id,加入会议时用到。如果是VMR会议，则此ID是真实会议ID，不用来显示；如果不是VMR会议，则用来显示。*/
    HWM_CHAR vmrConfId[HWM_MAX_CONF_ID_LEN];					    /**< [en]Indicates virtual conference id.[cn]虚拟会议室ID，vmr会议下有效*/
    HWM_CHAR confSubject[HWM_MAX_SUBJECT_LEN];						/**< [cs_sensitive:hide][en]Indicates conference subject.[cn]会议主题*/
    HWM_INT64 startTime;					                        /**< [en]Indicates the conference start time.[cn]会议开始时间-时间戳，精度秒(0时区)*/
    HWM_INT64 endTime;					                            /**< [en]Indicates the conference end time.[cn]会议结束时间-时间戳，精度秒(0时区)*/
    HWM_CHAR  timeZone[HWM_MAX_TIME_ZONE_LEN];                      /**< [en]Indicates time zone, optional, standard time zone for example "Asia/Shanghai" in PBX internal conference; Beijing is "56" in Mediax conference,refer to CONFCTRL_E_TIMEZONE. 
                                                                         [cn]时区
                                                                         @reference Timezone */
    HWM_CHAR hostPwd[HWM_MAX_CONF_PASSWORD_LEN];				    /**< [cs_sensitive:hide][en]Indicates chairman password.[cn]会议主席密码 */
    HWM_CHAR guestPwd[HWM_MAX_CONF_PASSWORD_LEN];					/**< [cs_sensitive:hide][en]Indicates guest password.[cn]来宾密码 */
    ConfMediaType mediaType;									    /**< [en]Indicates the conferencn media type.[cn]会议媒体类型 */
    HWM_CHAR scheduserUuid[HWM_MAX_ACCOUNT_ID_LEN];			        /**< [en]Indicates schedule uuid.[cn]预订者uuid */
    HWM_CHAR scheduserName[HWM_MAX_DISPLAY_NAME_LEN];			    /**< [cs_sensitive:name][en]Indicates schedule user name.[cn]预订者姓名 */
    HWM_CHAR hostJoinUri[HWM_MAX_URL_LEN];							/**< [cs_sensitive:ip][en]Indicates the uri for chairman to join conference .[cn]主持人入会链接 */
    HWM_CHAR guestJoinUri[HWM_MAX_URL_LEN];							/**< [cs_sensitive:ip][en]the uri for guest to join conference.[cn]来宾加入会议的链接 */
    HWM_CHAR accessNumber[HWM_MAX_CONF_ACCESS_LEN];					/**<  [cs_sensitive:hide][en]Indicates conference access number.[cn]会议接入码 */
    ConfRole selfConfRole;										    /**< [en]Indicates the role of participant.[cn]本人在会议中的角色 */
    HWM_BOOL isWebinar;											    /**< [en]Indicates whether the conference is web conferencre.[cn]是否是网络研讨会 */
    HWM_BOOL isCreator;                                             /**< [en]Indicates whether the user is the creator of the conference [cn]是否是会议预订者*/
    ConfServerType confServerType;								    /**< [en]Indicates the media server type.[cn]媒体服务类型，用户级的媒体服务开关指定rtc或者mcu，内部使用 */
    HWM_CHAR audienceJoinUri[HWM_MAX_URL_LEN];						/**< [cs_sensitive:ip][en]Indicates the uri for audience to join conference.[cn]观众加入会议的链接 */
    HWM_CHAR audiencePwd[HWM_MAX_CONF_PASSWORD_LEN];				/**< [cs_sensitive:hide][en]Indicates the password of audience.[cn]观众密码 */
    ConfState confStateType;                                        /**< [en]Indicates conference state.[cn]会议状态 */
    ConferenceType conferenceType;                                  /**< [en]Indicates conference type.[cn]会议类型 */
    CycleConfParam cycleParam;                                      /**< [en]Indicates cycle conference param.[cn]周期会议的参数 */
    HWM_UINT32 subConfSize;                                         /**< [length for subConfParam][en]Indicates cycle sub conference size.[cn]周期子会议数量 */
    SubCycleConfParam *subConfParam;                                /**< [en]Indicates cycle sub conference param.[cn]周期子会议参数 
                                                                         [cs_allowNull:Y]*/
    HWM_CHAR confUuid[HWM_MAX_ACCOUNT_ID_LEN];                      /**< [en]Indicates conference uuid.[cn]会议uuid，投票服务使用。*/
    HWM_BOOL isExperienceConf;                                      /**< [en]Indicates is experience conf. [cn] 是否为周期体验会议。*/
}ConfBaseInfo;

/**
* [en]This struct is used to describe xxxx.
* [cn]会议列表item
*/
typedef struct tagConfListItem
{
    ConfBaseInfo baseInfo;                                       /**< [extends][en]Indicates base information of conference.
                                                                      [cn]会议基本信息 */
    HWM_UINT32 size;										     /**< [en]Indicates conference size.
                                                                      [cn]会议方数 */
}ConfListItem;

/**
* [en]This struct is used to describe xxxx.
* [cn]会议详情信息
*/
typedef struct tagConfDetail
{
    ConfBaseInfo baseInfo;                                       /**< [extends][en]Indicates base information of conference.
                                                                 [cn]会议基本信息 */
    HWM_CHAR vmrId[HWM_MAX_VMR_ID_LEN];							 /**< [en]Indicates VMR conference id.
                                                                 [cn]VMR会议唯一ID，编辑会议传参使用 */
    HWM_BOOL isVmr;											     /**< [en]Indicates whether the conference is virtual conference.
                                                                 [cn]是否是虚拟会议室的会议(“云会议室”或者“个人VMR会议”)  */
    VmrIdType vmrIdType;                                         /**< [en]Indicates VMR conference id type.(Only valid if isVmr(vmrFlag) is ture)
                                                                 [cn]VMR会议ID方式（isVmr(vmrFlag)为1时才有效） 0：固定ID，1：随机ID */
    ConfAllowJoinUserType confAllowJoinUserType;				 /**< [en]Indicates the restriction of joining conference
                                                                 [cn]允许入会范围限制  */
    HWM_BOOL isRecordOn;										 /**< [en]Indicates the record switch.
                                                                 [cn]录制开关  */
    HWM_BOOL isAutoRecord;										 /**< [en]Indicates whether record automatically when conference begin.
                                                                 [cn]会议开始后是否自动开启录制  */
    HWM_BOOL isMailOn;											 /**< [en]Indicates the switch of sending mail
                                                                 [cn]发送邮件通知开关  */
    HWM_BOOL isSmsOn;											 /**< [en]Indicates the switch of sending message
                                                                 [cn]发送短信通知开关  */
    HWM_BOOL isEmailCalenderOn;									 /**< [en]Indicates the switch of sending mail calender
                                                                 [cn]发送邮件日历开关  */
    HWM_BOOL isGuestJoinConfWithoutPwd;							 /**< [en]Indicates whether the guest joins the conference without password
                                                                 [cn]是否来宾免密码入会  */
    HWM_UINT32 durationMinutes;									 /**< [en]Indicates the conference duration
                                                                 [cn]会议时长  */
    AddAttendeeList attendeeList;                                /**< [en]Indicates attendee list.
                                                                 [cn]与会者列表 */
    HWM_UINT32 maxAttendeeSize;									/**< [en]Indicates max attendee size.
                                                                 [cn]会议方数 */
    HWM_BOOL isOpenWaitingRoom;                                  /**< [en]Indicates waiting room state.
                                                                 [cn]是否开启等候室 */
    HWM_BOOL allowGuestStartConf;                                /**< [en]Indicates whether is allow guest start conf.
                                                                 [cn]是否允许来宾提前启动会议*/
    HWM_INT32 allowGuestStartConfTime;                           /**< [en]Indicates join before host time.
                                                                 [cn]允许来宾提前入会时间范围(单位：分钟) 0-随时，n-提前n分钟启动会议*/
}ConfDetail;

/**
* [en]This struct is used to describe conference conflict info.
* [cn]会议冲突信息
*/
typedef struct tagConfConflictInfo
{
    HWM_CHAR conflictConfId[HWM_MAX_CONF_ID_LEN];          /**< [en]Indicates conference id.
                                                                [cn]冲突的会议ID */
    HWM_CHAR conflictConfSubject[HWM_MAX_SUBJECT_LEN];     /**< [cs_sensitive:hide][en]Indicates conference subject.
                                                                [cn]冲突的会议主题 */
    HWM_CHAR conflictConfOwnerName[HWM_MAX_APPNAME_LEN];   /**< [cs_sensitive:name][en]Indicates xxx.
                                                                [cn]预订人 */
    HWM_BOOL isConflictConfOwner;                          /**< [en]Indicates xxx.
                                                                [cn]本人是否是冲突的会议的所有者，如果是，才有权限强制结束冲突会议 */
}ConfConflictInfo;

/**
* [en]This struct is used to describe conference end info<br>
* [cn]会议结束信息
*/
typedef struct tagConfEndInfo
{
	HWM_CHAR reason[HWM_MAX_REASON_LEN];                       /**< [en]Indicates the reason of calling end.
											                    [cn]通话结束原因描述 */
	HWM_BOOL isClosedByOtherHost;                          /**< [en]Indicates whether the calling is closed by other host.
												                [cn]是否被其他人结束 */
	HWM_CHAR otherHost[HWM_MAX_DISPLAY_NAME_LEN];          /**< [en]Indicates the person from other virtual conference terminating the conference.
												                [cs_sensitive:host][cn]当前会议被其他会议强制结束时的主持人名称 */
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];                  /**< [en]Indicates conference id.
                                                                [cn]会议id */
    HWM_CHAR confPwd[HWM_MAX_CONF_PASSWORD_LEN];           /**< [cs_sensitive:hide][en]Indicates conference password.
                                                                [cn]会议密码 */
    HWM_CHAR accessNumber[HWM_MAX_CONF_ACCESS_LEN];        /**< [en]Indicates conference access number.
                                                                [cn]会议接入码 */
    HWM_BOOL isVideoConf;                                  /**< [en]Indicates conference id.
                                                                [cn]是否是视频会议 */
    HWM_BOOL isCamOn;                                      /**< [en]Indicates xxx.
                                                                [cn]是否打开摄像头 */
    HWM_BOOL isMicOn;                                      /**< [en]Indicates xxx.
                                                                [cn]是否打开麦克风 */
    ConfServerType confServerType;                         /**< [en]Indicates conference server type.
                                                                [cn]会议服务器类型 */
    ConfConflictInfo conflictInfo;                         /**< [en]Indicates conference conflict info.
                                                                [cn]会议冲突信息 */
}ConfEndInfo;


/**
 * [en]This struct is used to describe conference incoming call info<br>
 * [cn]会议来电信息
 */
typedef struct tagConfIncomingInfo
{
    HWM_UINT32 confHandle;                                  /**< [en]Indicates conf handle, use for acceptConf.
                                                                         [cn]标识一路会议，acceptConf使用 */
    ConfMediaType confMediaType;                            /**< [en]Indicates whether it is a high definition video conference.
                                                                         [cn]是否视频会议 */
    HWM_CHAR number[HWM_MAX_NUMBER_LEN];                    /**< [cs_sensitive:sip][en]Indicates incoming number.
                                                                         [cn]来电号码 */
    HWM_CHAR subject[HWM_MAX_SUBJECT_LEN];                  /**< [cs_sensitive:hide][en]Indicates conference subject.
                                                                         [cn]会议主题 */
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];                   /**< [en]Indicates conference id.
                                                                         [cn]会议id */
    ConfServerType confServerType;                          /**< [en]Indicates conference server type.
                                                                 [cn]会议服务器类型 */
}ConfIncomingInfo;


typedef struct tagVmrInfo
{
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];                  /**< [en]Indicates conference id.
                                                                [cn]会议id */
    HWM_CHAR name[HWM_MAX_SUBJECT_LEN];                    /**< [cs_sensitive:name][en]Indicates VMR conference name.
                                                                [cn]VMR会议名称 */
    HWM_CHAR vmrId[HWM_MAX_VMR_ID_LEN];                    /**< [en]Indicates VMR conference id.
                                                                [cn]VMR会议id */
    MeetingIdType meetingIdType;                           /**< [en]Indicates VMR conference type.
                                                                [cn]VMR会议类型 */
    HWM_CHAR hostPwd[HWM_MAX_CONF_PASSWORD_LEN];           /**< [cs_sensitive:hide][en]Indicates host password.
                                                                [cn]主持人密码 */
    HWM_CHAR accessNumber[HWM_MAX_CONF_ACCESS_LEN];        /**< [en]Indicates conference access number.
                                                                [cn]会议接入码 */
    HWM_CHAR guestPwd[HWM_MAX_CONF_PASSWORD_LEN];          /**< [cs_sensitive:hide][en]Indicates guest password.
                                                                [cn]来宾密码 */
    HWM_CHAR scheduserAccount[HWM_MAX_ACCOUNT_LEN];        /**< [en]Indicates scheduser account.
                                                                [cn]预订者帐号 */
    HWM_CHAR hostJoinUri[HWM_MAX_URL_LEN];                 /**< [en]the uri used by host to join conference.
                                                                [cn]主持人加入会议uri链接 */
    HWM_CHAR guestJoinUri[HWM_MAX_URL_LEN];                /**< [en]the uri used by guest to join conference.
                                                                [cn]来宾加入会议uri链接 */
    HWM_UINT32 maxParties;                                 /**< [en]Indicates max parties.
                                                                [cn]最大与会方数 */
    HWM_BOOL isEnable;                                     /**< [en]Indicates is enable.
                                                                [cn]是否可用 */
    HWM_UINT32 duration;                                   /**< [en]Indicates max time for trial users.
                                                                [cn]试用的最大时长 */
    VmrType vmrType;                                       /**< [en]
                                                                [cn]VMR类型，0是商用，1是试用 */
    HWM_UINT64 remainingHours;                             /**< [en]Indicates remaining hours. 
                                                                [cn]剩余时间 */
    HWM_UINT64 expireDate;                                 /**< [en]Indicates expire data. 
                                                                [cn]过期时间 */
    HWM_BOOL allowGuestStartConf;                          /**< [en]Indicates whether is allow guest start conf.
                                                                [cn]是否允许来宾提前启动会议*/
}VmrInfo;

typedef struct tagVmrInfoList
{
    HWM_UINT32 numOfVmrs;                              /**< [length for vmrs][en]Indicates the number of specific vmr conference.
                                                             [cn]专用VMR会议个数 */
    VmrInfo* vmrs;                                     /**< [en]Indicates the specific vmr conference information.
                                                             [cn]专用VMR会议信息 */
}VmrInfoList;
 
typedef struct tagNameInfo
{
    HWM_CHAR name[HWM_MAX_DISPLAY_NAME_LEN];       /**< [cs_sensitive:name][en]Indicates  name.[cn]姓名 */
}NameInfo;


typedef struct tagConfHandupInfo
{
    HWM_UINT32 handupCount;          /**< [en]Indicates conference hand up count.[cn]会议举手人数*/
    HWM_UINT32 audienceHandupCount;  /**< [en]Indicates audience hand up count.[cn]观众举手人数*/
    HWM_UINT32 attendeeHandupCount; /**< [en]Indicates attendee hand up count.[cn]与会者举手人数*/
    HWM_CHAR handupName[HWM_MAX_DISPLAY_NAME_LEN]; /**< [cs_sensitive:name][en]Indicates hand up user name .[cn]举手人的名称，多人则取第一个*/
    HWM_UINT32  handupUserId;  /**< [en]Indicates hand up user id .[cn]举手人的userId，多人则取第一个*/
}ConfHandupInfo;


/**
* [en]xxxxxxx
* [cn]设置设备的界面状态(适配matex)
*/
typedef enum tagDevFoldedStateType
{
    DEVICE_FOLDED_STATE_UNFOLDED = 0,    /**< [en]Indicates xxxx.
                                              [cn]设备摊开.
                                              [ios:rename:Unfolded]*/
    DEVICE_FOLDED_STATE_FOLDED,          /**< [en]Indicates xxxx.
                                              [cn]设备合上.
                                              [ios:rename:Folded]*/
    DEVICE_FOLDED_STATE_PARALLEL_HORIZON /**< [en]Indicates xxxx.
                                              [cn]Indicates xxxx.
                                              [ios:rename:ParallelHorizon]*/
}DeviceFoldedStateType;


/**
* [en]general watch type
* [cn]选看的类型
*/
typedef enum tagGeneralWatchType
{
    AUTO_MAX_SPEAKER = 0, /**< [en]Indicates automatically select the max speaker.
                          [cn]自动选看最大发言人
                          [ios:rename:AutoMaxSpeaker]*/
    SPECIFIED_SELECTION,  /**< [en]Indicates specified select someone.
                          [cn]指定选看某人
                          [ios:rename:SpecifiedSelection]*/
    NORMAL,               /**< [en]Indicates normal watch.
                          [cn]普通选看，区分于最大发言人和手动选看特殊的人
                          [ios:rename:NormalWatch]*/
}GeneralWatchType;

/**
* [en]general watch resolution level
* [cn]分辨率等级
*/
typedef enum tagGeneralWatchResolutionLevel
{
    WATCH_RESOLUTION_SUPER = 0, /**< [en]Indicates resolution 1080P.
                                     [cn]超清- 1080P
                                     [ios:rename:WatchResolutionSuper]*/
    WATCH_RESOLUTION_HIGH,      /**< [en]Indicates resolution 720P.
                                     [cn]高清- 720P
                                     [ios:rename:WatchResolutionHigh]*/
    WATCH_RESOLUTION_STANDARD,  /**< [en]Indicates resolution 360P.
                                     [cn]标清- 360P
                                     [ios:rename:WatchResolutionStandard]*/
    WATCH_RESOLUTION_SMOOTH,    /**< [en]Indicates resolution 180P.
                                     [cn]流畅- 180P
                                     [ios:rename:WatchResolutionSmooth]*/
    WATCH_RESOLUTION_FUZZ,       /**< [en]Indicates resolution 90P.
                                     [cn]模糊- 90P
                                     [ios:rename:WatchResolutionFuzz]*/
}GeneralWatchResolutionLevel;


/**
* [en]general watch item param
* [cn]选看入参
*/
typedef struct tagGeneralWatchItemParam
{
    HWM_INT32 userId;                  /**< [en]Indicates userId.[cn]用户标识
                                            [cs_allowNull:N] */
    HWM_UPTR  render;                  /**< [en]Indicates user bound window.[cn]用户绑定的窗口 
                                            [cs_allowNull:N] */
    GeneralWatchType watchType;        /**< [en]Indicates watch type.[cn]选看的类型 
                                            [cs_allowNull:Y] */
    GeneralWatchResolutionLevel resolutionLevel; /**< [en]Indicates resolution level.[cn]分辨率等级 
                                                      [cs_allowNull:Y] */
}GeneralWatchItemParam;

/**
* [en]general watch item param
* [cn]选看入参(android)
* @ios:disable
* @mac:disable
*/
typedef struct tagGeneralWatchItemParamEx
{
    HWM_INT32 userId;                  /**< [en]Indicates userId.[cn]用户标识
                                            [cs_allowNull:N] */
    HWM_UPTR  surfaceView;                  /**< [en]Indicates user bound window.[cn]用户绑定的窗口 android 对应SurfaceView 
                                            [cs_allowNull:N] 
                                            [android:replace:type:android.view.SurfaceView:SurfaceView]*/
    GeneralWatchType watchType;        /**< [en]Indicates watch type.[cn]选看的类型 
                                            [cs_allowNull:Y] */
    GeneralWatchResolutionLevel resolutionLevel; /**< [en]Indicates resolution level.[cn]分辨率等级 
                                                      [cs_allowNull:Y] */
}GeneralWatchItemParamEx;

typedef enum tagAudienceLayoutType
{
    AUDIENCE_SPEAKER = 1, /**< [en]Indicates audience watch speaker mode.
                           [cn]观众观看演讲者模式
                           [ios:rename:Speaker]*/
    AUDIENCE_GALLERY,    /**< [en]Indicates audience watch multiave mode.
                           [cn]观众观看画廊模式
                           [ios:rename:Gallery]*/
}AudienceLayoutType;

typedef enum tagVideoResolutionMode
{
    VIDEO_RESOLUTION_MODE_1080 = 0, /**< [en]Indicates video resolution use 1080P.
                                     [cn]大画面最大选看分辨率1080P(所在企业要开通1080P权限)
                                     [ios:rename:1080]*/
    VIDEO_RESOLUTION_MODE_720 = 1, /**< [en]Indicates video resolution use 720P.
                                    [cn]大画面最大选看分辨率720P(不考虑设备性能)
                                    [ios:rename:720]*/
    VIDEO_RESOLUTION_MODE_AUTO = 2, /**< [en]Indicates video use auto resolution.
                                     [cn]视频自动流畅优先(考虑设备性能匹配合适分辨率)
                                     [ios:rename:Auto]*/
    VIDEO_RESOLUTION_MODE_360 = 3, /**< [en]Indicates video resolution use 360P.
                                    [cn]大画面最大选看分辨率360P(考虑设备性能匹配合适分辨率)
                                    [ios:rename:360]*/
}VideoResolutionMode;


typedef struct tagConfLanguageChannelInfo
{
    HWM_CHAR languageName[HWM_MAX_LANGUAGE_NAME_LENGTH]; /**< [en]Indicates language abbreviation.[cn]语言名称 */
    HWM_CHAR abbreviation[HWM_MAX_LANGUAGE_NAME_LENGTH]; /**< [en]Indicates language abbreviation.[cn]语言缩写 */
    ConfSupportLanguageType languageCode;                /**< [en]xxxxxx.[cn]语言类型 */
}ConfLanguageChannelInfo;

typedef struct tagSimuInterpretInfo
{
    HWM_UINT32 languageChannelNum;    /**< [length for languageChannel][en]Indicates suport language channel num.[cn]支持同声传译的语言种类数量*/
    ConfLanguageChannelInfo languageChannels[HWM_MAX_SIM_INTERPRETER_LANGUAGE_NUM];  /**< [en]xxxxxx.[cn]语言频道 */
}SimuInterpretInfo;

/**
* [en]the range of local record control right<br>
* [cn]录制权限范围
*/
typedef enum tagClientRecordMode
{
    ALLOW_ONLY_CHAIR,               /**<[en]Indicates allow only chair.
                                     [cn]仅允许主持人
                                     [ios:rename:OnlyChair]*/
    ALLOW_ALL_ATTENDEE,             /**<[en]Indicates allow all attendee.
                                     [cn]允许所有人
                                     [ios:rename:All]*/
    ALLOW_PART_ATTENDEE,            /**<[en]Indicates allow part attendee.
                                     [cn]允许部分人
                                     [ios:rename:Part]*/
    ALLOW_BUTT                      /**<[en]Indicates xxxxx.
                                     [cn]无效值
                                     [ios:rename:Butt]*/ 
}ClientRecordMode;

typedef enum tagSetLanguageChannelType
{
    HWM_SET_LANGUAGE_CHANNEL_TYPE_LISTEN = 0,             /**< [en]Indicates listen
                                                          <br>[cn]接听频道 */
    HWM_SET_LANGUAGE_CHANNEL_TYPE_SPEAK,                  /**< [en]Indicates speak
                                                          <br>[cn]发言频道*/
    HWM_SET_LANGUAGE_CHANNEL_TYPE_LISTEN_AND_SPEAK,       /**< [en]Indicates listen and speak
                                                          <br>[cn]接听和发言频道 */
	HWM_SET_LANGUAGE_CHANNEL_TYPE_ORIGINAL_VOICE,         /**< [en]Indicates original voice
														  <br>[cn]背景原声 */
    HWM_SET_LANGUAGE_CHANNEL_TYPE_BUTT                    /**< [en]
                                                          <br>[cn]无效值 */
} SetLanguageChannelType;


/**
* [en]
* [cn]授权或禁止某人录制的结果
*/
typedef struct tagGrantAttendRecordResult
{
    HWM_INT32 userId;               /**< [en]xxxxxxx
                                         [cn]用户id */
    HWM_BOOL  enable;               /**< [en]xxxxxxx
                                         [cn]是否授权与会者录制 */
}GrantAttendRecordResult;


/**
* [en]
* [cn]角色转换的结果
*/
typedef struct tagSwitchRoleResult
{
    HWM_INT32 userId;                /**< [en]xxxxxxx
                                          [cn]用户id */
    ConfRole destRole;               /**< [en]xxxxxxx
                                          [cn]转换后的角色 */
}SwitchRoleResult;

/**
* [en]This enum is used to describe subtitle language<br>
* [cn]语言
*/
typedef enum tagSubtitileLanguageType
{
    ZH_CN = 0,       /**< [en]Indicates ZH_CN
                      <br>[cn]简体中文
                          [ios:rename:Chinese]*/
    EN_US            /**< [en]Indicates EN_US
                      <br>[cn]美国英文
                          [ios:rename:English]*/
} SubtitileLanguageType;


typedef struct tagCloudRecordInfo
{
    CloudRecordState cloudRecordState;            /**< [en]Indicates record status.[cn]录制状态 */
    HWM_BOOL   isRecordOccured;        /**< [en]Indicates conf is ever recorded.[cn]会议是否有过录制 */
}CloudRecordInfo;

typedef struct tagSelfConstantInfo
{
    HWM_UINT32 userId;                                   /**< [en]Indicates  user id .[cn]会中唯一标识 */
    HWM_CHAR number[HWM_MAX_NUMBER_LEN];                 /**< [cs_sensitive:sip][en]Indicates number.[cn]号码 */
    HWM_CHAR orgId[HWM_MAX_ORG_ID_LENGTH];               /**< [en]Indicates org id.[cn]企业id */
    HWM_CHAR accountId[HWM_MAX_ACCOUNT_ID_LEN];          /**< [en]Indicates account id. [cn]与会者帐号*/
    HWM_CHAR thirdAccount[HWM_MAX_ACCOUNT_ID_LEN];           /**< [en]Third account. [cn]第三方用户帐号 */
}SelfConstantInfo;

typedef struct tagSelfLocalRecord
{
    HWM_UINT32 userId;                      /**< [en]Indicates  user id .[cn]会中唯一标识 */
    HWM_CHAR number[HWM_MAX_NUMBER_LEN];    /**< [cs_sensitive:sip][en]Indicates number.[cn]号码 */
    HWM_CHAR orgId[HWM_MAX_ORG_ID_LENGTH];  /**< [en]Indicates org id.[cn]企业id */
    HWM_CHAR accountId[HWM_MAX_ACCOUNT_ID_LEN];          /**< [en]Indicates account id. [cn]与会者帐号*/
}SelfLocalRecord;

typedef struct tagLocalRecordInfo
{
    LocalRecordState localRecordState;   /**< [en]Indicates local record status.[cn]本地录制状态 */
    ClientRecordMode  clientRecMode;     /**< [en]Indicates record mode.[cn]本地录制权限范围 */
    HWM_BOOL   isSupportClientRecord;    /**< [en]Indicates conf is support client record.[cn]是否支持本地录制 */
}LocalRecordInfo;

typedef struct tagBroadcastInfo
{
    HWM_BOOL   isBroadcasting;     /**< [en]Indicates conf is broadcast now.[cn]是否正在广播 */
    HWM_INT32  broadcastedUserId;  /**< [en]Indicates be broadcasted userId .[cn]被广播与会者的userId */
    HWM_CHAR   broadcastedName[HWM_MAX_DISPLAY_NAME_LEN]; /**< [cs_sensitive:name][en]Indicates be broadcasted name .[cn]被广播与会者的名字 */
    HWM_INT32  watchUserId;        /**< [en]Indicates be watch userId .[cn]由portal配置，如果当前广播的人是我，我要去选看的userId */
}BroadcastInfo;

/**
* [en]This struct is used to describe conference type.
* [cn]会议模式
*/
typedef enum tagConfModeType
{
    MODE_TYPE_FREE = 0,      /**< [en]Indicates FREE
                                 <br>[cn]自由模式 */
    MODE_TYPE_FIXED,          /**< [en]Indicates FIXED
                                  <br>[cn]广播多画面*/
    MODE_TYPE_ROLLCALL,       /**< [en]Indicates ROLLCALL
                                  <br>[cn]点名模式*/
    MODE_TYPE_BROADCAST       /**< [en]Indicates BROADCAST
                                  <br>[cn]广播单会场 */
}ConfModeType;

/**
* [en]This struct is used to describe conference share type.
* [cn]会议共享模式
*/
typedef enum tagConfShareMode
{
    MODE_SUPPORT_SHARE = 0,      /**< [en]Indicates support share
                               <br>[cn]支持共享 */
    MODE_NOT_SUPPORT_SHARE,          /**< [en]Indicates not support share
                              <br>[cn]不支持共享*/
    MODE_SHARE_NEED_TIPS,       /**< [en]Indicates share need tips
                              <br>[cn]共享需要提示*/
}ConfShareMode;

typedef struct tagRollCallInfo
{
    HWM_BOOL   isRollCalling;     /**< [en]Indicates conf is broadcast now.[cn]是否正在点名 */
    HWM_INT32  rollCalledUserId;  /**< [en]Indicates be broadcasted userId .[cn]被点名与会者的userId */
    HWM_CHAR   rollCalledName[HWM_MAX_DISPLAY_NAME_LEN]; /**< [en]Indicates be broadcasted name .[cn]被点名与会者的名字 */
    HWM_INT32  watchUserId;        /**< [en]Indicates be watch userId .[cn]选看的userId */
}RollCallInfo;

/**
* [en]This struct is used to describe conference basic info.
* [cn]会中信息
*/
typedef struct tagMeetingInfo
{
    ConfBaseInfo baseInfo;                                  /**< [extends][en]Indicates base information of conference.[cn]会议基本信息 */

    HWM_CHAR imGroupId[HWM_MAX_GROUP_URI_LEN];              /**< [en]Indicates im group id.
                                                                 [cn]im群组id */
    HWM_CHAR orgId[HWM_MAX_ORG_ID_LENGTH];                  /**< [en]Indicates org id.
                                                                 [cn]企业id */
    ConfRecordMode recordMode;                              /**< [en]Indicates conference recording mode.
                                                                 [cn]会议媒体录制模式  */ 
    HWM_BOOL isSvc;                                         /**< [en]Indicates conference is svc. 
                                                                 [cn]是否多流*/
    HWM_BOOL isSupport90P;                                  /**< [en]Indicates xxx.
                                                                 [cn]是否支持90P */
}MeetingInfo;

/**
 * [en]This struct is used to describe speaker info.
 * [cn]发言人信息
 */
typedef struct tagConfSpeaker
{
    HWM_UINT32 userId;                                       /**< [en]xxxx.
                                                                  [cn]用户id */
    ClientDeviceType clientDeviceType;                       /**< [en]Indicates xxxx.
                                                                  [cn]客户端设备类型 */
    HWM_CHAR number[HWM_MAX_NUMBER_LEN];                     /**< [cs_sensitive:sip][en]Indicates number.
                                                                  [cn]号码 */
    HWM_CHAR name[HWM_MAX_DISPLAY_NAME_LEN];                 /**< [cs_sensitive:name][en]Indicates display name.
                                                                  [cn]与会者显示名称 */
    HWM_BOOL isSpeaking;                                     /**< [en]Indicates whether is speaking.
                                                                  [cn]是否发言 */
    HWM_UINT32 speakingVolume;                               /**< [en]Indicates speaking volume.
                                                                  [cn]音量 */
    
}ConfSpeaker;



/**
 * [en]This struct is used to describe speakers info.
 * [cn]发言人通知信息
 */
typedef struct tagSpeakerList
{
    HWM_UINT32 speakerSize;                                        /**< [length for speakers][en]Indicates speaker number.
                                                                         [cn]发言人个数 */
    ConfSpeaker* speakers;                                         /**< [en]Indicates speakers.
                                                                         [cn]发言人列表 */
}SpeakerList;

/**
 * [en]This structure is used to describe call information.
 * [cn]呼叫信息
 */
typedef struct tagCallInfo
{
    HWM_BOOL isCaller;                                                        /**< [en]Indicates the caller.
                                                                                     [cn]是否为主叫*/
    HWM_BOOL isVideo;                                                    /**< [en]Indicates video call
                                                                                     [cn]是否为视频呼叫*/
    HWM_CHAR peerNumber[HWM_MAX_NUMBER_LEN];                           /**< [cs_sensitive:sip][en]Indicates peer number
                                                                                     [cn]对端号码*/
    HWM_CHAR peerDisplayName[HWM_MAX_DISPLAY_NAME_LEN];               /**< [cs_sensitive:name][en]Indicates peer display name
                                                                                     [cn]对端名称*/
    HWM_BOOL isCallOut;                                               /**< [en]Indicates the call is active. [cn]是否主动呼出*/

}CallInfo;

/**
 * [en]This enumeration is used to describe view type.
 * [cn]视图类型
 * @mobile:disable
 */
typedef enum tagRefreshViewType
{
    REFRESH_VIEW_LOCAL_PREVIEW = 1,         /**< [en]Indicates local video preview
                                             [cn]本地视频预览
                                             [ios:rename:LocalPreview]*/
    REFRESH_VIEW_VIDEO_VIEW = 2,            /**< [en]Indicates general video
                                             [cn]普通视频
                                             [ios:rename:VideoView]*/
    REFRESH_VIEW_AUX_DATA_VIEW = 3,         /**< [en]Indicates auxiliary data
                                             [cn]辅流视频
                                             [ios:rename:AuxDataView]*/
}RefreshViewType;


/**
 * [en]This enumeration is used to describe view refresh events.
 * [cn]视图刷新事件
 * @mobile:disable
 */
typedef enum tagRefreshViewEvt
{
    REFRESH_VIEW_ADD = 1,                   /**< [en]Indicates add local view
                                             [cn]本地view添加
                                             [ios:rename:Add]*/
    REFRESH_VIEW_REMOVE,                    /**< [en]Indicates remove local view
                                             [cn]本地view删除
                                             [ios:rename:Remove]*/
}RefreshViewEvt;



/**
 * [en]This structure is used to describe view refresh information.
 * [cn]视图刷新信息
 * @mobile:disable
 */
typedef struct tagRefreshViewInfo
{
    RefreshViewType viewType;                /**< [en]Indicates view type.
                                                     [cn]view类型 */
    RefreshViewEvt event;                    /**< [en]Indicates view refresh event.
                                                     [cn]view刷新事件 */
}RefreshViewInfo;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]修改VMR信息
 */
typedef struct tagModifyVmrParam
{
    HWM_CHAR vmrId[HWM_MAX_VMR_ID_LEN];                 /**< [en]Indicates VMR ID.
                                                             [cn]VMR ID */
    HWM_CHAR subject[HWM_MAX_SUBJECT_LEN];              /**< [cs_sensitive:hide][en]Indicates conference subject.
                                                             [cn]VMR主题 */
    HWM_CHAR hostPwd[HWM_MAX_CONF_PASSWORD_LEN];        /**< [cs_sensitive:hide][en]Indicates host password.
                                                             [cn]主持人密码, 长度为4-16的纯数字*/
    HWM_CHAR guestPwd[HWM_MAX_CONF_PASSWORD_LEN];       /**< [cs_sensitive:hide][en]Indicates guest password.
                                                             [cn]来宾密码, 长度为4-16的纯数字 */
    HWM_BOOL allowGuestStartConf;                       /**< [en]Indicates whether is allow guest start conf.[cn]是否允许来宾提前启动会议
                                                             [cs_allowNull:Y]*/
}ModifyVmrParam;





//TODO 待删除
/**
* [cn]用户设置里的信息
* @mobile:disable
*/
typedef struct tagUserSettingParam
{
    //双屏设置选项
    HWM_BOOL hasDualMonitorParam;
    HWM_BOOL enableDualMonitor;
    HWM_UINT32 monitorNumber;

    //啸叫设置选项
    HWM_BOOL hasDeviceHowlingDetection;
    HWM_BOOL enableDeviceHowlingDetection;
}UserSettingParam;


/**
* [en]This structure is used to describe conf pair type.
* [cn]配对类型
* @mobile:disable
*/
typedef enum tagConfPairType
{
    CONF_PAIR_TYPE_IDLE,        /**<  [ios:rename:Idle]*/
    CONF_PAIR_TYPE_AUTO,        /**<  [ios:rename:Auto]*/
    CONF_PAIR_TYPE_MANUAL,      /**<  [ios:rename:Manual]*/
    CONF_PAIR_TYPE_QRCODE       /**<  [ios:rename:Qrcode]*/
}ConfPairType;

/**
* [en]This structure is used to describe conf pair state.
* [cn]配对会议状态
*/
typedef enum tagConfPairState
{
    STATE_IDLE,             /**<  [ios:rename:Idle]*/
    STATE_PAIRING,          /**<  [ios:rename:Pairing]*/
    STATE_PAIR_SUCCESS,     /**<  [ios:rename:PairSuccess]*/
    STATE_CANCEL_PAIRING,   /**<  [ios:rename:CancelPairing]*/
    STATE_PAIR_FAILED       /**<  [ios:rename:PairFailed]*/
}ConfPairState;


/**
* [en]This structure is used to describe conf pair state.
* [cn]配对会议状态
*/
typedef struct tagQueryBasicInfoPara
{   
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];                         /**< [en]Indicates the local ip. [cn]硬终端IP地址 */
    HWM_CHAR password[HWM_MAX_SECURE_CONF_NUM_LEN];                  /**< [cs_sensitive:sip][en]Indicates the number.   [cn]硬终端sip号码 */
}QueryBasicInfoPara;

/**
* [en]This structure is used to describe auto register mode.
* [cn]自动注册模式
*/
typedef enum tagAutoRegisterMode
{
    STATE_DISABLED,         /**< [en]Indicates disabled.
                                  [cn]不注册（默认） */
    STATE_AUTO,             /**< [en]Indicates auto.
                                  [cn]自动注册 */
    STATE_REUSED,           /**< [en]Indicates reused.
                                  [cn]不注册但支持使用已有帐号（手机号匹配到的帐号） */
}AutoRegisterMode;

/**
* [en]This structure is used to describe conf pair result.
* [cn]会议配对结果
* @mobile:disable
*/
typedef struct tagConfPairResult
{
    HWM_CHAR ip[HWM_MAX_IP_ADDRESS_LEN];                         /**< [en]Indicates the local ip. [cn]硬终端IP地址 */
    HWM_CHAR sipNumber[HWM_MAX_NUMBER_LEN + 1];                  /**< [cs_sensitive:sip][en]Indicates the number.   [cn]硬终端sip号码 */
    HWM_CHAR deviceName[HWM_MAX_DISPLAY_NAME_LEN + 1];           /**< [en]Indicates the display name.   [cn]硬终端设备名 */
    HWM_UINT32 heartBeatInterval;                                /**< [en]Indicates the heartbeat interval. Unit: second.   [cn]心跳间隔。单位: 秒。*/
    HWM_BOOL isSupportForce;                                     /**< [en]Indicates is enable force. [cn]是否支持抢占 */
}ConfPairResult;

typedef enum tagEncodeVersionType
{
    ENCODE_VERSION_TYPE_10 = 10,   /**< [en]Indicates xxxx.
                                    [cn]使用1.0编码器，且不支持解码2.0的所有数据终端
                                    [ios:rename:10]*/
    ENCODE_VERSION_TYPE_11 = 11,   /**< [en]Indicates xxxx.
                                    [cn]使用1.0编码器，且支持解码2.0的所有数据终端
                                    [ios:rename:11]*/
    ENCODE_VERSION_TYPE_20 = 20,   /**< [en]Indicates xxxx.
                                    [cn]使用2.0编码器，且支持解码2.0的CloudLink硬终端
                                    [ios:rename:20]*/
    ENCODE_VERSION_TYPE_30 = 30    /**< [en]Indicates xxxx.
                                    [cn]使用3.0编码器的数据终端
                                    [ios:rename:30]*/
}EncodeVersionType;

/* 防火墙模式的枚举定义, 上报给移动的大参数需要使用*/
typedef enum tagFirewallModeType
{
    FIREWALL_MODE_TYPE_STG = 0,    /**< [en]Indicates xxxx.
                                    [cn]只开放TCP 443
                                    [ios:rename:Stg]*/
    FIREWALL_MODE_TYPE_SVN,        /**< [en]Indicates xxxx.
                                    [cn]只开放 TCP/UDP443
                                    [ios:rename:Svn]*/
    FIREWALL_MODE_TYPE_SBC,        /**< [en]Indicates xxxx.
                                    [cn]SBC代理
                                    [ios:rename:Sbc]*/
    FIREWALL_MODE_TYPE_NULL        /**< [en]Indicates xxxx.
                                    [cn]直连SC
                                    [ios:rename:Null]*/
}FirewallModeType;

/**
* [en]This struct is used to describe attendee info(before join conference)<br>
* [cn]与会者信息(入会前)
*/
typedef struct tagAttendeeInfoBefore
{
    HWM_CHAR    number[HWM_MAX_NUMBER_LEN];    /**< [en]Indicates number. [cn]号码 */
    HWM_CHAR    name[HWM_MAX_NAME_LEN];        /**< [en]Indicates name. [cn]可选，与会者名称 */
    HWM_CHAR    email[HWM_MAX_EMAIL_LEN];      /**< [en]Indicates email. [cn]可选，电子邮箱地址 */
    HWM_CHAR    sms[HWM_MAX_PHONE_LEN];        /**< [en]Indicates sms. [cn]可选，短信通知手机号码 */
    HWM_CHAR    accountId[HWM_MAX_ACCOUNT_ID_LEN]; /**< [en]Indicates account id. [cn]可选，用户登录帐号 */
    HWM_CHAR    userUuid[HWM_MAX_NAME_LEN];/**< [en]Indicates user account [cn]与会者唯一标识 */
    HWM_BOOL    isMute;               /**< [en]Indicates whether is mute. [cn]是否闭音 */
    HWM_BOOL    isAutoInvite;        /**< [en]Indicates whether is auto invite [cn]是否自动外邀 */
    ConfRoleBefore  role;        /**< [en]Indicates role. [cn]会议成员角色 */
    AttendeeType type;     /**< [en]Indicates attendee type. [cn]成员类型 */
    HWM_CHAR    appId[HWM_MAX_ACCOUNT_ID_LEN]; /**< [en]App id. [cn]应用ID */
    HWM_CHAR    thirdAccount[HWM_MAX_ACCOUNT_ID_LEN]; /**< [en]Third account. [cn]第三方用户帐号 */
} AttendeeInfoBefore;

/**
* [en]This enum is used to describe join status.
* [cn]加入会议状态类型
*/
typedef enum tagJoinStatusType
{
    JOIN_STATUS_NOT_INCONF = -1,                /**< [en]Indicates not in conf. [cn]不在会议中 */
    JOIN_STATUS_INCONF = 0,                     /**< [en]Indicates in conf. [cn]正常入会 */
    JOIN_STATUS_AUDIENCE_WAITING = 1,           /**< [en]Indicates audience waiting. [cn]观众等待 */
    JOIN_STATUS_AUDIENCE_PAUSE_INCONF = 2,      /**< [en]Indicates audience pause in conf. [cn]观众会中暂停 */
    JOIN_STATUS_GUEST_WAITING_BEFORE_CONF = 3,  /**< [en]Indicates guest waiting before conf. [cn]来宾会前等待 */
    JOIN_STATUS_WAITINGROOM = 4                 /**< [en]Indicates waiting room. [cn]进入等候室*/
}JoinStatusType;

/**
* [en]This enum is used to describe join conf failure reason.
* [cn]加入会议失败原因
*/
typedef enum tagJoinFailureReason
{
    JOIN_FAILURE_REASON_CONF_NOT_START = 0,                     /**< [en]Indicates meeting not begin. [cn]会议未开始（默认） */
    JOIN_FAILURE_REASON_VMR_CONFLICT = 1,                       /**< [en]Indicates VMR conflict. [cn]VMR会议冲突 */
}JoinFailureReason;

/**
* [en]This struct is used to describe guest waiting before conf info.
* [cn]来宾会前等待信息
*/
typedef struct tagGuestWaitingBeforeConfInfo
{
    SDKERR    result;                                               /**< [en]Indicates guest waiting join conf result. [cn]来宾会前入会结果错误码 */
    HWM_INT64 startTime;                                            /**< [en]Indicates the conference start time.[cn]会议开始时间-时间戳，精度秒(0时区)*/
    HWM_BOOL  allowGuestStartConf;                                  /**< [en]Indicates whether allow guest start conf.[cn]是否允许来宾提前启动会议*/
    HWM_INT32 allowGuestStartConfTime;                              /**< [en]Indicates join before host time(minute): 0-anytime, n-n minute(s) before host. Valid when allowGuestStartConf is true.
                                                                         [cn]允许来宾提前入会时间范围(单位：分钟): 0-随时，n-提前n分钟启动会议. 当allowGuestStartConf为true时有效. */
    HWM_BOOL isMicOn;                                               /**< [en]Indicates isMicOn. [cn]是否开启麦克风 */
    HWM_BOOL isSpkOn;                                               /**< [en]Indicates isSpkOn. [cn]是否开启扬声器 */
    HWM_BOOL isCamOn;                                               /**< [en]Indicates isCamOn. [cn]是否开启摄像头 */
    JoinFailureReason failureReason;                                /**< [en]Indicates join failed reason. [cn]终端入会失败原因，joinStatus不为0时提供 */
}GuestWaitingBeforeConfInfo;

/**
* [en]This struct is used to describe audience waiting info.
* [cn]观众等待信息
*/
typedef struct tagAudienceWaitingInfo
{
    HWM_CHAR coverPageUri[HWM_MAX_URL_LEN];                         /**< [en]Indicates audience waiting uri. [cn]观众等待封面URI（HTML5页面）*/
}AudienceWaitingInfo;

/**
* [en]This struct is used to describe waiting room info<br>
* [cn]等候室信息
*/
typedef struct tagWaitingRoomInfo
{
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];                                /**< [en]Indicates VMR conference id. [cn]会议ID */
    HWM_CHAR confSubject[HWM_MAX_SUBJECT_LEN];                           /**< [cs_sensitive:subject][en]Indicates confSubject. [cn]会议主题 */
    HWM_CHAR waitingRoomNotice[HWM_MAX_WAITING_ROOM_NOTICE_LEN];         /**< [en]Indicates participant name. [cn]等候室提示信息 */
    HWM_CHAR waitingRoomIMGroupId[HWM_MAX_IMGROUP_ID_LENGTH];            /**< [en]Indicates participant name. [cn]等候室IM群组ID */
} WaitingRoomInfo;

/**
* [en]This struct is used to describe join conference result.
* [cn]加入会议结果信息
*/
typedef struct tagJoinConfResultInfo
{
    JoinStatusType joinStatus;                              /**< [en]Indicates join status.
                                                                 [cn]会议状态 */
    AudienceWaitingInfo audienceWaitingInfo;                /**< [en]Indicates audience waiting info.
                                                                 [cn]观众等待信息（只在会议状态为[观众等待]时有效） */
    GuestWaitingBeforeConfInfo guestWaitingBeforeConfInfo;  /**< [en]Indicates guest waiting before conf info.
                                                                 [cn]来宾会前等待信息（只在会议状态为[来宾会前等待]时有效）*/
    WaitingRoomInfo waitingRoomInfo;                        /**< [en]Indicates waitingRoom info.
                                                                 [cn]等候室信息（只在会议状态为[进入等候室]时有效）*/
    MeetingInfo meetingInfo;                                /**< [extends][en]Indicates meeting info.
                                                                 [cn]会议信息（所有会议状态公共信息）*/
    HWM_BOOL isCamOn;                                 /**< [en]Indicates xxx.
                                                           [cn]是否打开摄像头 */
    HWM_BOOL isMicOn;                                 /**< [en]Indicates xxx.
                                                           [cn]是否打开麦克风 */
    HWM_BOOL needMute;                                /**< [en]Indicates xxx.
                                                           [cn]是否静音 */
    HWM_BOOL isSpkOn;                                 /**< [en]Indicates whether to enable the speaker.
                                                           [cn]是否打开扬声器 */
}JoinConfResultInfo;

/**
* [en]This struct is used to describe join conference result.
* [cn]加入会议结果信息
*/
typedef struct tagJoinConfFailedInfo
{
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];                  /**< [en]Indicates conference id.
                                                                [cn]会议id */
    HWM_CHAR confPwd[HWM_MAX_CONF_PASSWORD_LEN];           /**< [cs_sensitive:hide][en]Indicates conference password.
                                                                [cn]会议密码 */
    HWM_CHAR accessNumber[HWM_MAX_CONF_ACCESS_LEN];        /**< [en]Indicates conference access number.
                                                                [cn]会议接入码 */
    HWM_BOOL isVideoConf;                                  /**< [en]Indicates conference id.
                                                                [cn]会议id */
    HWM_BOOL isCamOn;                                      /**< [en]Indicates xxx.
                                                                [cn]是否打开摄像头 */
    HWM_BOOL isMicOn;                                      /**< [en]Indicates xxx.
                                                                [cn]是否打开麦克风 */
    ConfServerType confServerType;                         /**< [en]Indicates conference server type.
                                                                [cn]会议服务器类型*/
    HWM_BOOL isWebinar;                                    /**< [en]Indicates conf is webinar.
                                                                [cn]是否是网络研讨会 */
    ConfConflictInfo conflictInfo;                         /**< [en]Indicates conference conflict info.
                                                                [cn]会议冲突信息 */
}JoinConfFailedInfo;

/**
* [en]This struct is used to describe conference list info.
* [cn]会议列表信息
*/
typedef struct tagConfListInfo
{
    HWM_UINT32 confListSize;                            /**< [length for confListItem][en]Indicates conference number.
                                                             [cn]会议个数 */
    ConfListItem* confListItem;                        /**< [en]Indicates conf list.
                                                             [cn]会议列表 */
}ConfListInfo;

typedef struct tagAudioStatsInfo {
    HWM_BOOL isLocalData;                           /**< [en]Indicates xxx. [cn]是否本地数据,TRUE表示本地发送数据;FALSE表示接收远端数据*/
    HWM_CHAR name[HWM_MAX_DISPLAY_NAME_LEN];        /**< [en]Indicates xxx. [cn]显示名称*/
    HWM_CHAR codecName[HWM_MAX_CODEC_NAME_LEN];     /**< [en]Indicates encode protocol. [cn]编码协议名*/
    HWM_UINT32 bitRate;                             /**< [en]Indicates to bit rate(bps). [cn]比特率(bps) */
    HWM_UINT32 packetLoss;                          /**< [en]Indicates packer loss rate(%). [cn]丢包率(%) */
    HWM_UINT32 delay;                               /**< [en]Indicates delay on average(ms). [cn]平均时延(ms) */
    HWM_UINT32 jitter;                              /**< [en]Indicates jitter on average(ms). [cn]平均抖动(ms) */
} AudioStatsInfo;

typedef struct tagVideoStatsInfo {
    HWM_BOOL isLocalData;                           /**< [en]Indicates xxx. [cn]是否本地数据,TRUE表示本地发送数据;FALSE表示接收远端数据*/
    HWM_CHAR name[HWM_MAX_DISPLAY_NAME_LEN];        /**< [en]Indicates xxx. [cn]显示名称*/
    HWM_CHAR codecName[HWM_MAX_CODEC_NAME_LEN];     /**< [en]Indicates encode protocol. [cn]编码协议名*/
    HWM_CHAR resolution[HWM_MAX_RESOLUTION_LEN];    /**< [en]Indicates resolution. [cn]分辨率*/
    HWM_UINT32 width;                               /**< [en]Indicates video resolution ratio-Width(ppi). [cn]视频分辨率-宽(ppi)*/
    HWM_UINT32 height;                              /**< [en]Indicates video resolution ratio-Height(ppi). [cn]视频分辨率-高(ppi)*/
    HWM_UINT32 bitRate;                             /**< [en]Indicates to bit rate(bps). [cn]比特率(bps) */
    HWM_UINT32 frameRate;                           /**< [en]Indicates video frame rate. [cn]视频帧率*/
    HWM_UINT32 packetLoss;                          /**< [en]Indicates packer loss rate(%). [cn]丢包率(%) */
    HWM_UINT32 delay;                               /**< [en]Indicates delay on average(ms). [cn]平均时延(ms) */
    HWM_UINT32 jitter;                              /**< [en]Indicates jitter on average(ms). [cn]平均抖动(ms) */
    HWM_UINT32 userId;                              /**< [en]Indicates userId. [cn]userId,MCU会议用来标记多流,后续删除 */
} VideoStatsInfo;

typedef struct tagDataConfStreamInfo
{
    HWM_BOOL isRecvShare;
    HWM_UINT32    width;            /**< [en]width of the code stream (pix). [cn] 码流获取的宽度（pix）*/
    HWM_UINT32    height;            /**< [en]height of the code stream (pix). [cn] 码流获取的高度（pix）*/
    HWM_UINT32    frameRate;        /**< [en]codec frame rate (fps). [cn] 编解码器帧率（fps）*/
    HWM_UINT64    byteRate;            /**< [en]send or receive code rate (kbps). [cn] 网络收发码率（kbps）*/
    HWM_UINT32    codecVersion;        /**< [en]codec type. [cn] 编解码器类型*/
    HWM_BOOL    codecType;            /**< [en]true for senConfQosInfoder, false for receiver. [cn] 发送端为true，接收端为false*/
    HWM_UINT32   pktLoss;           /**< [en]package loss rate (0.xx%). -1 indicates disable. [cn] 丢包率（0.xx%）；-1表示未启用该参数*/
    HWM_UINT32  rtt;              /**< [en]loop delay (ms). 0 indicates disable. ave, max, min values is not supported. [cn] 环路时延（ms）；0表示未启用该参数；不支持获取平均值、最大值和最小值*/
    HWM_UINT32  jitter;           /**< [en]network jitter (ms). 0 indicates disable. ave, max, min values is not supported. [cn] 抖动（ms）；0表示未启用该参数；不支持获取平均值、最大值和最小值*/
}DataConfStreamInfo;

/**
* [en]This struct is used to describe conference QOS info.
* [cn]数据会议QOS信息
* @mobile:disable
*/
typedef struct tagDataConfQosInfo
{
    DataConfStreamInfo dataConfStreamInfo;              /**< [en]Indicates dataconf Stream information. [cn]数据会议流信息 */
    HWM_BOOL hasData;                                   /* windows 专用 */
}DataConfQosInfo;

/**
* [en]This struct is used to describe conference list info.
* [cn]加入会议结果信息
*/
typedef struct tagAttendeeSizeInfo
{
    HWM_UINT32 audioAttendeeSize;                       /**<  [en]Indicates audio attendee size.
                                                              [cn]音频与会者的个数 */
    HWM_UINT32 videoAttendeeSize;                        /**< [en]Indicates video attendee size.
                                                              [cn]视频与会者的个数 */
}AttendeeSizeInfo;

typedef enum tagIncludeOriginalVoiceType
{
	INCLUDE_ORIGINAL_VOICE_INVALID = 0,                /**< [en]Indicates invalid value
														<br>[cn]默认无效值。当设置为该值时，是否包含背景原声属性不会被修改*/
	INCLUDE_ORIGINAL_VOICE_YES,                        /**< [en]Indicates include original voice
														<br>[cn]包含背景原声*/
	INCLUDE_ORIGINAL_VOICE_NO                          /**< [en]Indicates not include original voice
														<br>[cn]不包含背景原声*/
}IncludeOriginalVoiceType;

/**
* [en]xxxx
* [cn]语言频道参数
*/
typedef struct tagLanguageChannelParam
{
	HWM_BOOL isInterpreter;                             /**<  [en]Indicates xxxx.
                                                              [cn]是否是同声传译员
                                                              [cs_allowNull:Y]*/
	ConfSupportLanguageType listenChannel;              /**<  [en]Indicates xxxx.
                                                              [cn]接听频道 
                                                              [cs_allowNull:N] */
	ConfSupportLanguageType speakChannel;               /**<  [en]Indicates xxxxx.
                                                              [cn]发言频道 
                                                              [cs_allowNull:N]*/
	IncludeOriginalVoiceType includeOriginalVoice;      /**<  [en]Indicates xxxxx.
															  [cn]接听频道中背景原声(原声较小)
															  [cs_allowNull:N]*/
}LanguageChannelParam;


/**
* [en]This struct is used to describe set co-host result.
* [cn]设置联席主持人结果
*/
typedef struct tagSetCohostResult
{
    HWM_BOOL isSetCoHost;     /**< [en]Indicates xxxx.
                                   [cn]是否设置联席主持人 */
    HWM_UINT32 userId;        /**< [en]Indicates xxxx.
                                   [cn]用户ID */
}SetCohostResult;

/**
* [en]
* [cn]邀请共享操作类型
*/
typedef enum tagInviteShareType
{
    CANCEL_INVITE_SHARE = 0,         /**< [en]
                                          [cn]取消邀请共享 */
    INVITE_SHARE,                    /**< [en]
                                          [cn]邀请共享 */
    REJECT_SHARE,                    /**< [en]
                                          [cn]拒绝共享 */
    AGREE_TO_SHARE                     /**< [en]
                                          [cn]同意共享 */
}InviteShareType;

/**
* [en]This struct is used to describe set share result.
* [cn]发起/取消共享邀请的结果
*/
typedef struct tagInviteShareResult
{
    HWM_UINT32 userId;                           /**< [en]
                                                      [cn]用户id */
    InviteShareType inviteShareType;         /**< [en]
                                                  [cn]邀请共享操作类型 */ 
}InviteShareResult;

/**
* [en]This struct is used to describe userId and render.
* [cn]用户和窗口对应关系
*/
typedef struct tagUserRenderItemInfo
{
    HWM_UINT32 userId;               /**< [en]
                                          [cn]用户id */
    HWM_UPTR render; 
}UserRenderItemInfo;


/**
* [en]This struct is used to describe the type of low net work
* [cn]弱网类型
*/
typedef enum tagLowNetWorkType
{
    LOW_NET_WORK_TYPE_AUDIO,             /**< [en]Indicates audio type
                                          [cn]音频弱网
                                          [ios:rename:Audio]*/
    LOW_NET_WORK_TYPE_VIDEO,             /**< [en]Indicates audio type
                                          [cn]视频弱网
                                          [ios:rename:Video]*/
    LOW_NET_WORK_TYPE_DATACONF,          /**< [en]Indicates audio type
                                          [cn]数据会议弱网
                                          [ios:rename:Dataconf]*/
    LOW_NET_WORK_TYPE_ANYONE             /**< [en]Indicates audio type
                                          [cn]音,视,数任意一个弱网
                                          [ios:rename:Anyone]*/
}LowNetWorkType;

/**
* [en]This struct is used to describe xxx
* [cn]网络抖动情况下TMMBR消息类型
*/
typedef enum tagTMMBRMsgType
{
    TMMBR_MSG_NONE = 0,        /**< [en]Indicates no msg.
                                [cn]无效消息
                                [ios:rename:None]*/
    TMMBR_MSG_CAMERA_OFF,      /**< [en]Indicates turn off camera.
                                [cn]关闭摄像头
                                [ios:rename:CameraOff]*/
    TMMBR_MSG_CAMERA_ON,       /**< [en]Indicates turn on camera.
                                [cn]打开摄像头
                                [ios:rename:CameraOn]*/
    TMMBR_MSG_DATA_CLOSE,      /**< [en]Indicates close data.
                                [cn]关闭辅流
                                [ios:rename:DataClose]*/
    TMMBR_MSG_DATA_OPEN,       /**< [en]Indicates open data.
                                [cn]打开辅流
                                [ios:rename:DataOpen]*/
}TMMBRMsgType;


typedef enum tagRefreshViewMediaType
{
    VIEW_VIDEO_PREVIEW = 1,   /**< [en]Indicates local video preview
                               <br>[cn]本地视频预览
                               [ios:rename:VideoPreview]*/
    VIEW_VIDEO = 2,           /**< [en]Indicates general video
                               <br>[cn]普通视频
                               [ios:rename:Video]*/
    VIEW_DATA = 3             /**< [en]Indicates auxiliary data
                               <br>[cn]辅流
                               [ios:rename:Data]*/
} RefreshViewMediaType;

typedef enum tagRefreshViewEvent
{
    LOCALVIEW_ADD = 1,     /**< [en]Indicates add local view
                            <br>[cn]本地view添加
                            [ios:rename:Add]*/
    LOCALVIEW_REMOVE       /**< [en]Indicates remove local view
                            <br>[cn]本地view删除
                            [ios:rename:Remove]*/
} RefreshViewEvent;

/** 虚拟背景异常上报事件ID */
typedef enum tagBgTypeErr
{
    BG_ERROR_IMG_PATH = 0,                  /**< 无效的背景替换图片路径；建议上层提示：您使用的图片路径错误，请将图片放到正确的路径 */
    BG_ERROR_IMG_TYPE = 1,                  /**< 无效的背景替换图片格式；建议上层提示：您使用的图片格式错误，请使用正确格式的图片*/
    BG_ERROR_IMG_SIZE = 2,                  /**< 背景替换图片大小错误；建议上层提示：您使用的图片尺寸不对，请使用尺寸合理的图片*/
    BG_ERROR_SEGMENT_PATH = 3,              /**< 分割进程exe路径错误，建议上层提示：虚拟背景资源路径错误，请您重新安装应用*/
    BG_ERROR_LOADING_SEGMENT_PROCESS = 4,   /**< 由于其他原因，比如进程文件已损坏，加载分割进程失败，建议上层提示：分割进程加载失败，功能不可用*/
    BG_ERROR_RELOADING_SEGMENT = 5,         /**< 重新加载虚拟背景资源失败，建议上层提示：提示用户虚拟背景功能不可用，请重启应用*/
    BG_STATUS_LOADING_MODEL_SUCCESS = 6,    /**< 背景分割模型资源加载成功，建议上层在收到了该消息之后，才显示虚拟背景功能入口*/
    BG_STATUS_LOADING_MODEL_OVERTIME = 7,   /**< 背景分割模型资源加载超时，建议上层提示：提示用户模型加载超时，建议用户重启应用*/
    BG_STATUS_LOADING_MODEL_FAILED = 8,     /**< 背景分割模型资源加载出错，建议上层提示：提示用户模型资源已损坏，请您重新安装应用*/
    BG_STATUS_LOADING_MODEL = 9,            /**< 背景分割模型资源正在加载中*/
    BG_STATUS_HANDLE_FRAME_OVERTIME = 10,    /**< 背景分割图像混合操作超时, 建议上层提示：虚拟背景切割头像出现异常，请您重新安装应用*/
    BG_STATUS_HANDLE_BUILT,                 /**< 初始值, 不生效*/
} BgTypeErr;


/**
* [en]This struct is used to describe xxx
* [cn]视频view刷新通知信息
*/
typedef struct tagRefreshViewParamInfo
{
    RefreshViewMediaType meidaType;       /**< [en]Indicates view refresh  media type. [cn]view刷新媒体类型 */
    RefreshViewEvent event;               /**< [en]Indicates view refresh event. [cn]view刷新事件 */
} RefreshViewParamInfo;

/**
* [en]This struct is used to describe the type of audio route
* [cn]音频路由类型
*/
typedef enum tagAudioRouteType
{
    AUDIO_ROUTE_SPEAK,             /**< [en]Indicates xxx
                                    [cn]扬声器
                                    [ios:rename:Speak]*/
    AUDIO_ROUTE_EARPIECE,          /**< [en]Indicates xxx
                                    [cn]听筒
                                    [ios:rename:Earpiece]*/
    AUDIO_ROUTE_HEADSET,           /**< [en]Indicates xxx
                                    [cn]耳机
                                    [ios:rename:Headset]*/
    AUDIO_ROUTE_BLUETOOTH          /**< [en]Indicates xxx
                                    [cn]蓝牙
                                    [ios:rename:Bluetooth]*/
}AudioRouteType;

/**
* [en]This struct is used to describe the type of camera start error
* [cn]摄像头打开失败类型
*/
typedef enum tagCameraStartErrorType
{
    NONE = 0,                    /**< [en]Invited error none
                                  <br>[cn]摄像头无错误 */
    COMMON_FAILED,               /**< [en]Invited common failed
                                  <br>[cn]通用错误 */
    BEUSED,                      /**< [en]Invited be used
                                  <br>[cn]被占用 */
    NO_STREAM,                   /**< [en]Invited 5s no stream
                                  <br>[cn]本地采集5秒无码流 */
}CameraStartErrorType;

/**
* [en]This struct is used to describe the type of cpu too high
* [cn]CPU占用过高类型
*/
typedef enum tagCPUTooHighType
{
    CALOSE_CAMERA = 0,          /**< [en]Invited xxx
                                 <br>[cn]cpu过高导致摄像头关闭 */
    FORCE_720P,                 /**< [en]Invited xxx
                                 <br>[cn]强制720P导致CPU过高 */
}CPUTooHighType;

/**
* [cn]获取AI算法能力
*/
typedef struct tagAICapability
{
    HWM_BOOL  supportBackgroundProcess;      /**< [en]Indicates is support background process. [cn]是否支持虚拟背景能力 */
    HWM_BOOL  supportSuperResolution;        /**< [en]Indicates is support super resolution. [cn]是否支持超分辨率能力 */
    HWM_BOOL  supportGestureControl;         /**< [en]Indicates is support gesture control. [cn]是否支持手势控制能力 */
}AICapability;

/**
* [cn]接听会议结果信息
*/
typedef struct tagAcceptConfResultInfo
{
    ConfMediaType confMediaType;                        /**< [en]Indicates conference type.
                                                             [cn]会议类型 */
}AcceptConfResultInfo;

/**
* [cn]接听通话结果信息
*/
typedef struct tagAcceptCallResultInfo
{
    CallType callType;                      /**< [en]Indicates call type.
                                                 [cn]呼叫类型 */
}AcceptCallResultInfo;

/**
* [cn]音视频切换结果信息
*/
typedef struct tagSwitchCallTypeResultInfo
{
    CallType callType;                      /**< [en]Indicates call type.
                                                 [cn]呼叫类型 */
}SwitchCallTypeResultInfo;

/**
* [cn]接受音频转视频请求结果信息
*/
typedef struct tagAcceptTransferVideoResultInfo
{
    CallType callType;                      /**< [en]Indicates call type.
                                                 [cn]呼叫类型 */
}AcceptTransferVideoResultInfo;

/**
* [en]This enum is used to describe device performance level<br>
* [cn]设备性能等级
*/
typedef enum tagDevicePerformanceLevel
{
    DEVICE_PERFORMANCE_LEVEL_LOW = 0,       /**< [en]device performance level low
                                             <br>[cn]设备性能低等级
                                             [ios:rename:Low]*/
    DEVICE_PERFORMANCE_LEVEL_MIDDLE = 1,    /**< [en]device performance level middle
                                             <br>[cn]设备性能中等级
                                             [ios:rename:Middle]*/
    DEVICE_PERFORMANCE_LEVEL_HIGH = 2       /**< [en]device performance level high
                                             <br>[cn]设备性能高等级
                                             [ios:rename:High]*/
} DevicePerformanceLevel;

/**
* [en]This struct is used to describe upload key log
* [cn]上传关键日志信息
*/
typedef struct tagUploadKeyLogInfo
{
    HWM_INT32   funcType;                               /**< [en]Indicates type. [cn]类型 */
    HWM_CHAR    folderName[HWM_MAX_NAME_LEN];           /**< [en]Indicates folder name. [cn]文件夹名称 */
    HWM_CHAR    fileName[HWM_MAX_NAME_LEN];             /**< [en]Indicates file name. [cn]文件名称 */
    HWM_CHAR    uploadServerUrl[HWM_OBS_URL_LENGTH];    /**< [en]Indicates the redirect url. [cn]上传文件的地址 */
    HWM_CHAR    contentType[HWM_CONTENT_TYPE_LEN];      /**< [en]Indicates the date string. [cn]内容类型 */
    HWM_CHAR    method[HWM_CONTENT_TYPE_LEN];           /**< [en]Indicates the redirect url. [cn]方法 */
} UploadKeyLogInfo;

/**
* [en]AI model type <br>
* [cn]AI模型类型
*/
typedef enum tagAiModelType
{
    HWM_AI_MODEL_TYPE_AUDIO_AINR = 1,
    HWM_AI_MODEL_TYPE_AUDIO_VAD,
    HWM_AI_MODEL_TYPE_AUDIO_HC      // 啸叫抑制
} AiModelType;

/**
* [en]AI model load type <br>
* [cn]AI模型加载类型
*/
typedef enum tagAiModelLoadType
{
    HWM_AI_MODEL_LOAD_TYPE_UNLOAD,
    HWM_AI_MODEL_LOAD_TYPE_LOAD
} AiModelLoadType;

/**
* [en]This struct is used to describe AI model parameter
* [cn]AI模型参数
*/
typedef struct tagAiModelParam
{
    AiModelLoadType loadType;                     /**< [en]Indicates AI model load type. [cn]AI模型加载类型, 0表示卸载，1表示加载 
                                                       [cs_allowNull:N]*/
    AiModelType aiModelType;                      /**< [en]Indicates AI model type. [cn]模型类型 
                                                       [cs_allowNull:N]*/
    HWM_CHAR modelPath[HWM_MAX_FILE_PATH_LEN];    /**< [en]Indicates AI model path. [cn]文件夹名称 
                                                       [cs_allowNull:N][cs_length:1-512]*/
} AiModelParam;

/**
* [en]This enum is used to describe cpu level
* [cn]cpu等级
* @mobile:disable
*/
typedef enum tagCpuLevel
{
    CALL_CPU_LEVEL_LOW,
    CALL_CPU_LEVEL_MIDDLE,
    CALL_CPU_LEVEL_HIGH
} CpuLevel;


/**
* [en]Window display type in speaker mode <br>
* [cn]演讲者模式下窗口显示类型
* @mobile:disable
*/
typedef enum tagSpeakerModeWndType
{
    SPEAKER_MODE_WND_NORMAL = 0, /**< [en]Indicates display window normal. [cn]正常显示（多窗口） */
    SPEAKER_MODE_WND_SINGLE      /**< [en]Indicates single window. [cn]单窗口 */
}SpeakerModeWndType;

/**
* [en]This struct is used to describe extra conference config info<br>
* [cn]会议其他配置信息
* @mobile:disable
*/
typedef struct tagExtraConfigInfo
{
    HWM_BOOL isGuestFreePwd;                 /**< [en]Indicates whether is guest free password. [cn]是否来宾免密 */
    HWM_BOOL isSendEmail;                   /**< [en]Indicates whether is send email notify. [cn]是否发送邮件通知 */
    HWM_BOOL isSendSms;                      /**< [en]Indicates whether is send sms. [cn]是否发送短信通知 */
    HWM_BOOL isSendCalendarNotify;           /**< [en]Indicates whether is send calendar notify. [cn]是否发送日历通知 */
    ConfAllowJoinUserType callInRestriction; /**< [en]Call in restriction. [cn]呼入限制 */
    HWM_BOOL supportTerminal;                /**< [en]Indicates whether is support invite Terminal. [cn]是否邀请硬终端入会 */
    HWM_BOOL isOpenWaitingRoom;              /**< [en]Indicates whether is open waiting room. [cn]是否开启等候室 */
} ExtraConfigInfo;

/**
* [en]This struct is used to describe history conference info<br>
* [cn]历史会议信息
* @mobile:disable
*/
typedef struct tagHistoryConfInfo
{
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];                 /**< [en]Indicates conference id. [cn]会议id */
    HWM_CHAR confUUID[HWM_MAX_CONF_UUID_LEN];             /**< [en]Indicates conference uuid. [cn]会议uuid */
    HWM_CHAR subject[HWM_MAX_SUBJECT_LEN];                /**< [en]Indicates conference subject. [cn]会议主题 */
    HWM_CHAR startTime[HWM_MAX_TIME_FORMATE_LEN];         /**< [en]Indicates conference start time, format:YYYY-MM-DD HH:MM  [cn]，会议开始时间，格式：YYYY-MM-DD HH:MM */
    HWM_CHAR timeZone[HWM_MAX_TIME_ZONE_LEN];             /**< [en]Indicates time zone, optional, standard time zone for example "Asia/Shanghai" in PBX internal conference; Beijing is "56" in Mediax conference,refer to CONFCTRL_E_TIMEZONE.
                                                               [cn]时区*/
    HWM_UINT32 mediaType;                                 /**< [en]Indicates media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]媒体类型，取值参考CONFCTRL_E_CONF_MEDIATYPE_FLAG，可进行"|"操作 */
    HWM_CHAR vmrConferenceId[HWM_MAX_VMR_CONF_ID_LEN];    /**< [en]Indicates VMR conference id. [cn]VMR会议显示ID */
    HWM_CHAR userUUID[HWM_MAX_CONF_UUID_LEN];             /**< [en]Indicates scheduser name. [cn]会议预订者uuid */
    HWM_CHAR scheduserName[HWM_MAX_NAME_LEN];             /**< [en]Indicates scheduser name. [cn]预订者姓名 */
    HWM_BOOL isHasCloudRecordFile;                        /**< [en]Indicates has cloud record file. [cn]是否有云端录播文件 */
    HWM_BOOL isHasLocalRecordFile;                        /**< [en]Indicates has local record file. [cn]是否有本地录播文件 */
    HWM_CHAR localRecordFile[HWM_MAX_FILE_PATH_LEN];      /**< [en]Indicates local record file. [cn]本地录播文件 */
    HWM_UINT32 recordAuthType;                            /**< [en]Indicates record auth type. [cn]录播鉴权方式  0:可通过连接观看/下载（不拼接nonce）1:企业用户可观看/下载 2:与会者可观看/下载 */
    ExtraConfigInfo  exConfigInfo;                        /**< [en]Indicates extra config infomation . [cn]会议配置信息 */
} HistoryConfInfo;

/**
* [en]real time subtitle.
* [cn]实时字幕
* @mobile:disable
* @ios:disable
*/
typedef struct tagRealTimeSubtitle
{
    HWM_UINT32 userId;                     /**< [en]Indicates user id.  [cn]用户id */
    HWM_CHAR   msg[HWM_MAX_SUBTITLE_LEN];  /**< [en]Indicates Subtitle. [cn]字幕内容 */
    SubtitileLanguageType languageType;             /**< [en]Indicates language. [cn]语言 */
    HWM_BOOL   isTranslate;                /**< [en]Indicates is translate update. [cn]是否翻译内容更新 */
    HWM_CHAR   name[HWM_MAX_NAME_LEN];     /**< [en]Indicates user name. [cn]用户名称 */
} RealTimeSubtitle;

/**
* [en]
* [cn]摄像头状态信息
*/
typedef enum tagDeviceStatus
{
    DEVICE_OFF = 0,                 /**< [en]xxxx. [cn]摄像头/扬声器/麦克风设备关闭 */
    DEVICE_ON,                      /**< [en]xxxx. [cn]摄像头/扬声器/麦克风设备开启 */
    DEVICE_NONE                     /**< [en]xxxx. [cn]无摄像头/扬声器/麦克风设备 */
}DeviceStatus;

/**
* [en]subtitle record info.
* [cn]字幕记录信息
* @mobile:disable
* @ios:disable
*/
typedef struct tagSubtitleRecordInfo
{
    RealTimeSubtitle realTimeSubtitle;     /**< [en]Indicates real time subtitle.  [cn]实时字幕信息 */
    HWM_CHAR   msgId[HWM_MAX_MSG_ID_LEN];  /**< [en]Indicates subtitle message id. [cn]消息id,可以用来匹配字幕和翻译 */
    HWM_INT64   timeStamp;                 /**< [en]Indicates subtitle time stamp. [cn]字幕时间戳,UI可以用来显示字幕时间 */
} SubtitleRecordInfo;

/**
* [cn]结束会议时上报的录播信息
* @mobile:disable
*/
typedef struct tagConfRecordInfo
{
    HWM_BOOL   haveRecord;            /* 会议是否有录播 */
    ConfRecordType recordType;        /* 录播类型 */
    HWM_BOOL   isChairMan;            /* 是否是主席 */
    HWM_BOOL   isCreator;             /* 是否是创建者 */
    HWM_BOOL   hasCreator;            /* 有无创建者 */
    HWM_CHAR   name[HWM_MAX_NAME_LEN];    /* 与会者名称 */
} ConfRecordInfo;

/**
* [en]This struct is used to describe multi pic item info<br>
* [cn]自定义广播多画面-单个画面的信息
*/
typedef struct tagCustomMultiPicItemInfo
{
    HWM_UINT32 picIndex;  /**< [en]Indicates window ID, starting from 1.. [cn]窗口序号，从1开始 */
    HWM_UINT32 left;      /**< [en]Indicates left offset of the picture window relative to totalWidth. [cn]画面窗口相对totalWidth左偏移 */
    HWM_UINT32 top;       /**< [en]Indicates right offset of the picture window relative to totalHeight. [cn]画面窗口相对totalHeight右偏移 */
    HWM_UINT32 width;     /**< [en]Indicates width of the window. [cn]画面窗口宽度 */
    HWM_UINT32 height;    /**< [en]Indicates height of the window. [cn]画面窗口高度 */
    HWM_BOOL isSharing;   /**< [en]Indicates shared or not. [cn]是否在共享 */
    HWM_INT32 userId;     /**< [en]Indicates userId. [cn]会中唯一标识 */
}CustomMultiPicItemInfo;

/**
* [en]This struct is used to describe multi pic item info<br>
* [cn]自定义广播多画面-全局信息
*/
struct CustomMultiPicInfo
{
    HWM_BOOL isBroadCasting = false; /**< [en]Indicates is broadcasting multi pic info. [cn]是否在广播多画面 */
    HWM_UINT32 totalWidth = 0;   /**< [en]Indicates total width. [cn]画面窗口总宽度（非实际显示宽度，为相对值） */
    HWM_UINT32 totalHeight = 0;  /**< [en]Indicates total height. [cn]画面窗口总高度（非实际显示高度，为相对值） */
    HWM_UINT32 picNum = 0;       /**< [en]Indicates number of picture . [cn]画面个数 */
    HWM_UINT32 activeIndex = 0;  /**< [en]Excited voice-activated picture index. [cn]激励声控画面索引 */
    HWM_BOOL vasFlag = 0;        /**< [en]Indicates whether the voice activation mode is enabled. [cn]是否声控模式 */
    HwmList<CustomMultiPicItemInfo> *picInfoList; /**< [en]Information about each screen. [cn]各个画面信息 */
    CustomMultiPicInfo(const CustomMultiPicInfo& rhs)
    {
        if (this == &rhs) {
            return;
        }
        this->isBroadCasting = rhs.isBroadCasting;
        this->totalWidth = rhs.totalWidth;
        this->totalHeight = rhs.totalHeight;
        this->picNum = rhs.picNum;
        this->activeIndex = rhs.activeIndex;
        this->vasFlag = rhs.vasFlag;
        this->picInfoList = HwmList<CustomMultiPicItemInfo>::CreateList();

        if (this->picInfoList == nullptr || rhs.picInfoList == nullptr) {
            return;
        }

        for (HWM_UINT32 i = 0; i < rhs.picInfoList->GetSize(); i++)
        {
            CustomMultiPicItemInfo picItem = { 0 };
            rhs.picInfoList->GetItem(i, picItem);
            this->picInfoList->PushBack(picItem);
        }
    }

    CustomMultiPicInfo& operator = (const CustomMultiPicInfo& rhs)
    {
        if (this == &rhs) {
            return *this;
        }
        this->isBroadCasting = rhs.isBroadCasting;
        this->totalWidth = rhs.totalWidth;
        this->totalHeight = rhs.totalHeight;
        this->picNum = rhs.picNum;
        this->activeIndex = rhs.activeIndex;
        this->vasFlag = rhs.vasFlag;
        if (this->picInfoList != nullptr)
        {
            HwmList<CustomMultiPicItemInfo>::DestroyList(this->picInfoList);
        }

        this->picInfoList = HwmList<CustomMultiPicItemInfo>::CreateList();
        if (this->picInfoList == nullptr || rhs.picInfoList == nullptr) {
            return *this;
        }

        for (HWM_UINT32 i = 0; i < rhs.picInfoList->GetSize(); i++)
        {
            CustomMultiPicItemInfo picItem = { 0 };
            rhs.picInfoList->GetItem(i, picItem);
            this->picInfoList->PushBack(picItem);
        }
        return *this;
    }

    CustomMultiPicInfo()
    {
        picInfoList = HwmList<CustomMultiPicItemInfo>::CreateList();
    }

    ~CustomMultiPicInfo()
    {
        HwmList<CustomMultiPicItemInfo>::DestroyList(picInfoList);
    }
};

typedef enum tagAudioDeviceErrCode
{
    AUDIO_DEVICE_ERR_NOTIFY_OK = 0,                            /**< 成功 */
    AUDIO_DEVICE_ERR_NOTIFY_NODATA_RESTART_FAILED = 1,         /**< 音频设备无数据，重启失败 */
    AUDIO_DEVICE_ERR_NOTIFY_UNKNOW = 0x2011,                   /**< 未知错误 */
    AUDIO_DEVICE_ERR_NOTIFY_NO_DEVICE = 0x2018,                /**< 没有设备 */
    AUDIO_DEVICE_ERR_NOTIFY_ON_EXCLUSIVE_MODE = 0x2020,        /**< 音频设备处于独占模式，且被其他应用独占，可以通知用户取消独占模式   */
    AUDIO_DEVICE_ERR_NOTIFY_ACCESS_DENIED = 0x2021,            /**< 音频设备API无法访问，可能是设备隐私权限设置问题，由于驱动问题或者防火墙设置的问题 */
    AUDIO_DEVICE_ERR_NOTIFY_ENDPOINT_CREATE_FAILED = 0x2022,   /**< 音频设备API终端创建失败，音频设备被拔出，或者已重新配置，禁用，删除了音频硬件或关联的硬件资源不可用。使用其他音频设备，重启或者更新驱动 */
    AUDIO_DEVICE_ERR_NOTIFY_MMSYSERR_INVALPARAM = 0x2023,      /**< 音频设备API非法参数，目前已知是杀毒软件导致 */
    AUDIO_DEVICE_ERR_NOTIFY_MMSYSERR_NODRIVER = 0x2024,        /**< 音频设备API返回无驱动，需要用户升级驱动 */
    AUDIO_DEVICE_ERR_NOTIFY_AUDIO_SERVER_NOT_RUNNING = 0x2025, /**< 用户windows audio服务未启动，或者启动失败 */
} AudioDeviceErrCode;

/**
* [en]This struct is used to describe pair request info
* [cn]音频设备错误信息
* @mobile:disable
* @mac:disable
*/
typedef struct tagAudioErrorNotifyInfo
{
    AudioDeviceErrCode iErrCode;               /**< [en]errocde. [cn]错误码 */
    DeviceType iAudioDevice;                 /**< [en]0 is speaker, 1 is microphone. [cn]1是扬声器，0是麦克风 */
}AudioErrorNotifyInfo;


/**
* [en]commercial status type.
* [cn]商用资源状态类型
*/
typedef enum tagCommercialStatusType
{
    COMMERCIAL_STATUS_INACTIVE = 0,            /**< [en]Indicates commercial inactive. [cn]未激活 */
    COMMERCIAL_STATUS_ACTIVATE                 /**< [en]Indicates commercial activate. [cn]已激活 */
    
}CommercialStatusType;

/**
* [en]client Capabilities.
* [cn]客户端能力集
*/
typedef struct tagSupportCapability
{
    HWM_BOOL isSupportCohosts;                         /**< [en]is support cohosts. [cn]联席主持人 */
    HWM_BOOL isSupportInviteSharing;                   /**< [en]is support invite sharing. [cn]邀请共享 */
    HWM_BOOL isSupportSwitchGuestAudience;             /**< [en]is support switch guest audience. [cn]嘉宾观众切换 */
    HWM_BOOL isSupportWaitingRoom;                     /**< [en]is support waiting room. [cn]等候室 */
    HWM_BOOL isSupportInviteTurnOnMicrophone;          /**< [en]is support invite to turn on the microphone. [cn]邀请打开麦克风 */
    HWM_BOOL isSupportInviteOpenCamera;                /**< [en]is support invite to open the camera. [cn]邀请打开摄像头 */
    HWM_BOOL isSupportPrivateChat;                     /**< [en]is support private chat. [cn]私聊 */
    HWM_BOOL isSupportClientLocalRecording;            /**< [en]is support client local recording. [cn]客户端本地录制 */
    HWM_BOOL isSupportChairmanCloseCamera;             /**< [en]is support chairman close camera. [cn]主持人关闭摄像头 */
    HWM_BOOL isSupportGuestWaiting;                    /**< [en]is support guest waiting. [cn]支持来宾会前等待 */
    HWM_CHAR resolve[HWM_RESOLVE_LEN];                  /**< [en]resolve [cn]预留128位resolve */
}SupportCapability;

/**
* [en]invite open mic type.
* [cn]邀请开麦类型
*/
typedef enum tagInviteOpenMicType
{
    OPEN_MIC_COMMON = 0,     /**< [en]Indicates open mic common. [cn]普通开麦 */
    OPEN_MIC_ROLLCALL,       /**< [en]Indicates open mic rollcall. [cn]点名开麦 */
    OPEN_MIC_CHAIR,          /**< [en]Indicates open mic be chairman. [cn]申请或转移主持人开麦 */
    OPEN_MIC_MUTE_ALL,       /**< [en]Indicates mute/unmute all operate. [cn]全场静音/取消静音操作 */
}InviteOpenMicType;

typedef enum tagAudioFrameType {
    AUDIO_FRAME_TYPE_PCM16
} AudioFrameType;

/**
* [en]invite open mic type.
* [cn]上报音频码流帧数据
* @mobile:disable
*/
typedef struct tagAudioFrameData
{
    AudioFrameType eFrameType;          /**< [en]Indicates frameType.[cn]音频帧类型 */
    HWM_INT32 iSamples;                 /**< [en]Indicates samples.[cn]每个声道的采样点数,iSamples=iSamplesPerSec * 10ms /1000 */
    HWM_INT32 iSamplesPerSec;           /**< [en]Indicates samplesPerSec.[cn] 采样率*/
    HWM_INT32 iBytesPerSample;          /**< [en]Indicates bytesPerSample.[cn]每个采样点的字节数,pcm数据一般16bit */
    HWM_INT32 iChannels;                /**< [en]Indicates channels.[cn]声道数 */
    HWM_UCHAR *pBuffer;                 /**< [en]Indicates buffer.[cn]数据缓冲区,长度=iSamples*iBytesPerSample*iChannels */
    HWM_INT32 uiDataLen;                /**< [en]Indicates data length.[cn]编码后或解码前使用该字段表示数据长度，加解密处理后需更新此字段值 */
    HWM_INT32 uiBufferLen;              /**< [length for pBuffer][en]Indicates pBuffer length.[cn]缓冲区长度，编码后数据进行第三方加密，数据长度会变大，防止溢出 */
} AudioFrameData;


typedef enum VideoImageFormat {
    VIDEO_IMAGE_FORMAT_YUV420P,         /**< [en]Indicates yuv 420P.[cn]yuv 420P格式 */
    VIDEO_IMAGE_FORMAT_YUV422I,         /**< [en]Indicates yuv 422I.[cn]yuv 422I格式 */
    VIDEO_IMAGE_FORMAT_RGB24,           /**< [en]Indicates yuv RGB24.[cn]yuv RGB24格式 */
    VIDEO_IMAGE_FORMAT_RGBA,            /**< [en]Indicates yuv RGBA.[cn]yuv RGBA格式 */
    VIDEO_IMAGE_FORMAT_BGRA             /**< [en]Indicates yuv BGRA.[cn]yuv BGRA格式 */
} VideoImageFormat;


typedef struct tagVideoFrameData
{
    VideoImageFormat format;
    HWM_UINT32 width;
    HWM_UINT32 height;
    HWM_UCHAR * data;
    HWM_UINT32 dataLen;  /**< [length for data][en]Indicates data length.[cn]缓冲区长度 */
} VideoFrameData;

// 本地录制操作类型
typedef enum tagLocalRecordOperation {
    LOCAL_RECORD_OPERATION_START,  // 已开始
    LOCAL_RECORD_OPERATION_STOPED,   // 已停止
    LOCAL_RECORD_OPERATION_PAUSED,   // 已暂停
    LOCAL_RECORD_OPERATION_RESUMED,  // 继续
} LocalRecordOperation;

// 结束本地录制的原因
typedef enum tagStopLocalRecordReason {
    STOP_LOCAL_RECORD_INPUT_UI,                     // UI调用nativeSdk接口触发
    STOP_LOCAL_RECORD_LEAVE_CONF,                   // 离开会议导致本地录制结束
    STOP_LOCAL_RECORD_ROLE_CHANGED,                 // 角色转换导致本地录制结束
    STOP_LOCAL_RECORD_DISK_SPACE_NOT_ENOUGH,        // 磁盘空间不足导致录制结束
    STOP_LOCAL_RECORD_CREATE_FILE_FAILED,           // 生成录制文件失败导致录制结束
    STOP_LOCAL_RECORD_AUDIO_FRAME_EMPTY,            // 未收到音频流导致录制结束
    STOP_LOCAL_RECORD_ALLOCATE_BUFFER_FAILED,       // 内存申请失败导致录制结束
    STOP_LOCAL_RECORD_MOVETO_WAITINGROOM,           // 移入等候室导致录制结束
} StopLocalRecordReason;

typedef struct tagBookCycleConfParam
{
    BookConfParam bookConfParam;                /**< [en] [cn]预约会议参数
                                                     [cs_allowNull:Y]*/
    CycleConfParam cycleParam;                  /**< [en]Indicates sub conference param. [cn]子会议参数
                                                     [cs_allowNull:N]*/
}BookCycleConfParam;

typedef struct tagModifyCycleConfParam
{
    ModifyConfParam modifyConfParam;            /**< [en] [cn]编辑会议参数
                                                     [cs_allowNull:Y] */
    CycleConfParam cycleParam;                  /**< [en]Indicates sub conference param. [cn]子会议参数
                                                     [cs_allowNull:N]*/
}ModifyCycleConfParam;

/**
* [en]Modify sub cycle conf param
* [cn]编辑周期子会议参数
*/
typedef struct tagModifySubCycleConfParam
{
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];                 /**< [en]Indicates conference id. [cn]会议id 
                                                               [cs_allowNull:N]*/
    HWM_CHAR subConfID[HWM_MAX_CONF_UUID_LEN];              /**< [en]Indicates conference uuid. [cn]子会议唯一标识UUID
                                                               [cs_allowNull:N]*/
    ConfMediaType confMediaType;                          /**< [en]Indicates media type [cn]会议媒体类型 
                                                               [cs_allowNull:Y] */
    HWM_INT64 startTime;                                  /**< [en]Indicates conference start time, . [cn]会议开始时间（UTC时间），单位为秒。
                                                               [cs_allowNull:Y] */
    HWM_UINT32 confLen;                                   /**< [en]Indicates conference length of time, unit is minute  ,this param is optional. [cn]可选，会议持续时长，单位分钟
                                                               [cs_allowNull:Y] */
    HWM_BOOL isAutoRecord;                                /**< [en]Indicates whether record automatically when conference begin. [cn]会议开始后是否自动开启录制
                                                               [cs_allowNull:Y] */
    HWM_UINT32 recordAuthType;                            /**< [en]Indicates record auth type. [cn]录播鉴权方式  0:可通过连接观看/下载（不拼接nonce）1:企业用户可观看/下载 2:与会者可观看/下载 
                                                               [cs_allowNull:Y] */
    ConfAllowJoinUserType callInRestriction;              /**< [en]Indicates call in restriction. [cn]呼入限制 
                                                               [cs_allowNull:Y] */
    HWM_BOOL allowGuestStartConf;                         /**< [en]Indicates whether is allow guest start conf.[cn]是否允许来宾提前启动会议
                                                               [cs_allowNull:Y]*/
    HWM_INT32 allowGuestStartConfTime;                    /**< [en]Indicates join before host time.[cn]允许来宾提前入会时间范围(单位：分钟) 0-随时，n-提前n分钟启动会议
                                                               [cs_allowNull:Y]*/
}ModifySubCycleConfParam;

typedef struct tagCancelSubCycleConfParam
{
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];                 /**< [en]Indicates conference id. [cn]会议id
                                                               [cs_allowNull:N]*/
    HWM_CHAR subConfUUID[HWM_MAX_CONF_UUID_LEN];          /**< [en]Indicates sub conference uuid. [cn]子会议UUID
                                                               [cs_allowNull:N]*/
    HWM_BOOL endOnlineConf;                               /**< [en]Indicates is end online conf. [cn]是否需要结束在线会议
                                                               [cs_allowNull:N]*/
}CancelSubCycleConfParam;

typedef struct tagCancelCycleConfParam
{
    HWM_CHAR confId[HWM_MAX_CONF_ID_LEN];                 /**< [en]Indicates conference id. [cn]会议id
                                                               [cs_allowNull:N]*/
    HWM_BOOL endOnlineConf;                               /**< [en]Indicates is end online conf. [cn]是否需要结束在线会议
                                                               [cs_allowNull:N]*/
}CancelCycleConfParam;


typedef enum tagTargetLanguageType
{
    SUBTITLE_LANGUAGE_DEFAULT = 0,       /**<  [en]Indicates is default lan. [cn]默认不翻译*/
    SUBTITLE_LANGUAGE_CN,            /**<  [en]Indicates is Chinese lan. [cn]中文*/
    SUBTITLE_LANGUAGE_EN,            /**<  [en]Indicates is English lan. [cn]英文*/
    SUBTITLE_LANGUAGE_GE,            /**<  [en]Indicates is Germany lan. [cn]德文*/
}TargetLanguageType;

/**
* [en]This struct is used to describe conference sensitive word info.
* [cn]会中敏感词信息
*/
typedef struct tagSensitiveWordInfo
{
    HWM_CHAR sensitiveWords[HWM_MAX_SENSITIVE_WORD_LEN];    /**<  [en]Indicates is sensitive words.       [cn]敏感词*/
    ConfSupportLanguageType  langType;                      /**<  [en]Indicates is language type.         [cn]配置的敏感词语言类型*/
}SensitiveWordInfo;

typedef struct tagSensitiveWordList
{
    HWM_UINT32 sensitiveWordListSize;                       /**<  [length for sensitiveWordList][en]Indicates is sensitive word list size. [cn]敏感词列表的长度*/
    SensitiveWordInfo* sensitiveWordList;                   /**<  [en]Indicates is sensitive word list. [cn]敏感词列表*/
}SensitiveWordList;

typedef enum ChatPermission {
    CHAT_PERMISSION_FORBIDDEN_ALL =1,         /**< [en]Indicates forbidden all[cn]全员禁止*/
    CHAT_PERMISSION_PRIVATE_ONLY,          /**< [en]Indicates private only[cn]仅允许私聊 */
    CHAT_PERMISSION_PUBLIC_ONLY,           /**< [en]Indicates public only[cn]仅允许公开聊天 */
    CHAT_PERMISSION_FREE_TALK,             /**< [en]Indicates free talk[cn]允许自由聊天 */
} ChatPermission;

typedef enum AnnotationPermission {
    ANNOTATION_PERMISSION_ALL = 0,         /**< [en]Indicates allow all[cn]全员允许*/
    ANNOTATION_PERMISSION_SHARER_ONLY,     /**< [en]Indicates Sharer only[cn]仅允许共享者 */
} AnnotationPermission;

#pragma pack(pop)
END_HWM_SDK_NAMESPACE
#endif /* __HWM_CONF_SERVICE_DEF_H__ */
