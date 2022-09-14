//
// Created by 融合软终端02 on 2019-12-03.
// Copyright (c) 2019 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMAnonymousAndLinkJoinBaseParam.h"

/**
 * 链接入会会议信息
 */
@interface HWMLinkJoinConfParam : HWMAnonymousAndLinkJoinBaseParam

@property (nonatomic, assign) BOOL isOpenCam; // 是否打开摄像头
@property (nonatomic, assign) BOOL isOpenMic; // 是否打开麦克风
@property (nonatomic, copy) NSString *nickName; // 入会昵称
@property (nonatomic, copy) NSString *siteUrl; // 根据链接解析出的服务器地址
@property (nonatomic, copy) NSString *random; // 根据链接解析出的随机数
@property (nonatomic, copy) NSString *idPrefix;

+ (HWMLinkJoinConfParam *)linkJoinConfInfo;

@end
