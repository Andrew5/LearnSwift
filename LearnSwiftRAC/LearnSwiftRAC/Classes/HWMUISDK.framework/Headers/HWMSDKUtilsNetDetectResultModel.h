//
//  HWMSDKUtilsNetDetectResultModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKUtilsNetDetectResultModel : NSObject

@property (nonatomic, assign) NSUInteger sn;
@property (nonatomic, assign) NSUInteger currentState;
@property (nonatomic, assign) NSUInteger totalState;
@property (nonatomic, assign) HWMUtilsNetDetectQos result;
@property (nonatomic, assign) NSUInteger averageDelay;
@property (nonatomic, assign) NSUInteger maxDelay;
@property (nonatomic, assign) NSUInteger minDelay;
@property (nonatomic, assign) NSUInteger discard;
@property (nonatomic, assign) BOOL isProxy;
@property (nonatomic, assign) BOOL isReturn;
@property (nonatomic, assign) BOOL isReported;

@end

NS_ASSUME_NONNULL_END

