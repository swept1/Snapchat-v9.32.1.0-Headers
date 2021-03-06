//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable.h"

@class NSNumber, NSString;

@interface SCADirectSnapPreviewBase : SCAUserTrackedEvent <MapSerializable>
{
    NSNumber *caption;
    NSNumber *captionTracking;
    NSNumber *camera;
    NSNumber *drawing;
    NSNumber *flash;
    NSNumber *snapTimeSec;
    NSNumber *viewTimeSec;
    NSNumber *stickerTrackingCount;
    NSNumber *stickerCount;
    NSNumber *filterReverse;
    NSNumber *swipeCount;
    long long actionType;
    long long filterType;
    long long source;
    long long mediaType;
    long long filterVisual;
    long long filterInfo;
    long long filterMotion;
    NSString *filter;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)getFilter;
- (void)setFilter:(id)arg1;
- (long long)getFilterMotion;
- (void)setFilterMotion:(long long)arg1;
- (long long)getFilterInfo;
- (void)setFilterInfo:(long long)arg1;
- (long long)getFilterVisual;
- (void)setFilterVisual:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getFilterType;
- (void)setFilterType:(long long)arg1;
- (long long)getActionType;
- (void)setActionType:(long long)arg1;
- (long long)getSwipeCount;
- (void)setSwipeCount:(long long)arg1;
- (_Bool)getFilterReverse;
- (void)setFilterReverse:(_Bool)arg1;
- (long long)getStickerCount;
- (void)setStickerCount:(long long)arg1;
- (long long)getStickerTrackingCount;
- (void)setStickerTrackingCount:(long long)arg1;
- (double)getViewTimeSec;
- (void)setViewTimeSec:(double)arg1;
- (double)getSnapTimeSec;
- (void)setSnapTimeSec:(double)arg1;
- (_Bool)getFlash;
- (void)setFlash:(_Bool)arg1;
- (_Bool)getDrawing;
- (void)setDrawing:(_Bool)arg1;
- (long long)getCamera;
- (void)setCamera:(long long)arg1;
- (_Bool)getCaptionTracking;
- (void)setCaptionTracking:(_Bool)arg1;
- (long long)getCaption;
- (void)setCaption:(long long)arg1;
- (id)init;

@end

