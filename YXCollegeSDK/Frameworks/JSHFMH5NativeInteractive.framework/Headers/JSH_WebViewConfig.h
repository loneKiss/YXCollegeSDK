//
//  JSH_WebViewConfig.h
//  ylhAppPrimaryiOS
//
//  Created by 李春慧 on 2020/11/2.
//  Copyright © 2020 巨商汇. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

@interface JSH_WebViewConfig : NSObject

+(instancetype)shareJSH_WebViewConfig;

///**  工程接口地址设置 */
//@property (nonatomic, copy) NSString * h5CommonUrl;

/**  app名字 */
@property (nonatomic, copy) NSString * appName;

/**  登陆状态 */
@property (nonatomic, copy) NSString * loginData;

/**  用户信息 */
@property (nonatomic, copy) NSString * userInfo;

/**  定位信息 */
@property (nonatomic, copy) NSString * locationInfo;

/**  存储字符串 */
@property (nonatomic, strong) NSMutableDictionary * storeInfo;

/**  控制器之间的值传递 */
@property (nonatomic, strong) NSDictionary * vcParam;

/**  控制器的返回值 */
@property (nonatomic, strong) NSDictionary * __nullable vcReturnParam;

/**  h5_map */
@property (nonatomic, strong) NSMutableDictionary * get_H5_PageMap;
/**  h5_VC_Data */
@property (nonatomic, strong) NSArray * get_H5_VCData;

@end

NS_ASSUME_NONNULL_END
