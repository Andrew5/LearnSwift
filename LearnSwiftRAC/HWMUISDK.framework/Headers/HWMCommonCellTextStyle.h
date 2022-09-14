//
//  HWMCommonCellTextStyle.h
//  HWMCommonUI
//
//  Created by lWX914447 on 2020/7/6.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Cell 文本样式
@interface HWMCommonCellTextStyle : NSObject

/// 颜色
@property (nonatomic, strong) UIColor *textColor;
/// 字体
@property (nonatomic, strong) UIFont *font;

/// Cell 标题样式
+ (instancetype)titleStyle;

/// 初始化 Cell 文本样式
/// @param textColor 颜色
/// @param font 字体
+ (instancetype)textStyleWithColor:(UIColor *)textColor font:(UIFont *)font;
- (instancetype)initWithColor:(UIColor *)textColor font:(UIFont *)font;

@end

NS_ASSUME_NONNULL_END
