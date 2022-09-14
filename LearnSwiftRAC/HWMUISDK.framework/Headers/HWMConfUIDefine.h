//
//  HWMConfUIDefine.h
//  Pods
//
//  Created by p00576758 on 2021/6/21.
//

#ifndef HWMConfUIDefine_h
#define HWMConfUIDefine_h

//引导类提示
typedef NS_OPTIONS(NSUInteger, HWMGuideTips) {
    HWMGuideTipsNone                  = 0,
    HWMGuideTipsInviteShare           = (1 << 0),  /**< 会中邀请与会者引导提示  */
    HWMGuideTipsAnonymousPhoneVerify  = (1 << 1),  /**< 匿名手机验证引导提示  */
    HWMGuideTipsAnonymousToLogin      = (1 << 2),  /**< 匿名入会提示去登录  */
    HWMGuideTipsAll                   = 0xFFFFFFFF
};



#endif /* HWMConfUIDefine_h */
