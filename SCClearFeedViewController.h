//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLeftSwipableViewController.h"

#import "SCClearFeedHeaderViewControllerDelegate.h"

@class NSString, SCChats, SCClearFeedHeaderViewController, SCClearFeedTableViewController, UIView, User;

@interface SCClearFeedViewController : SCLeftSwipableViewController <SCClearFeedHeaderViewControllerDelegate>
{
    SCChats *_chats;
    SCClearFeedHeaderViewController *_headerViewController;
    SCClearFeedTableViewController *_tableViewController;
    User *_user;
    UIView *_clearingLoadingView;
    UIView *_noSnapsView;
}

@property(retain, nonatomic) UIView *noSnapsView; // @synthesize noSnapsView=_noSnapsView;
@property(retain, nonatomic) UIView *clearingLoadingView; // @synthesize clearingLoadingView=_clearingLoadingView;
@property(retain, nonatomic) User *user; // @synthesize user=_user;
@property(retain, nonatomic) SCClearFeedTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(retain, nonatomic) SCClearFeedHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(retain, nonatomic) SCChats *chats; // @synthesize chats=_chats;
- (void).cxx_destruct;
- (_Bool)inValidView:(id)arg1;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldPopToRootViewController;
- (void)hideNoSnapsView;
- (void)showNoSnapsView;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)didPressBackButton;
- (void)didPressClearFeedButton;
- (void)resetNoChats;
- (void)didClearFeed;
- (void)chatsDidChange;
- (id)getPageViewName;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUser:(id)arg1 chats:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

