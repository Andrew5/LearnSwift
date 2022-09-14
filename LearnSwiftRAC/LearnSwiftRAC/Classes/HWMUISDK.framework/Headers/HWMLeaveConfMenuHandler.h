//
//  HWMLeaveConfMenuHandler.h
//  HWMConfUI
//
//  Created by zlp on 2021/11/10.
//  Copyright © 2021 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMConfUIHandler.h"
#import "HWMActionBottomSheetModel.h"
#import "HWMLeaveConfMenuItem.h"
NS_ASSUME_NONNULL_BEGIN

@protocol HWMLeaveConfMenuHandler <HWMConfUIHandler>

/// 构建主持人离会场景底部sheet菜单
- (NSArray <HWMActionBottomSheetModel *> *)buildHostLeaveConfItems;

@end

NS_ASSUME_NONNULL_END
