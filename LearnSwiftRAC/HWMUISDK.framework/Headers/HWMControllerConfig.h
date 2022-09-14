//
//  HWMControllerConfig.h
//  HWMCommonUI
//
//  Created by 融合软终端02 on 2020/2/24.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMNavigationBarStyle.h"
NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, HWMBarTitlePosition) {
    HWMBarTitlePositionLeft, //居左
    HWMBarTitlePositionMiddle, //居中
};

// view controller 的配置，优先级，HWMControllerConfig > HWMNavigationBarStyle

@interface HWMControllerConfig : NSObject <NSCopying>
// 左边的barbtn，如果设置，则会忽略返回按钮的设置
@property (nonatomic, strong, nullable) NSArray <UIBarButtonItem *> *leftBarBtnItems;

// 右边的barbtn
@property (nonatomic, strong, nullable) NSArray <UIBarButtonItem *> *rightBarBtnItems;

// title 相关设置
@property (nonatomic, strong, nullable) NSString *title; // 内容
// 是否显示默认的HUAWEI CLOUD Meeting title，默认 false，如果设置该选项，则不显示返回按钮，当前controller作为rootController
@property (nonatomic, assign) BOOL showDefaultTitle;

// 顶部title 的显示方式，居左或者居中
@property (nonatomic, assign)HWMBarTitlePosition titlePosition;

// 是否支持设置navigationbar的样式,默认YES，效果是如果进入华为云会议，所有UI效果会根据华为云会议的navigationbar的效果决定，返回的时候会恢复三方的样式
// 如果设置为NO，则navigationbar 根据当前controller 的效果来，不做任何改变
@property (nonatomic, assign) BOOL navigationConfigEnable;
@property (nonatomic, strong)HWMNavigationBarStyle *navigationBarStyle;

/// 背景色
@property (nonatomic, strong) UIColor *backgroundColor;

+ (instancetype)defaultConfig;

@end

NS_ASSUME_NONNULL_END
