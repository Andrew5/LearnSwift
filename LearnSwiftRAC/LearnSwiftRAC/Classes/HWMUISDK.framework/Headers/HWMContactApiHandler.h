//
//  HWMContactApiHandler.h
//  HWMBaseUI
//
//  Created by x00468765 on 2020/6/9.
//

#import <Foundation/Foundation.h>
#import "HWMEnterpriseContact.h"
#import "HWMEnterpriseDepartmentContact.h"
#import "HWMContactDefine.h"

typedef void (^HWMEnterpriseContactCompleteHandler)( HWMEnterpriseDepartmentContact * _Nullable  result, NSError  * _Nullable error);

typedef void (^HWMQueryContactDetailCompleteHandler)( HWMEnterpriseContact * _Nullable detail, NSError  * _Nullable error);

NS_ASSUME_NONNULL_BEGIN

// 用于外界拦截
@protocol HWMContactApiHandler <NSObject>

// 根据号码精确查询联系人信息
- (void)queryContactDetailWithNumber:(NSString *)number completeHandler:(HWMQueryContactDetailCompleteHandler )handler;

/// 通过三方账号查询联系人
- (void)queryUserDetailWithThirdUserId:(NSString *)thirdUserId completionBlock:(HWMContactRequestCallback)completionBlock;

@end

NS_ASSUME_NONNULL_END
