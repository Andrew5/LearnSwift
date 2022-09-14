//
//  HWMConfSettingGroup.h
//  HWMConfUI
//
//  Created by y00450113 on 2020/7/7.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMConfSettingItem.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMConfSettingGroup : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) NSArray <HWMConfSettingItem *> *items;

- (instancetype)initWithTitle:(NSString *)title;

@end

NS_ASSUME_NONNULL_END
