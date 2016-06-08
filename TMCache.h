//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, TMDiskCache, TMMemoryCache;

@interface TMCache : NSObject
{
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    TMDiskCache *_diskCache;
    TMMemoryCache *_memoryCache;
}

+ (id)sharedCache;
@property(readonly) TMMemoryCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(readonly) TMDiskCache *diskCache; // @synthesize diskCache=_diskCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly) unsigned long long diskByteCount;
- (void)trimToDate:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeAllObjects:(CDUnknownBlockType)arg1;
- (void)removeObjectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)objectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)description;
- (id)initWithName:(id)arg1 rootPath:(id)arg2;
- (id)initWithName:(id)arg1;

@end

