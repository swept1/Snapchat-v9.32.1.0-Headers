//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLeftSwipableViewController.h"

#import "SCAlertGearDelegate.h"
#import "SCBlockReportAlertDelegate.h"
#import "SCFriendProfileCellViewDelegate.h"
#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "SCMiniProfileControllerDelegate.h"
#import "SWTableViewCellDelegate.h"
#import "Subview.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AddFriendsDelegateObject, Friend, NSMutableArray, NSMutableSet, NSNumber, NSString, SCAlertGear, SCBlockReportAlert, SCFriendLongPressGestureRecognizer, SCHeader, SCMiniProfileController, SCUserSession, UILabel, UITableView, UITapGestureRecognizer;

@interface RequestTableViewController : SCLeftSwipableViewController <UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, SCHeaderDataSource, SCHeaderDelegate, SWTableViewCellDelegate, SCAlertGearDelegate, SCBlockReportAlertDelegate, SCMiniProfileControllerDelegate, SCFriendProfileCellViewDelegate, Subview>
{
    id <SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    SCUserSession *_userSession;
    SCMiniProfileController *_miniProfileController;
    SCFriendLongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableSet *_requestsShown;
    NSMutableSet *_requestsShownWithDisplayPic;
    NSMutableSet *_requestsShownNotAddedMeBack;
    NSMutableSet *_requestsAccepted;
    NSMutableSet *_requestsAcceptedWithDisplayPic;
    AddFriendsDelegateObject *_addFriendsDelegate;
    SCHeader *_header;
    UITableView *_tableView;
    NSNumber *_addedFriendsLastViewedTimestamp;
    NSMutableArray *_friends;
    UILabel *_noFriendsView;
    SCAlertGear *_alertGear;
    SCBlockReportAlert *_blockReportAlert;
    Friend *_selectedFriendToRemove;
    NSMutableSet *_friendsTouchedAtLeastOnce;
    NSString *_blockActionMethod;
    unsigned long long _requestBlockCount;
    unsigned long long _requestIgnoreCount;
    unsigned long long _requestNameEditCount;
}

+ (id)requestsContext;
+ (id)createSpinner;
@property(nonatomic) unsigned long long requestNameEditCount; // @synthesize requestNameEditCount=_requestNameEditCount;
@property(nonatomic) unsigned long long requestIgnoreCount; // @synthesize requestIgnoreCount=_requestIgnoreCount;
@property(nonatomic) unsigned long long requestBlockCount; // @synthesize requestBlockCount=_requestBlockCount;
@property(nonatomic) NSString *blockActionMethod; // @synthesize blockActionMethod=_blockActionMethod;
@property(retain, nonatomic) NSMutableSet *friendsTouchedAtLeastOnce; // @synthesize friendsTouchedAtLeastOnce=_friendsTouchedAtLeastOnce;
@property(retain, nonatomic) Friend *selectedFriendToRemove; // @synthesize selectedFriendToRemove=_selectedFriendToRemove;
@property(retain, nonatomic) SCBlockReportAlert *blockReportAlert; // @synthesize blockReportAlert=_blockReportAlert;
@property(retain, nonatomic) SCAlertGear *alertGear; // @synthesize alertGear=_alertGear;
@property(retain, nonatomic) UILabel *noFriendsView; // @synthesize noFriendsView=_noFriendsView;
@property(retain, nonatomic) NSMutableArray *friends; // @synthesize friends=_friends;
@property(retain, nonatomic) NSNumber *addedFriendsLastViewedTimestamp; // @synthesize addedFriendsLastViewedTimestamp=_addedFriendsLastViewedTimestamp;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) AddFriendsDelegateObject *addFriendsDelegate; // @synthesize addFriendsDelegate=_addFriendsDelegate;
- (void).cxx_destruct;
- (id)getPageName;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didDisplayProfilePictureOnCellView:(id)arg1 onThumbnail:(id)arg2 friend:(id)arg3;
- (void)friendProfileCellView:(id)arg1 addFriendPressed:(id)arg2 friend:(id)arg3;
- (void)didPressAddFriendButtonFor:(id)arg1 controller:(id)arg2;
- (id)getAddSourceTypeForFriend:(id)arg1 controller:(id)arg2;
- (id)userSession;
- (void)didPressSettingsButtonForFriend:(id)arg1 controller:(id)arg2;
- (void)didSendSnap:(id)arg1 controller:(id)arg2;
- (void)didPressChatButtonForFriend:(id)arg1 controller:(id)arg2;
- (void)_removeDownloadContextFor:(id)arg1;
- (void)_addDownloadContextFor:(id)arg1;
- (id)_getDownloadContextFor:(id)arg1;
- (void)_dismissMiniProfile:(id)arg1;
- (void)_dismissMiniProfileForAddedFriend:(id)arg1;
- (void)_presentMiniProfile:(id)arg1;
- (void)_tap:(id)arg1;
- (void)_longPress:(id)arg1;
- (void)_initGestures;
- (void)showDeleteFriendConfirmDialog:(id)arg1;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldPopToRootViewController;
- (_Bool)inValidView:(id)arg1;
- (void)leftSwipeSucceed;
- (void)leftButtonPressed;
- (id)textColorForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)titleForHeader:(id)arg1;
- (void)didPressIgnoreButton:(id)arg1;
- (void)didPressBlockButton:(id)arg1;
- (void)swipeableTableViewCell:(id)arg1 didTriggerRightUtilityButtonWithIndex:(long long)arg2;
- (long long)getProfilePageType;
- (void)customOperationForBlock:(id)arg1 blockReasonId:(id)arg2;
- (void)customOperationForDeleteorIgnore:(id)arg1;
- (void)handleSetDisplay:(id)arg1 friend:(id)arg2;
- (id)removeOrIgnoreButtonTitle:(id)arg1;
- (void)removeAddedFriend:(id)arg1 atIndexPath:(id)arg2;
- (id)friendForIndexPath:(id)arg1;
- (id)addedFriendForIndexPath:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)rightUtilityButtonsForPendingFriend:(_Bool)arg1;
- (id)_getFriendProfileCellOnTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollToTop;
- (void)reloadFriends;
- (void)reloadTable;
- (void)reloadData;
- (void)friendsDidChange;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (unsigned long long)getNotAddedMeBackRequestCount:(id)arg1;
- (void)initAndAddNoFriendRequestsView;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)logOnViewDidAppear;
- (id)getPageViewName;
- (id)initWithSendSnapNavigationControllerDelegate:(id)arg1 startChatDelegate:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
