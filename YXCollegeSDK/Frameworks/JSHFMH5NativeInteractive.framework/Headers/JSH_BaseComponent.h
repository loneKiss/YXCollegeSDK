//
//  JSH_BaseComponent.h
//  demo
//
//  Created by jeffers on 2018/9/24.
//  Copyright © 2018年 cloudcns. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "JSH_WebViewMessage.h"
#import "JSH_MessageCallbackDelegate.h"
#import "JSH_BaseVC.h"



@interface JSH_BaseComponent : NSObject


/**  <#mark#> */
@property (nonatomic, weak) JSH_BaseVC *target;
/**  <#mark#> */
@property (nonatomic, weak) id<JSH_MessageCallbackDelegate> callback;

-(instancetype)init:(JSH_BaseVC *)target
           callback:(id<JSH_MessageCallbackDelegate>)callback;
@end
