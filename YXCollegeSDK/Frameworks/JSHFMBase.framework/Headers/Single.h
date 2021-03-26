//
//  Single.h
//  06-单例MRC
//
//  Created by 王云龙 on 15/10/16.
//  Copyright © 2015年 xiaomage. All rights reserved.
//


//拼接方法名
#define interfaceSingle(name) +(instancetype)share##name;

#if __has_feature(objc_arc)
// 如果是ARC

#define implementationSingle(name) +(instancetype)share##name\
\
{\
    return [[self alloc]init];\
}\
static id _instance;\
+(instancetype)allocWithZone:(struct _NSZone *)zone\
{\
    static dispatch_once_t onceToken;\
    dispatch_once(&onceToken, ^{\
        _instance = [super allocWithZone:zone];\
    });\
    return _instance;\
}\
-(id)copyWithZone:(NSZone *)zone\
{\
    return _instance;\
}\
-(id)mutableCopyWithZone:(NSZone *)zone\
{\
    return _instance;\
}
#else
//如果是MRC
#define implementationSingle(name) +(instancetype)share##name\
\
{\
return [[self alloc]init];\
}\
static id _instance;\
+(instancetype)allocWithZone:(struct _NSZone *)zone\
{\
static dispatch_once_t onceToken;\
dispatch_once(&onceToken, ^{\
_instance = [super allocWithZone:zone];\
});\
return _instance;\
}\
-(id)copyWithZone:(NSZone *)zone\
{\
return _instance;\
}\
-(id)mutableCopyWithZone:(NSZone *)zone\
{\
return _instance;\
}\
-(oneway void)release\
{}\
-(instancetype)retain\
{\
    return _instance;\
}\
-(NSUInteger)retainCount\
{\
    return MAXFLOAT;\
}

#endif


