//
//  LCBaseView.h
//  ylh-app-primary-ios
//
//  Created by 李春慧 on 2018/8/29.
//  Copyright © 2018年 巨商汇. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, LCPromptType)
{
    LCPromptTypeNone,
    LCPromptTypeNoContent, // 空数据类型
    LCPromptTypeNoNetWork  // 无网络类型
};


@interface LCBaseView : UIView

/**  设置当前提示类型 */
@property (nonatomic, assign) LCPromptType type;

/**  刷新按钮 */
@property (nonatomic, strong) UIButton * refreshBtn;

/**  当前提示内容的View */
@property (nonatomic, strong) UIView * promoteView;

/**
 设置异常情况下的图片 以及 提示语
 
 @param imageName 图片名字
 @param subtitle 提示语
 */
- (void) setPromoteImageName:(NSString *) imageName subTitle:(NSString *) subtitle;

- (void) customsetPromoteImageName:(NSString *) imageName subTitle:(NSString *) subtitle  withTpe:(int)type;

/**
 无网络提示
 */
- (UIView *) crateNoNetWork;

/**
 无网页面刷新方法
 */
- (void) click_refreshBtn;





@property (nonatomic,strong) NSString * comeType;// type ==1 来自首页抢单



- (void)initUI;

@end
