//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCPullToDismissControllerGestureDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSMutableArray, NSString, SCPullToDismissController, UICollectionView, UIPanGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIView, UIViewController<SCMediaFullScreenViewDelegate><SCDiscoverBarDelegate>;

@interface SCBaseMediaFullScreenBrowserController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, SCPullToDismissControllerGestureDelegate>
{
    UIViewController<SCMediaFullScreenViewDelegate><SCDiscoverBarDelegate> *_parentViewController;
    struct CGRect _destinationBoundingFrame;
    UICollectionView *_collectionView;
    UIScrollView *_dummyScrollView;
    UIView *_containerView;
    id <SCBaseMediaFullScreenDelegate> _delegate;
    UIPanGestureRecognizer *_downPanRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    id <SCBaseMediaFullScreenViewSource> _viewSource;
    NSArray *_items;
    NSMutableArray *_filteredItems;
    _Bool _needToAnimateExpand;
    _Bool _shouldDisableAudio;
    SCPullToDismissController *_pullToDismissController;
}

- (void).cxx_destruct;
- (id)_filterInvalidItems;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)fullScreenViewWillDismiss;
- (void)resetBackgroundColor;
- (void)_handleTap:(id)arg1;
- (void)_handleDownPan:(id)arg1;
- (void)didFinishPullToDismiss;
- (void)didStartPullToDismiss;
- (_Bool)shouldTriggerPullToDismissWithSwipeDirection:(unsigned long long)arg1;
- (id)pullToDismissController;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)didDismiss;
- (void)presentInView:(id)arg1 destinationBoundingFrame:(struct CGRect)arg2;
- (void)_initCollectionView;
- (void)updateDataSourceWithSource:(id)arg1 initialIndex:(unsigned long long)arg2;
- (id)initWithParentViewController:(id)arg1 delegate:(id)arg2 shouldDisableAudio:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
