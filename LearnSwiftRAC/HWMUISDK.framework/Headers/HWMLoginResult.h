//
//  HWMLoginResult.h
//  HWMUISDK
//
//  Created by 融合软终端02 on 2020/3/27.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HWMLoginResult : NSObject

@property (nonatomic, copy)NSString *userUuid;
@property (nonatomic, copy)NSString *account;
@property (nonatomic, copy)NSString *thirdAccount;

@end

NS_ASSUME_NONNULL_END
