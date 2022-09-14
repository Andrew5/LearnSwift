//
//  HWMNavigationBarStyle.h
//  HWMCommonUI
//
//  Created by 融合软终端02 on 2020/3/26.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HWMNavigationBarStyle : NSObject
/// 是否隐藏导航栏
@property (nonatomic, assign, getter = isNavigationBarHidden) BOOL navigationBarHidden;

@property (nonatomic, strong, nullable) NSDictionary *navigationBarTitleAttribute; //字体字号以字体颜色
@property (nonatomic, strong, nullable) UIColor *navigationBarTintColor; //颜色
@property (nonatomic, strong, nullable) NSDictionary *navigationBarBackTextAttribute; //返回按钮属性：字体，字号，文字颜色

// 返回按钮的图片
@property (nonatomic, strong, nullable) UIImage *backBtnItemImage;
// 返回按钮的标题
@property (nonatomic, strong, nullable) NSString *backBtnItemText;
@property (nonatomic, strong, nullable) UIImage *navigationBackgroundImage;
@property (nonatomic, strong, nullable) UIImage *navigationShadowImage;
@property (nonatomic, assign)BOOL navigationBarTranslucent;

// 状态栏风格
@property (nonatomic, assign) UIStatusBarStyle statusBarStyle;

// 返回手势是否可用
@property (nonatomic, assign) BOOL popBackGestureEnable;
@property (nonatomic, assign) BOOL navigationConfigEnable;


+ (instancetype)defaultStyle;
@end

NS_ASSUME_NONNULL_END
