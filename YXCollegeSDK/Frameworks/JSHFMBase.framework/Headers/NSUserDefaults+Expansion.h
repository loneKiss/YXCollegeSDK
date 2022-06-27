//
//  NSUserDefaults+Expansion.h
//  ylh-app-primary-ios
//
//  Created by 李春慧 on 2019/1/31.
//  Copyright © 2019年 巨商汇. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSUserDefaults (Expansion)


+ (nullable id) jsh_objectForKey:(NSString *_Nullable) defaultName;


+ (void) jsh_setObject:(nullable id)value forKey:(NSString *_Nullable)defaultName;




@end
