//
//  LCTableViewCell.h
//  ylh-app-primary-ios
//
//  Created by 李春慧 on 2018/8/28.
//  Copyright © 2018年 巨商汇. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef void(^TableViewCellClickAddMimusBtn)(NSString *numStr, NSString *beforNumStr);
typedef void(^SCCellClickCellBtn)(id contentModel);

// 【ID1005766】【ios】设定商品起订量，低于起订量或高于最多订购量时提示信息不正确

typedef void(^ErrorNumMsg)(NSString * errorMSG); // 低于起订量或高于最多订购量时提示信息的BLOCK


typedef void(^DialogsShow)(NSString *numStr, NSInteger maxNum, NSInteger minNum, id model); // 弹框信息

@interface LCTableViewCell : UITableViewCell

/**
 数据源
 */
@property (nonatomic, assign) id data;
/**
  快捷创建cell快捷方法
 */
+ (instancetype) cellWithTableView:(UITableView *) tableView;
/**
  初始化UI在这个方法中实现
 */
- (void) lc_init;



/**  <#mark#> */
@property (nonatomic, copy) TableViewCellClickAddMimusBtn clickAddMimusBtn;

/*
 (NSString *numStr, NSString *beforNumStr)
 */
@property (nonatomic, copy) SCCellClickCellBtn clickCellBtn;

@property (nonatomic,copy)ErrorNumMsg errorMsgBlock;
@property (nonatomic,copy)DialogsShow  dialogsShowBlock; //弹框的Block;

@end
