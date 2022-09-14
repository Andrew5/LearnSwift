//
//  HWMBaseJoinConfParam.h
//  HWMConf
//
//  Created by guoyongliang/gwx917154 on 2020/9/16.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HWMBaseJoinConfParam : NSObject

/// 会议id, 必填字段
@property(nonatomic, strong) NSString *confId;

/// 会议中的昵称。如果不传入，会使用设备名字
@property(nonatomic, strong) NSString *nickname;

/// 是否打开摄像头.默认关闭
@property(nonatomic, assign) BOOL isCameraOn;

/// 是否打开麦克风。默认打开
@property(nonatomic, assign) BOOL isMicOn;

@end

NS_ASSUME_NONNULL_END
