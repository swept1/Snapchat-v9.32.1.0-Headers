//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "SCSnapAdsSerializableData.h"

@class NSNumber, NSString;

@interface SCAdRemoteWebpageImpressionTrackData : NSObject <SCSnapAdsSerializableData, NSCopying>
{
    NSNumber *_topsnapTimeViewedSeconds;
    NSNumber *_longformTimeViewedSeconds;
    NSNumber *_topsnapMediaDurationSeconds;
    NSNumber *_swiped;
}

@property(readonly, copy, nonatomic) NSNumber *swiped; // @synthesize swiped=_swiped;
@property(readonly, copy, nonatomic) NSNumber *topsnapMediaDurationSeconds; // @synthesize topsnapMediaDurationSeconds=_topsnapMediaDurationSeconds;
@property(readonly, copy, nonatomic) NSNumber *longformTimeViewedSeconds; // @synthesize longformTimeViewedSeconds=_longformTimeViewedSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapTimeViewedSeconds; // @synthesize topsnapTimeViewedSeconds=_topsnapTimeViewedSeconds;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serialize;
- (id)initWithTopsnapTimeViewedSeconds:(id)arg1 longformTimeViewedSeconds:(id)arg2 topsnapMediaDurationSeconds:(id)arg3 swiped:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

