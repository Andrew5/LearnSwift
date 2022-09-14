//
//  HWMJoinConfParam.h
//  HWMUISDK
//
//  Created by 融合软终端02 on 2020/3/27.
//  Copyright © 2020 huawei. All rights reserved.
//

#import "HWMBaseJoinConfParam.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMJoinConfParam : HWMBaseJoinConfParam

/// 会议密码, 如果会议有密码，必填，否则不需要
@property(nonatomic, strong) NSString *password;
/// 是否结束冲突会议 默认 NO
@property(nonatomic, assign) BOOL isStopConflictConf;

@end

NS_ASSUME_NONNULL_END
