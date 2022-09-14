//
//  HWMStartCallParam.h
//  HWMUISDK
//
//  Created by 融合软终端02 on 2020/3/27.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HWMStartCallParam : NSObject
/// 呼叫号码，与 account/thirdUserId 三选一，优先级 : number>account>thirdUserId
@property(nonatomic, strong) NSString *number;

/// 呼叫账号，与 number/thirdUserId 三选一，优先级 : number>account>thirdUserId
@property(nonatomic, strong) NSString *account;

/// 呼叫第三方账号，与 number/account 三选一，优先级 : number>account>thirdUserId
@property (nonatomic, copy) NSString *thirdUserId;

/// 是否发起视频呼叫，默认NO
@property(nonatomic, assign) BOOL isVideo;

/// 被呼叫名字
@property(nonatomic, copy) NSString *nickName;

@end

NS_ASSUME_NONNULL_END
