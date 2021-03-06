//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSNumber, NSString, SOJUIdentityTrophyCase, SOJUIdentityUserSegmentsResponse;

@protocol SOJUIdentityIdentityCheckResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *forceAddressbookFullSync;
@property(readonly, copy, nonatomic) SOJUIdentityUserSegmentsResponse *userSegmentsResponse;
@property(readonly, copy, nonatomic) NSNumber *lastCheckedTrophiesTimestamp;
@property(readonly, copy, nonatomic) SOJUIdentityTrophyCase *trophyCase;
@property(readonly, copy, nonatomic) NSNumber *isHighAccuracyRequiredForNearby;
@property(readonly, copy, nonatomic) NSNumber *isAddNearbyEnabled;
@property(readonly, copy, nonatomic) NSNumber *suggestedFriendFetchThresholdHours;
@property(readonly, copy, nonatomic) NSNumber *suggestedFriendSyncVersion;
@property(readonly, copy, nonatomic) NSNumber *redGearDurationMillis;
@property(readonly, copy, nonatomic) NSNumber *requirePhonePasswordConfirmed;
@property(readonly, copy, nonatomic) NSString *emailPendingVerification;
@property(readonly, copy, nonatomic) NSNumber *isEmailVerified;
@end

