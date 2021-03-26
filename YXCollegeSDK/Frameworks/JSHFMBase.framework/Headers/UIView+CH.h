//
//  UIView+CH.h
//  SMZDM
//
//  Created by 李春慧 on 16/7/4.
//  Copyright © 2016年 . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (CH)
/**  获取当前view所在的控制器 */
- (UIViewController*)viewController;

/**  设置周围阴影 */
- (void) showAroundShadow;
/**
 周围阴影
 @param theAlpha 透明度
 @param theColor 颜色
 @param theRadius 半径大小
 */
-(void)showAroundShadowWithAlpha:(float)theAlpha withColor:(UIColor *)theColor withRadius:(CGFloat)theRadius;

/** iphoneX 顶部加留白 **/
- (UIView *)addTopWhiteView;
/** iphoneX低部加留白 **/
- (UIView *)addBottomWhiteView;

/** 四周追加阴影效果，padding为扩散范围 */
- (void)ritl_addShadowLayerAllaroundViewPadding:(CGFloat)padding;

@end
