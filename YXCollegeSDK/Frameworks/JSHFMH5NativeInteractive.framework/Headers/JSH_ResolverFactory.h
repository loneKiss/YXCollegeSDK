//
//  JSH_ResolverFactory.h
//  demo
//
//  Created by zx on 2018/11/6.
//  Copyright © 2018年 cloudcns. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSH_SchemeResolverDelegate.h"
@interface JSH_ResolverFactory : NSObject
{
    NSMutableArray<JSH_SchemeResolverDelegate> * _schemeResolverList;
}

+(JSH_ResolverFactory *)resolver;

-(NSArray<JSH_SchemeResolverDelegate> *)getSchemeResolverList;
@end
