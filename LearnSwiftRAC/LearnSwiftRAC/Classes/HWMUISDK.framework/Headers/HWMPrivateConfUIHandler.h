//
//  HWMPrivateConfUIHandler.h
//  HWMConfUI
//
//  Created by lining on 2021/12/14.
//  Copyright © 2021 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol HWMPrivateConfUIHandler <NSObject>

/// 会议安全截屏视图
- (UIView *)inMeetingDisableScreenShotView;

@end

NS_ASSUME_NONNULL_END
