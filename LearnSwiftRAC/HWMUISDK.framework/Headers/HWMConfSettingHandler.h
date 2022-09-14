//
//  HWMConfSettingHandler.h
//  HWMConfUI
//
//  Created by guoyongliang/gwx917154 on 2020/8/3.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>

/// 视频会议来电时接听按钮显示类型
typedef NS_ENUM(NSUInteger, HWMAnswerBtnShowType) {
    HWMAnswerBtnShowTypeAll,                /**< 音频、视频接听都显示 */
    HWMAnswerBtnShowTypeOnlyAudio,          /**< 只显示音频接听 */
    HWMAnswerBtnShowTypeOnlyVideo,          /**< 只显示视频接听 */
};

/// 来电时操作
typedef NS_ENUM(NSUInteger, HWMInComingAnswerType) {
    HWMIncomingAnswerNormal ,               /**< 默认 */
    HWMIncomingAnswerAutoDecline ,          /**< 自动拒绝来电 */
    HWMIncomingAnswerAutoAnswer,            /**< 自动接听来电，按照来电类型接听(后台运行时不会接听) */
};

NS_ASSUME_NONNULL_BEGIN

@protocol HWMConfSettingHandler <NSObject>
@optional
/// 会议来电时是否打开麦克风
- (BOOL)isOpenMicrophoneIncoming;

/// 会议来电时是否打开摄像头
- (BOOL)isOpenCameraIncoming;

/// 视频会议来电时按钮显示状态
- (HWMAnswerBtnShowType)getVideoConfIncomingAnswerBtnShowType;

/// 呼叫来电时自动应答类型
- (HWMInComingAnswerType)answerTypeOnCallIncoming;

/// 会议来电时自动应答类型
- (HWMInComingAnswerType)answerTypeOnConfIncoming;

@end

NS_ASSUME_NONNULL_END
