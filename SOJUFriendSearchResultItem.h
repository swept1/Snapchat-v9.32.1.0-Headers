//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUFriendSearchResultItem.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SOJUFriendSearchResultItem : NSObject <SOJUFriendSearchResultItem>
{
    NSString *_userId;
    NSString *_username;
    NSString *_displayName;
    NSString *_storyPrivacy;
    NSArray *_friendmojiCategories;
    NSDictionary *_friendmojiDictionary;
    NSNumber *_position;
    NSArray *_keywords;
}

@property(readonly, copy, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(readonly, copy, nonatomic) NSNumber *position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) NSDictionary *friendmojiDictionary; // @synthesize friendmojiDictionary=_friendmojiDictionary;
@property(readonly, copy, nonatomic) NSArray *friendmojiCategories; // @synthesize friendmojiCategories=_friendmojiCategories;
@property(readonly, copy, nonatomic) NSString *storyPrivacy; // @synthesize storyPrivacy=_storyPrivacy;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserId:(id)arg1 username:(id)arg2 displayName:(id)arg3 storyPrivacy:(id)arg4 friendmojiCategories:(id)arg5 friendmojiDictionary:(id)arg6 position:(id)arg7 keywords:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

