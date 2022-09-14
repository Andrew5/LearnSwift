//
//  HWMEnterpriseRoleChangeModel.h
//  HWMLogin
//
//  Created by p00576758 on 2020/9/11.
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"

typedef NS_ENUM(NSInteger, HWMUserStatusInEnterprise){
    HWMUserStatusInEnterpriseIsDelete = 0,          /**用户已注销*/
    HWMUserStatusInEnterpriseIsJoinTheCorp,       /**您已加入新的企业（接受邀请、创建企业、变成新企业内的用户）*/
    HWMUserStatusInEnterpriseIsLeaveTheCorp       /**您已被移除当前企业（企业管理员删除、解散、用户主动离开企业变成注册用户）*/
};

NS_ASSUME_NONNULL_BEGIN

@interface HWMEnterpriseRoleChangeModel : NSObject
@property (nonatomic, assign) BOOL isCreate;   //是否是创建企业
@property (nonatomic, assign) HWMUserCorpInfoNotifyType status;   //企业状态

@end

NS_ASSUME_NONNULL_END
