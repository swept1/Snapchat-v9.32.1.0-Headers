//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTracker.h"

@class NSMutableDictionary;

@interface SCAdResolutionLatencyTracker : BaseTracker
{
    NSMutableDictionary *dictionaryLatency;
    long long adServerType;
}

- (void).cxx_destruct;
- (id)getTimeStamp;
- (long long)getServerType;
- (id)getDictionary;
- (void)didReceiveErrorResolvingAd:(id)arg1;
- (void)didFinishedResolvingAd:(id)arg1 adId:(id)arg2;
- (void)didStartResolvingAd:(id)arg1;
- (id)initWithServerName:(id)arg1;

@end
