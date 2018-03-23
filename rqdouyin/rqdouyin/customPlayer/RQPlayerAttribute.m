//
//  RQPlayerAttribute.m
//  rqdouyin
//
//  Created by 王文文 on 2018/3/23.
//  Copyright © 2018年 wangwen. All rights reserved.
//

#import "RQPlayerAttribute.h"

@implementation RQPlayerAttribute

/**
 初始化 设置缺省值
 */
- (instancetype)init
{
    self = [super init];
    if (self) {
        _hideControlsInterval = 5.0f;
    }
    return self;
}

@end
