//
//  HWMLeaveConfMenuItem.h
//  HWMConfUI
//
//  Created by zlp on 2021/11/10.
//  Copyright © 2021 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class HWMActionBottomSheetModel;
typedef NS_ENUM(NSUInteger, HWMLeaveConfMenuItemType) {
    /// 转移主持人
    HWMLeaveConfMenuItemTypeTranferHost,
    /// 离开会议
    HWMLeaveConfMenuItemTypeLeaveConf,
    /// 结束会议
    HWMLeaveConfMenuItemTypeEndConf,
};


@interface HWMLeaveConfMenuItem : NSObject

+ (HWMActionBottomSheetModel *)defaultTransferModel;

+ (HWMActionBottomSheetModel *)defaultLeaveModel;

+ (HWMActionBottomSheetModel *)defaultEndModel;

@end

NS_ASSUME_NONNULL_END
