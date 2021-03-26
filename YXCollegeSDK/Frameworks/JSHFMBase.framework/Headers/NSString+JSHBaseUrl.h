//
//  NSString+JSHBaseUrl.h
//  JSHFMBase
//
//  Created by 李春慧 on 2020/6/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (JSHBaseUrl)
/** 直接传入工程名字*/
NSString *New_CommonUrl(NSString * projectName);
/** 老工程url */
NSString * Old_CommonUrl(void);
/** H5url*/
NSString * H5_CommonUrl(void);

/** 智家云店 - 直接传入工程名字*/
NSString * ZJYD_New_CommonUrl(NSString * projectName);
/**智家云店 -  老工程url */
NSString * ZJYD_Old_CommonUrl(void);


/**
 创建易理货URL
 
 @return urlStr
 */
- (NSString *) createYLHurlwithServer:(NSString *) server;

/**
 创建H5和原生交互返回的url
 
 @return urlStr
 */
- (NSString *) createH5_ComeBack_Url;

/**
 创建H5页面url
 
 @return urlStr
 */
- (NSString *) create_H5_Page_Url;

/**
 创建云店URL
 
 @return urlStr
 */
- (NSString *) createCloudShopURL;
@end

NS_ASSUME_NONNULL_END
