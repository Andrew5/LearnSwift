//
//  HWMInMeetingTitleBarMenuHandler.h
//  HWMConfUI
//
//  Created by y00450113 on 2020/7/8.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMInMeetingCellModel.h"
NS_ASSUME_NONNULL_BEGIN

@protocol HWMInMeetingTitleBarMenuHandler <NSObject>
// 构建会议titleBar 点击的弹出菜单
- (NSArray <HWMInMeetingCellModel *> *)buildTitleBarPopViewItems;
@end

NS_ASSUME_NONNULL_END
