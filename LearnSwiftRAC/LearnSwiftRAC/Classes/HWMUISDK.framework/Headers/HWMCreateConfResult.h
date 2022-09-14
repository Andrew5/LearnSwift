//
//  HWMCreateConfResult.h
//  HWMUISDK
//
//  Created by 融合软终端02 on 2020/3/27.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HWMCreateConfResult : NSObject
@property (nonatomic, copy) NSString *confSubject;      // 会议主题
@property (nonatomic, copy) NSString *confId;           // 会议id
@property (nonatomic, copy) NSString *vmrConferenceId;  // 个人会议id
@property (nonatomic, copy) NSString *password;         // 来宾密码
@property (nonatomic, copy) NSString *accessNumber;     // 会议接入号
@property (nonatomic, copy) NSString *confChairPwd;     // 主持人密码
@property (nonatomic, copy) NSString *confUri;          // 会议来宾链接
@property (nonatomic, copy) NSString *confStartTime;    // 会议开始时间
@property (nonatomic, copy) NSString *confEndTime;      // 会议结束时间
@property (nonatomic, copy) NSString *confScheduserName;// 预订者名字
@property (nonatomic, copy) NSString *confOrgId;        // 企业id
@property (nonatomic, assign) NSInteger mediaType;      // 会议的媒体类型

@end

NS_ASSUME_NONNULL_END
