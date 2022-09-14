//
//  HWMLocalContactEmail.h
//  HWMFoundation
//
//  Created by cloudlink on 2019/12/3.
//  Copyright © 2019 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, HWMLocalContactEmailType) {
    HWMLocalContactEmailTypeCustom,
    HWMLocalContactEmailTypeHome,
    HWMLocalContactEmailTypeWork,
    HWMLocalContactEmailTypeOther,
    HWMLocalContactEmailTypeICloud  //android这边多一个mobile类型，此处跟android存在差异
};

@interface HWMLocalContactEmail : NSObject
@property (nonatomic, copy) NSString *address;
@property (nonatomic, assign) HWMLocalContactEmailType type;
@property (nonatomic, copy) NSString *label;

- (instancetype)initWithSystemEmailValue:(CNLabeledValue *)emailValue;

@end

NS_ASSUME_NONNULL_END
