//
//  RQPlayerProtocol.h
//  rqdouyin
//
//  Created by 王文文 on 2018/3/23.
//  Copyright © 2018年 wangwen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RQVideoSlider.h"
#import "RQPlayerAttribute.h"

@protocol RQPlayerProtocolDelegate <NSObject>

/**
 播放按钮点击事件
 @param selected 按钮选中状态
 */
- (void)playButtonAction:(BOOL)selected;

/** 控制面板单击事件 */
- (void)tapGesture;
/** 控制面板双击事件 */
- (void)doubleTapGesture;

@end


@interface RQPlayerProtocol : UIView

/** 底部控制栏 */
@property (nonatomic, strong)UIView *bottomControlsBar;
/** 播放按钮 */
@property (nonatomic, strong) UIButton *playButton;

/** 进度滑杆 */
@property (nonatomic, strong) RQVideoSlider *videoSlider;

/** 播放时间 */
@property (nonatomic, strong) UILabel *playTimeLabel;
/** 视频总时间 */
@property (nonatomic, strong) UILabel *totalTimeLabel;
/** 进度条 */
@property (nonatomic, strong) UIProgressView *progress;
/** 隐藏控制面板延时时间 缺省5s */
@property (nonatomic, assign) NSTimeInterval hideInterval;
/** 加载失败重试按钮 */
@property (nonatomic, strong) UIButton *retryButton;

@property (nonatomic ,weak)id<RQPlayerProtocolDelegate >delegate;

/** 加载指示器 */
@property (nonatomic, strong) UIActivityIndicatorView *activityIndicatorView;

/**
 设置视频时间显示以及滑杆状态
 @param playTime 当前播放时间
 @param totalTime 视频总时间
 @param sliderValue 滑杆滑动值
 */
- (void)setPlaybackControlsWithPlayTime:(NSInteger)playTime totalTime:(NSInteger)totalTime sliderValue:(CGFloat)sliderValue;
/** progress显示缓冲进度 */
- (void)setPlayerProgress:(CGFloat)progress;
/** 显示或隐藏控制面板 */
//- (void)playerShowOrHidePlaybackControls;
/** 显示或隐藏状态栏 */
//- (void)showOrHideStatusBar;
/** 取消延时隐藏playbackControls */
//- (void)playerCancelAutoHidePlaybackControls;
/** 延时自动隐藏控制面板 */
//- (void)playerAutoHidePlaybackControls;
/** 显示或隐藏加载指示器 */
- (void)activityIndicatorViewShow:(BOOL)show;
/** 控制播放按钮选择状态 */
- (void)setPlayButtonSelect:(BOOL)select;
/** 显示或隐藏重新加载按钮 */
- (void)retryButtonShow:(BOOL)show;

@end
