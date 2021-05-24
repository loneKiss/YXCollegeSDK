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


@property (nonatomic, strong) NSDictionary *params;
@property (nonatomic, copy) PageBack pageBack;
@property (nonatomic, strong) NSString *fromH5;

//@property(nonatomic,readonly) id safeView;

/** 返回按钮 */
@property (nonatomic, strong) UIButton *backBtn;

/**  导航条 */
@property (nonatomic, strong) UIView *navigationView;

/**  标题栏 */
@property (nonatomic, strong) UILabel *navTitleLabel;

/**  导航条底部线 */
//@property (nonatomic, strong) UIView *line;


- (CGFloat)getNavHight;
- (void)back;
- (CGFloat)getTabBarHight;

- (CGFloat)getBootomHeight;
- (void)setUpBackBtn;

- (UIImageView *)getLineViewInNavigationBar:(UIView *)view;


@end
