//
//  JSH_InitInfo.h
//  JSHFMH5NativeInteractiveDemo
//
//  Created by 李春慧 on 2021/6/23.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface JSH_InitInfo : NSObject


/// 设置基础信息
/// @param loginInfo 登录信息
/// @param userInfo 用户信息
/// @param locationInfo 定位信息
+ (void) setLocationInfo:(NSString *)loginInfo userInfo:(NSString *) userInfo locationInfo:(NSString *) locationInfo;

/// 设置登录信息
/// @param info 登录信息
+ (void) setLoginInfo:(NSString *) info;

/// 设置用户信息
/// @param info 用户信息
+ (void) setUserInfo:(NSString *) info;


/// 设置定位信息
/// @param info 定位信息
+ (void) setLocationInfo:(NSString *) info;


/// 获取H5跳转原生的传值信息
+ (NSDictionary *) getVCToH5WithData;


/// 设置原生返回H5的传值信息
/// @param data 传值信息
+ (void) setH5ToVCWithData:(NSDictionary *) data;



@end

NS_ASSUME_NONNULL_END
