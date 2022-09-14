//
//  HWMInternalStartCallParam.h
//  HWMUISDK
//
//  Created by lining on 2020/5/28.
//  Copyright © 2020 huawei. All rights reserved.
//

#import "HWMStartCallParam.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMInternalStartCallParam : HWMStartCallParam

@property (nonatomic, copy) NSString *contactsId;           /**< id */
@property (nonatomic, assign) BOOL isCloseCamera;           /**< 是否关闭摄像头（传参使用、暂时不支持自定义）*/
@property (nonatomic, assign) BOOL isCloseMic;              /**< 是否关闭麦克风（传参使用、暂时不支持自定义）*/

- (instancetype)initWithName:(NSString *)name number:(NSString *)number contactsId:contactsId isVideo:(BOOL)isVideo;

@end

NS_ASSUME_NONNULL_END
