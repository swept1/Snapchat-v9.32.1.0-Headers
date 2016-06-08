//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIPanGestureRecognizer, UIView, UIViewController;

@interface SCViewControllerDismissalAnimator : NSObject <UIGestureRecognizerDelegate>
{
    UIViewController *_childVC;
    UIViewController *_parentVC;
    UIView *_touchBlockingView;
    unsigned long long _direction;
    _Bool _dismissalDidBegin;
    _Bool _animationDidBegin;
    _Bool _isCircleTransition;
    double _circleBeginXScale;
    double _circleBeginYScale;
    struct CGPoint _previousPosition;
    UIView *_maskLayerView;
    UIPanGestureRecognizer *_dismissPanRecognizer;
    CDUnknownBlockType _baseViewDismissalAnimation;
    id <SCViewControllerDismissalAnimatorDelegate> _delegate;
    UIView *_baseView;
    UIView *_darkBackgroundView;
    id <SCPullToDismissVolumeController> _volumeController;
    struct CGRect _destinationFrame;
}

@property(nonatomic) __weak id <SCPullToDismissVolumeController> volumeController; // @synthesize volumeController=_volumeController;
@property(nonatomic) struct CGRect destinationFrame; // @synthesize destinationFrame=_destinationFrame;
@property(retain, nonatomic) UIView *darkBackgroundView; // @synthesize darkBackgroundView=_darkBackgroundView;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) __weak id <SCViewControllerDismissalAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType baseViewDismissalAnimation; // @synthesize baseViewDismissalAnimation=_baseViewDismissalAnimation;
@property(retain, nonatomic) UIPanGestureRecognizer *dismissPanRecognizer; // @synthesize dismissPanRecognizer=_dismissPanRecognizer;
- (void).cxx_destruct;
- (double)_swipeProgressForTranslation:(struct CGPoint)arg1;
- (_Bool)_shouldDismissWithVelocity:(struct CGPoint)arg1;
- (void)_rectLayoutViewsForTranslation:(struct CGPoint)arg1 currentPosition:(struct CGPoint)arg2;
- (void)_circleLayoutViewsForTranslation:(struct CGPoint)arg1 currentPosition:(struct CGPoint)arg2;
- (void)_layoutViewsForTranslation:(struct CGPoint)arg1 currentPosition:(struct CGPoint)arg2;
- (double)_ratio:(double)arg1;
- (void)animateDarkBackgroundViewAlpha:(double)arg1;
- (void)_cancelTransition;
- (void)_performDismissalAnimation;
- (void)dismiss;
- (double)_percentageForValue:(double)arg1 fromValue:(double)arg2 toValue:(double)arg3;
- (_Bool)_finishPan:(id)arg1;
- (void)_didPan:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setupDismissPanRecognizer;
- (void)animationEnded:(_Bool)arg1;
- (void)startTransition;
- (void)dealloc;
- (id)initWithParentViewController:(id)arg1 childViewController:(id)arg2 isCircleTransition:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

