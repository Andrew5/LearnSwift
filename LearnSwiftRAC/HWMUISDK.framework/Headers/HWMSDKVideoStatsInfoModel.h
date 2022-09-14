//
//  HWMSDKVideoStatsInfoModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKVideoStatsInfoModel : NSObject

@property (nonatomic, assign) BOOL isLocalData;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *codecName;
@property (nonatomic, copy) NSString *resolution;
@property (nonatomic, assign) NSUInteger width;
@property (nonatomic, assign) NSUInteger height;
@property (nonatomic, assign) NSUInteger bitRate;
@property (nonatomic, assign) NSUInteger frameRate;
@property (nonatomic, assign) NSUInteger packetLoss;
@property (nonatomic, assign) NSUInteger delay;
@property (nonatomic, assign) NSUInteger jitter;
@property (nonatomic, assign) NSUInteger userId;

@end

NS_ASSUME_NONNULL_END

