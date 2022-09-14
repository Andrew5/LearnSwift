//
//  HWMConfMenuListItem.h
//  HWMConfUI
//
//  Created by y00450113 on 2020/7/6.
//  Copyright © 2020 huawei. All rights reserved.
//

#import "HWMConfMenuItem.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_OPTIONS (NSUInteger, HWMConfMenuListItemType) {
    /*****************
     ------------------------
     |=|text
     ------------------------
     ******************/
    HWMConfMenuListItemTypeNormal    = 1 << 0, //普通图文

    /*****************
     -------------------------
     |=|text                 >
     -------------------------
     ******************/
    HWMConfMenuListItemTypeEnter     = 1 << 1, // 左边图文 + 右边箭头进入按钮
    /*****************
    --------------------------
    |icon|text          |view|
    --------------------------
    ******************/
    HWMConfMenuListItemTypeRightBadge = 1 << 2, // 左图文 + 一个右边的badge ， 暂不开放
    
    
    HWMConfMenuListItemTypeRedPoint = 1 << 4, // 左图文 + 一个右边的红点
    
    
    HWMConfMenuListItemTypeBeta = 1 << 5
};

@interface HWMConfMenuListItem : HWMConfMenuItem

@property (nonatomic, assign) HWMConfMenuListItemType nemuType;
@property (nonatomic, strong) UIImage *image; // normal image
@property (nonatomic, strong) UIImage *selectedImage; // selected image


- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initNormalItemWithType:(HWMConfCtrlType)type
                                  text:(NSString *)text
                                 image:(UIImage *)image;

- (instancetype)initEnterItemWithType:(HWMConfCtrlType)type
                                 text:(NSString *)text
                                image:(UIImage *)image;

- (instancetype)initItemWithType:(HWMConfCtrlType)type
                            text:(NSString *)text
                           image:(UIImage *)image
                        menuType:(HWMConfMenuListItemType)menuType;

/// 聊天
+ (HWMConfMenuListItem *)defaultChatItem;

/// 传译
+ (HWMConfMenuListItem *)defaultInterpretItem;

/// 邀请
+ (HWMConfMenuListItem *)defaultInviteItem;

/// 录制
+ (HWMConfMenuListItem *)defaultRecordItem;

/// 会议设置
+ (HWMConfMenuListItem *)defaultSettingItem;

/// 举手
+ (HWMConfMenuListItem *)defaultRaiseHandsItem;

/// 转语音通话
+ (HWMConfMenuListItem *)defaultTransToAudioItem;

/// 共享/停止共享
+ (HWMConfMenuListItem *)defaultScreenShareItem;

///分享
+ (HWMConfMenuListItem *)defaultShareItem;

///改名
+ (HWMConfMenuListItem *)defaultRenameItem;

///投票
+ (HWMConfMenuListItem *)defaultVoteItem;

///虚拟背景
+ (HWMConfMenuListItem *)defaultVirtualBackgroundItem;

@end

NS_ASSUME_NONNULL_END
