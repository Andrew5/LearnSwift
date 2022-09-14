//
//  HWMActionBottomSheetModel.h
//  HWMCommonUI
//
//  Created by fuxihua on 2019/9/10.
//  Copyright © 2019 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, HWMActionBottomSheetLayoutMode) {
    /// 中间布局（不显示次标题）
    HWMActionBottomSheetLayoutModeMiddle,
    /// 左右布局（显示次标题）
    HWMActionBottomSheetLayoutModeLeftRight,
};

@interface HWMActionBottomSheetModel : NSObject

/// 主标题
@property (nonatomic, copy) NSString *mainTitle;
/// 主标题颜色
@property (nonatomic, strong) UIColor *mainTitleColor;

/// 次标题
@property (nonatomic, copy) NSString *detailTitle;
/// 次标题颜色
@property (nonatomic, strong) UIColor *detailTitleColor;

/// 次图片
@property (nonatomic, copy) NSString *detailImageName;

/// 布局模式
@property (nonatomic, assign) HWMActionBottomSheetLayoutMode layoutMode;

@property (nonatomic, assign) BOOL showSeparatorLine;

@property (nonatomic, assign) NSInteger index;

@property (nonatomic, copy) NSString *accessIdentify;

+ (HWMActionBottomSheetModel *)actionBottomSheetMiddleModel:(NSString *)title accessIdentify:(NSString *)identify;

+ (HWMActionBottomSheetModel *)actionBottomSheetCheckModel:(NSString *)title;

+ (HWMActionBottomSheetModel *)actionBottomSheetLeftModel:(NSString *)title accessIdentify:(NSString *)identify;

+ (HWMActionBottomSheetModel *)actionBottomSheetModelWithLeftTitle:(NSString *)leftTitle rightTitle:(NSString * _Nullable)rightTitle accessIdentify:(NSString *)identify;

/// 勾选
- (void)check;

@end

NS_ASSUME_NONNULL_END
