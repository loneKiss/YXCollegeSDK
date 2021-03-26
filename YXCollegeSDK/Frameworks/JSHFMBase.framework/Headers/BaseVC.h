//
//  BaseVC.h
//  ChongShe
//
//  Created by 马仔哥 on 2018/2/26.
//  Copyright © 2018年 7s_rain. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^PageBack)(NSDictionary *);

@interface BaseVC : UIViewController

/** 页面传参参数 */
@property (nonatomic, strong) NSDictionary *params;

/** 页面页面回调block */
@property (nonatomic, copy) PageBack pageBack;

/** 是否从H5页面跳转到当前页面 */
@property (nonatomic, strong) NSString *fromH5;

/** 返回按钮 */
@property (nonatomic, strong) UIButton *backBtn;

/**  导航条 */
@property (nonatomic, strong) UIView *navigationView;

/**  标题栏 */
@property (nonatomic, strong) UILabel *navTitleLabel;

/**  导航条底部线 */
@property (nonatomic, strong) UIView *line;


- (CGFloat)getNavHight;
- (void)back;
- (CGFloat)getTabBarHight;

- (CGFloat)getBootomHeight;
- (void)setUpBackBtn;

- (UIImageView *)getLineViewInNavigationBar:(UIView *)view;


@end
