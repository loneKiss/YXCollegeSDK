//
//  JSH_SchemeResolverDelegate.h
//  demo
//
//  Created by zx on 2018/11/6.
//  Copyright © 2018年 cloudcns. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSH_BaseVC.h"

@protocol JSH_SchemeResolverDelegate<NSObject>
@required
-(bool)isAvailable:(JSH_BaseVC *)target
               url:(NSString *)url;
-(void)invoke:(JSH_BaseVC *)target
          url:(NSString *)url;
@end
