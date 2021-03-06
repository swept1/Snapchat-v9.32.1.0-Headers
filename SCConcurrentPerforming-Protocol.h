//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCPerforming.h"

@class NSObject<OS_dispatch_group>;

@protocol SCConcurrentPerforming <SCPerforming>
- (void)leaveGroup:(NSObject<OS_dispatch_group> *)arg1;
- (void)enterGroup:(NSObject<OS_dispatch_group> *)arg1;
- (void)performOnGroupNotification:(NSObject<OS_dispatch_group> *)arg1 block:(void (^)(void))arg2;
- (void)performWithBarrier:(void (^)(void))arg1;
@end

