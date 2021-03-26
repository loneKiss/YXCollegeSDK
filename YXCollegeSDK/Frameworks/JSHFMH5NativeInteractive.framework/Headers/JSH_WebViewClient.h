//
//  WebViewRouter.h
//  demo
//
//  Created by jeffers on 2018/9/7.
//  Copyright © 2018年 cloudcns. All rights reserved.
//

#import "JSH_BaseVC.h"
#import <WebKit/WebKit.h>

#import "JSH_WebViewMessage.h"
#import "JSH_WebViewPage.h"
#import "JSH_WebViewConfigDelegate.h"
#import "JSH_MessageCallbackDelegate.h"

@class JSH_MidWebViewController;

@interface JSH_WebViewClient : NSObject<JSH_MessageCallbackDelegate,WKNavigationDelegate>

+(id<JSH_WebViewConfigDelegate>)getConfig;
+(void)setConfig:(id<JSH_WebViewConfigDelegate>)config;

+(void)load:(NSString *)url parent:(JSH_BaseVC *)parentVC pageBack:(void(^)(NSDictionary * data))pageBack;

- (void)pageCallback:(NSString *)callbackId msg:(NSString *)msg data:(NSDictionary *)data;

-(instancetype)init:(JSH_MidWebViewController *)target
            webView:(WKWebView *)webView
        webViewBean:(JSH_WebViewPage *)webViewBean;

-(void)load;


+(void)initPage;

@end
