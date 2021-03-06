//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface SCAudioSessionConfigurator : NSObject
{
    NSString *_label;
    CDUnknownBlockType _requestBlock;
    NSMutableArray *_requestCompletions;
    NSMutableArray *_releaseCompletions;
    NSString *_audioSessionToken;
    _Bool _requesting;
    _Bool _releasing;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_completionQueue;
}

- (void).cxx_destruct;
- (void)teardownWithCompletion:(CDUnknownBlockType)arg1;
- (void)setupWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithLabel:(id)arg1 completionQueue:(id)arg2 requestBlock:(CDUnknownBlockType)arg3;
- (id)initWithLabel:(id)arg1 requestBlock:(CDUnknownBlockType)arg2;

@end

