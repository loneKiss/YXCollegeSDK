//
//  GeneralDefinition.h
//  ylh-app-primary-ios
//
//  Created by 李春慧 on 2020/6/8.
//  Copyright © 2020 巨商汇. All rights reserved.
//

#ifndef GeneralDefinition_h
#define GeneralDefinition_h
#import "UIColor+ColorChange.h"
#import "UIView+JSHFrame.h"
#import "MBProgressHUD+XMG.h"
#import "NSObject+SafeMethod.h"
#import "NSString+JSHBaseUrl.h"
#define WYLCommonUrl(projectName) \
    NSString *NewCommonUrl = New_CommonUrl(projectName);\


#define OldCommonUrl Old_CommonUrl()
#define H5CommonUrl  H5_CommonUrl()



#define WS(weakSelf) __weak __typeof(&*self) weakSelf = self;

#define kWScale (SCREEN_WIDTH / 375.0)
#define kHScale (375.0 / SCREEN_WIDTH)

#define WidthScale SCREEN_WIDTH / 414.0
#define HeightScale SCREEN_HEIGHT / 736.0


#define JSHmainWindow [UIApplication sharedApplication].windows.firstObject
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height


// 提示信息
#define kShowMSG(text) [MBProgressHUD showHub:text toView:JSHmainWindow];
/**数据加载失败,友好提示*/
#define kShowNoNetworkMSG [MBProgressHUD showErr:@"请求出错，稍后重试。" toView:JSHmainWindow];
//显示loading
#define kShowLoading [MBProgressHUD showMsg:@"" toView:JSHmainWindow];
//隐藏loading
#define kHideLoading [MBProgressHUD hideHUDForView:JSHmainWindow];


//根据十进制颜色和不透明度设置颜色
#define JSH_RGBA(r, g, b, a) [UIColor colorWithRed:r / 255.0 green:g / 255.0 blue:b / 255.0 alpha:a]
//十进制颜色
#define JSH_RGB(r, g, b) JSH_RGBA(r, g, b, 1.0f)
// 十六进制颜色
#define LCColor(hexColor)  [UIColor colorWithHexString:hexColor]


//设置字体
#define Font(font) [UIFont systemFontOfSize:font]
#define FontBold(font) [UIFont boldSystemFontOfSize:font]
#define FONT_MIDEUM(s) [UIFont fontWithName:@"PingFang-SC-Medium" size:s]


//MARK:判断手机机型
//判断手机系统的宏
#define v_ios(verson) ([UIDevice currentDevice].systemVersion.doubleValue >= (verson))


/*****判断手机型号代码*****/
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)

#define IS_PAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

// 判断是否为 iPhone 5SE
#define iPhone5SE [[UIScreen mainScreen] bounds].size.width == 320.0f && [[UIScreen mainScreen] bounds].size.height == 568.0f
// 判断是否为iPhone 6/6s
#define iPhone6_6s [[UIScreen mainScreen] bounds].size.width == 375.0f && [[UIScreen mainScreen] bounds].size.height == 667.0f
// 判断是否为iPhone 6Plus/6sPlus
#define iPhone6Plus_6sPlus [[UIScreen mainScreen] bounds].size.width == 414.0f && [[UIScreen mainScreen] bounds].size.height == 736.0f





//判断iPhone5系列
#define kiPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) && !IS_PAD : NO)
//判断iPhone6系列
#define kiPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) && !IS_PAD : NO)
//判断iphone6+系列
#define kiPhone6Plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) && !IS_PAD : NO)
//判断iPhoneX
#define IS_IPHONE_X ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !IS_PAD : NO)
//判断iPHoneXr
#define IS_IPHONE_Xr ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) && !IS_PAD : NO)
//判断iPhoneXs
#define IS_IPHONE_Xs ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !IS_PAD : NO)
//判断iPhoneXs Max
#define IS_IPHONE_Xs_Max ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) && !IS_PAD : NO)


//iPhoneX系列
//判断刘海屏
#define IS_FULL_SCREEN ([[UIApplication sharedApplication] statusBarFrame].size.height > 20 ? YES : NO)


/*****判断navBar和tabBar代码*****/
//状态栏高度
#define Height_StatusBar ([UIApplication sharedApplication].statusBarFrame.size.height)
//底部安全区域高度
#define Height_BottomBar (IS_FULL_SCREEN ? 34.0 : 0.0)
//导航栏高度
#define Height_NavBar (Height_StatusBar + 44.0)
//底部tabBar高度
#define Height_TabBar (Height_BottomBar + 49.0)


//横屏安全区域距离:上:0,下:21,左:44,右:44
//左右安全距离
#define SafeAreaLeftRightMargin (IS_FULL_SCREEN ? 44.0 : 0.0)
//底部安全距离
#define SafeAreaBottomMargin (IS_FULL_SCREEN ? 21.0 : 0.0)




//打印json数据的宏
#ifdef DEBUG //开发阶段
#define NSLog(format, ...) printf("%s \n", [[NSString stringWithFormat:(format), ##__VA_ARGS__] UTF8String])
#else //发布阶段
#define NSLog(format, ...)
#endif

#define SaveJSHSessionId(value) \
if (isNonemptyString(value) && [value containsString:@"ylh"]) { \
      [[NSUserDefaults standardUserDefaults] setObject:value forKey:@"jsh_session_id"]; \
}
#endif /* GeneralDefinition_h */
