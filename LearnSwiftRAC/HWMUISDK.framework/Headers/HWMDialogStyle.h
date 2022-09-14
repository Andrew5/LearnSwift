//
//  HWMDialogStyle.h
//  HWMCommonUI
//
//  Created by lWX914447 on 2020/7/23.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 底部按钮类型
typedef NS_ENUM(NSUInteger, HWMDialogButtonType) {
    HWMDialogButtonTypeCustom,
    HWMDialogButtonTypeSystem
};

/// 底部按钮分割线类型
typedef NS_ENUM(NSUInteger, HWMDialogSeparatorType) {
    HWMDialogSeparatorTypeMiddle,
    HWMDialogSeparatorTypeAllRounded
};

/// 提示框内容样式
@interface HWMDialogTitleStyle : NSObject

/// 标题字体
@property (nonatomic, strong) UIFont *font;

/// 标题颜色
@property (nonatomic, strong) UIColor *color;

/// 默认标题对齐方式
@property (nonatomic, assign) NSTextAlignment normalAlignment;

/// 带 checkbox 的提示框 标题对齐方式
@property (nonatomic, assign) NSTextAlignment checkboxAlertAlignment;

/// 标题顶部间距
@property (nonatomic, assign) CGFloat topMargin;

/// 标题行高
@property (nonatomic, assign) CGFloat lineHeight;

+ (instancetype)defaultStyle;

@end

/// 提示框内容样式
@interface HWMDialogContentStyle : NSObject

/// 最大宽度
@property (nonatomic, assign) CGFloat maxWidth;

/// 单行内容对齐方式
@property (nonatomic, assign) NSTextAlignment singleLineTextAlignment;

/// 多行文本对齐方式
@property (nonatomic, assign) NSTextAlignment multiLineTextAlignment;

/// 四周间距
@property (nonatomic, assign) UIEdgeInsets inset;

/// 四周间距(没有标题)
@property (nonatomic, assign) UIEdgeInsets insetWithoutTitle;

/// 内容行数
@property (nonatomic, assign) NSInteger numberOfLines;

/// 字体
@property (nonatomic, strong) UIFont *font;

/// 字体(没有标题)
@property (nonatomic, strong) UIFont *fontWithoutTitle;

/// 文本颜色
@property (nonatomic, strong) UIColor *color;

+ (instancetype)defaultStyle;

@end

/// Checkbox 样式
@interface HWMDialogCheckboxStyle : NSObject

/// checkbox 顶部间距
@property (nonatomic, assign) CGFloat topMargin;

/// checkbox 顶部间距(没有标题)
@property (nonatomic, assign) CGFloat topMarginWithoutTitle;

/// checkbox与 content 间距
@property (nonatomic, assign) CGFloat topMarginToContent;

/// checkbox 文本颜色
@property (nonatomic, strong) UIColor *textColor;

/// checkbox 字体
@property (nonatomic, strong) UIFont *font;

+ (instancetype)defaultStyle;

@end

/// 底部按钮样式
@interface HWMDialogButtonStyle : NSObject

/// 字体
@property (nonatomic, strong) UIFont *font;

/// 默认标题颜色 (取消)
@property (nonatomic, strong) UIColor *normalTitleColor;

/// 高亮标题颜色 (确定)
@property (nonatomic, strong) UIColor *highligtedTitleColor;

/// 禁用标题颜色
@property (nonatomic, strong) UIColor *disabledTitleColor;

/// 高度
@property (nonatomic, assign) CGFloat height;

/// 默认背景色
@property (nonatomic, strong) UIColor *normalBackgroundColor;

/// 高亮时背景色
@property (nonatomic, strong) UIColor *highlightedBackgroundColor;

/// 按钮类型
@property (nonatomic, assign) HWMDialogButtonType type;

+ (instancetype)defaultStyle;

@end

/// 分割线样式
@interface HWMDialogSeparatorStyle : NSObject

/// 分割线类型
@property (nonatomic, assign) HWMDialogSeparatorType type;

/// 宽度
@property (nonatomic, assign) CGFloat width;

/// 高度
@property (nonatomic, assign) CGFloat height;

/// 颜色
@property (nonatomic, strong) UIColor *color;

+ (instancetype)defaultStyle;

@end

/// Dialogs 提示框样式
@interface HWMDialogStyle : NSObject

/// 提示框圆角
@property (nonatomic, assign) CGFloat cornerRadius;

/// 标题样式
@property (nonatomic, strong) HWMDialogTitleStyle *titleStyle;

/// 底部按钮样式
@property (nonatomic, strong) HWMDialogButtonStyle *buttonStyle;

/// 内容样式
@property (nonatomic, strong) HWMDialogContentStyle *contentStyle;

/// checkbox 样式
@property (nonatomic, strong) HWMDialogCheckboxStyle *checkboxStyle;

/// 提示框最小高度
@property (nonatomic, assign) CGFloat dialogMinHeight;

/// 提示框最大高度
@property (nonatomic, assign) CGFloat dialogMaxHeight;

/// 分割线样式
@property (nonatomic, strong) HWMDialogSeparatorStyle *separatorStyle;

/// 默认样式
+ (instancetype)defaultStyle;

@end

NS_ASSUME_NONNULL_END
