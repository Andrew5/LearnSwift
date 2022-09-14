//
//  HWMConfContactModel.h
//  HWMBaseUI
//
//  Created by fuxihua on 2020/4/20.
//

#import <Foundation/Foundation.h>
#import "HWMEnterpriseDepartmentConstant.h"

@interface HWMConfContactModel : NSObject
@property (nonatomic, copy) NSString *number;
@property (nonatomic, copy) NSString *accountId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *thirdUserId;
@property (nonatomic, copy) NSString *email;
@property (nonatomic, assign) BOOL isHardTerminal;
@property (nonatomic, assign) HWMContactType contactType;
@property (nonatomic, assign) BOOL isAnonymous;

@end
