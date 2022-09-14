//
// Created by 融合软终端02 on 2020-01-10.
// Copyright (c) 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWMEnterpriseDepartmentConstant.h"
#import "HWMLocalContact.h"


/// USG 查询联系人结果，不需要存DB
typedef NS_ENUM(NSUInteger, HWMContactStatusCode) {
    HWMContactStatusCodeSuccess,      /**<0.查找成功*/
    HWMContactStatusCodeNoUpdates,    /**<1.查询成功但无变化(当前未传updateTime，无该错误码)*/
    HWMContactStatusCodeNotExist,     /**<2.用户不存在*/
    HWMContactStatusCodeNoPermission, /**<3.无权限*/
};

/// 企业联系人 : USG 信息、三方账号信息
@interface HWMEnterpriseContact : NSObject
#pragma mark - 基本信息 : 外部联系人&企业联系人
@property (nonatomic, copy) NSString *name;        /**< 姓名 */
@property (nonatomic, copy) NSString *englishName; /**< 英文名 */
@property (nonatomic, copy) NSString *phone;       /**< 电话 */
@property (nonatomic, copy) NSString *email;       /**< 邮箱 */

@property (nonatomic, copy) NSString *corpName;    /**< 企业名 */
@property (nonatomic, copy) NSString *deptName;    /**< 部门名 */
@property (nonatomic, copy) NSString *position;    /**< 职位 */
@property (nonatomic, copy) NSString *address;     /**< 地址 */

@property (nonatomic, assign) BOOL isCollect;     /**< 是否已收藏 */
@property (nonatomic, assign) HWMContactType contactType;             /**< 联系人类型 */

@property (nonatomic, assign) BOOL isHardTerminal;          /**< 是否是硬终端 */
/// 手机号隐藏类型
@property (nonatomic, assign) HWMContactPhoneHideType hideType;

#pragma mark - USG 通讯录信息 : 企业联系人信息1
@property (nonatomic, copy) NSString *account;     /**< 账号 */
@property (nonatomic, copy) NSString *contactId;   /**< 联系人ID */
@property (nonatomic, strong) NSArray *deptCodes;  /**< 部门ID */
@property (nonatomic, copy) NSString *number;      /**< SIP号 */
@property (nonatomic, copy) NSString *vmrId;       /**< VMR会议ID */
@property (nonatomic, copy) NSString *signature;   /**< 签名 */
@property (nonatomic, assign) HWMContactStatusCode statusCode;        /**< USG 查询联系人结果 */

#pragma mark - 外部联系人信息  : 企业联系人信息2
@property (nonatomic, copy) NSString *country;     /**< 手机号的国际码*/

#pragma mark - APPID 登录属性 : 企业联系人信息3
@property (nonatomic, copy) NSString *thirdUserId; /**< APPID 登录场景下的第三方账号*/

#pragma mark - 计算型属性
@property (nonatomic, copy, readonly) NSString *localizedName;        /**< 本地化名字（与当前语言环境相关）*/
@property (nonatomic, copy, readonly) NSString *shortPhone;           /**< 短号 */
@property (nonatomic, strong, readonly) NSArray <NSString *> *phones; /**< 手机号码集合，通过phone字段生成 */
@property (nonatomic, copy) NSString *type;                           /**< 用户类型，对外统一提供 HWMContactType 枚举  */

#pragma mark - 本地信息
@property (nonatomic, copy) NSString *etag;        /**< 头像加载的事件nonce*/

/**
 *  模型转换HWMLocalContact--->HWMEnterpriseContact
 *
 *  @param localContact    手机通讯录联系人
 */
+ (instancetype)enterpriseContactWithLocalContact:(HWMLocalContact *)localContact;
@end
