//
//  JSH_BaseComponent.h
//  demo
//
//  Created by jeffers on 2018/9/24.
//  Copyright © 2018年 cloudcns. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "JSH_WebViewMessage.h"
#import "JSH_MessageCallbackDelegate.h"

@interface JSH_BaseComponent : NSObject


/**  <#mark#> */
@property (nonatomic, weak) UIViewController *target;
/**  <#mark#> */
@property (nonatomic, weak) id<JSH_MessageCallbackDelegate> callback;

-(instancetype)init:(UIViewController *)target
           callback:(id<JSH_MessageCallbackDelegate>)callback;
@end
