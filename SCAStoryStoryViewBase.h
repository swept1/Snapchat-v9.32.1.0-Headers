//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable.h"

@class NSNumber, NSString;

@interface SCAStoryStoryViewBase : SCAUserTrackedEvent <MapSerializable>
{
    NSNumber *timeViewed;
    NSNumber *fullView;
    NSNumber *numSnapsViewed;
    NSNumber *snapIndexCount;
    NSNumber *viewLocationPos;
    NSNumber *viewLocation;
    NSNumber *autoAdvanceIndex;
    NSNumber *snapCount;
    NSNumber *storySessionId;
    NSNumber *explorerSnapCount;
    NSNumber *explorerSwipeCount;
    long long storyType;
    long long exitEvent;
    long long source;
    long long storyTypeSpecific;
    NSString *posterId;
    NSString *geoFence;
    NSString *sponsor;
    NSString *cellId;
    NSString *hydraSearchId;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)getHydraSearchId;
- (void)setHydraSearchId:(id)arg1;
- (id)getCellId;
- (void)setCellId:(id)arg1;
- (id)getSponsor;
- (void)setSponsor:(id)arg1;
- (id)getGeoFence;
- (void)setGeoFence:(id)arg1;
- (id)getPosterId;
- (void)setPosterId:(id)arg1;
- (long long)getStoryTypeSpecific;
- (void)setStoryTypeSpecific:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getExitEvent;
- (void)setExitEvent:(long long)arg1;
- (long long)getStoryType;
- (void)setStoryType:(long long)arg1;
- (long long)getExplorerSwipeCount;
- (void)setExplorerSwipeCount:(long long)arg1;
- (long long)getExplorerSnapCount;
- (void)setExplorerSnapCount:(long long)arg1;
- (long long)getStorySessionId;
- (void)setStorySessionId:(long long)arg1;
- (long long)getSnapCount;
- (void)setSnapCount:(long long)arg1;
- (long long)getAutoAdvanceIndex;
- (void)setAutoAdvanceIndex:(long long)arg1;
- (long long)getViewLocation;
- (void)setViewLocation:(long long)arg1;
- (long long)getViewLocationPos;
- (void)setViewLocationPos:(long long)arg1;
- (long long)getSnapIndexCount;
- (void)setSnapIndexCount:(long long)arg1;
- (long long)getNumSnapsViewed;
- (void)setNumSnapsViewed:(long long)arg1;
- (_Bool)getFullView;
- (void)setFullView:(_Bool)arg1;
- (double)getTimeViewed;
- (void)setTimeViewed:(double)arg1;
- (id)init;

@end

