//
//  HWMSDKCustomMultiPicInfoModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKCustomMultiPicItemInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKCustomMultiPicInfoModel : NSObject

@property (nonatomic, assign) BOOL isBroadCasting;
@property (nonatomic, assign) NSUInteger totalWidth;
@property (nonatomic, assign) NSUInteger totalHeight;
@property (nonatomic, assign) NSUInteger picNum;
@property (nonatomic, assign) NSUInteger activeIndex;
@property (nonatomic, assign) BOOL vasFlag;
@property (nonatomic, copy) NSArray <HWMSDKCustomMultiPicItemInfoModel *> *picInfoList;

@end

NS_ASSUME_NONNULL_END

