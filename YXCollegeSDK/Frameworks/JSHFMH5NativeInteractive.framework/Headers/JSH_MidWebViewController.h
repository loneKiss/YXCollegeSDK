//
//  WebViewController.h
//  demo
//
//  Created by jeffers on 2018/8/29.
//  Copyright © 2018年 cloudcns. All rights reserved.
//

#import <JSHFMBase/LCBaseViewController.h>
#import "JSH_WebViewClient.h"

@interface JSH_MidWebViewController : LCBaseViewController<WKUIDelegate>
{
     
    JSH_WebViewClient *_JSH_WebViewClient;
}
 
@property (nonatomic,strong) WKWebView * webView;
@property (nonatomic, assign) UIStatusBarStyle statusBarStyle;
@property (nonatomic,strong)JSH_WebViewPage *webViewBean;

- (void) nativeAndH5InteractiveExtensionsWithMessage:(JSH_WebViewMessage *)message;
@end
