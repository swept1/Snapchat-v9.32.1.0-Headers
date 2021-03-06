//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIColor, UIImage;

@interface SCTileViewModel : NSObject
{
    unsigned long long _alternatingIndex;
    _Bool _isLoading;
    _Bool _isFullyViewed;
    NSString *_tileId;
    NSString *_logoText;
    UIImage *_logoImage;
    NSArray *_covers;
    UIColor *_color;
    NSString *_sponsoredString;
    double _cropPercentage;
}

@property(readonly, nonatomic) double cropPercentage; // @synthesize cropPercentage=_cropPercentage;
@property(readonly, nonatomic) _Bool isFullyViewed; // @synthesize isFullyViewed=_isFullyViewed;
@property(readonly, nonatomic) NSString *sponsoredString; // @synthesize sponsoredString=_sponsoredString;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, copy, nonatomic) NSArray *covers; // @synthesize covers=_covers;
@property(readonly, copy, nonatomic) UIImage *logoImage; // @synthesize logoImage=_logoImage;
@property(readonly, copy, nonatomic) NSString *logoText; // @synthesize logoText=_logoText;
@property(readonly, copy, nonatomic) NSString *tileId; // @synthesize tileId=_tileId;
- (void).cxx_destruct;
- (id)nextCover;
- (id)currentCover;
- (id)initWithTileId:(id)arg1 logoText:(id)arg2 logoImage:(id)arg3 color:(id)arg4 coverModelDictionaries:(id)arg5 isLoading:(_Bool)arg6 sponsoredString:(id)arg7 isFullyViewed:(_Bool)arg8;

@end

