//
//  NSString+JSHCC.h
//  demo
//
//  Created by jeffers on 2018/8/23.
//  Copyright © 2018年 cloudcns. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString(CC)

+(BOOL) isEmpty:(NSString *)str;



- (unichar) charAt:(int)index;

- (BOOL) contains:(NSString*) str;

- (BOOL) startsWith:(NSString*)prefix;

- (BOOL) equals:(NSString*) anotherString;

- (NSString *) toLowerCase;

- (NSString *) trim;

- (NSArray *) split:(NSString*) separator;

- (NSString *) encodeURL;


/** 获取当前控制器*/
+ (UIViewController*)getViewControllerWithSubView:(UIView *) subView;

//转jsonstring
+ (NSString *)toJSONDataWithObject:(NSObject *) object;
@end


@interface UIColor (ColorChange)


+ (UIColor *)jsh_colorWithHexString:(NSString *)color;

//从十六进制字符串获取颜色，
//color:支持@“#123456”、 @“0X123456”、 @“123456”三种格式
+ (UIColor *)jsh_colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;

@end
