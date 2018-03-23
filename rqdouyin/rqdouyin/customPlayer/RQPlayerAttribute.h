//
//  RQPlayerAttribute.h
//  rqdouyin
//
//  Created by 王文文 on 2018/3/23.
//  Copyright © 2018年 wangwen. All rights reserved.
//属性设置

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface RQPlayerAttribute : NSObject

/** 视频数据源 */
@property (nonatomic, strong) NSURL *sourceUrl;
/** 是否自动播放 */
@property (nonatomic, assign) BOOL shouldAutoPlay;
/** 是否重复播放 */
@property (nonatomic, assign) BOOL repeatPlay;
/** 是否支持双击暂停或播放 */
@property (nonatomic, assign) BOOL supportedDoubleTap;
/** 是否支持自动转屏 */
@property (nonatomic, assign) BOOL shouldAutorotate;
/** 隐藏控制面板延时时间 缺省5s */
@property (nonatomic, assign) NSTimeInterval hideControlsInterval;


@end
