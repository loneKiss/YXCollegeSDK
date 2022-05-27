//
//  JHS_UploadVideoDelegate.h
//  JSHFMH5NativeInteractive
//
//  Created by 李春慧 on 2021/5/13.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class JSH_WebViewClient;

typedef NS_ENUM(NSUInteger, JSHExtensionShareType) {
    JSHExtensionShareTypeText, // 分享文本
    JSHExtensionShareTypeImage, //分享图片
    JSHExtensionShareTypeWebPage, // 分享链接
    JSHExtensionShareTypeMiniProgram // 分享小程序
};

typedef NS_ENUM(NSUInteger, JSHExtensionPayType) {
    JSHExtensionPayTypeWeChat, // 微信支付
    JSHExtensionPayTypeAliPay  // 支付宝支付
};

NS_ASSUME_NONNULL_BEGIN

@protocol JSH_ExtensionMethodsDelegate <NSObject>

/// 上传视频
- (void)jsh_uploadVideo:(id) message client:(JSH_WebViewClient *) client;

/// 分享
- (void)jsh_shareType:(JSHExtensionShareType) type shareData:(NSDictionary *) dataDict client:(nonnull JSH_WebViewClient *)client;

/// 支付
- (void)jsh_pay:(id) message type:(JSHExtensionPayType)type  client:(nonnull JSH_WebViewClient *)client;

@end

NS_ASSUME_NONNULL_END
