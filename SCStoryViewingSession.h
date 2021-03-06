//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FriendStories, NSMutableArray, Story;

@interface SCStoryViewingSession : NSObject
{
    FriendStories *_friendStories;
    long long _viewingType;
    id <SCStoryOrganizer> _storyOrganizer;
    Story *_storyToInsert;
    _Bool _inPlayback;
    NSMutableArray *_eventListeners;
    long long _storyIndex;
}

- (void).cxx_destruct;
- (void)advanceToNextStory;
- (void)endPlayback;
- (void)startPlayback;
- (void)displayedStory:(id)arg1 timeLeft:(double)arg2;
- (void)viewedStory:(id)arg1 exitReason:(long long)arg2;
- (long long)viewingType;
- (long long)currentStoryIndex;
- (id)nextStory;
- (id)currentStory;
- (void)addEventListener:(id)arg1;
- (id)initWithFriendStories:(id)arg1 viewingType:(long long)arg2;
- (id)initWithFriendStories:(id)arg1 viewingType:(long long)arg2 storyOrganizer:(id)arg3;

@end

