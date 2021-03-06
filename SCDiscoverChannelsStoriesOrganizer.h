//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDiscoverChannelsOrganizer.h"

@class FBKVOController;

@interface SCDiscoverChannelsStoriesOrganizer : SCDiscoverChannelsOrganizer
{
    FBKVOController *_kvoController;
    id <SCDiscoverChannelsStoriesOrganizerDelegate> _delegate;
}

+ (unsigned long long)viewSortingForChannel:(id)arg1 edition:(id)arg2;
@property(nonatomic) __weak id <SCDiscoverChannelsStoriesOrganizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_weightedViewCountForChannel:(id)arg1;
- (long long)_unviewedCompareChannel:(id)arg1 with:(id)arg2;
- (long long)_viewedCompareChannel:(id)arg1 with:(id)arg2;
- (CDUnknownBlockType)oldChannelsComparator;
- (CDUnknownBlockType)newChannelsComparator;
- (void)channelDidChangeToViewed:(id)arg1;
- (void)channel:(id)arg1 didChangeViewState:(id)arg2;
- (void)setChannels:(id)arg1;
- (void)dealloc;
- (id)init;

@end

