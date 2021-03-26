//
//  MBProgressHUD+XMG.h
//
//  Created by xiaomage on 15-6-6.
//  Copyright (c) 2015年 xiaomage. All rights reserved.
//

#import "MBProgressHUD.h"

@interface MBProgressHUD (JSH)

+ (MBProgressHUD *)jsh_showMsg:(NSString *)message;
+ (MBProgressHUD *)jsh_showMsg:(NSString *)message toView:(UIView *)view;
+ (void)jsh_showSuc:(NSString *)success;
+ (void)jsh_showErr:(NSString *)error;


/** 显示信息 **/
+ (void)jsh_showErr:(NSString *)error toView:(UIView *)view;
+ (void)jsh_showSuc:(NSString *)success toView:(UIView *)view;
+ (void)jsh_showHub:(NSString *)message toView:(UIView *)view;

/** 显示自定义时间提示信息 **/
+ (void)jsh_showErr:(NSString *)error toView:(UIView *)view afterDelay:(NSTimeInterval)delay;
+ (void)jsh_showSuc:(NSString *)success toView:(UIView *)view afterDelay:(NSTimeInterval)delay;
+ (void)jsh_showHub:(NSString *)message toView:(UIView *)view afterDelay:(NSTimeInterval)delay;

/** 隐藏提示框 **/
+ (void)jsh_hideHUDForView:(UIView *)view;
+ (void)jsh_hideHUD;

@end
