//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BCOV_RACSignal.h"

@class BCOV_RACSequence;

@interface BCOV_RACSignal (Operations)
+ (id)defer:(CDUnknownBlockType)arg1;
+ (id)if:(id)arg1 then:(id)arg2 else:(id)arg3;
+ (id)switch:(id)arg1 cases:(id)arg2 default:(id)arg3;
+ (id)interval:(double)arg1 onScheduler:(id)arg2 withLeeway:(double)arg3;
+ (id)interval:(double)arg1 onScheduler:(id)arg2;
+ (id)merge:(id)arg1;
+ (id)combineLatest:(id)arg1 reduce:(CDUnknownBlockType)arg2;
+ (id)combineLatest:(id)arg1;
- (id)reduceApply;
- (id)or;
- (id)and;
- (id)not;
- (id)dematerialize;
- (id)materialize;
- (id)ignoreValues;
- (id)sample:(id)arg1;
- (id)retry;
- (id)retry:(long long)arg1;
- (id)all:(CDUnknownBlockType)arg1;
- (id)any:(CDUnknownBlockType)arg1;
- (id)any;
- (id)groupBy:(CDUnknownBlockType)arg1;
- (id)groupBy:(CDUnknownBlockType)arg1 transform:(CDUnknownBlockType)arg2;
- (id)deliverOnMainThread;
- (id)subscribeOn:(id)arg1;
- (id)deliverOn:(id)arg1;
- (id)timeout:(double)arg1 onScheduler:(id)arg2;
- (id)replayLazily;
- (id)replayLast;
- (id)replay;
- (id)multicast:(id)arg1;
- (id)publish;
@property(readonly, nonatomic) BCOV_RACSequence *sequence;
- (id)toArray;
- (_Bool)waitUntilCompleted:(id *)arg1;
- (id)firstOrDefault:(id)arg1 success:(_Bool *)arg2 error:(id *)arg3;
- (id)firstOrDefault:(id)arg1;
- (id)first;
- (id)switchToLatest;
- (id)takeUntilReplacement:(id)arg1;
- (id)takeUntil:(id)arg1;
- (id)setKeyPath:(id)arg1 onObject:(id)arg2 nilValue:(id)arg3;
- (id)setKeyPath:(id)arg1 onObject:(id)arg2;
- (id)aggregateWithStart:(id)arg1 reduceWithIndex:(CDUnknownBlockType)arg2;
- (id)aggregateWithStart:(id)arg1 reduce:(CDUnknownBlockType)arg2;
- (id)aggregateWithStartFactory:(CDUnknownBlockType)arg1 reduce:(CDUnknownBlockType)arg2;
- (id)concat;
- (id)then:(CDUnknownBlockType)arg1;
- (id)flatten:(unsigned long long)arg1;
- (id)merge:(id)arg1;
- (id)combineLatestWith:(id)arg1;
- (id)takeLast:(unsigned long long)arg1;
- (id)collect;
- (id)bufferWithTime:(double)arg1 onScheduler:(id)arg2;
- (id)finally:(CDUnknownBlockType)arg1;
- (id)initially:(CDUnknownBlockType)arg1;
- (id)tryMap:(CDUnknownBlockType)arg1;
- (id)try:(CDUnknownBlockType)arg1;
- (id)catchTo:(id)arg1;
- (id)catch:(CDUnknownBlockType)arg1;
- (id)repeat;
- (id)delay:(double)arg1;
- (id)throttle:(double)arg1 valuesPassingTest:(CDUnknownBlockType)arg2;
- (id)throttle:(double)arg1;
- (id)doCompleted:(CDUnknownBlockType)arg1;
- (id)doError:(CDUnknownBlockType)arg1;
- (id)doNext:(CDUnknownBlockType)arg1;
@end

