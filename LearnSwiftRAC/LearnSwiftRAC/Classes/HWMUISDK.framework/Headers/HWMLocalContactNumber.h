//
//  HWMLocalContactNumber.h
//  HWMFoundation
//
//  Created by cloudlink on 2019/12/3.
//  Copyright © 2019 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Contacts/Contacts.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, HWMLocalContactNumberType) {  //枚举类型跟android差异较大
    HWMLocalContactNumberTypeCustom,
    HWMLocalContactNumberTypeHome,
    HWMLocalContactNumberTypeWork,
    HWMLocalContactNumberTypeIPhone,
    HWMLocalContactNumberTypeMobile,
    HWMLocalContactNumberTypeMain,
    HWMLocalContactNumberTypeHomeFAX,
    HWMLocalContactNumberTypeWorkFAX,
    HWMLocalContactNumberTypePager,
    HWMLocalContactNumberTypeOther
};

@interface HWMLocalContactNumber : NSObject
@property (nonatomic, copy) NSString *number;
@property (nonatomic, assign) HWMLocalContactNumberType type;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *normalizedNumber;

- (instancetype)initWithSystemPhoneNumberValue:(CNLabeledValue *)phoneNumberValue;
@end

NS_ASSUME_NONNULL_END
