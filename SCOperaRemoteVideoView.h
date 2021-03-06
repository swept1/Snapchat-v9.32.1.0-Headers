//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCLoadingIndicatorView, SCOperaPlayerView, SCOperaVideoControlsView, UIImageView;

@interface SCOperaRemoteVideoView : UIView
{
    UIImageView *_firstFrameImageView;
    SCOperaVideoControlsView *_controlsView;
    SCLoadingIndicatorView *_activityIndicator;
    UIView *_screenshot;
    SCOperaPlayerView *_playerView;
}

+ (id)viewWithFrame:(struct CGRect)arg1 primaryColor:(id)arg2 disableControls:(_Bool)arg3 hideControls:(_Bool)arg4;
@property(retain, nonatomic) SCOperaPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIView *screenshot; // @synthesize screenshot=_screenshot;
@property(retain, nonatomic) SCLoadingIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) SCOperaVideoControlsView *controlsView; // @synthesize controlsView=_controlsView;
@property(retain, nonatomic) UIImageView *firstFrameImageView; // @synthesize firstFrameImageView=_firstFrameImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupPlayerViewWithPlayerLayer:(id)arg1;
- (void)setupScreenshot:(id)arg1;
- (void)setupFirstFrameView:(id)arg1;
- (void)setupSpinnerWithPrimaryColor:(id)arg1;
- (void)setupControlsViewWithPrimaryColor:(id)arg1 hideControls:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 primaryColor:(id)arg2 disableControls:(_Bool)arg3 hideControls:(_Bool)arg4;

@end

