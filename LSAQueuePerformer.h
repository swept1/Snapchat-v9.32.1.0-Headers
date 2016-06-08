//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface LSAQueuePerformer : NSObject
{
    NSString *_uuid;
    _Bool _reentrant;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)mainQueuePerformer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (_Bool)isCurrentPerformer;
- (void)performAndWait:(CDUnknownBlockType)arg1;
- (void)perform:(CDUnknownBlockType)arg1 after:(double)arg2;
- (void)perform:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1 reentrant:(_Bool)arg2;

@end

