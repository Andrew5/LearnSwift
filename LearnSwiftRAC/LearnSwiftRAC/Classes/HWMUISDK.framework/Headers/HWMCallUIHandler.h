//
//  HWMCallUIHandler.h
//  HWMConfUI
//
//  Created by 融合软终端02 on 2020/3/11.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol HWMCallUIHandler <NSObject>

/// 在点对点呼叫中，是否显示真实头像
- (BOOL)showRealHeaderInCall;

/// 检测账号在线状态
/// - 可选 发起呼叫时，sdk 会调用该接口检查对端的在线状态
/// - 如果不实现，则默认对端在线
/// @param account 被检测账号
/// @param completion 回调
- (void)checkOnLineStatusWithAccount:(NSString *)account completion:(void (^)(BOOL isOnline))completion;

/// 即将接听通话（可做二次确认等操作）
/// @param inComingVC 来电界面
/// @param reject 调用该block 拒接 (可选执行)
/// @param accept 调用该block 接听 (可选执行)
- (void)callWillAccept:(UIViewController *)inComingVC reject:(void (^)(void))reject accept:(void (^)(void))accept;

@end

NS_ASSUME_NONNULL_END
