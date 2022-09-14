//
//  HWMSSOLoginParam.h
//  HWMUISDK
//
//  Created by guoyongliang/gwx917154 on 2022/2/28.
//  Copyright © 2022 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSSOLoginParam : NSObject
@property (nonatomic, copy) NSString *domain;                       /**< 企业域名 */
@property (nonatomic, copy) NSString *userTicket;                   /**< code */
@property (nonatomic, assign) HWMAuthServerType authServerType;     /**< 鉴权服务器类型 */
@end

NS_ASSUME_NONNULL_END
