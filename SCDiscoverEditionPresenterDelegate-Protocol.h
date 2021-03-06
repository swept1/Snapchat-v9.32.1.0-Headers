//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCDiscoverEdition, SCDiscoverEditionPresenter, SCViewControllerTransitionAnimator;

@protocol SCDiscoverEditionPresenterDelegate <NSObject>
- (void)discoverEditionPresenter:(SCDiscoverEditionPresenter *)arg1 didDismissEdition:(SCDiscoverEdition *)arg2 becameFullyViewed:(_Bool)arg3;
- (void)discoverEditionPresenterDidFinishDismissing:(SCDiscoverEditionPresenter *)arg1;
- (void)discoverEditionPresenterWillBeginAnimatingToDismissEdition:(SCDiscoverEditionPresenter *)arg1;
- (void)discoverEditionPresenterDidCancelDismissingEdition:(SCDiscoverEditionPresenter *)arg1;
- (void)discoverEditionPresenterDidBeginDismissingEdition:(SCDiscoverEditionPresenter *)arg1 transitionAnimator:(SCViewControllerTransitionAnimator *)arg2;
- (void)discoverEditionPresenterDidFailToPresentEdition:(SCDiscoverEditionPresenter *)arg1;
- (void)discoverEditionPresenterDidFinishPresentingEdition:(SCDiscoverEditionPresenter *)arg1;
- (void)discoverEditionPresenterWillBeginPresentingEdition:(SCDiscoverEditionPresenter *)arg1 transitionAnimator:(SCViewControllerTransitionAnimator *)arg2;
@end

