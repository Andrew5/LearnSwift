//
//  HWMSDKConfConnectedInfoModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKConfConnectedInfoModel : NSObject

@property (nonatomic, copy) NSString *confId;
@property (nonatomic, copy) NSString *vmrConfId;
@property (nonatomic, copy) NSString *confSubject;
@property (nonatomic, assign) HWMConfServerType confServerType;
@property (nonatomic, assign) HWMConfMediaType confMediaType;
@property (nonatomic, assign) BOOL isSvc;
@property (nonatomic, assign) BOOL isCallTransConf;

@end

NS_ASSUME_NONNULL_END

