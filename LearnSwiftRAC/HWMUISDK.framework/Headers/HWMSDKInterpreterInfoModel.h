//
//  HWMSDKInterpreterInfoModel.h
//  HWMSDKSDK
//
//  Automatically generated file. DO NOT MODIFY!!!
//

#import <Foundation/Foundation.h>
#import "HWMSDKCommonDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWMSDKInterpreterInfoModel : NSObject

@property (nonatomic, assign) HWMInterpreterStateType interpreterState;
@property (nonatomic, assign) BOOL isInterpreter;
@property (nonatomic, assign) BOOL hasConfirm;
@property (nonatomic, assign) HWMConfSupportLanguageType firstLanguage;
@property (nonatomic, assign) HWMConfSupportLanguageType secondLanguage;
@property (nonatomic, assign) HWMConfSupportLanguageType listenChannel;
@property (nonatomic, assign) HWMConfSupportLanguageType speakChannel;
@property (nonatomic, assign) BOOL isListenOriginalVoice;

@end

NS_ASSUME_NONNULL_END

