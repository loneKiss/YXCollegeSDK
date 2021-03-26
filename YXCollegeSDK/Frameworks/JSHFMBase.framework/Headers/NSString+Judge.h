//
//  NSString+Judge.h
//  ScanCodeTelephone
//
//  Created by 巨商汇 on 2018/3/28.
//  Copyright © 2018年 巨商汇. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h> 
@interface NSString (Judge)

/*
 **正则表达式判断手机号码是否符合规范
 **
 */

+(BOOL)judgeWithNumber:(NSString *)mobileNum;

/*
**判断是否是10.2及其以上系统版本,拨打电话会区别处理
**
 */
+(BOOL)validateCurrentMobileSystem10_2;

/*
 **判断系统版本号
 **
 */
+(BOOL)judgeCurrentMobileSystemVersionString:(NSString *)version;


/*
 **计算字符串的高度
 **
 */
+(CGFloat)calculateHeightWithString:(NSString *)string andWidth:(CGFloat)width andFont:(UIFont *)font;

/*
 **计算字符串的宽度
 **
 */
+(CGFloat)calculateWidthWithString:(NSString *)string andHeight:(CGFloat)height andFont:(UIFont *)font;

/*
 **webview加载网页，将中文符号转码
 **
 */
+ (NSString *)encodeToPercentEscapeString: (NSString *) input;

/*
 ** 添加逗号
 **
 */
+ (NSString *)insetDouhao:(NSString *)str;

//手机号码的正则表达式1开头 11位
-(BOOL)isValidateMobile;



/// 当前密码格式是否符合要求
-(BOOL)isPasswordFormat;

/*
** 去除字符串首尾的空格和换行符
**
*/

+ (NSString *)removeSpaceAndNewline:(NSString *)str;

/*
** 去除字符串中所有的空格和换行符(包括中间和首尾)
**
*/

+ (NSString *)removeAllSpaceAndNewline:(NSString *)str;

@end
