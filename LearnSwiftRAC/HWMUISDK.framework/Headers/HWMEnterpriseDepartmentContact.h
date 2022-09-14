//
//  HWMEnterpriseDepartmentContact.h
//  Aspects
//
//  Created by fuxihua on 2020/1/15.
//

#import <Foundation/Foundation.h>
#import "HWMEnterpriseContact.h"

@interface HWMEnterpriseDepartmentContact : NSObject
@property (nonatomic, assign) NSUInteger totalCount;
@property (nonatomic, strong) NSMutableArray<HWMEnterpriseContact *> *enterpriseContacts;


@end


