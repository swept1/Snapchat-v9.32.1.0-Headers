//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCASwipeBase.h"

#import "NamedEvent.h"

@class NSString;

@interface SCAGeofilterGeolensSwipe : SCASwipeBase <NamedEvent>
{
    NSString *filterGeolensId;
    NSString *adsnapPlacementId;
    NSString *encGeoData;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)getEncGeoData;
- (void)setEncGeoData:(id)arg1;
- (id)getAdsnapPlacementId;
- (void)setAdsnapPlacementId:(id)arg1;
- (id)getFilterGeolensId;
- (void)setFilterGeolensId:(id)arg1;
- (id)getEventName;
- (id)init;

@end

