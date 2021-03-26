//
//  JSH_Singleton.h
//  JSHFMBase
//
//  Created by 李春慧 on 2020/6/17.
//

#import <Foundation/Foundation.h>
#import "Single.h"
NS_ASSUME_NONNULL_BEGIN

@interface JSH_Singleton : NSObject
interfaceSingle(Singleton)

//0-生产环境  1-预生产环境  -1-测试环境  2-dev2测试环境   3-dev3测试环境  4-dev4测试环境  5-dev5测试环境
@property (nonatomic, assign) int  version_Type;

@end

NS_ASSUME_NONNULL_END
