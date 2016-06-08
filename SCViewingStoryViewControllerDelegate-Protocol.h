//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Friend, FriendStories, NSString, SCViewingStoryViewController, Story;

@protocol SCViewingStoryViewControllerDelegate <NSObject>
- (void)willBeginAnimatingToDismissFromTileWithViewingStoryController:(SCViewingStoryViewController *)arg1;
- (void)didCancelDismissingFromTileWithViewingStoryController:(SCViewingStoryViewController *)arg1;
- (void)didFinishPresentingFromTileWithViewingStoryController:(SCViewingStoryViewController *)arg1;
- (void)willBeginPresentingFromTileWithViewingStoryController:(SCViewingStoryViewController *)arg1;
- (void)didStartPullToDismissWithViewingStoryController:(SCViewingStoryViewController *)arg1;
- (void)hideMyStoryAndGoToFeed:(SCViewingStoryViewController *)arg1;
- (void)hideMyStoryAndGoToChat:(SCViewingStoryViewController *)arg1 friend:(Friend *)arg2;
- (_Bool)shouldHideStoriesWhenPlayingStops:(long long)arg1;
- (void)viewingStoryController:(SCViewingStoryViewController *)arg1 didResolveDeepLinkWithSharedId:(NSString *)arg2 username:(NSString *)arg3;
- (void)viewingStoryController:(SCViewingStoryViewController *)arg1 didFinishStory:(Story *)arg2;
- (void)viewingStoryController:(SCViewingStoryViewController *)arg1 didSelectDeleteStorySnap:(Story *)arg2;
- (void)viewingStoryController:(SCViewingStoryViewController *)arg1 didSelectSaveStorySnap:(Story *)arg2;
- (void)viewingStoryControllerDidBecomeUnloaded:(SCViewingStoryViewController *)arg1;
- (void)viewingStoryController:(SCViewingStoryViewController *)arg1 didPullToDismissStory:(FriendStories *)arg2 didFullyView:(_Bool)arg3 finishReason:(long long)arg4;
- (void)viewingStoryController:(SCViewingStoryViewController *)arg1 didStopPlayingStory:(FriendStories *)arg2 didFullyView:(_Bool)arg3 exitReason:(long long)arg4;
- (void)viewingStoryController:(SCViewingStoryViewController *)arg1 failedToShowNextStorySnap:(Story *)arg2;
- (_Bool)viewingStoryController:(SCViewingStoryViewController *)arg1 readyToShowNextStorySnap:(Story *)arg2;

@optional
- (void)didShowStorySnapAfterMediaViewWasShown:(FriendStories *)arg1;
@end

