//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCVideoChatFramingAnimator.h"

@class NSString, SCVideoChatAnimationTimingFunction, UIView;

@interface SCVideoChatViewAlphaAnimator : NSObject <SCVideoChatFramingAnimator>
{
    int _startFrame;
    int _stopFrame;
    UIView *_view;
    SCVideoChatAnimationTimingFunction *_timingFunction;
    double _initialAlpha;
    double _targetAlpha;
}

@property(nonatomic) double targetAlpha; // @synthesize targetAlpha=_targetAlpha;
@property(nonatomic) double initialAlpha; // @synthesize initialAlpha=_initialAlpha;
@property(nonatomic) int stopFrame; // @synthesize stopFrame=_stopFrame;
@property(nonatomic) int startFrame; // @synthesize startFrame=_startFrame;
@property(retain, nonatomic) SCVideoChatAnimationTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)animateForFrame:(int)arg1;
- (id)initWithView:(id)arg1 andTimingFunction:(id)arg2 andStartFrame:(int)arg3 andStopFrame:(int)arg4 andTargetAlpha:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
