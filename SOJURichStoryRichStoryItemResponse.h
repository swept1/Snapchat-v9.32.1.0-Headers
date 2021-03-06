//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJURichStoryRichStoryItemResponse.h"

@class NSArray, NSString, SOJURichStoryRichStoryItemPropertiesResponse;

@interface SOJURichStoryRichStoryItemResponse : NSObject <SOJURichStoryRichStoryItemResponse>
{
    NSString *_idValue;
    NSString *_name;
    NSString *_type;
    SOJURichStoryRichStoryItemPropertiesResponse *_properties;
    NSArray *_cache;
}

@property(readonly, copy, nonatomic) NSArray *cache; // @synthesize cache=_cache;
@property(readonly, copy, nonatomic) SOJURichStoryRichStoryItemPropertiesResponse *properties; // @synthesize properties=_properties;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdValue:(id)arg1 name:(id)arg2 type:(id)arg3 properties:(id)arg4 cache:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

