//
//  JSH_MessageCallbackDelegate.h
//  demo
//
//  Created by zx on 2018/11/5.
//  Copyright © 2018年 cloudcns. All rights reserved.
//
#import <Foundation/Foundation.h>

@protocol JSH_MessageCallbackDelegate<NSObject>
@required
-(void)callbackWithId:(NSString *)callbackId
                 code:(int)code
                  msg:(NSString *)msg
                 data:(NSString *)data;
@end
