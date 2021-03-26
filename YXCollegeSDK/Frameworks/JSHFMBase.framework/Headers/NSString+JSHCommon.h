//
//  NSString+JSHSize.h
//  JSHFMBase
//
//  Created by 李春慧 on 2020/6/18.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (JSHSize)

/**
 
 移除当前nav控制器里的VC
 */
- (void)removeVCFromNavigationControllerVCsWithNavVC:(UINavigationController *)nav;


/**
 *  返回多行带间距文本的size
 *
 *  @param font      字体
 *  @param maxW      最大宽度
 *  @param lineSpace 行间距
 *
 *  @return 文本 size
 */
- (CGSize)sizeWithFont:(UIFont *)font maxW:(CGFloat)maxW lineSpaceing:(CGFloat) lineSpace;

/**
 *  返回多行带间距文本的size
 *
 *  @param font      字体
 *  @param maxW      最大宽度
 *  @return 文本 size
 */
- (CGSize)sizeWithFont:(UIFont *)font maxW:(CGFloat)maxW;

/**
 *  返回文本size
 *
 *  @param font 字体
 *
 *  @return 文本 size
 */
- (CGSize)sizeWithFont:(UIFont *)font;
@end

NS_ASSUME_NONNULL_END
