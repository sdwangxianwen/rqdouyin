//
//  RQPlayerView.h
//  rqdouyin
//
//  Created by 王文文 on 2018/3/23.
//  Copyright © 2018年 wangwen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RQPlayerView : UIView

/** 播放视频 */
- (void)playVideo;
/** 暂停播放 */
- (void)pauseVideo;
/** 释放播放器 */
- (void)deallocPlayer;

@end
