/**
 * @file HwmPrivateConfServiceShare.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */


#ifndef __HWM_PRIVATE_CONF_SERVICE_SHARE_H__
#define __HWM_PRIVATE_CONF_SERVICE_SHARE_H__


#import "HwmPrivateConfServiceDef.h"
#import "HwmPrivateConfServiceShareDef.h"
BEGIN_HWM_SDK_NAMESPACE

/**
* @brief [en]This class is about xxxx.
*        [cn]会议共享操作类回调
* @mobile:disable
* @private
*/
class HWM_API IHwmPrivateConfShareResultCallback
{
public:
  
};

/**
  * @brief [en]This class is about xxxx.
  *        [cn]会议共享通知类回调
  * @mobile:disable
  * @private
  */
class HWM_API IHwmPrivateConfShareNotifyCallback
{
public:
    /* 共享停止通知 */
    virtual HWM_VOID OnShareStoppedNotify(HWM_BOOL isSender) = 0;

    /* 标注状态通知 */
    virtual HWM_VOID OnShareAnnoStatusChange(HWM_BOOL isOpenAnnotation) = 0;

    /* 正在共享通知 */
    virtual HWM_VOID OnDataSharingNotify(const ScreenShareInfo* sharingInfo) = 0;

    /* 接收白板通知 */
    virtual HWM_VOID OnReceiveWhiteBoardNotify(const WhiteBoardInfo* wbInfo) = 0;

    /* 停止白板的通知 */
    virtual HWM_VOID OnStopWhiteBoardNotify(HWM_BOOL isSender) = 0;

    /* 白板数据通知 */
    virtual HWM_VOID OnWhiteBoardRenderNotify() = 0;

    /* 数据共享失败通知 */
    virtual HWM_VOID OnRecvDataShareFailedNotify() = 0;

    /* 共享远程控制状态通知 */
    virtual HWM_VOID OnShareRemoteControlStatusNotify(const RemoteControlStatus* remoteStatus) = 0;

    /* 数据会议成员名称变化 */
    virtual HWM_VOID OnShareMemberNameChangeNotify(const DataMemberInfo* dataMemberInfo) = 0;

    /* 数据会议通知离会 */
    virtual HWM_VOID OnShareConfLeaveNotify(HWM_UINT32 reason) = 0;

    /* 程序共享遮挡窗口状态通知 */
    virtual HWM_VOID OnShareConfAppSharingStateNotify(HWM_HWND overlapWnd) = 0;

    /* 内存不足共享失败通知 */
    virtual HWM_VOID OnShareOutOfMemoryNotify() = 0;

    /* 加入共享结果通知 */
    virtual HWM_VOID OnJoinConfShareNotify(SDKERR result, const HWM_CHAR* reasonDesc, HWM_UINT32 confHandle, HWM_BOOL isSupportShareStrategy) = 0;

    /* 上报重连的结果 */
    virtual HWM_VOID OnShareReconnectNotify(ShareReconnectState state) = 0;

    /* UI或SDK发起共享结果通知 */
    virtual HWM_VOID OnStartDataShareNotify(SDKERR result, const HWM_CHAR* reasonDesc, const ScreenShareInfo* appShareResultInfo) {};

    /* UI或SDK发起白板结果通知 */
    virtual HWM_VOID OnStartWhiteBoardNotify(SDKERR result, const HWM_CHAR* reasonDesc, const WhiteBoardInfo* wbInfo) {};

    /* 通知UI消息 */
    virtual HWM_VOID OnShareMessageNotify(DataConfNotifyMessageType messageType) {};

};


/**
  * @brief [en]This class is about xxxx.
  *        [cn]会议共享对象
  * @mobile:disable
  * @private
  * @GetInstance
  *        HWM_SDK_NAMESPACE::HwmPrivateNativeSDK::GetPrivateConfShareApi()
  */
class IHwmPrivateConfShare
{
public:

    /**
    * @brief
    * [en]This class is about the global callback for the operating results of setting the conference share.
    * [cn]设置会议共享私有操作类全局回调
    */
    virtual SDKERR SetPrivateConfShareResultCallback(IHwmPrivateConfShareResultCallback* callback) = 0;

    /**
    * @brief
    * [en]This class is about the global callback for the notifications of conference share.
    * [cn]设置会议共享私有通知类全局回调
    */
    virtual SDKERR SetPrivateConfShareNotifyCallback(IHwmPrivateConfShareNotifyCallback* callback) = 0;

    /* 当前是否在数据会议中 */
    virtual HWM_BOOL IsDataInConf() = 0;
    /* 发起共享 */
    virtual SDKERR StartDataShare(HWM_HWND shareHwnd, IN HWM_BOOL isPrimaryMonitor, HWM_BOOL shareAudio, HWM_BOOL isQualityFirst) = 0;
    /* 停止共享 */
    virtual SDKERR StopDataShare(HWM_VOID) = 0;

    /* 设置需要共享的程序 */
    virtual SDKERR SetSharingAppHwnd(HWM_UINT32 handle, HWM_HWND pAppWnd, HWM_BOOL action) = 0;

    /*开启共享标注*/
    virtual SDKERR StartDataShareAnnotation(HWM_VOID) = 0;
    /*停止共享标注*/
    virtual SDKERR StopDataShareAnnotation(HWM_VOID) = 0;
    /*发起白板共享*/
    virtual SDKERR StartWhiteBoard(IN HWM_UINT32 width, IN HWM_UINT32 height, IN HWM_BOOL isPrimaryMonitor, IN HWM_BOOL shareAudio, IN HWM_BOOL isQualityFirst) = 0;
    /*停止白板共享*/
    virtual SDKERR StopDataWhiteBoard(HWM_VOID) = 0;
    /*设置是否有远程控制白板共享能力*/
    virtual SDKERR SetRemoteControlCapacity(IN HWM_BOOL hasCapacity) = 0;

    /* 绑定共享显示窗口 */
    virtual SDKERR AttachHwnd(IN HWM_HWND renderHwnd) = 0;
    /* 解绑共享显示窗口 */
    virtual SDKERR DetachHwnd() = 0;
    /* 设置render视图大小 */
    virtual SDKERR SetRenderViewSize(HWM_INT32 width, HWM_INT32 height) = 0;

    /**
    * @brief
    * [en]This class is about set win prop.
    * [cn]设置window属性
    * @mobile:disable
    */
    virtual SDKERR InputWindowMsg(HWM_UINT32 msgType, IN HWM_ULONG wparam, IN HWM_LONG lparam) = 0;
    /*设置渲染时是否原始大小显示，偏移量*/
    virtual SDKERR SetShareRenderPaintProp(HWM_BOOL isDrawOrigin, HWM_INT32 offsetX, HWM_INT32 offsetY) = 0;

    /**
    * @brief
    * [en]This class is about getting share render paint prop.
    * [cn]获取渲染时是否原始大小显示，偏移量
    * @mobile:disable
    * @paramOut
    */
    virtual SDKERR GetShareRenderPaintProp(OUT RenderPaintPropInfo* paintPropInfo) = 0;

    /**
    * @brief
    * [en]This class is about getting sharer monitor PPI.
    * [cn]获取远端设备PPI
    * @mobile:disable
    * @paramOut
    */
    virtual SDKERR GetSharerMonitorPPI(OUT PPIInfo* ppiInfo) = 0;

    /**
     * 获取本远端缩放比
     * @paramOut
     * @mobile:disable
     * @paramOut
     */
    virtual SDKERR GetShareViewFactor(OUT HWM_FLOAT* viewFactor) = 0;

    /* 请求远程控制当前共享与会者的桌面 */
    virtual SDKERR ReqRemoteControl() = 0;
    /*主动授予或收到请求时授予*/
    virtual SDKERR GrantRemoteControl(IN HWM_UINT32 dataUserId, IN HWM_BOOL isGrant) = 0;
    /*拒绝远程控制 */
    virtual SDKERR RejectRemoteControl() = 0;
    /*回收远程控制*/
    virtual SDKERR RevokeRemoteControl() = 0;

    /*数据会议心跳接口*/
    virtual HWM_VOID HeartBeat() = 0;
    /* 设置指定窗口透明属性 */
    virtual SDKERR SetTransparentWindow(HWM_UPTR  hwnd, HWM_BOOL isTransparent) = 0;
    /* 设置共享策略,质量优先还是流畅性优先 */
    virtual SDKERR SetShareQualityStrategy(HWM_BOOL isQualityFirst) = 0;
    /* 设置是否开启音频共享 */
    virtual SDKERR SetShareAudio(IN HWM_BOOL isOpen) = 0;

    /**
    * @brief
    * [en]This class is about set pen info.
    * [cn]设置画笔
    * @mobile:disable
    */
    virtual SDKERR SetPen(IN const PenInfo* penInfo) = 0;

    /**
    * @brief
    * [en]This class is about set brush info.
    * [cn]设置笔刷
    * @mobile:disable
    */
    virtual SDKERR SetBrush(IN const BrushInfo* brushInfo) = 0;

    /**
    * @brief
    * [en]This class is about start draw annotation.
    * [cn]进行标注划线
    * @mobile:disable
    */
    virtual SDKERR DrawAnnotationStart(IN const PointInfo* point) = 0;

    /**
    * @brief
    * [en]This class is about update draw annotation.
    * [cn]更新标注
    * @mobile:disable
    */
    virtual SDKERR DrawAnnotationUpdate(IN const PointInfo* point) = 0;

    /**
    * @brief
    * [en]This class is about finish draw annotation.
    * [cn]完成标注
    * @mobile:disable
    */
    virtual SDKERR DrawAnnotationDone(HWM_VOID) = 0;

    /**
    * @brief
    * [en]This class is about test rect annotation.
    * [cn]测试矩形点阵
    * @mobile:disable
    * @paramOut
    */
    virtual SDKERR HitTestRectAnnotation(IN const HitTestRectParam* hitTestRect, OUT AnnotationSet *annotationIdSet) = 0;

    /**
    * @brief
    * [en]This class is about test line annotation.
    * [cn]测试线条点阵
    * @mobile:disable
    * @paramOut
    */
    virtual SDKERR HitTestLineAnnotation(IN const HitTestLineParam* hitTestLine, OUT AnnotationSet *annotationIdSet) = 0;

    /**
    * @brief
    * [en]This class is about erase annotation.
    * [cn]擦除标注
    * @mobile:disable
    */
    virtual SDKERR EraseAnnotation(IN const AnnotationSet *annotationIdSet) = 0;
    /* 保存图片 */
    virtual SDKERR SavePic(IN const HWM_CHAR* fileName) = 0;


    /**
    * @brief
    * [en]This class is about set whiteboard canvas size.
    * [cn]设置白板画布大小
    * @mobile:disable
    */
    virtual SDKERR SetWhiteboardCanvasSize(IN const SizeInfo* size) = 0;

    /**
    * @brief
    * [en]This class is about set whiteboard origin.
    * [cn]设置白板原点
    * @mobile:disable
    */
    virtual SDKERR SetWhiteboardOrigin(IN const SizeInfo* size) = 0;

    /**
    * @brief
    * [en]This class is about set whiteboard page info.
    * [cn]设置白板页面信息
    * @mobile:disable
    * @paramOut
    */
    virtual SDKERR GetWhiteboardPageInfo(OUT PageInfo* pageInfo) = 0;

    /**
    * @brief
    * [en]This class is about lock whiteboard surface.
    * [cn]锁定白板渲染缓存区
    * @mobile:disable
    * @paramOut
    */
    virtual SDKERR LockWhiteboardSurface(OUT WhiteboardSurfaceInfo* whiteboardSurfaceInfo) = 0;
    /*解锁白板渲染缓存区*/
    virtual SDKERR UnlockWhiteboardSurface() = 0;

    /**
    * @brief
    * [en]This class is about getting share conf member list.
    * [cn]获取数据会议成员列表
    * @mobile:disable
    * @synchronized
    * @paramOut
    */
    virtual SDKERR GetDataMemberList(OUT HwmList<DataMemberInfo>* memList) = 0;

    /**
     * 获取数据会议与会者人数
     * @paramOut
     * @mobile:disable
     * @paramOut
     */
    virtual SDKERR GetDataMemberCount(OUT HWM_UINT32* len) = 0;

    /* 开启gpu加速 */
    virtual SDKERR SwitchGpuAcceleration(HWM_BOOL isOpen) = 0;

    /**
    * @brief
    * [en]This class is about data share window
    * [cn]数据会议共享界面观看情况
    * @param isWatching [type:HWM_BOOL]
    * [en] indicate user is watching data share window or not
    * [cn] 是否在看数据会议共享界面
    * @param resolutionLevel [type:GeneralWatchResolutionLevel]
    * [en] indicate resolution level of data share window
    * [cn]选看数据会议窗口分辨率
    * @see GeneralWatchResolutionLevel
    *
    * @return [type:SDKERR]
    *
    * @since:v1.0
    */
    virtual SDKERR SetDataShareWatchParam(IN HWM_BOOL isWatching, IN GeneralWatchResolutionLevel resolutionLevel) = 0;

};

END_HWM_SDK_NAMESPACE
#endif /* __HWM_CONF_SERVICE_SHARE_H__ */

