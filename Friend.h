//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNamedFriend.h"

@class NSArray, NSDate, NSDateFormatter, NSNumber, NSSet, NSString;

@interface Friend : NSObject <SCNamedFriend>
{
    _Bool _isVerified;
    _Bool _newLink;
    _Bool _ignored;
    _Bool _hidden;
    _Bool _isRecommended;
    _Bool _scrambleBestFriends;
    _Bool _canSeeCustomStories;
    _Bool _needsLoveCandidate;
    _Bool _isSharedStory;
    _Bool _hasCustomDescriptionForSharedStory;
    _Bool _sharedLocalStory;
    _Bool _autoAdded;
    NSString *_kvoName;
    NSString *_name;
    NSString *_userId;
    NSString *_display;
    NSSet *_searchKeywords;
    long long _type;
    NSNumber *_contactBasedRecommendationScore;
    NSArray *_bests;
    NSDate *_bestsUpdated;
    NSNumber *_score;
    NSArray *_friendmojis;
    long long _snapStreakCount;
    NSString *_snaptagUrl;
    NSString *_sharedStoryDescription;
    NSString *_sharedStoryId;
    NSString *_sharedStoryVenue;
    NSString *_birthday;
    NSDateFormatter *_birthdayFormatter;
    NSDate *_expiration;
}

+ (id)friendWithSuggestedFriend:(id)arg1;
+ (id)friendWithAddedFriend:(id)arg1;
+ (id)convertCategoriesToFriendmojis:(id)arg1;
@property(retain, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(nonatomic) _Bool autoAdded; // @synthesize autoAdded=_autoAdded;
@property(retain, nonatomic) NSDateFormatter *birthdayFormatter; // @synthesize birthdayFormatter=_birthdayFormatter;
@property(copy, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(nonatomic) _Bool sharedLocalStory; // @synthesize sharedLocalStory=_sharedLocalStory;
@property(copy, nonatomic) NSString *sharedStoryVenue; // @synthesize sharedStoryVenue=_sharedStoryVenue;
@property(copy, nonatomic) NSString *sharedStoryId; // @synthesize sharedStoryId=_sharedStoryId;
@property(nonatomic) _Bool hasCustomDescriptionForSharedStory; // @synthesize hasCustomDescriptionForSharedStory=_hasCustomDescriptionForSharedStory;
@property(copy, nonatomic) NSString *sharedStoryDescription; // @synthesize sharedStoryDescription=_sharedStoryDescription;
@property(nonatomic) _Bool isSharedStory; // @synthesize isSharedStory=_isSharedStory;
@property(retain, nonatomic) NSString *snaptagUrl; // @synthesize snaptagUrl=_snaptagUrl;
@property(readonly, nonatomic) long long snapStreakCount; // @synthesize snapStreakCount=_snapStreakCount;
@property(retain, nonatomic) NSArray *friendmojis; // @synthesize friendmojis=_friendmojis;
@property(nonatomic) _Bool needsLoveCandidate; // @synthesize needsLoveCandidate=_needsLoveCandidate;
@property(nonatomic) _Bool canSeeCustomStories; // @synthesize canSeeCustomStories=_canSeeCustomStories;
@property(nonatomic) _Bool scrambleBestFriends; // @synthesize scrambleBestFriends=_scrambleBestFriends;
@property(retain, nonatomic) NSNumber *score; // @synthesize score=_score;
@property(retain, nonatomic) NSDate *bestsUpdated; // @synthesize bestsUpdated=_bestsUpdated;
@property(retain, nonatomic) NSArray *bests; // @synthesize bests=_bests;
@property(retain, nonatomic) NSNumber *contactBasedRecommendationScore; // @synthesize contactBasedRecommendationScore=_contactBasedRecommendationScore;
@property(nonatomic) _Bool isRecommended; // @synthesize isRecommended=_isRecommended;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) _Bool ignored; // @synthesize ignored=_ignored;
@property(nonatomic) _Bool newLink; // @synthesize newLink=_newLink;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSSet *searchKeywords; // @synthesize searchKeywords=_searchKeywords;
@property(nonatomic) _Bool isVerified; // @synthesize isVerified=_isVerified;
@property(copy, nonatomic) NSString *display; // @synthesize display=_display;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *kvoName; // @synthesize kvoName=_kvoName;
- (void).cxx_destruct;
- (_Bool)isInvitedFriend;
- (_Bool)shouldShowFriendmoji:(id)arg1 forViewType:(long long)arg2;
- (id)getFriendmojisWithoutSnapStreakMojis;
- (void)removeSnapStreak;
- (void)setSnapStreakMetadataWithExpiryTime:(id)arg1 withCount:(long long)arg2;
- (id)getFriendmojiForViewType:(long long)arg1;
- (id)getFriendmoji;
- (_Bool)hasFriendmoji;
- (id)getSharedStoriesMessage;
- (id)getKey;
- (id)duplicate;
- (id)updateWithFriend:(id)arg1;
- (_Bool)hasBirthdayToday;
- (id)nameToDisplay;
- (_Bool)hasDisplay;
- (_Bool)shouldFetchBestFriends;
- (_Bool)fetchedBestFriends;
- (id)toDictionary;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToFriend:(id)arg1;
- (long long)compare:(id)arg1;
- (_Bool)keywordMatchesCleanedQuery:(id)arg1;
- (_Bool)matchesForOfficialStorySearch:(id)arg1;
- (_Bool)matchesByDisplayName:(id)arg1;
- (_Bool)matchesByUsername:(id)arg1;
- (_Bool)matches:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)updateSnaptagUrl:(id)arg1;
- (void)upgradeFriendmojisIfNecessaryWithSymbols:(id)arg1;
- (id)initWithSearchResultSOJU:(id)arg1;
- (void)initNewFriendFields;
- (id)initWithName:(id)arg1;
- (id)initWithRecent:(id)arg1;
- (id)initWithFriend:(id)arg1;
- (id)initWithFindFriendsContact:(id)arg1;
- (id)initWithSoju:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

