//
//  HWMSDKCorpApplicantListModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"
#import "HWMSDKCorpApplicantUserDetailModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKCorpApplicantListModel : NSObject

@property (nonatomic, assign) NSUInteger offset;
@property (nonatomic, assign) NSUInteger limit;
@property (nonatomic, assign) NSUInteger count;
@property (nonatomic, copy) NSArray <HWMSDKCorpApplicantUserDetailModel *> *users;

@end

NS_ASSUME_NONNULL_END

