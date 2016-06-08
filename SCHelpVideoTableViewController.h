//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLeftSwipableViewController.h"

#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "SCOperaEventListener.h"
#import "SCOperaImageProvider.h"
#import "SCViewControllerTransitionAnimatorDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SCHeader, SCHelpVideoListingManager, SCStopwatch, SCStoriesViewHeader, SCViewControllerTransitionAnimator, UITableView;

@interface SCHelpVideoTableViewController : SCLeftSwipableViewController <SCViewControllerTransitionAnimatorDelegate, UITableViewDataSource, UITableViewDelegate, SCHeaderDelegate, SCHeaderDataSource, SCOperaEventListener, SCOperaImageProvider>
{
    SCStopwatch *_pageViewStopwatch;
    SCViewControllerTransitionAnimator *_transitionAnimator;
    SCHelpVideoListingManager *_helpVideoListingManager;
    UITableView *_tableView;
    SCHeader *_header;
    SCStoriesViewHeader *_viewHeader;
    double _pageTimeViewedSec;
}

@property(readonly, nonatomic) double pageTimeViewedSec; // @synthesize pageTimeViewedSec=_pageTimeViewedSec;
@property(retain, nonatomic) SCStoriesViewHeader *viewHeader; // @synthesize viewHeader=_viewHeader;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SCHelpVideoListingManager *helpVideoListingManager; // @synthesize helpVideoListingManager=_helpVideoListingManager;
- (void).cxx_destruct;
- (void)viewControllerTransitionAnimatorDidFinishDismissing;
- (void)viewControllerTransitionAnimatorWillBeginAnimatingToDismiss;
- (void)viewControllerTransitionAnimatorDidCancelDismissing;
- (void)viewControllerTransitionAnimatorDidBeginDismissing;
- (_Bool)viewControllerTransitionAnimatorShouldBeginDismissingWithDirection:(unsigned long long)arg1;
- (void)viewControllerTransitionAnimatorDidFinishPresenting;
- (void)viewControllerTransitionAnimatorWillBeginPresenting;
- (void)leftButtonPressed;
- (id)textColorForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)titleForHeader:(id)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)imageForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)needsBottomBorderFromIndexPath:(id)arg1;
- (id)getHeaderTextForSection:(long long)arg1;
- (_Bool)isSupportRedirectRow:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillResignActive;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)prefersStatusBarHidden;
- (void)initTableView;
- (void)videoListingUpdated;
- (void)getVideoListing;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

