//
//  NSDecimalNumber+CH.h
//  ylh-app-primary-ios
//
//  Created by 李春慧 on 2020/4/9.
//  Copyright © 2020 巨商汇. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, type) {
    Add,
    subtract,
    multiply,
    divide
};


@interface NSDecimalNumber (CH)

+(NSDecimalNumber *)aDecimalNumberWithString:(NSString *)num1 type:(type)type anotherDecimalNumberWithString:(NSString *)num2;
+(NSComparisonResult)aDecimalNumberWithString:(NSString *)num1 compareAnotherDecimalNumberWithString:(NSString *)num2;

+(NSDecimalNumber *)aDecimalNumberWithNumber:(NSNumber *)num1 type:(type)type anotherDecimalNumberWithNumber:(NSNumber *)num2;
+(NSComparisonResult)aDecimalNumberWithNumber:(NSNumber *)num1 compareAnotherDecimalNumberWithNumber:(NSNumber *)num2;
@end


NS_ASSUME_NONNULL_END
