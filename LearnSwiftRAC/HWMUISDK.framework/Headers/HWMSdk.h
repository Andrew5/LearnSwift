//
//  HWMSdk.h
//  HWMUISDK
//
//  Created by 融合软终端02 on 2020/2/17.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMOpenSDKConfig.h"
#import "HWMOpenApi.h"
#import "HWMPrivateApi.h"
#import "HWMSDKConfService.h"
#import "HWMSDKNetworkService.h"


NS_ASSUME_NONNULL_BEGIN

@interface HWMSdk : NSObject

/// 初始化SDK
/// - 必须
/// - 在主线程调用该方法
/// - 建议在App启动后调用
/// @param config 配置信息，详见 HWMOpenSDKConfig
/// @return YES 初始化成功 NO 初始化 失败
+ (BOOL)initWithConfig:(HWMOpenSDKConfig *)config;

/// sdk 是否已经初始化
+ (BOOL)hasInit;

/// 获取sdk配置信息
/// - 如果要在运行时动态获取sdk的配置，可以使用该接口
/// - 可以在获取到该配置后，修改某些配置信息
+ (HWMOpenSDKConfig *)getSdkConfig;


/// 更新服务器地址和端口
/// - 可选
/// @param url login server url 华为云服务器地址
/// @param port login server port 华为云端口号

+ (void)setServerConfigWithUrl:(NSString *)url port:(NSInteger)port;


/// 获取api对象
/// - 调用sdk 的所有业务接口，都需要先获取到该Api对象
+ (HWMOpenApi *)getOpenApi;


/// 获取私有Api对象，目前暂不开放，接入方请忽略
+ (HWMPrivateApi *)getPrivateApi;

/// 设置日志路径
/// - 可选
/// 如果不想指定可以不设置，默认日志会打印到设备的/Library/meeting/log 目录下
/// @param logPath log path 日志路径，用于自定义日志文件存储的位置
+ (void)setLogPath:(NSString *)logPath;

/// 动态切换语言
/// - 可选
/// config language 切换语言
/// @param language language 语言，目前支持中文和英文
+ (void)setLanguage:(HWMSdkLanguageType)language;

/// 启用/关闭端到端加密
/// @param enable 是否启用
+ (HWMSDKERR)enableE2EE:(BOOL)enable;

@end

NS_ASSUME_NONNULL_END
