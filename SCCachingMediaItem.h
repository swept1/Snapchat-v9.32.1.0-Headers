//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, SCCachingEvictableTrack, SCCachingMediaGenerated;

@interface SCCachingMediaItem : NSObject
{
    NSString *_UUID;
    NSURL *_contentURL;
    long long _maxSourceLevel;
    id <SCCachingMediaEncryption> _encryption;
    unsigned long long _imageCount;
    struct CGSize _cachingSize;
    long long _cachingSourceLevel;
    SCCachingMediaGenerated *_cachingImages;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_cachingMediaGenerated;
    SCCachingEvictableTrack *_memoryTrack;
}

+ (id)contentURLForUUID:(id)arg1 cacheURL:(id)arg2;
+ (id)_decodeQueue;
- (void).cxx_destruct;
- (id)_identifierForTargetSize:(struct CGSize)arg1;
- (id)_bestSourceImagesForTargetSize:(struct CGSize)arg1 sourceLevel:(long long)arg2 cachingMediaGenerated:(id)arg3 bestSourceLevel:(long long *)arg4;
- (id)_bestRepresentedImagesForTargetSize:(struct CGSize)arg1 cachingMediaGenerated:(id)arg2;
- (void)evict;
- (id)imagesForTargetSize:(struct CGSize)arg1 sourceLevel:(long long)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)setCachingImages:(id)arg1 sourceLevel:(long long)arg2;
- (unsigned long long)inMemoryBytesForTargetSize:(struct CGSize)arg1;
- (_Bool)cachingImagesExistWithSourceLevel:(long long *)arg1;
- (id)initWithUUID:(id)arg1 queue:(id)arg2 memoryTrack:(id)arg3 contentURL:(id)arg4 maxSourceLevel:(long long)arg5 encryption:(id)arg6;

@end
