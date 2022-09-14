//
//  HWMAppIDLoginParam.h
//  HWMLogin
//
//  Created by l00465337 on 2020/8/5.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HWMAppIDLoginParam : NSObject
/// (必填)加密信息
@property (nonatomic, copy) NSString *signature;
/// (必填)用户的账号。1~64位
@property (nonatomic, copy) NSString *thirdUserId;
/// (必填)signature 过期时间。单位为秒的时间戳，为0时表示不会过期
@property (nonatomic, assign) NSInteger expireTime;
/// (必填)随机字符串。32~64位
@property (nonatomic, copy) NSString *nonce;
/// (必填)用户名
@property (nonatomic, copy) NSString *userName;
/// (选填，无默认值)邮箱。0~255位
@property (nonatomic, copy) NSString *userEmail;
/// (选填，无默认值)手机号。0~32位
@property (nonatomic, copy) NSString *userPhone;
/// (选填)企业ID
@property (nonatomic, copy) NSString *corpId;
/// (选填)部门编码
@property (nonatomic, copy) NSString *deptCode;

/// 判断是否是安全对象 : 必填信息是否没有空值
- (BOOL)isSafeObject;

@end

NS_ASSUME_NONNULL_END
