//
//  HWMSDKNonceJoinConfParamModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKJoinConfByIdParamModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKNonceJoinConfParamModel : NSObject

@property (nonatomic, strong) HWMSDKJoinConfByIdParamModel *baseJoinConfParam;
@property (nonatomic, copy) NSString *nonce;
@property (nonatomic, assign) HWMLoginClientType clientType;

@end

NS_ASSUME_NONNULL_END

