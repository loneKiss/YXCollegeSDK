//
//  JSH_Navigate.h
//  demo
//
//  Created by jeffers on 2018/9/24.
//  Copyright © 2018年 cloudcns. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSH_BaseComponent.h"
@interface JSH_Navigate : JSH_BaseComponent

-(void)go:(JSH_WebViewMessage *)message
 pageBack:(void(^)(NSDictionary * data))pageBack;
-(void)goAndFinishCurrent:(JSH_WebViewMessage *)message
 pageBack:(void(^)(NSDictionary * data))pageBack;
-(void)goBack:(JSH_WebViewMessage *)message;
-(void)reLogin:(JSH_WebViewMessage *)message;
-(void)goBrowser:(JSH_WebViewMessage *)message;
@end
