//
//  KTHook.h
//  kTBehaviorDemo
//
//  Created by 刘嵩野 on 2018/1/23.
//  Copyright © 2018年 刘嵩野. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KTHook : NSObject

+ (void)swizzlingInClass:(Class)cls originalSelector:(SEL)originalSelector swizzledSelector:(SEL)swizzledSelector;

@end
