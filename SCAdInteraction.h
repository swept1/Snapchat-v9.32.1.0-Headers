//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface SCAdInteraction : NSObject
{
    _Bool _topSnapActive;
    _Bool _wasSwipedToLongform;
    _Bool _audibleOnShow;
    _Bool _audibleOnHide;
    _Bool _wasFullyVisible;
    double _topSnapViewDuration;
    double _longFormViewDuration;
    double _longFormMediaDuration;
    NSDate *_currentSessionStartTimestamp;
    NSString *_adMediaType;
    double _adMediaDuration;
    NSDate *_adMediaFirstRenderTimestamp;
    NSString *_adKey;
}

@property(copy, nonatomic) NSString *adKey; // @synthesize adKey=_adKey;
@property(nonatomic) _Bool wasFullyVisible; // @synthesize wasFullyVisible=_wasFullyVisible;
@property(nonatomic) _Bool audibleOnHide; // @synthesize audibleOnHide=_audibleOnHide;
@property(nonatomic) _Bool audibleOnShow; // @synthesize audibleOnShow=_audibleOnShow;
@property(copy, nonatomic) NSDate *adMediaFirstRenderTimestamp; // @synthesize adMediaFirstRenderTimestamp=_adMediaFirstRenderTimestamp;
@property(nonatomic) double adMediaDuration; // @synthesize adMediaDuration=_adMediaDuration;
@property(copy, nonatomic) NSString *adMediaType; // @synthesize adMediaType=_adMediaType;
@property(copy, nonatomic) NSDate *currentSessionStartTimestamp; // @synthesize currentSessionStartTimestamp=_currentSessionStartTimestamp;
@property(nonatomic) _Bool wasSwipedToLongform; // @synthesize wasSwipedToLongform=_wasSwipedToLongform;
@property(nonatomic) _Bool topSnapActive; // @synthesize topSnapActive=_topSnapActive;
@property(nonatomic) double longFormMediaDuration; // @synthesize longFormMediaDuration=_longFormMediaDuration;
@property(nonatomic) double longFormViewDuration; // @synthesize longFormViewDuration=_longFormViewDuration;
@property(nonatomic) double topSnapViewDuration; // @synthesize topSnapViewDuration=_topSnapViewDuration;
- (void).cxx_destruct;
- (id)init;

@end

