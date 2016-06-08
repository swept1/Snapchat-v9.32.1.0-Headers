//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCArchiveTaskDelegate.h"

@class NSMutableArray, NSString;

@interface SCArchiveManager : NSObject <SCArchiveTaskDelegate>
{
    id <SCPerforming> _schedulingQueue;
    long long _numberOfRunningTasks;
    NSMutableArray *_tasks;
}

+ (id)shared;
@property(retain, nonatomic) NSMutableArray *tasks; // @synthesize tasks=_tasks;
@property(nonatomic) long long numberOfRunningTasks; // @synthesize numberOfRunningTasks=_numberOfRunningTasks;
- (void).cxx_destruct;
- (void)didRunTask:(id)arg1;
- (void)_run;
- (void)submitItem:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)initWithSchedulingQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
