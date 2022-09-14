//
//  HWMParticipantListMenuHandler.h
//  HWMConfUI
//
//  Created by y00450113 on 2020/7/6.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMConfToolBarMenuItem.h"
#import "HWMConfParticipantActionMenuItem.h"

NS_ASSUME_NONNULL_BEGIN

@protocol HWMParticipantListMenuHandler <NSObject>
@optional
/// 构建与会者列表底部toolbar上的菜单
- (NSArray <HWMConfToolBarMenuItem *> *)buildParticipantToolBarMenuItems;


/// 构建与会者列表底部toolbar上的“更多”菜单
- (NSArray <HWMConfMenuItem *> *)buildParticipantToolBarMoreMenuItems;

/// 构建与会者列表右上角的菜单
- (NSArray <HWMConfToolBarMenuItem *> *)buildParticipantTitleBarMenuItems;


/// 构建与会者列表中成员点击弹出的actionsheet的菜单
- (NSArray <HWMConfParticipantActionMenuItem *> *)buildParticipantActionSheetItems;
@end

NS_ASSUME_NONNULL_END
