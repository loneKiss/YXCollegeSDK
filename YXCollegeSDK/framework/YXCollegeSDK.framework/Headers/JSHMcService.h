//
//  JSHMcService.h
//  YXCollegeSDK
//
//  Created by 王青森 on 2020/5/18.
//  Copyright © 2020 com.jsh. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JSHMcService : NSObject

@property (nonatomic, copy) NSString *expid;
@property (nonatomic, copy) NSString *accessToken;
@property (nonatomic, copy) NSString *refreshToken;
@property (nonatomic, copy) NSString *studyTerminalCode;
@property (nonatomic, copy) NSString *otherParams;
@property (nonatomic, copy) NSString *token;
@property (nonatomic, assign) NSInteger versionType;
@property (nonatomic, copy) NSString *nickName;
@property (nonatomic, copy) NSString *baseId;
@property (nonatomic, copy) NSString *sourceId;
@property (nonatomic, copy) NSString *eduId;
@property (nonatomic, copy) NSString *h5Path;
@property (nonatomic, copy) NSString *code;
/** app终端 A:客户端 B:员工端 C:直销员端 */
@property (nonatomic, copy) NSString *appDevice;
@property (nonatomic, copy) void (^didEnterLive)(void);
@property (nonatomic, copy) void (^didExitLive)(void);
@property (nonatomic, copy) void (^logoutHandler)(void);
@property (nonatomic, copy) void (^changeGuideStatusHandler)(void);
/** 微信分享 */
@property (nonatomic, copy) void (^WXShareImage)(NSMutableDictionary *message);
+ (instancetype)shareInstance;

/// 初始化微吼直播
/// @param appkey 微吼key
/// @param secretKey 微吼secret
+ (void)setupWithAppKey:(NSString *)appkey appSecretKey:(NSString *)secretKey;

/// 客户端/员工端/直销员端跳转营销学院V2.0
/// @param params 参数:{@"expid":xxx,
///                    @"accessToken":xxx,
///                    @"refreshToken":xxx,
///                    @"studyTerminalCode":xxx,
///                    @"otherParams":@"&firstEnter=false"};
/// @param path 具体h5路径,如h5/#/public/home?expurl=public,默认传nil
/// @param appDevice A:客户端 B:员工端 C:直销员端
/// @param versionType 0 生产、1 pre、-1 dev、2 dev2
/// @return 营销学院controller
+ (id)startWithParams:(nonnull NSDictionary *)params h5Path:(nullable NSString *)path deviceType:(nullable NSString *)appDevice projectVersion:(NSInteger)versionType;

/** 营销中台跳转营销学院 */
/// 跳转营销学院V2.0
/// @param params 参数:{@"expid":xxx,
///                    @"studyTerminalCode":xxx,
///                    @"otherParams":@"&firstEnter=false"};
/// @param path 具体h5路径,如h5/#/public/home?expurl=public,默认传nil
/// @param versionType 0 生产、1 pre、-1 dev、2 dev2
/// @return 营销学院controller
+ (id)marketingPlatformStartWithParams:(nonnull NSDictionary *)params h5Path:(nullable NSString *)path projectVersion:(NSInteger)versionType;

@end

NS_ASSUME_NONNULL_END
