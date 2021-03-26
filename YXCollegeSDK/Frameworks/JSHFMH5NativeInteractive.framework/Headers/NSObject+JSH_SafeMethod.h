//
//  NSObject+SafeMethod.h
//  ylh-app-primary-ios
//
//  Created by 李春慧 on 2018/8/29.
//  Copyright © 2018年 巨商汇. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (JSH_SafeMethod)

BOOL jsh_isSafeObj(id _Nullable anObject);
BOOL jsh_isSafeArray(id _Nullable anObject);
BOOL jsh_isNonemptyString(id _Nullable anObject);
BOOL jsh_isSafeDictionary(id _Nullable anObject);



NSString * _Nonnull jsh_safeString(id _Nullable anObject);

@end
