//
//  JSH_NativeInteractiveShare.h
//  JSHFMH5NativeInteractive
//
//  Created by 李春慧 on 2020/11/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JSH_NativeInteractiveShare : NSObject

// 分享文本
+ (void) jsh_shareTextWithData:(NSDictionary *) dataDict;

// 分享图片
+ (void) jsh_shareImageWithData:(NSDictionary *) dataDict;

// 分享链接
+ (void) jsh_shareWebPageWithData:(NSDictionary *) dataDict;

// 分享小程序
+ (void) jsh_shareMiniProgramWithData:(NSDictionary *) dataDict;

@end

NS_ASSUME_NONNULL_END
