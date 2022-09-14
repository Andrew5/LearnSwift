//
//  HWMContactDefine.h
//  HWMContact
//
//  Created by l00465337 on 2020/12/29.
//  Copyright © 2020 huawei. All rights reserved.
//

#ifndef HWMContactDefine_h
#define HWMContactDefine_h


#endif /* HWMContactDefine_h */

NS_ASSUME_NONNULL_BEGIN
@class HWMEnterpriseContact;
@class HWMEnterpriseDepartment;
/// 联系人查询 callback
typedef void (^HWMContactsRequestCallback)(NSError * error, NSArray <HWMEnterpriseContact *> * data, NSUInteger offset, NSUInteger count);
typedef void (^HWMContactRequestCallback)(NSError * _Nullable error, HWMEnterpriseContact * _Nullable contact);

/// 部门树查询 callback
typedef void (^HWMDepartmentRequestCallback)(NSError * error, HWMEnterpriseDepartment * data);


NS_ASSUME_NONNULL_END
