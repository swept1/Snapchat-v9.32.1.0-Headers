//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBKVOController, FriendStories, NSMutableDictionary, SCOperaViewModel;

@interface SCStoriesOperaDataSource : NSObject
{
    FBKVOController *_kvoController;
    FriendStories *_friendStories;
    NSMutableDictionary *_storyClientIDToViewModelMap;
    SCOperaViewModel *_rootViewModel;
}

@property(retain, nonatomic) SCOperaViewModel *rootViewModel; // @synthesize rootViewModel=_rootViewModel;
- (void).cxx_destruct;
- (void)_storyMediaStateDidChange:(id)arg1 story:(id)arg2;
- (void)_generateViewModelsForStories:(id)arg1;
- (id)initWithFriendStories:(id)arg1 kvoController:(id)arg2;
- (id)initWithFriendStories:(id)arg1;

@end
