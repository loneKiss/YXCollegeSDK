//
//  MT_SystemFunctions.h
//  jsh-app-meeting-ios
//
//  Created by 巨商汇 on 2020/4/3.
//  Copyright © 2020 巨商汇. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface MT_SystemFunctions : NSObject


/**
 *是否开启系统照明灯
 *@param   opened   是否打开
 */
+ (void)openLight:(BOOL)opened;

/**
 *是否开启系统震动和声音
 *@param   shaked   是否开启震动
 *@param   sounding   是否开启声音
 */
+ (void)openShake:(BOOL)shaked Sound:(BOOL)sounding;

/**
 *调用系统浏览器打开扫描信息
 *@param   message   扫码信息
 *@param   success   成功用浏览器打开后返回的参数
 *@param   failure   用浏览器打开失败后返回的error参数
 */
+ (void)showInSafariWithURLMessage:(NSString *)message Success:(void (^)(NSString *token))success Failure:(void (^)(NSError *error))failure;


@end

NS_ASSUME_NONNULL_END
