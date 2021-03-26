//
//  NSObject+SafeMethod.h
//  ylh-app-primary-ios
//
//  Created by 李春慧 on 2018/8/29.
//  Copyright © 2018年 巨商汇. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (SafeMethod)
/** 判断是否是安全的对象 **/
BOOL isSafeObj(id _Nullable anObject);
/** 判断是否是安全的数组 **/
BOOL isSafeArray(id _Nullable anObject);
/** 判断是否是安全的字符串 **/
BOOL isNonemptyString(id _Nullable anObject);
/** 判断是否是安全的数组 **/
BOOL isSafeDictionary(id _Nullable anObject);


/** 调用此方法直接返回安全的字符串**/
NSString * _Nonnull safeString(id _Nullable anObject);
/** 调用此方法判断数组里是否有数据**/
BOOL arrayHasData(id _Nullable anObject);

/** 直接传入精度丢失有问题的Double类型*/
NSString *decimalNumberWithDouble(double conversionValue);
@end
