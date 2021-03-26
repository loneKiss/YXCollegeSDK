//在DataManager.h里

#import <Foundation/Foundation.h>

//block回调传值
/**
 *   请求成功回调json数据
 *
 */
typedef void(^Success)(id responseObject);
/**
 *  请求失败回调错误信息
 *
 *  @param error error错误信息
 */
typedef void(^Failure)(NSError *error);





@interface JSH_DataManager : NSObject

//单例模式
+(instancetype _Nullable)sharedManager;

//自定义超时时间
+(instancetype _Nullable)sharedManagerWithTimeoutInterval:(NSTimeInterval)timeoutInterval;

/** para包含
   funcCode 产品的编码;
   className 控制器类名;
   funcName 方法名;
   platform; IOS **/
+(instancetype _Nullable)sharedManagerWithHeaderPara:(NSMutableDictionary * _Nullable)para;

/**
 *  GET请求
 *
 *  @param url       NSString 请求url
 *  @param parameters NSDictionary 参数
 *  @param success   void(^Success)(id json)回调
 *  @param failure   void(^Failure)(NSError *error)回调
 */
- (void)getDataWithUrl:(NSString *)url parameters:(id)parameters success:(Success)success failure:(Failure)failure;

/**
 *  POST请求
 *
 *  @param url       NSString 请求url
 *  @param parameters NSDictionary 参数
 *  @param success   void(^Success)(id json)回调
 *  @param failure   void(^Failure)(NSError *error)回调
 */
- (void)postDataWithUrl:(NSString *)url parameters:(id)parameters success:(Success)success failure:(Failure)failure;

/** 试点接口 **/
- (void)getDataWithUrl:(NSString *)url parameters:(id)parameters isShowCustomAlert:(BOOL)isShow success:(Success)success failure:(Failure)failure;

- (void)postDataWithUrl:(NSString *)url parameters:(id)parameters isShowCustomAlert:(BOOL)isShow success:(Success)success failure:(Failure)failure;
/** 试点接口 **/



/**
 *  POST请求  不自动提示错误信息
 *
 *  @param url       NSString 请求url
 *  @param parameters NSDictionary 参数
 *  @param success   void(^Success)(id json)回调
 *  @param failure   void(^Failure)(NSError *error)回调
 */
- (void)lc_postDataWithUrl:(NSString *)url parameters:(id)parameters success:(Success)success failure:(Failure)failure;


/**
 *  POST上传视频请求
 *
 *  @param url        NSString 请求url
 *  @param parameters NSDictionary 参数
 *  @param videoData  mp4视频数据
 *  @prarm fileName   视频文件名
 *  @param success    void(^Success)(id json)回调
 *  @param failure    void(^Failure)(NSError *error)回调
 */
-(void)postVideoWithUrl:(NSString *)url parameters:(id)parameters video:(NSData *)videoData fileName:(NSString *)fileName success:(Success)success failure:(Failure)failure;

/**
 *  DELETE请求
 *
 *  @param url       NSString 请求url
 *  @param parameters NSDictionary 参数
 *  @param success   void(^Success)(id json)回调
 *  @param failure   void(^Failure)(NSError *error)回调
 */
- (void)deleteDataWithUrl:(NSString *)url parameters:(id)parameters success:(Success)success failure:(Failure)failure;

/**
 *  POST上传声音以及图片
 *
 *  @param url        NSString 请求url
 *  @param parameters NSDictionary 参数
 *  @prarm fileName   视频文件名
 *  @param success    void(^Success)(id json)回调
 *  @param failure    void(^Failure)(NSError *error)回调
 */
-(void)postVoiceWithUrl:(NSString *)url parameters:(id)parameters voice:(NSData *)voiceData fileName:(NSString *)fileName imageArray:(NSArray *)imageArray  success:(Success)success failure:(Failure)failure;

/** 取消请求 **/
- (void)cancelAllRequests;

/** 取消单次请求 **/
- (void)cancleSingleRequests;

@end
