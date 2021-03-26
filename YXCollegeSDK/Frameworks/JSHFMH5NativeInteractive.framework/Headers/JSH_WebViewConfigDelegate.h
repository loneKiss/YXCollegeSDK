//
//  JSH_WebViewConfigDelegate.h
//  demo
//
//  Created by zx on 2018/11/5.
//  Copyright © 2018年 cloudcns. All rights reserved.
//
#import <Foundation/Foundation.h>

@protocol JSH_WebViewConfigDelegate<NSObject>
@required
-(NSString *)getRootPath;
@required
-(NSDictionary *) getRouters;
//@required
//-(CJLocation *)getLocation;
@required
-(NSDictionary *) getExtra;
@required
-(Class) getShareFactory;

@end
