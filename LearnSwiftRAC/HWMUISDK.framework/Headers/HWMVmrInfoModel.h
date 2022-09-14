//
//  HWMVmrInfoModel.h
//  HWMUISDK
//
//  Created by guoyongliang/gwx917154 on 2020/8/11.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMConfSdkDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMVmrInfoModel : NSObject

@property (nonatomic, copy) NSString *confId;           // 会议ID
@property (nonatomic, copy) NSString *vmrId;            // vmrID
@property (nonatomic, copy) NSString *chairmanPwd;      // 主席密码
@property (nonatomic, copy) NSString *guestPwd;         // 来宾密码
@property (nonatomic, assign) HWMConfIdType type;
@property (nonatomic, assign) NSUInteger maxParties;    // 专用云会议室最大方数
@property (nonatomic, assign) BOOL vmrStatus;           // 0-专用会议室可用 非0表示不可用
@property (nonatomic, copy) NSString *name;             // 会议室名称
@property (nonatomic, assign) BOOL allowGuestStartConf;    // 允许来宾在主持人之前入会

@end

NS_ASSUME_NONNULL_END
