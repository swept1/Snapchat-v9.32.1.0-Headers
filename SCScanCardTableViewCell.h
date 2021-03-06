//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCCameraCardTableViewCell.h"

@class UIActivityIndicatorView, UIView;

@interface SCScanCardTableViewCell : SCCameraCardTableViewCell
{
    UIView *_shadowView;
    _Bool _hasLoadedData;
    _Bool _hasLoadDataCompleted;
    _Bool _hasCardAppeared;
    _Bool _hasTransitionedToContent;
    _Bool _actionConsumed;
    _Bool _loadingData;
    CDUnknownBlockType _initialCardAnimationCompletion;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property(nonatomic, getter=isLoadingData) _Bool loadingData; // @synthesize loadingData=_loadingData;
@property(nonatomic, getter=isActionConsumed) _Bool actionConsumed; // @synthesize actionConsumed=_actionConsumed;
@property(nonatomic) __weak UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(copy, nonatomic) CDUnknownBlockType initialCardAnimationCompletion; // @synthesize initialCardAnimationCompletion=_initialCardAnimationCompletion;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)cardWillAppear;
- (void)cardWillInsert;
- (void)transitionToContentAnimated:(_Bool)arg1;
- (void)loadDataComplete;
- (void)loadData;
- (void)_createCardShadow;
- (id)initWithPreferredHeight:(double)arg1;

@end

