//
//  MBProgressHUD+XMG.h
//
//  Created by xiaomage on 15-6-6.
//  Copyright (c) 2015年 xiaomage. All rights reserved.
//

#import "MBProgressHUD.h"

@interface MBProgressHUD (XMG)

+ (MBProgressHUD *)showMsg:(NSString *)message;
+ (MBProgressHUD *)showMsg:(NSString *)message toView:(UIView *)view;
+ (void)showSuc:(NSString *)success;
+ (void)showErr:(NSString *)error;


/** 显示信息 **/
+ (void)showErr:(NSString *)error toView:(UIView *)view;
+ (void)showSuc:(NSString *)success toView:(UIView *)view;
+ (void)showHub:(NSString *)message toView:(UIView *)view;

/** 显示自定义时间提示信息 **/
+ (void)showErr:(NSString *)error toView:(UIView *)view afterDelay:(NSTimeInterval)delay;
+ (void)showSuc:(NSString *)success toView:(UIView *)view afterDelay:(NSTimeInterval)delay;
+ (void)showHub:(NSString *)message toView:(UIView *)view afterDelay:(NSTimeInterval)delay;

/** 隐藏提示框 **/
+ (void)hideHUDForView:(UIView *)view;
+ (void)hideHUD;

@end
