/**
 * @file HwmConfServiceDef.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */


#ifndef __HWM_PRIVATE_CONF_SERVICE_SHARE_DEF_H__
#define __HWM_PRIVATE_CONF_SERVICE_SHARE_DEF_H__

#import "HwmConfServiceDef.h"

BEGIN_HWM_SDK_NAMESPACE

/**
 * [en]This enumeration is used to describe the pen styles.
 * [cn]画笔样式
 * @mobile:disable
 */
typedef enum tagPenStyle
{
    PEN_STYLE_SOLID = 0,      /**< [en]Indicates the entity pen.
                                                     [cn]实体笔
                                                     [ios:rename:Solid] */
    PEN_STYLE_DASH,           /**< [en]Indicates the dash pen.
                                                     [cn]虚线笔
                                                     [ios:rename:Dash] */
    PEN_STYLE_DOT,            /**< [en]Indicates the dot pen.
                                                     [cn]点笔
                                                     [ios:rename:Dot] */
    PEN_STYLE_DASH_DOT,       /**< [en]Indicates the dash dot pen.
                                                     [cn]虚线点笔
                                                     [ios:rename:DashDot] */
    PEN_STYLE_DASH_DOT_DOT,   /**< [en]Indicates the dash dot dot pen.
                                                     [cn]虚线点点笔
                                                     [ios:rename:DashDotDot] */
    PEN_STYLE_ORDINARY,       /**< [en]Indicates an ordinary pen.
                                                     [cn]普通画笔
                                                     [ios:rename:Ordinary] */
    PEN_STYLE_INSIDE_FRAME,   /**< [en]Indicates the inside frame pen.
                                                     [cn]内框笔
                                                     [ios:rename:InsideFrame] */
    PEN_STYLE_USER_STYLE,     /**< [en]Indicates the user to customize the pen.
                                                     [cn]用户自定义笔
                                                     [ios:rename:UserStyle] */
    PEN_STYLE_ALTERNATE,      /**< [en]Indicates the alternate pen.
                                                     [cn]间隔线笔
                                                     [ios:rename:Alternate] */
    PEN_STYLE_BUTT            /**< [ios:rename:Butt] */
}PenStyle;


/**
 * [en]This enumeration is used to describe the brush styles.
 * [cn]画刷样式
 * @mobile:disable
 */
typedef enum tagBrushStyle
{
    BRUSH_NULL = 0,       /**< [en]Indicates empty brush.
                                                 [cn]空画刷
                                                 [ios:rename:Null] */
    BRUSH_SOLID,          /**< [en]Indicates solid brush.
                                                 [cn]实体画刷
                                                 [ios:rename:Solid] */
    BRUSH_GRADIENT,       /**< [en]Indicates gradient brush.
                                                 [cn]渐变画刷
                                                 [ios:rename:Gradient] */
    BRUSH_HATCH,          /**< [en]Indicates hatch brush.
                                                 [cn]阴影画刷
                                                 [ios:rename:Hatch] */
    BRUSH_PATTERN,        /**< [en]Indicates pattern brush.
                                                 [cn]图形画刷
                                                 [ios:rename:Pattern] */
    BRUSH_BUTT            /**< [ios:rename:Butt] */
}BrushStyle;



/**
 * [en]This enumeration is used to describe annotation hit test mode.
 * [cn]标注的点击测试模式
 * @mobile:disable
 */
typedef enum tagHitTestMode
{
    HIT_TEST_ALL = 0,           /**< [en]Indicates all annotation in the region
                                                       [cn]区域内的全部标注
                                                       [ios:rename:All] */     //[注意]tup的起始值为1
    HIT_TEST_OTHERS,            /**< [en]Indicates all annotation except someone
                                                       [cn]除某人外的全部标注
                                                       [ios:rename:Others] */
    HIT_TEST_SOMEONE,           /**< [en]Indicates someone's annotation
                                                       [cn]某人的标注
                                                       [ios:rename:Someone] */
    HIT_TSET_MODE_BUTT          /**< [ios:rename:Butt] */
}HitTestMode;

/**
* [en]This enumeration is used to describe start app share result.
* [cn]程序共享结果
* @mobile:disable
*/
typedef struct tagStartAppShareResultInfo
{
    HWM_BOOL allowSetShareStrategy;         /**< [en]Indicates xxxx.
                                                 [cn]是否允许设置共享策略 */
    AttendeeInfo shareOwner;             /**< [en]Indicates xxxx.
                                                 [cn]共享Owner，理论上不需要此字段，待确认后若无需要再删除 */
}StartAppShareResultInfo;

/**
* [en]This struct is used to describe start monitor share result.
* [cn]屏幕共享结果
* @mobile:disable
*/
typedef struct tagStartMonitorShareResultInfo
{
    HWM_BOOL allowSetShareStrategy;         /**< [en]Indicates xxxx.
                                                 [cn]是否允许设置共享策略 */
    AttendeeInfo shareOwner;             /**< [en]Indicates xxxx.
                                                 [cn]共享Owner，理论上不需要此字段，待确认后若无需要再删除 */
}StartMonitorShareResultInfo;

/**
* [en]This struct is used to describe start app share param.
* [cn]程序共享参数
* @mobile:disable
*/
typedef struct tagAppSharingInfo
{
    AttendeeInfo owner;                  /**< [en]Indicates xxxx.
                                                 [cn]共享Owner */
    ClientDeviceType deviceType;                  /**< [en]Indicates xxxx.
                                                 [cn]共享设备类型 */ //TODO 需要确认包含哪些类型，需要定义一个枚举
    HWM_INT32 originalWidth;                /**< [en]Indicates xxxx.
                                                 [cn]共享侧图像原始宽度 */
    HWM_INT32 originalHeight;               /**< [en]Indicates xxxx.
                                                 [cn]共享侧图像原始高度 */
    HWM_BOOL allowSetShareStrategy;         /**< [en]Indicates xxxx.
                                                 [cn]是否允许设置共享策略 */
    HWM_BOOL allowAnnotation;               /**< [en]Indicates xxxx.
                                                 [cn]是否允许标注 */
    HWM_BOOL hasAnnotation;                 /**< [en]Indicates xxxx.
                                                 [cn]是否有标注在共享中 */
}AppSharingInfo;

/**
* [en]This enumeration is used to describe sharing info.
* [cn]屏幕共享通知
* @mobile:disable
*/
typedef struct tagMonitorSharingInfo
{
    AttendeeInfo owner;                  /**< [en]Indicates xxxx.
                                                 [cn]共享Owner */
    HWM_UINT32 deviceType;                  /**< [en]Indicates xxxx.
                                                 [cn]共享设备类型 */ //TODO 需要确认包含哪些类型，需要定义一个枚举
    HWM_INT32 originalWidth;                /**< [en]Indicates xxxx.
                                                 [cn]共享侧图像原始宽度 */
    HWM_INT32 originalHeight;               /**< [en]Indicates xxxx.
                                                 [cn]共享侧图像原始高度 */
    HWM_BOOL allowSetShareStrategy;         /**< [en]Indicates xxxx.
                                                 [cn]是否允许设置共享策略 */
    HWM_BOOL allowRemoteCtrl;               /**< [en]Indicates xxxx.
                                                 [cn]是否允许远程控制 */
    HWM_BOOL allowAnnotation;               /**< [en]Indicates xxxx.
                                                 [cn]是否允许标注 */
    HWM_BOOL hasAnnotation;                 /**< [en]Indicates xxxx.
                                                 [cn]是否有标注在共享中 */
}MonitorSharingInfo;

/**
* [en]This enumeration is used to describe board sharing info.
* [cn]白板共享信息
* @mobile:disable
*/
typedef struct tagWhiteBoardSharingInfo
{
    AttendeeInfo owner;                  /**< [en]Indicates xxxx.
                                                 [cn]共享Owner */
}WhiteBoardSharingInfo;

/**
* [en]This structure is used to describe remote control type.
* [cn]远程控制类型
* @mobile:disable
*/
typedef enum tagRemoteControlType
{
    REMOTE_CONTROL_GET = 0,   //获得别人的共享权限
    REMOTE_CONTROL_DEL,       //权限释放
    REMOTE_CONTROL_BE_REJECT, //申请权限被拒绝
    REMOTE_CONTROL_REQUEST    //请求权限
}RemoteControlType;

/**
* [en]This structure is used to describe the remote control status information.
* [cn]远程控制状态信息
* @mobile:disable
*/
typedef struct tagRemoteControlStatusInfo
{
    RemoteControlType msgType;
    AttendeeInfo peerInfo;
} RemoteControlStatusInfo;



/**
 * [en]This structure is used to describe the application window information.
 * [cn]应用程序窗口信息
 * @mobile:disable
 */
typedef struct tagAppWndInfo
{
    HWM_HWND hwnd;                                       /**< [en]Indicates the application window handle.
                                                                         [cn]应用程序窗口句柄 */
    HWM_WCHAR title[HWM_MAX_APP_WND_TITLE_LEN];                                      /**< [en]Indicates the window title.
                                                                         [cn]窗口名称 */ //TBD:为什么是U16的，是否可以转换UTF-8 的CHAR
    HWM_PTR smallIconHwnd;                                   /**< [en]Indicates the icon handle.
                                                                         [cn]ICON图标Handle */
}AppWndInfo;

/**
* [en]This structure type is used to describe the collection of app wnd info.
* [cn]程序列表信息
* @mobile:disable
*/
typedef struct tagAppWndSet
{
    HWM_UINT32 numOfAppWndInfo;

    AppWndInfo appWndInfos[HWM_MAX_APP_WND_NUM];

}AppWndSet;

/**
 * [en]This structure type is used to describe the definition of a generic point.
 * [cn]通用点的定义
 * @mobile:disable
 */
typedef struct tagPointInfo
{
    HWM_INT32 x;                                                   /**< [en]Indicates the x coordinate.
                                                                         [cn]x坐标 */
    HWM_INT32 y;                                                   /**< [en]Indicates the x coordinate.
                                                                         [cn]y坐标*/
}PointInfo;


/**
 * [en]This structure type is used to describe the generic size definition.
 * [cn]通用尺寸定义
 * @mobile:disable
 */
typedef struct tagSizeInfo
{
    HWM_INT32 width;                                               /**< [en]Indicates the width.
                                                                         [cn]宽 */
    HWM_INT32 height;                                              /**< [en]Indicates height.
                                                                         [cn]高*/
}SizeInfo;


/**
 * [en]This structure is used to describe the rectangular definition (top, bottom, left and right coordinates).
 * [cn]矩形定义 （上下左右坐标表示）
 * @mobile:disable
 */
typedef struct tagRectInfo
{
    HWM_INT32 left;                                                /**< [en]Indicates the x coordinate of the left side of the rectangle.
                                                                         [cn]矩形左侧x坐标 */
    HWM_INT32 top;                                                 /**< [en]Indicates the top y coordinate of the rectangle.
                                                                         [cn]矩形顶部y坐标 */
    HWM_INT32 right;                                               /**< [en]Indicates the x coordinate of the right side of the rectangle.
                                                                         [cn]矩形右侧x坐标 */
    HWM_INT32 bottom;                                              /**< [en]Indicates the lower y coordinate of the rectangle.
                                                                         [cn]矩形下部y坐标 */
}RectInfo;

/**
* [en]This structure is used to describe the pen width level.
* [cn]画笔宽度等级
* @mobile:disable
*/
typedef enum tagPenWidthLevelType
{
    PEN_WIDTHLEVEL_1 = 1,
    PEN_WIDTHLEVEL_2 = 2,
    PEN_WIDTHLEVEL_3 = 3,
    PEN_WIDTHLEVEL_4 = 4,
}PenWidthLevelType;

/**
 * [en]This structure is used to describe the pen property information.
 * [cn]画笔属性信息
 * @mobile:disable
 */
typedef struct tagPenInfo
{
    PenStyle style;                              /**< [en]Indicates pen style.
                                                                         [cn]画笔样式 */
    HWM_UINT32 color;                                              /**< [en]Indicates the color value, 0xRRGGBBAA said.
                                                                         [cn]颜色(RGBA)，0xRRGGBBAA表示 */
    HWM_INT32 width;                                               /**< [en]Indicates pen width.
                                                                         [cn]画笔宽度 */
    PenWidthLevelType widthLevel; /**< [en]Indicates pen width. [cn]画笔等级宽度 */
}PenInfo;



/**
 * [en]This structure is used to describe the brush property information.
 * [cn]画刷属性信息
 * @mobile:disable
 */
typedef struct tagBrushInfo
{
    BrushStyle style;                            /**< [en]Indicates brush style.
                                                                         [cn]画刷样式 */
    HWM_UINT32 color;                                              /**< [en]Indicates the color value, 0xRRGGBBAA said.
                                                                         [cn]颜色(RGBA)，0xRRGGBBAA表示 */
}BrushInfo;



/**
 * [en]This structure is used to describe annotation hit test point info.
 * [cn]标注点测试信息
 * @mobile:disable
 */
typedef struct tagHitTestPointParam
{
    PointInfo point;                                             /**< [en]Indicates point, unit is TWIPS, and must not be scaled with respect to the origin of the page.
                                                                         [cn]要判断的点，以TWIPS以单位，且必须是相对于页面原点无缩放的坐标 */
    HitTestMode hitTestMode;                  /**< [en]Indicates hit test mode.
                                                                         [cn]测试模式 */
}HitTestPointParam;



/**
 * [en]This structure is used to describe annotation hit test line info.
 * [cn]标注线条测试信息
 * @mobile:disable
 */
typedef struct tagHitTestLineParam
{
    PointInfo startPoint;                                       /**< [en]Indicates start point.
                                                                         [cn]起始点 */
    PointInfo endPoint;                                         /**< [en]Indicates end point.
                                                                         [cn]结束点 */
    HitTestMode hitTestMode;                  /**< [en]Indicates hit test mode.
                                                                         [cn]测试模式 */
}HitTestLineParam;


/**
 * [en]This structure is used to describe annotation hit test rect info.
 * [cn]标注矩形框测试信息
 * @mobile:disable
 */
typedef struct tagHitTestRectParam
{
    RectInfo rectArea;                              /**< [en]Indicates rectangle area for test.
                                                                         [cn]要测试的矩形区域 */
    HitTestMode hitTestMode;                        /**< [en]Indicates hit test mode.
                                                                         [cn]测试模式 */
}HitTestRectParam;


/**
* [en]This structure is used to describe annotation details.
* [cn]标注信息
* @mobile:disable
*/
typedef struct tagAnnotationSet
{
    HWM_UINT32 numOfAnnotationId;                                   /**< [en]Indicates xxxxx.
                                                                         [cn]xxxx */
    HWM_UINT32 annotationIds[HWM_MAX_ANNOTATION_NUM];               /**< [en]xxxx.
                                                                         [cn]xxxx */
}AnnotationSet;


/**
 * [en]This structure is used to describe document page details.
 * [cn]文档页面详细信息
 * @mobile:disable
 */
typedef struct tagPageInfo
{
   
    HWM_INT32 pageIndex;                                          /**< [en]Indicates page index.
                                                                         [cn]页面索引 */
    HWM_INT32 width;                                               /**< [en]Indicates the current page width.
                                                                         [cn]当前页的宽 */
    HWM_INT32 height;                                              /**< [en]Indicates the current page height.
                                                                         [cn]当前页的高 */
    HWM_INT32 orgX;                                               /**< [en]Indicates the start X of the page on the server.
                                                                         [cn]该页起点X会标 */
    HWM_INT32 orgY;                                               /**< [en]Indicates the start Y of the page on the server.
                                                                         [cn]该页起点Y会标 */
    HWM_FLOAT zoomPercent;                                        /**< [en]Indicates the scale of the page.
                                                                         [cn]该页的缩放比例 */
    
}PageInfo;

/**
* [en]This structure is used to describe data member info.
* [cn]数据会议成员信息
* @mobile:disable
*/
typedef struct tagDataMemberInfo
{
    HWM_UINT32 dataUserId; /**< [en][cn]数据会议userId */
    HWM_UINT32 videoUserId; /**< [en][cn]音视频会议userId */
    HWM_UINT32 deviceType;
    HWM_CHAR userName[HWM_MAX_NAME_LEN]; /**  [cs_sensitive:name] */
    HWM_CHAR userUri[HWM_MAX_URL_LEN];
    HWM_BOOL isSelf;
    HWM_BOOL isControlling;
    HWM_BOOL hasRemoteControlCapacity;
}DataMemberInfo;

/**
* [en]This structure is used to describe screen share info.
* [cn]屏幕共享信息
* @mobile:disable
*/
typedef struct tagScreenShareInfo
{
    HWM_UINT32 confHandle;
    HWM_UINT32 selfUserId;
    HWM_BOOL isAppShare;
    HWM_BOOL isControlForbidden;
    HWM_BOOL isAnnoForbidden;
    HWM_BOOL isSupportShareStrategy;
    HWM_CHAR shareOwnerName[HWM_MAX_NAME_LEN]; /**<  [cs_sensitive:name] >*/
    HWM_UINT32 shareDeviceType;
    HWM_CHAR shareOwnerUri[HWM_MAX_URL_LEN];
    HWM_UINT32 shareUserId;
    HWM_INT32 orginalWidth;
    HWM_INT32 originalHeight;
    HWM_BOOL hasAnno;
    HWM_HWND shareWnd;
    HWM_BOOL hasRemoteControlCapacity;
}ScreenShareInfo;

/**
* [en]This structure is used to describe share white board info.
* [cn]白板共享信息
* @mobile:disable
*/
typedef struct tagWhiteBoardInfo
{
    HWM_UINT32 confHandle;
    HWM_UINT32 docId;
    HWM_UINT32 pageId;
    HWM_UINT32 selfUserId;
    HWM_BOOL isSender;
    HWM_CHAR shareOwnerName[HWM_MAX_NAME_LEN];
    HWM_CHAR shareOwnerUri[HWM_MAX_URL_LEN];
    HWM_UINT32 shareUserId;
    HWM_UINT32 shareDeviceType;
}WhiteBoardInfo;

/**
* [en]This structure is used to describe remote control status info.
* [cn]远程控制状态信息
* @mobile:disable
*/
typedef struct tagRemoteControlStatus
{
    RemoteControlType msgType;    //远程控制类型
    HWM_CHAR number[HWM_MAX_NUMBER_LEN]; //权限所有者号码
    HWM_CHAR name[HWM_MAX_NAME_LEN];     //权限所有者名称
    HWM_BOOL isInControlling;        //当前是否在远程控制别人
    HWM_BOOL isSelf;                 //是否是自己
    HWM_UINT32 userId;               //权限所有者的userid
}RemoteControlStatus;


/**
* [en]This structure is used to describe share reconnect state.
* [cn]数据共享重连状态
* @mobile:disable
*/
typedef enum tagShareReconnectState
{
    SHARE_RECONNECTING,                               //数据会议中网络断开，会议组件正在尝试重连
    SHARE_RECONNECED_SUCCESS,                         //数据会议中网络恢复通知
    SHARE_RECONNECED_FAILED                           //数据会议中网络失败通知
}ShareReconnectState;

/**
* [en]This structure is used to describe sharer PPI information.
* [cn]屏幕共享信息
* @mobile:disable
*/
typedef struct tagPPIInfo
{
    HWM_FLOAT ppiX;      
    HWM_FLOAT ppiY;      
}PPIInfo;

/**
* [en]This structure is used to describe render paint prop information.
* [cn]渲染时偏移量信息
* @mobile:disable
*/
typedef struct tagRenderPaintPropInfo
{
    HWM_FLOAT scale;
    HWM_INT32 offsetX;
    HWM_INT32 offsetY;
}RenderPaintPropInfo;

/**
* [en]This structure is used to describe surface information.
* [cn]缓存区信息
* @mobile:disable
*/
typedef struct tagSurfaceInfo
{
    HWM_UCHAR* hdcData;            
    HWM_UINT16 dataSize;     /**< [length for hdcData][en]Indicates data size. [cn]数据长度 */
}SurfaceInfo;

/**
* [en]This structure is used to describe whiteboard surface information.
* [cn]白板渲染缓存区信息
* @mobile:disable
*/
typedef struct tagWhiteboardSurfaceInfo
{
    HWM_UINT32 width;
    HWM_UINT32 height;
    HWM_UCHAR* hdcData;      /**< [en]whiteboard data. [cn]渲染数据缓存 [cs_allowNull:Y] */
    HWM_UINT32 dataSize;     /**< [length for hdcData][en]Indicates data size. [cn]数据长度 */
}WhiteboardSurfaceInfo;

/**
* [en] This enum type is used to describe notify message
* [cn]通知UI消息类型
* @mobile:disable
*/
typedef enum tagDataConfNotifyMessageType
{
    MESSAGE_OUT_OF_MEMORY = 1,       /**< [en]out of memory notify. [cn]内存不足通知 */ 
    MESSAGE_MONITOR_REMOVED = 2,  /**< [en]monitor moved. [cn]屏幕共享由于显示器被拔出而停止*/ 
}DataConfNotifyMessageType;

END_HWM_SDK_NAMESPACE
#endif /* __HWM_CONF_SERVICE_SHARE_DEF_H__ */
