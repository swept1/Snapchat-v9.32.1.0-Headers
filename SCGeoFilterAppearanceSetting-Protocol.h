//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSString, SCSponsoredSlug;

@protocol SCGeoFilterAppearanceSetting <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *dynamicFilterUpdatingMessage;
@property(readonly, copy, nonatomic) NSString *dynamicFilterRefreshHint;
@property(readonly, copy, nonatomic) SCSponsoredSlug *sponsoredSlug;
@property(readonly, nonatomic) struct CGPoint updateLabelPosition;
@property(readonly, nonatomic) _Bool isBelowDrawingLayer;
@property(readonly, nonatomic) _Bool isUpdatable;
@property(readonly, nonatomic) _Bool isSponsored;
@end

