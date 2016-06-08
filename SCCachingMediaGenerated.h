//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCachingEvictable.h"

@class NSArray, NSString, NSURL;

@interface SCCachingMediaGenerated : NSObject <SCCachingEvictable>
{
    NSURL *_contentURL;
    NSString *_UUID;
    long long _maxSourceLevel;
    NSArray *_images;
    long long _sourceLevel;
    long long _cost;
    struct CGSize _targetSize;
}

@property(nonatomic) long long cost; // @synthesize cost=_cost;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic) long long sourceLevel; // @synthesize sourceLevel=_sourceLevel;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (void)evict;
- (void)storeImagesOntoDisk:(id)arg1 sourceLevel:(long long)arg2 encryption:(id)arg3;
- (id)dataImagesFromDiskWithSourceLevel:(long long *)arg1 encryption:(id)arg2;
- (id)initWithContentURL:(id)arg1 UUID:(id)arg2 targetSize:(struct CGSize)arg3 maxSourceLevel:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
