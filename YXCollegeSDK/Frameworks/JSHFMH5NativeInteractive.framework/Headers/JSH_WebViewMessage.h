//
//  JSH_WebViewMessage.h
//  demo
//
//  Created by jeffers on 2018/9/7.
//  Copyright © 2018年 cloudcns. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JSH_WebViewMessage : NSObject

-(instancetype)initWithRequestUrl:(NSString *)url;
-(instancetype)initWithPath:(NSString *)path;
@property(strong,nonatomic,readonly)NSString *method;
@property(strong,nonatomic,readonly)NSString *callbackId;
@property(strong,nonatomic,readonly)NSDictionary *data;
@property(nonatomic, assign) BOOL isPresent;
@end
