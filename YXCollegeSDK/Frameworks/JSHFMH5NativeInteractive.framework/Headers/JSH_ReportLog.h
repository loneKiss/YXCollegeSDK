//
//  JSH_ReportLog.h
//  JSHFMH5NativeInteractive
//
//  Created by 李春慧 on 2020/11/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 默认是生产环境
typedef NS_ENUM(NSUInteger, JSHReportLogUploadVersionType) {
    JSHReportLogUploadVersionTypePrd, // 生产环境
    JSHReportLogUploadVersionTypeDev, // 测试环境
    JSHReportLogUploadVersionTypePre  // 预生产
};

@interface JSH_ReportLog : NSObject

+ (instancetype) sharedReportLog;

/**  <#mark#> */
@property (nonatomic, assign) JSHReportLogUploadVersionType versionType;

- (void) jsh_updateLogWithData:(NSDictionary *) params;
@end

NS_ASSUME_NONNULL_END
