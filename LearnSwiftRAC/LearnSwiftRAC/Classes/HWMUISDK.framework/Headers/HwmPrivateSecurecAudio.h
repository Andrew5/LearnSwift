/**
 * @file HwmConfService.h
 *
 * Copyright(C), 2019-2020, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Xxxxxx.
 */

#ifndef __HWM_PRIVATE_SECUREC_AUDIO_H__
#define __HWM_PRIVATE_SECUREC_AUDIO_H__

#import "HwmSdkCommonDef.h"
#import "HwmGlobalErrorCodeDef.h"

BEGIN_HWM_SDK_NAMESPACE
/**
* @brief [en]This class is about getting the object of securec audio.
*        [cn]获取安全音频码流对象
* @GetInstance
*        HWM_SDK_NAMESPACE::HwmPrivateNativeSDK::GetPrivateSecurecAudioMgr()
*/
class HWM_API IHwmPrivateSecurecAudioMgr
{
public:
    /**
    * @brief
    * [en]This api is about enable recv audio frame
    * [cn]启用接收音频流
    * @private
    * @mobile:disable
    */
    virtual SDKERR SetAudioRawDataOutputConfig(HWM_BOOL enable) = 0;

};

END_HWM_SDK_NAMESPACE
#endif /* __HWM_CONF_SERVICE_H__ */