//
//  NSString+RSMethod.h
//  ylh-app-primary-ios
//
//  Created by 王青森 on 2019/3/1.
//  Copyright © 2019 巨商汇. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, RSDateType) {
    RSDateTypeToday,        // 今天
    RSDateTypeYesterday,    // 昨天
    RSDateTypeCurrentWeek,  // 本周
    RSDateTypeLastWeek,     // 上周
    RSDateTypeCurrentMonth, // 本月
    RSDateTypeLastMonth,    // 上月
    RSDateTypeCurrentYear,  // 今年
    RSDateTypeSevenDays,    // 7天内
    RSDateTypeFifteenDays,  // 15天内
    RSDateTypeThirtyDays    // 30天内
};

@interface NSString (RSMethod)

// 字符串size（算高定width，height传0）
+ (CGSize)sizeForString:(NSString *)value font:(UIFont *)font width:(float)width height:(float)height;
// 自定义文本（主要用于textField的attributedPlaceholder）
+ (NSMutableAttributedString *)attributedPlaceholder:(NSString *)string
                                               color:(UIColor *)color
                                                font:(UIFont *)font;
// 接口错误信息处理
+ (NSString *)errorMessage:(NSDictionary *)dic;
// unix时间戳转format时间
+ (NSString *)transformDateStringWithUnixTimestamp:(NSString *)time format:(NSString *)format;
// unix时间戳转yyyy-MM-dd（性能较好）
+ (NSString *)dateStringWithTimeIntervalSinceNow:(NSTimeInterval)interval;
// 字符串非空
+ (NSString *)rs_safeString:(NSString *)str;
// 两位小数字符串
+ (NSString *)twoDecimalPlaces:(NSString *)num;
// 32位随机数
+ (NSString *)random_32_String;
// 验证编码格式
+ (BOOL)judgeBarCodeLegal:(NSString *)barCode;
// 修改扩展名为Mp4
+ (NSString *)transformFileExpandedNameToMp4:(NSString *)fileName;
// 判断为整数
+ (BOOL)isPureInt:(NSString*)string;
// 过滤<null>、(null)、null
+ (NSString *)removeNull:(NSString *)string;
// string转字典
+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;

/**
 今天/昨天/本周/上周/本月/上月/本年

 @param type 日期类型
 @param ret 星期的第一天是否从周一开始（YES:周一 NO:周日）
 @return 起止时间字典
 */
+ (NSDictionary *)dateScaleWithType:(RSDateType)type weekFirstDayIsMonday:(BOOL)ret;


/**
  将NSArray和NSDictionary转化为JSON串
  */

+(NSString *)convertToJsonData:(id)object;


@end
