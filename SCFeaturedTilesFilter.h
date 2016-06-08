//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTilesFilter.h"

@class FBKVOController, NSArray, NSSet, NSString;

@interface SCFeaturedTilesFilter : NSObject <SCTilesFilter>
{
    FBKVOController *_kvoController;
    NSArray *_filteredTiles;
    NSSet *_dedupedTileIds;
    id <SCTilesFilterDelegate> _delegate;
}

@property(nonatomic) __weak id <SCTilesFilterDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSSet *dedupedTileIds; // @synthesize dedupedTileIds=_dedupedTileIds;
- (void).cxx_destruct;
- (id)filteredTiles;
- (void)_didUpdateSourceOrFilter;
- (void)_filter;
- (void)_setObservers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

