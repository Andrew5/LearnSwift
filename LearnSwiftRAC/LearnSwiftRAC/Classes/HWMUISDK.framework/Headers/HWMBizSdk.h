//
//  HWMBizSdk.h
//  HWMUISDK
//
//  Created by y00450113 on 2020/8/3.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMBizOpenApi.h"
NS_ASSUME_NONNULL_BEGIN

@interface HWMBizSdk : NSObject
+ (HWMBizOpenApi *)getBizOpenApi;
@end

NS_ASSUME_NONNULL_END
