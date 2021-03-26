//
//  WebViewBean.h
//  demo
//
//  Created by jeffers on 2018/9/24.
//  Copyright © 2018年 cloudcns. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JSH_WebViewPage : NSObject

@property (nonatomic,strong)NSString *url;
@property(nonatomic,strong) NSString *title;
@property(nonatomic,strong) NSString *backBtnFunc;
/** 最右边按钮*/
@property (nonatomic, strong) NSArray * menus;

/**  右边按钮 */
@property (nonatomic, strong) NSDictionary * mainMenu;

/**  标题列表数组 */
@property (nonatomic, strong) NSArray * titleMenus;


/**  标题背景颜色 */
@property (nonatomic, copy) NSString * titleBackgroundColor;

/**  电池条颜色 */
@property (nonatomic, copy) NSString * lightStatusBar;


/**  权限码 */
@property (nonatomic, copy) NSString * authCode;

@property(nonatomic) int style;
@end
