//
//  GeneralDefinition.h
//  ylh-app-primary-ios
//
//  Created by 李春慧 on 2020/6/8.
//  Copyright © 2020 巨商汇. All rights reserved.
//

#ifndef GeneralDefinition_h
#define GeneralDefinition_h
#import "NSString+JSHCC.h"
#import "UIView+JSH_Frame.h"
#import "NSString+JSHCC.h"
#import "MBProgressHUD+JSH.h"
#import "NSObject+JSH_SafeMethod.h"




#define WS(weakSelf) __weak __typeof(&*self) weakSelf = self;

#define kWScale (SCREEN_WIDTH / 375.0)
#define kHScale (375.0 / SCREEN_WIDTH)

#define WidthScale SCREEN_WIDTH / 414.0
#define HeightScale SCREEN_HEIGHT / 736.0


#define JSHmainWindow [UIApplication sharedApplication].keyWindow
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height


// 提示信息
#define kShowMSG(text) [MBProgressHUD showHub:text toView:[UIApplication sharedApplication].keyWindow];
/**数据加载失败,友好提示*/
#define kShowNoNetworkMSG [MBProgressHUD showErr:@"请求出错，稍后重试。" toView:JSHmainWindow];

// 十六进制颜色
#define LCColor(hexColor)  [UIColor jsh_colorWithHexString:hexColor]


//设置字体
#define Font(font) [UIFont systemFontOfSize:font]
#define FontBold(font) [UIFont boldSystemFontOfSize:font]


//iPhoneX系列
//判断刘海屏
#define IS_FULL_SCREEN ([[UIApplication sharedApplication] statusBarFrame].size.height == 20 ? NO : YES)


/*****判断navBar和tabBar代码*****/

////状态栏高度
//#define Height_StatusBar (IS_FULL_SCREEN ? 44.0 : 20.0)
//状态栏高度
#define Height_StatusBar ([UIApplication sharedApplication].statusBarFrame.size.height)
//底部安全区域高度
#define Height_BottomBar (IS_FULL_SCREEN ? 34.0 : 0.0)
//导航栏高度
#define Height_NavBar (Height_StatusBar + 44.0)
//底部tabBar高度
#define Height_TabBar (Height_BottomBar + 49.0)


//打印json数据的宏
#ifdef DEBUG //开发阶段
#define NSLog(format, ...) printf("%s \n", [[NSString stringWithFormat:(format), ##__VA_ARGS__] UTF8String])
#else //发布阶段
#define NSLog(format, ...)
#endif

#define SaveJSHSessionId(value) \
if (jsh_isNonemptyString(value) && [value containsString:@"ylh"]) { \
      [[NSUserDefaults standardUserDefaults] setObject:value forKey:@"jsh_session_id"]; \
}
#endif /* GeneralDefinition_h */
