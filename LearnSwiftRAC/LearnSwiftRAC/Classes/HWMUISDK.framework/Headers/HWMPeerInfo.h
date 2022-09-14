//
// Created by 融合软终端02 on 2019-12-05.
// Copyright (c) 2019 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HWMPeerInfo : NSObject
@property (nonatomic, copy) NSString *peerName;             /**< 名字 */
@property (nonatomic, copy) NSString *peerNumber;           /**< sip账号 */
@property (nonatomic, copy) NSString *peerContactsId;       /**< ID */
@property (nonatomic, copy) NSString *account;              /**< 账号 */
@property (nonatomic, copy) NSString *thirdUserId;          /**< APPID 登录场景下的第三方账号 */
@end
