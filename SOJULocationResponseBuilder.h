//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, SOJUWeatherResponse;

@interface SOJULocationResponseBuilder : NSObject
{
    SOJUWeatherResponse *_weather;
    NSArray *_filters;
    NSArray *_preCacheGeofilters;
    NSNumber *_clearCacheOurStoryAuths;
    NSArray *_ourStoryAuths;
    NSArray *_lensFilters;
    NSArray *_preCacheGeolenses;
    NSString *_encGeocell;
}

+ (id)withJULocationResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setEncGeocell:(id)arg1;
- (id)setPreCacheGeolenses:(id)arg1;
- (id)setLensFilters:(id)arg1;
- (id)setOurStoryAuths:(id)arg1;
- (id)setClearCacheOurStoryAuths:(id)arg1;
- (id)setPreCacheGeofilters:(id)arg1;
- (id)setFilters:(id)arg1;
- (id)setWeather:(id)arg1;
- (id)build;

@end

