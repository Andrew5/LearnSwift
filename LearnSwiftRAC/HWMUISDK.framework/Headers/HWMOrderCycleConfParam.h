//
//  HWMOrderCycleConfParam.h
//  HWMUISDK
//
//  Created by 付细华 on 2022/2/14.
//

#import <Foundation/Foundation.h>
#import "HWMOrderConfParam.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMOrderCycleConfParam : NSObject
@property (nonatomic, strong) HWMOrderConfParam *orderConfParam;     ///< 普通会议参数
@property (nonatomic, strong) HWMSDKCycleConfParamModel *cycleParam; ///< 周期会议参数

@end

NS_ASSUME_NONNULL_END
