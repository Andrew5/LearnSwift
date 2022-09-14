//
//  HWMHeadPortraitApiHandler.h
//  HWMBaseUI
//
//  Created by x00468765 on 2020/8/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 替换头像下载方法,返回头像替换对应账号显示头像
@protocol HWMHeadPortraitApiHandler <NSObject>

/// 根据用户唯一标识去获取头像图片
/// @param account 账号登录时:返回账号
/// @param thirdUserId AppId登录时:返回三方账号
/// @param number 呼叫number
/// @param completionBlock 完成回调
- (void)queryContactAvatarWithAccount:(NSString *)account thirdUserId:(NSString *)thirdUserId number:(NSString *)number
                     completionBlock:(void(^)(NSError * _Nullable error, UIImage * _Nullable avatarImage))completionBlock;

@end

NS_ASSUME_NONNULL_END
