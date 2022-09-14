//
//  HWMGlobalUIConfig.h
//  HWMCommonUI
//
//  Created by lWX914447 on 2020/7/6.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMCommonCellStyle.h"
#import "HWMControllerConfig.h"
#import "HWMDialogStyle.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMGlobalUIConfig : NSObject

/// Cell 样式
@property (nonatomic, strong) HWMCommonCellStyle *cellStyle;

/// 控制器配置
@property (nonatomic, strong) HWMControllerConfig *controllerConfig;

/// Dialogs 提示框样式
@property (nonatomic, strong) HWMDialogStyle *dialogStyle;

/// 默认配置
+ (instancetype)defaultConfig;

@end

NS_ASSUME_NONNULL_END
