//
// Created by 融合软终端02 on 2019-12-03.
// Copyright (c) 2019 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * 匿名入会需要的登录信息
 */
@interface HWMAnonymousAndLinkJoinBaseParam : NSObject
@property (nonatomic, copy) NSString *serverUrl; // 服务器地址
@property (nonatomic, assign) NSUInteger serverPort; // 服务器端口
@property (nonatomic, assign) NSUInteger platform; // //平台信息,取值如下：
//const int LOGINLOGIC_PLATFORM_IOS      = 3;
@property (nonatomic, assign) BOOL isVerify; // 是否开启证书校验
@property (nonatomic, copy) NSString *caPath; // 证书路径
@property (nonatomic, copy) NSString *proxyServerUrl; // 代理服务器地址
@property (nonatomic, assign) NSUInteger proxyServerPort; // 代理服务器端口
@property (nonatomic, copy) NSString *proxyAccount; // 代理账号
@property (nonatomic, copy) NSString *proxyPassword; // 代理密码
@property (nonatomic, copy) NSString *localIp; // 本地IP,本地IP(移动端)可能会变化，实时传入


@end
