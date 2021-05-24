//
//  JHS_UploadVideoDelegate.h
//  JSHFMH5NativeInteractive
//
//  Created by 李春慧 on 2021/5/13.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class JSH_WebViewClient;

NS_ASSUME_NONNULL_BEGIN

@protocol JSH_ExtensionMethodsDelegate <NSObject>
- (void)jsh_uploadVideo:(id) message client:(JSH_WebViewClient *) client;
@end

NS_ASSUME_NONNULL_END
