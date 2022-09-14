//
//  HWMInMeetingInfoCell.h
//  HWMConfUI
//
//  Created by y00450113 on 2020/7/6.
//  Copyright © 2020 huawei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HWMConfMenuItem.h"

// title显示的view类型
typedef NS_ENUM(NSUInteger, HWMConfInfoCellType) {
    HWMConfInfoCellTypeConfId = 101,
    HWMConfInfoCellTypeSubject = 102,
    HWMConfInfoCellTypeGeneralPassword = 103,
    HWMConfInfoCellTypeHostPassword = 104,
    HWMConfInfoCellTypeEncryped = 105,
    HWMConfInfoCellTypeLock = 106,
    HWMConfInfoCellTypeQOS = 107,
    HWMConfInfoCellTypeWebinarGuestPassword = 108,
    HWMConfInfoCellTypeWebinarAudiencePassword = 109

};

NS_ASSUME_NONNULL_BEGIN


@protocol HWMInMeetingCellDelegate <NSObject>

/// cell 对象代理
/// @param cellType cellType
- (UITableViewCell *)cellForRowWithCellType:(HWMConfInfoCellType)cellType inTableView:(UITableView *)tableView indexPath:(NSIndexPath *)indexPath;


/// cell点击事件代理
/// @param cellType cellType
- (void)cellSelectedWithCellType:(HWMConfInfoCellType)cellType;

@end


@interface HWMInMeetingCellModel : HWMConfMenuItem

@property (nonatomic, assign, readonly) HWMConfInfoCellType cellType;
@property (nonatomic, weak)id <HWMInMeetingCellDelegate> delegate;


- (instancetype)initWithCellType:(HWMConfInfoCellType)cellType title:(NSString *)title delegate:(id <HWMInMeetingCellDelegate>)delegate;
- (instancetype)initWithCellType:(HWMConfInfoCellType)cellType title:(NSString *)title;

// 会议ID
+ (HWMInMeetingCellModel *)defaultConfIdCell;
// 会议主题
+ (HWMInMeetingCellModel *)defaultSubjectCell;
// 来宾密码
+ (HWMInMeetingCellModel *)defaultGeneralPasswordCell;
// 主持人密码
+ (HWMInMeetingCellModel *)defaultHostPasswordCell;
// 会议加密
+ (HWMInMeetingCellModel *)defaultEncryptedCell;
// 会议锁定
+ (HWMInMeetingCellModel *)defaultConfLockCell;
// 音视频质量
+ (HWMInMeetingCellModel *)defaultQosCell;
// 嘉宾密码
+ (HWMInMeetingCellModel *)defaultWebinarGuestPasswordCell;
// 观众密码
+ (HWMInMeetingCellModel *)defaultWebinarAudiencePasswordCell;

@end

NS_ASSUME_NONNULL_END
