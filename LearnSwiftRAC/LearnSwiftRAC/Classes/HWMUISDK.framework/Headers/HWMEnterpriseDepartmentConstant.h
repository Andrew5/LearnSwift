//
//  HWMEnterpriseDepartmentConstant.h
//  HWMConf
//
//  Created by fuxihua on 2020/1/19.
//  Copyright © 2020 huawei. All rights reserved.
//

#ifndef HWMEnterpriseDepartmentConstant_h
#define HWMEnterpriseDepartmentConstant_h


typedef NS_ENUM(NSUInteger,HWMEnterpriseDepartmentSelectedStatus){
    HWMEnterpriseDepartmentStatusDisselected = 0,   //未选中
    HWMEnterpriseDepartmentStatusHasSelected ,      //选中
    HWMEnterpriseDepartmentStatusDisselectable     //不可选
};

typedef NS_ENUM(NSUInteger,HWMContactNumberType){
    HWMEnterpriseNumberTypeSip = 0 ,     //sip号码
    HWMEnterpriseNumberTypeMobilePhone , //手机号码
    HWMEnterpriseNumberTypeTelephone     //电话号码
};


typedef NS_ENUM(NSUInteger,HWMEnterpriseSectionType){
    HWMEnterpriseSectionTypeDepartment = 0 , //部门
    HWMEnterpriseSectionTypeContacts         //联系人
};


#define HWMContactType HWMSelectedContactType
/// 遗留命名问题：本枚举用于表明联系人类型，不表明联系人选中状态，推荐使用 HWMContactType
typedef NS_OPTIONS(NSUInteger, HWMSelectedContactType) {
    HWMContactTypeEnterprise        = 0, /**< 企业联系人 */
    HWMContactTypeLocal             = 1, /**< 本地联系人 */
    HWMContactTypeAnonymous         = 2, /**< 匿名联系人 */
    HWMContactTypeCorpExternal      = 3, /**< 企业外部联系人 */
    HWMContactTypePersonalExternal  = 4, /**< 个人外部联系人 */
    HWMSelectedContactTypeLocal DEPRECATED_MSG_ATTRIBUTE("use HWMContactTypeLocal instead") = HWMContactTypeLocal,
    HWMSelectedContactTypeAnonymous DEPRECATED_MSG_ATTRIBUTE("use HWMContactTypeAnonymous instead") = HWMContactTypeAnonymous,
    HWMSelectedContactTypeEnterprise DEPRECATED_MSG_ATTRIBUTE("use HWMContactTypeEnterprise instead") = HWMContactTypeEnterprise,
};

typedef NS_ENUM(NSUInteger,HWMSelectedContactScene){
    HWMSelectedContactInConf = 0,    //会议中
    HWMSelectedContactBookConf,      //预约会议
    HWMSelectedContactCreateConf     //创建会议
};

/// 联系人手机号隐藏类型
typedef NS_ENUM(NSInteger, HWMContactPhoneHideType) {
    HWMContactPhoneHideTypeNormal       = 1,  // 显示
    HWMContactPhoneHideTypeHidden,         // 隐藏,不可见
    HWMContactPhoneHideTypeAnonymized         // 隐藏,可拨打
};




#endif /* HWMEnterpriseDepartmentConstant_h */
