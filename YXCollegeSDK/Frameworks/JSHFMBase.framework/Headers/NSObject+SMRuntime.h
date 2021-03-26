//
//  NSObject+SMRuntime.h
//
//  Created by 李春慧 on 15/5/14.
//  Copyright (c) 2015年 李春慧. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (SMRuntime)

@property (nonatomic, assign) NSInteger runtimeIndex;
@property (nonatomic, strong) id runtimeValue;

#pragma mark - Associate value
///=============================================================================
/// @name Associate value
///=============================================================================

/**
 Associate one object to `self`, as if it was a strong property (strong, nonatomic).
 
 @param value   The object to associate.
 @param key     The pointer to get value from `self`.
 */
- (void)sm_setAssociateValue:(nullable id)value withKey:(const void *)key;

/**
 Associate one object to `self`, as if it was a weak property (week, nonatomic).
 
 @param value  The object to associate.
 @param key    The pointer to get value from `self`.
 */
- (void)sm_setAssociateWeakValue:(nullable id)value withKey:(const void *)key;

/**
 Get the associated value from `self`.
 
 @param key The pointer to get value from `self`.
 */
- (nullable id)sm_getAssociatedValueForKey:(const void *)key;

/**
 Remove all associated values.
 */
- (void)sm_removeAssociatedValues;

#pragma mark - Swap method (Swizzling)
///=============================================================================
/// @name Swap method (Swizzling)
///=============================================================================

/**
 Swap two instance method's implementation in one class. Dangerous, be careful.
 
 @param originalSel   Selector 1.
 @param newSel        Selector 2.
 @return              YES if swizzling succeed; otherwise, NO.
 */
+ (BOOL)sm_swizzleInstanceMethod:(SEL)originalSel with:(SEL)newSel;

/**
 Swap two class method's implementation in one class. Dangerous, be careful.
 
 @param originalSel   Selector 1.
 @param newSel        Selector 2.
 @return              YES if swizzling succeed; otherwise, NO.
 */
+ (BOOL)sm_swizzleClassMethod:(SEL)originalSel with:(SEL)newSel;

/**
 Exchange methods' implementations.
 
 @param originalMethod Method to exchange.
 @param newMethod Method to exchange.
 */
+ (void)yw_swizzleMethod:(SEL)originalMethod withMethod:(SEL)newMethod;
+ (void)yw_method_swizzle:(Class)cls originalMethod:(SEL)originalMethod newMethod:(SEL)newMethod;

@end

NS_ASSUME_NONNULL_END
