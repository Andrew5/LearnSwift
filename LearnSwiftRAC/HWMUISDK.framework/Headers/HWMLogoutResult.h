//
//  HWMLogoutResult.h
//  HWMUISDK
//
//  Created by guoyongliang/gwx917154 on 2021/12/7.
//  Copyright © 2021 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HWMLogoutResult : NSObject

@property (nonatomic, copy)NSString *userUuid;
@property (nonatomic, copy)NSString *account;
@property (nonatomic, copy)NSString *thirdAccount;

@end

NS_ASSUME_NONNULL_END
