//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUBroadcastTileMetadata.h"

@class NSArray, NSNumber, NSString;

@interface SOJUBroadcastTileMetadata : NSObject <SOJUBroadcastTileMetadata>
{
    NSString *_idValue;
    NSString *_type;
    NSString *_displayName;
    NSString *_color;
    NSString *_logo;
    NSString *_logoType;
    NSNumber *_isSponsored;
    NSArray *_tiles;
}

@property(readonly, copy, nonatomic) NSArray *tiles; // @synthesize tiles=_tiles;
@property(readonly, copy, nonatomic) NSNumber *isSponsored; // @synthesize isSponsored=_isSponsored;
@property(readonly, copy, nonatomic) NSString *logoType; // @synthesize logoType=_logoType;
@property(readonly, copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(readonly, copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdValue:(id)arg1 type:(id)arg2 displayName:(id)arg3 color:(id)arg4 logo:(id)arg5 logoType:(id)arg6 isSponsored:(id)arg7 tiles:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

