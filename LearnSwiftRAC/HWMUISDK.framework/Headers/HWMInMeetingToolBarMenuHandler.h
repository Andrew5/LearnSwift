//
//  HWMInMeetingMenuHandler.h
//  HWMConfUI
//
//  Created by y00450113 on 2020/7/6.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMConfToolBarMenuItem.h"
#import "HWMConfSettingItem.h"
#import "HWMInMeetingCellModel.h"
#import "HWMConfMenuListItem.h"
#import "HWMConfSettingGroup.h"
NS_ASSUME_NONNULL_BEGIN

@protocol HWMInMeetingToolBarMenuHandler <NSObject>

@optional
/// 构建底部toolbar的会控全量菜单
- (NSArray <HWMConfToolBarMenuItem *> *)buildToolBarMenuItems;

/// 构建底部toolbar的“更多”菜单
- (NSArray <HWMConfMenuListItem *> *)buildToolBarMoreMenuItems;

// 构建点击更多菜单的设置弹出的设置列表项目
- (NSArray <HWMConfSettingGroup *> *)buildSettingItems;

@end

NS_ASSUME_NONNULL_END
