//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "SCMediaOwnerProtocol.h"

@class NSArray, NSNumber, NSString, UIColor;

@interface SCChunkSection : NSObject <NSCoding, SCMediaOwnerProtocol>
{
    _Bool _sharable;
    _Bool _skippable;
    NSArray *_channels;
    NSString *__id;
    NSString *_name;
    unsigned long long _type;
    NSString *_affordanceKey;
    unsigned long long _slugType;
    UIColor *_color;
    NSString *_mediaId;
    NSNumber *_skippableNumber;
}

+ (unsigned long long)slugTypeForString:(id)arg1;
+ (unsigned long long)sectionTypeForString:(id)arg1;
@property(retain, nonatomic) NSNumber *skippableNumber; // @synthesize skippableNumber=_skippableNumber;
@property(retain, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) unsigned long long slugType; // @synthesize slugType=_slugType;
@property(nonatomic) _Bool skippable; // @synthesize skippable=_skippable;
@property(copy, nonatomic) NSString *affordanceKey; // @synthesize affordanceKey=_affordanceKey;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool sharable; // @synthesize sharable=_sharable;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *_id; // @synthesize _id=__id;
@property(copy, nonatomic) NSArray *channels; // @synthesize channels=_channels;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)saveMediaToCache;
- (_Bool)imageMediaExistsInCache;
- (_Bool)mediaExistsInCache;
- (id)cacheMediaIds;
- (_Bool)hasLongformContent;
- (void)didDecodeObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)setUpChunkChannelsArray:(id)arg1 chunkDictionary:(id)arg2;
- (id)copyWithIdModifier:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 chunkDictionary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
