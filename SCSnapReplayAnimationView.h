//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface SCSnapReplayAnimationView : UIView
{
    id <SCSnapReplayConfig> _viewModel;
}

@property(readonly, nonatomic) id <SCSnapReplayConfig> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)animationCompletionBlockKey;
- (void)hide;
- (void)animate;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

@end

