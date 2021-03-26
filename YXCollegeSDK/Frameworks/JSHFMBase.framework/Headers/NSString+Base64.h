//
//  NSString+Base64.h
//  ylh-app-primary-ios
//
//  Created by 巨商汇 on 2018/8/9.
//  Copyright © 2018年 巨商汇. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface NSString (Base64)

#pragma mark---- 64base字符串转图片
+ (UIImage *)stringToImage:(NSString *)str;


#pragma mark---- 图片转64base字符串
+ (NSString *)imageToString:(UIImage *)image;


/** 图片转base64字符串 带图片压缩系数 **/
+ (NSString *)imageToString:(UIImage *)image withQuality:(CGFloat)compressionQuality;

/*
  Base64编码
 */
+ (NSString *)encode:(NSString *)string;


/*
  Base64解码
 */
+ (NSString *)dencode:(NSString *)base64String;

@end
