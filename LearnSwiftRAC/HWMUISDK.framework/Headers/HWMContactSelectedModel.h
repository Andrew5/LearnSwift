//
//  HWMEnterpriseContactSelectedModel.h
//  Aspects
//
//  Created by fuxihua on 2020/1/20.
//

#import <Foundation/Foundation.h>
#import "HWMEnterpriseDepartmentConstant.h"
#import "HWMEnterpriseContact.h"

@interface HWMContactSelectedModel : NSObject
@property (nonatomic, assign) HWMContactType contactType;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) NSString *englishName;
@property (nonatomic, copy) NSString *number;
@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSString *sms; 
@property (nonatomic, copy) NSString *accountId;
@property (nonatomic, assign) int type;
@property (nonatomic, assign) BOOL isHardTerminal;

#pragma mark - APPID 登录属性
@property (nonatomic, copy) NSString *thirdUserId;       /// APPID 登录场景下的第三方账号

// 计算型属性
/// 本地化名字（与当前语言环境相关）
@property (nonatomic, copy, readonly) NSString *localizedName;

/**
 *  企业联系人的HWMContactSelectedModel 初始化
 *
 *  @param contact    企业联系人信息
 *  @param number      号码
 */
- (instancetype)initWithContact:(HWMEnterpriseContact *)contact
                         number:(NSString *)number;


/**
 *  HWMContactSelectedModel 初始化
 *
 *  @param name    名称
 *  @param number    号码
 *  @param contactType    联系人类型
 */
- (instancetype)initWithName:(NSString *)name
                      number:(NSString *)number
                 contactType:(HWMContactType)contactType;

/**
 *  HWMContactSelectedModel 初始化
 *
 *  @param email    邮箱
 */
- (instancetype)initWithEmail:(NSString *)email;


@end


