//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "NamedEvent.h"

@class NSNumber, NSString;

@interface SCAGeofilterStorySnapScreenshot : SCAUserTrackedEvent <NamedEvent>
{
    NSNumber *viewTimeSec;
    NSNumber *withGallery;
    long long storyType;
    long long mediaType;
    NSString *geoFence;
    NSString *posterId;
    NSString *encFilterGeofilterId;
    NSString *encFilterGeolensId;
    NSString *encGeoData;
    NSString *filterGeofilterId;
    NSString *filterGeolensId;
    NSString *adsnapPlacementId;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)getAdsnapPlacementId;
- (void)setAdsnapPlacementId:(id)arg1;
- (id)getFilterGeolensId;
- (void)setFilterGeolensId:(id)arg1;
- (id)getFilterGeofilterId;
- (void)setFilterGeofilterId:(id)arg1;
- (id)getEncGeoData;
- (void)setEncGeoData:(id)arg1;
- (id)getEncFilterGeolensId;
- (void)setEncFilterGeolensId:(id)arg1;
- (id)getEncFilterGeofilterId;
- (void)setEncFilterGeofilterId:(id)arg1;
- (id)getPosterId;
- (void)setPosterId:(id)arg1;
- (id)getGeoFence;
- (void)setGeoFence:(id)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (long long)getStoryType;
- (void)setStoryType:(long long)arg1;
- (_Bool)getWithGallery;
- (void)setWithGallery:(_Bool)arg1;
- (double)getViewTimeSec;
- (void)setViewTimeSec:(double)arg1;
- (id)getEventName;
- (id)init;

@end

