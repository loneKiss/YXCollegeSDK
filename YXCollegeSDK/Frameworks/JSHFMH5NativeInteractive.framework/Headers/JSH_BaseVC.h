//
//  JSH_BaseVC.h
//  ylh-app-primary-ios
//
//  Created by 李春慧 on 2018/8/28.
//  Copyright © 2018年 巨商汇. All rights reserved.
//

#import "JSH_BaseView.h"
typedef void (^PageBack)(NSDictionary *);

@interface JSH_BaseVC : UIViewController

/** 返回按钮 */
@property (nonatomic, strong) UIButton *backBtn;

/**  导航条 */
@property (nonatomic, strong) UIView *navigationView;

/**  标题栏 */
@property (nonatomic, strong) UILabel *navTitleLabel;

- (void)back;

/**  设置当前提示类型 */
@property (nonatomic, assign) JSHBaseViewPromptType type;






/**
 设置异常情况下的图片 以及 提示语

 @param imageName 图片名字
 @param subtitle 提示语
 */
- (void) setPromoteImageName:(NSString *) imageName subTitle:(NSString *) subtitle;

//type  根据type简单的做扩展
- (void) customsetPromoteImageName:(NSString *) imageName subTitle:(NSString *) subtitle  withTpe:(int)type;

/**  右边按钮 */
@property (nonatomic, strong) UIButton * rightBtn;

/**
 设置标题
 */
@property (nonatomic, copy) NSString * navigationTitle;


/**
 设置右侧按钮图片
 */
@property (nonatomic, copy) NSString * rightImageName;

- (void) click_rightBtn:(UIButton *) btn;

/**  导航条右边标题 */
@property (nonatomic, copy) NSString * rightTitle;

/**
 返回主页面
 */
- (void) backToPortal;




@end
