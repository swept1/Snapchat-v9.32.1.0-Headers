//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SOJUSnapUpdateBuilder : NSObject
{
    NSNumber *_t;
    NSNumber *_c;
    NSNumber *_replayed;
    NSNumber *_sv;
    NSString *_stackId;
    NSString *_replayPurchaseReceipt;
    NSString *_esId;
}

+ (id)withJUSnapUpdate:(id)arg1;
- (void).cxx_destruct;
- (id)setEsId:(id)arg1;
- (id)setReplayPurchaseReceipt:(id)arg1;
- (id)setStackId:(id)arg1;
- (id)setSv:(id)arg1;
- (id)setReplayed:(id)arg1;
- (id)setC:(id)arg1;
- (id)setT:(id)arg1;
- (id)build;

@end

