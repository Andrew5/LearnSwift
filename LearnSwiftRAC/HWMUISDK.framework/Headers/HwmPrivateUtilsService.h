/**
 * @file HwmPrivateUtilsService.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */


#ifndef __HWM_PRIVATE_UTILS_SERVICE_H__
#define __HWM_PRIVATE_UTILS_SERVICE_H__

#import "HwmPrivateUtilsServiceDef.h"
#import "HwmPrivateNetworkServiceDef.h"
#import "HwmPrivateConfServiceDef.h"


BEGIN_HWM_SDK_NAMESPACE

class HWM_API IHwmPrivateUtilsResultCallback
{
public:
    /**
    * 网络探测结果
    *
    * @UTCallback 
    */
    virtual HWM_VOID OnNetDetectResult(HWM_UINT32 result, const HWM_CHAR* reasonDesc) = 0;

    /* 获取代理信息操作结果 */
    /**
    * @brief
    * [en]This class is about the result of getting proxy infomation.
    * [cn]获取代理信息操作结果
    * @Callback ["GetProxy","NetworkChange"]
    */
    virtual HWM_VOID OnGetProxyResult(HWM_UINT32 result, const HWM_CHAR* reasonDesc, const HWM_SDK_NAMESPACE::ProxyInfo* proxyInfo) = 0;

};

class HWM_API IHwmPrivateUtilsNotifyCallback
{
public:
    /* 网络探测信息通知 */
    virtual HWM_VOID OnNetDetectInfoNotify(const HWM_SDK_NAMESPACE::UtilsNetDetectResult* utilsNetDetectResult) = 0;
};


/**
* @brief
* [en]This class is about xxxx.
* [cn]SDK 工具类
* @private
*
* @GetInstance HWM_SDK_NAMESPACE::HwmPrivateNativeSDK::GetPrivateUtilsApi()
*/
class IHwmPrivateUtils
{
public:
    /**
    * @brief
    * [en]This class is about the global callbacks of setting login operations class.
    * [cn]设置操作类全局回调
    */
    virtual SDKERR SetPrivateUtilsResultCallback(IN IHwmPrivateUtilsResultCallback* callback) = 0;

    /**
    * @brief
    * [en]This class is about the global notify callbacks.
    * [cn]设置通知类全局回调
    */
    virtual SDKERR SetPrivateUtilsNotifyCallback(IN IHwmPrivateUtilsNotifyCallback* callback) = 0;

    virtual HWM_VOID ConfigCustomParam(IN const HWM_SDK_NAMESPACE::UtilsCustomParam* utilsCustomParam) = 0;

    virtual HWM_VOID ConfigPublicParam(IN const HWM_SDK_NAMESPACE::UtilsPublicParam* utilsPublicParam) = 0;

    /**
    * @UTInterface:disable
    */
    virtual SDKERR AddUserTrack(IN const HWM_SDK_NAMESPACE::UtilSpecialParam* utilsSpecialParam) = 0;

    /**
    * @UTInterface:disable
    */
    virtual SDKERR AddMediaTrack(IN const HWM_SDK_NAMESPACE::UtilSpecialParam* utilsSpecialParam) = 0;

    /**
    * @brief
    * [en]This class is about media track.
    * [cn]会议组件打点接口
    * @private
    * 
    * @UTInterface:disable
    */
    virtual SDKERR AddConfMediaTrack(IN const HWM_UINT32 eventId, IN const HWM_CHAR* trackInfo) = 0;

    /**
    * @UTInterface:disable
    */
    virtual SDKERR StartEvent(IN const HWM_CHAR* eventName) = 0;

    /**
    * @UTInterface:disable
    */
    virtual SDKERR FinishEvent(IN const HWM_CHAR* eventName, IN const HWM_SDK_NAMESPACE::UtilSpecialParam* utilsSpecialParam) = 0;

    virtual SDKERR UploadData(HWM_VOID) = 0;

    /**
    * @brief
    * @mobile:disable
    */
    virtual HWM_VOID SetCpuAndMemoryParam(IN const HWM_SDK_NAMESPACE::UtilsCpuAndMemoryParam* utilsCpuAndMemoryParam) = 0;

    /**
    * @brief
    * @mobile:disable
    */
    virtual SDKERR SetUserInfo(IN const HWM_SDK_NAMESPACE::ProxyInfo* proxyInfo, IN const HWM_CHAR* strServerUrl) = 0;

    virtual SDKERR GetProxy(HWM_VOID) = 0;

    virtual HWM_VOID NetworkChange(IN const HWM_CHAR* localIp) = 0;

    /**
    * @brief
    * [en]This class is about getting device guid.
    * [cn]获取设备guid
    * @synchronized
    * @paramOut
    */
    virtual HWM_VOID GetDeviceGuid(OUT HWM_SDK_NAMESPACE::UtilsDeviceGuid* guidInfo) = 0;

    /**
    * @brief
    * [en]This class is about getting windows country or region data.
    * [cn]获取国家或者区域信息
    * @mobile:disable
    * @mac:disable
    */
    virtual HWM_VOID GetWindowsCountryOrRegionData(OUT CountryOrRegionInfos* countryOrRegionInfos) = 0;

    /**
    * @brief
    *<br>[en]This interface is used to get device active infomation.
    *<br>[cn]获取设备激活信息
    * @private
    * @mobile:disable
    * @paramOut
    */
    virtual SDKERR GetDeviceActiveInfo(IN const HWM_CHAR* phoneNum, IN const HWM_CHAR* code, OUT HWM_SDK_NAMESPACE::UtilsBoardActiveInfos* activeInfos) = 0;

    /**
    * @brief
    *<br>[en]This interface is used to get register infomation.
    *<br>[cn]获取注册信息
    * @private
    * @mobile:disable
    * @paramOut
    */
    virtual SDKERR GetRegInfo(OUT HWM_SDK_NAMESPACE::UtilsRegInfos* regInfo) = 0;

    /**
    * @brief
    *<br>[en]This interface is used to set auto start.
    *<br>[cn]设置开机自启
    * @private
    * @mobile:disable
    */
    virtual SDKERR SetAutoStart(IN HWM_BOOL isAutoStart, IN const HWM_CHAR* exePath) = 0;

    /**
    * @brief
    *<br>[en]This interface is used to get auto start.
    *<br>[cn]获取开机自启
    * @private
    * @mobile:disable
    * @paramOut
    */
    virtual SDKERR GetAutoStart(IN const HWM_CHAR* exePath, OUT HWM_BOOL* isAutoStart) = 0;

    /**
    * @brief
    *<br>[en]This interface is used to verify file integrity.
    *<br>[cn]安装包校验
    * @private
    * @mobile:disable
    * @mac:disable
    */
    virtual SDKERR VerifyFileIntegrity(IN const HWM_CHAR* filePath, IN const HWM_CHAR* certPath, OUT HWM_INT32* inWhere, OUT HWM_INT32* errorCode, OUT HWM_INT32* PKCS7Code) = 0;

    virtual SDKERR HttpSetProxy(IN const HWM_SDK_NAMESPACE::ProxyInfo* proxyInfo) = 0;

    virtual SDKERR HttpProxyConnect(IN HWM_UINT32 fd, IN const HWM_CHAR* addr, IN HWM_UINT32 port) = 0;

    virtual SDKERR SetNetDetectSrvs(IN const HWM_SDK_NAMESPACE::UtilsNetDetectSrvs* utilsNetDetectSrvs) = 0;

    virtual SDKERR SetLocalIp(IN const HWM_CHAR* localIp, IN const HWM_CHAR* localGwIp) = 0;

   /**
    * @brief
    * [en]
    * [cn]网络探测
    *
    * @UTInterface:start
    */
    virtual SDKERR NetDetect(IN HWM_UINT32 snNum) = 0;

    /**
    * @brief
    * [en]This interface is used to query config cache data by key.
    * [cn]根据键值查询配置数据
    * @param [out] UtilsConfigCache* dataList  <br>[en]Indicates the parm of query result.
    *                                          <br>[cn]查询到的配置数据
    * @param [in][out] int* retLen             <br>[en]Indicates the parm of query data length.
    *                                          <br>[cn]作为入参，表示分配dataList的长度；作为出参，表示查询到的配置数据个数
    * @mobile:disable
    * @synchronized
    * @paramOut
    * 
    * @UTInterface:disable
    */
    virtual SDKERR QueryConfigCacheByKey(IN const HWM_CHAR* key, IN HWM_INT32 retLen, OUT HwmList<HWM_SDK_NAMESPACE::UtilsConfigCache>* dataList) = 0;

    /**
    * @brief                               
    *<br>[en]This interface is used to single add config cache data.      
    *<br>[cn]单个存配置数据
    * @mobile:disable
    */
    virtual SDKERR SingleAddConfigCache(IN const HWM_SDK_NAMESPACE::UtilsConfigCache* data) = 0;

    /**
    * @brief
    *<br>[en]This interface is used to encrypt base64 encode.
    *<br>[cn]base64编码加密
    * @mobile:disable
    * @mac:disable
    * @paramOut:encryptText
    * 
    * @UTInterface:disable
    */
    virtual SDKERR EncryptThenBase64Encode(IN const HWM_CHAR* plainText, OUT HWM_CHAR* encryptText, IN const HWM_UINT32 encryptTextLen) = 0;

	/**
	* @brief
	*<br>[en]This interface is used to encrypt base64 encode.
	*<br>[cn]base64编码解密
	* @mobile:disable
	* @mac:disable
	* @paramOut:plainText
    *
    * @UTInterface:disable
	*/
	virtual SDKERR Base64DecodeThenDecrypt(IN const HWM_CHAR* ciphertext, OUT HWM_CHAR* plainText, IN const HWM_UINT32 plainTextTextLen) = 0;

	/**
	* @brief
	*<br>[en]This interface is used to print begin auto test log.
	*<br>[cn]打印自动化测试开始日志
	* @param testCaseID [type:HWM_CHAR][cs_allowNull:N]
	* [en]
	* [cn] 用例ID
	* @ios:disable
	* @mac:disable
	* @pc:disable
	*/
	virtual SDKERR AutoTestBegin(IN const HWM_CHAR* testCaseID) { return SDKERR::SDKERR_SUCCESS; }

	/**
	* @brief
	*<br>[en]This interface is used to print end auto test log.
	*<br>[cn]打印自动测试结束日志
	* @param testCaseID [type:HWM_CHAR][cs_allowNull:N]
	* [en]
	* [cn] 用例ID
	* @ios:disable
	* @mac:disable
	* @pc:disable
	*/
	virtual SDKERR AutoTestEnd(IN const HWM_CHAR* testCaseID) { return SDKERR::SDKERR_SUCCESS; }

    /**
    * @brief
    *<br>[en]This interface is used to config maxhub param.
    *<br>[cn]配置maxhub参数
    * @mobile:disable
    * @mac:disable
    */
    virtual SDKERR ConfigSmartRoomParam(IN const HWM_SDK_NAMESPACE::UtilsSmartRoomParam* utilsCustomParam) { return SDKERR::SDKERR_SUCCESS; };

};

END_HWM_SDK_NAMESPACE
#endif /* __HWM_LOGIN_SERVICE_H__ */


