//
//  HWMLocalContact.h
//  HWMFoundation
//
//  Created by cloudlink on 2019/12/3.
//  Copyright © 2019 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Contacts/Contacts.h>
#import "HWMLocalContactEmail.h"
#import "HWMLocalContactNumber.h"
#import "HWMLocalContactAddress.h"

//private Long id;
//private String displayName;
//private String givenName;
//private String familyName;
//
//private final Set<PhoneNumber> phoneNumbers = new HashSet<>();
//private String photoUri;
//private final Set<Email> emails = new HashSet<>();
//private final Set<Event> events = new HashSet<>();
//private String companyName;
//private String companyTitle;
//private final Set<String> websites = new HashSet<>();
//private final Set<Address> addresses = new HashSet<>();
//private String note;

NS_ASSUME_NONNULL_BEGIN

@interface HWMLocalContact : NSObject
@property (nonatomic, copy) NSString *contactId;//对应android和js的id字段，因为id在iOS这边是保留字，所以使用此别名
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, strong) NSMutableArray <HWMLocalContactNumber*> *phoneNumbers;
@property (nonatomic, copy) NSString *photoUri;
@property (nonatomic, strong) NSMutableArray <HWMLocalContactEmail *> *emails;
@property (nonatomic, copy) NSString *companyName;
@property (nonatomic, copy) NSString *companyTitle;
@property (nonatomic, strong) NSMutableArray <NSString *> *websites;
@property (nonatomic, strong) NSMutableArray <HWMLocalContactAddress *> *addresses;
@property (nonatomic, copy) NSString *note;

- (instancetype)initWithSystemContact:(CNContact *)contact;

- (BOOL)isMatchWithKeywords:(NSString *)keywords hasPhoneNumber:(BOOL)hasPhoneNumber;

@end

NS_ASSUME_NONNULL_END
