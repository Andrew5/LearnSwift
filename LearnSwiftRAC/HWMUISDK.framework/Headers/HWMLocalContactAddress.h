//
//  HWMLocalContactAddress.h
//  HWMFoundation
//
//  Created by cloudlink on 2019/12/3.
//  Copyright © 2019 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, HWMLocalContactAddressType) {
    HWMLocalContactAddressTypeCustom,
    HWMLocalContactAddressTypeHome,
    HWMLocalContactAddressTypeWork,
    HWMLocalContactAddressTypeOther
};

@interface HWMLocalContactAddress : NSObject
@property (nonatomic, copy) NSString *formattedAddress;
@property (nonatomic, assign) HWMLocalContactAddressType type;
@property (nonatomic, copy) NSString *street;
@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *region;
@property (nonatomic, copy) NSString *postcode;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSString *label;

- (instancetype)initWithSystemAddressValue:(CNLabeledValue *)addressValue;
@end

NS_ASSUME_NONNULL_END
