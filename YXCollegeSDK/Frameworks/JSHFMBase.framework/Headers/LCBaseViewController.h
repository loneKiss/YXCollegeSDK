//
//  LCBaseViewController.h
//  ylh-app-primary-ios
//
//  Created by 李春慧 on 2018/8/28.
//  Copyright © 2018年 巨商汇. All rights reserved.
//

#import "BaseVC.h"
#import "LCBaseView.h"


@interface LCBaseViewController : BaseVC

/**  设置当前页面提示类型 */
@property (nonatomic, assign) LCPromptType type;

/**  右边按钮 */
@property (nonatomic, strong) UIButton * rightBtn;

/**  设置标题 */
@property (nonatomic, copy) NSString * navigationTitle;

/** 设置右侧按钮图片 */
@property (nonatomic, copy) NSString * rightImageName;

/**  导航条右边标题 */
@property (nonatomic, copy) NSString * rightTitle;


/**
 设置异常情况下的图片 以及 提示语

 @param imageName 图片名字
 @param subtitle 提示语
 */
- (void) setPromoteImageName:(NSString *) imageName subTitle:(NSString *) subtitle;

//type  根据type简单的做扩展
- (void) customsetPromoteImageName:(NSString *) imageName subTitle:(NSString *) subtitle  withTpe:(int)type;


/**
 返回主页面
 */
- (void) backToPortal;
/**
点击右边按钮方法
 */
- (void) click_rightBtn:(UIButton *) btn;


@end
