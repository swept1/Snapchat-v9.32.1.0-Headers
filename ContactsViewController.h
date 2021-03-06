//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "EGORefreshTableHeaderDelegate.h"
#import "SCAddFriendsInterstitialViewDelegate.h"
#import "SCIndexedTableViewDataSource.h"
#import "SCIndexedTableViewDelegate.h"
#import "SCMyFriendCellControllerDelegate.h"
#import "SCSearchFriendsSubViewControllerDelegate.h"
#import "SendTextControllerDelegate.h"
#import "Subview.h"

@class AddFriendsDelegateObject, EGORefreshTableHeaderView, Friend, NSArray, NSMutableArray, NSMutableSet, NSString, SCAddFriendsInterstitialView, SCIndexedTableView, SCMyFriendCellController, SCSearchFriendsSubViewController, UILabel, UIView;

@interface ContactsViewController : UIViewController <EGORefreshTableHeaderDelegate, SCMyFriendCellControllerDelegate, SCAddFriendsInterstitialViewDelegate, SCIndexedTableViewDataSource, SCIndexedTableViewDelegate, SCSearchFriendsSubViewControllerDelegate, SendTextControllerDelegate, Subview>
{
    UILabel *_subTextLabel;
    UIView *_subTextLabelSeparator;
    _Bool _forceHideSubtextLabel;
    _Bool _disablePullToRefresh;
    _Bool _hasInteractedWithTable;
    _Bool _reloading;
    int _context;
    AddFriendsDelegateObject *_addFriendsDelegate;
    id <ContactsVCUserActionDelegate> _superViewDelegate;
    NSMutableArray *_selectedFriends;
    unsigned long long _tableViewType;
    NSArray *_snapchattersFriendsList;
    NSArray *_nonSnapchattersFriendsList;
    SCAddFriendsInterstitialView *_addFriendsInterstitialView;
    Friend *_friendBeingInvited;
    NSMutableSet *_temporarilyAddedFriends;
    SCIndexedTableView *_unAddedContactsTableView;
    EGORefreshTableHeaderView *_refreshHeaderView;
    SCSearchFriendsSubViewController *_searchFriendsSVC;
    SCMyFriendCellController *_cellController;
    struct UIEdgeInsets _contentInset;
}

+ (id)searchContext;
+ (id)contactsContext;
@property(retain, nonatomic) SCMyFriendCellController *cellController; // @synthesize cellController=_cellController;
@property(nonatomic) _Bool reloading; // @synthesize reloading=_reloading;
@property(retain, nonatomic) SCSearchFriendsSubViewController *searchFriendsSVC; // @synthesize searchFriendsSVC=_searchFriendsSVC;
@property(retain, nonatomic) EGORefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) SCIndexedTableView *unAddedContactsTableView; // @synthesize unAddedContactsTableView=_unAddedContactsTableView;
@property(retain, nonatomic) NSMutableSet *temporarilyAddedFriends; // @synthesize temporarilyAddedFriends=_temporarilyAddedFriends;
@property(nonatomic) __weak Friend *friendBeingInvited; // @synthesize friendBeingInvited=_friendBeingInvited;
@property(nonatomic) _Bool hasInteractedWithTable; // @synthesize hasInteractedWithTable=_hasInteractedWithTable;
@property(retain, nonatomic) SCAddFriendsInterstitialView *addFriendsInterstitialView; // @synthesize addFriendsInterstitialView=_addFriendsInterstitialView;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) _Bool disablePullToRefresh; // @synthesize disablePullToRefresh=_disablePullToRefresh;
@property(nonatomic) _Bool forceHideSubtextLabel; // @synthesize forceHideSubtextLabel=_forceHideSubtextLabel;
@property(retain, nonatomic) NSArray *nonSnapchattersFriendsList; // @synthesize nonSnapchattersFriendsList=_nonSnapchattersFriendsList;
@property(retain, nonatomic) NSArray *snapchattersFriendsList; // @synthesize snapchattersFriendsList=_snapchattersFriendsList;
@property(nonatomic) unsigned long long tableViewType; // @synthesize tableViewType=_tableViewType;
@property(retain, nonatomic) NSMutableArray *selectedFriends; // @synthesize selectedFriends=_selectedFriends;
@property(nonatomic) __weak id <ContactsVCUserActionDelegate> superViewDelegate; // @synthesize superViewDelegate=_superViewDelegate;
@property(nonatomic) __weak AddFriendsDelegateObject *addFriendsDelegate; // @synthesize addFriendsDelegate=_addFriendsDelegate;
@property(nonatomic) int context; // @synthesize context=_context;
- (void).cxx_destruct;
- (struct UIEdgeInsets)getContentInset;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didFindFriends:(id)arg1;
- (void)sendTextController:(id)arg1 completedWithStatus:(int)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForViewModel:(id)arg2 atIndexPath:(id)arg3;
- (void)configTableViewWithSnapchattersList:(id)arg1 nonSnapchattersList:(id)arg2;
- (_Bool)isFriendSelectedToAdd:(id)arg1;
- (void)selectMultiFriends:(id)arg1;
- (void)toggleFriendToAdd:(id)arg1;
- (void)didPressSettingsButtonForFriend:(id)arg1;
- (void)didPressAddFriendButtonForFriend:(id)arg1 forFriend:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)getSearchResultsBySection:(id)arg1 withSearchText:(id)arg2;
- (void)resetFriendFilter:(unsigned long long)arg1;
- (void)sendInvitesToFriend:(id)arg1;
- (id)sectionNameForSectionEnum:(unsigned long long)arg1;
- (id)getMyFriendCellForFriend:(id)arg1 onTableView:(id)arg2 atIndexPath:(id)arg3;
- (id)cellForModelView:(id)arg1 onTableView:(id)arg2 forRowAtindexPath:(id)arg3;
- (id)pageName;
- (void)handleChangeToFindFriendsResults:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeFindFriendsObservers;
- (void)addFindFriendsObservers;
- (void)didDismissSearch;
- (void)didBeginEditingSearchBox;
- (id)moreSnapchatterCell;
- (void)moreSnapchatters;
- (id)setupSectionToUnindexedFriendMap;
- (void)refreshSearchBarHidden;
- (void)reloadData;
- (void)subviewDidAppear;
- (void)subviewWillAppear;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)hideSubTextLabelAndSeparator;
- (id)createSubTextView:(id)arg1;
- (void)loadView;
- (_Bool)logOnViewDidAppear;
- (id)getPageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

