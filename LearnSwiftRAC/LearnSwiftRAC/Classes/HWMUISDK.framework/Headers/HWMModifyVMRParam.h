//
// Created by 融合软终端02 on 2019-12-03.
// Copyright (c) 2019 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface HWMModifyVMRParam : NSObject
@property (nonatomic, strong)NSString *guestPwd;
@property (nonatomic, strong)NSString *chairPwd;
@property (nonatomic, strong)NSString *vmrName; //虚拟会议室名称
@property (nonatomic, strong)NSString *vmrId;
@property (nonatomic, assign) BOOL allowGuestStartConf; // 允许来宾在主持人之前入会

@end
