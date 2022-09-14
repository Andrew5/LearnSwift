//
//  HWMCommonCellStyle.h
//  HWMCommonUI
//
//  Created by lWX914447 on 2020/7/6.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMCommonCellTextStyle.h"

NS_ASSUME_NONNULL_BEGIN

/// Cell 样式
@interface HWMCommonCellStyle : NSObject

/// Cell 标题样式
@property (nonatomic, strong) HWMCommonCellTextStyle *titleStyle;

/// 默认样式
+ (instancetype)defaultStyle;

@end

NS_ASSUME_NONNULL_END
