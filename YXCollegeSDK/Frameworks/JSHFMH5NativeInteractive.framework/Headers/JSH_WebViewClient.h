//
//  WebViewRouter.h
//  demo
//
//  Created by jeffers on 2018/9/7.
//  Copyright © 2018年 cloudcns. All rights reserved.
//

#import <WebKit/WebKit.h>

#import "JSH_WebViewMessage.h"
#import "JSH_WebViewPage.h"
#import "JSH_WebViewConfigDelegate.h"
#import "JSH_MessageCallbackDelegate.h"
#import "JSH_ExtensionMethodsDelegate.h"

@class JSH_MidWebViewController;



@interface JSH_WebViewClient : NSObject<JSH_MessageCallbackDelegate,WKNavigationDelegate>
@property (nonatomic, weak) JSH_MidWebViewController *webVC;



+(id<JSH_WebViewConfigDelegate>)getConfig;
+(void)setConfig:(id<JSH_WebViewConfigDelegate>)config;

// 上传视频
+(id<JSH_ExtensionMethodsDelegate>)getUploadVideo;
+(void)setUploadVideo:(id<JSH_ExtensionMethodsDelegate>) delegate;

// 设置代理
+(id<JSH_ExtensionMethodsDelegate>)getExtensionDelegate;
+(void)setExtensionDelegate:(id<JSH_ExtensionMethodsDelegate>) delegate;




+(void)load:(NSString *)url parent:(UIViewController *)parentVC pageBack:(void(^)(NSDictionary * data))pageBack;
+(void)load:(NSString *)url presentFromVC:(UIViewController *)parentVC pageBack:(void(^)(NSDictionary * data))pageBack;

- (void)pageCallback:(NSString *)callbackId msg:(NSString *)msg data:(NSDictionary *)data;

-(instancetype)init:(JSH_MidWebViewController *)target
            webView:(WKWebView *)webView
        webViewBean:(JSH_WebViewPage *)webViewBean;

-(void)load;


+(void)initPage;

@end
