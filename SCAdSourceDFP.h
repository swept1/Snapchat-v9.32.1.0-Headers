//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAdSource.h"

#import "SCAdSourceImpl.h"

@class NSMutableDictionary;

@interface SCAdSourceDFP : SCAdSource <SCAdSourceImpl>
{
    NSMutableDictionary *_dfpRequestHelpers;
}

@property(retain, nonatomic) NSMutableDictionary *dfpRequestHelpers; // @synthesize dfpRequestHelpers=_dfpRequestHelpers;
- (void).cxx_destruct;
- (void)addRequestHelper:(id)arg1 adController:(id)arg2;
- (void)fireAdResolutionRequest:(id)arg1 userTargetingParams:(id)arg2 contextualTargetingParams:(id)arg3;
- (void)handleImpressionTrackBeforeAdResponseReady:(id)arg1;
- (_Bool)canRecordImpression:(id)arg1;
- (void)recordImpression:(id)arg1 impressionData:(id)arg2;
- (id)createBannerView;
- (void)updateFromSource:(id)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2 adManager:(id)arg3;

@end
