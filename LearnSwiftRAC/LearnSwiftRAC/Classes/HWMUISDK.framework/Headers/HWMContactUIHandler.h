//
//  HWMContactSelectHandler.h
//  Pods
//
//  Created by fuxihua on 2020/3/10.
//

#ifndef HWMContactSelectHandler_h
#define HWMContactSelectHandler_h
#import "HWMContactSelectedModel.h"
#import "HWMConfContactModel.h"

@protocol HWMContactUIHandler <NSObject>
@optional

/// 定制打开联系人选择页面
/// @param param 已经选中的联系人
/// @param scene 选择联系人场景，默认会议中
/// @param handler 结果，接入方需将选中的联系人封装成HWMContactSelectedModel 调用handler返回给sdk
- (void)openContactSelectPage:(NSArray<HWMConfContactModel *> *)param
                        scene:(HWMSelectedContactScene)scene
               completeHander:(void(^)(NSArray<HWMContactSelectedModel *> *result, NSError *error))handler;

@end




#endif /* HWMContactSelectHandler_h */
