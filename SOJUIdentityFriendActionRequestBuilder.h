//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface SOJUIdentityFriendActionRequestBuilder : NSObject
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_action;
    NSString *_friend;
    NSArray *_friends;
    NSString *_friendId;
    NSString *_addedBy;
    NSString *_identityProfilePage;
    NSNumber *_identityCellIndex;
    NSString *_display;
    NSNumber *_blockReasonId;
}

+ (id)withJUIdentityFriendActionRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setBlockReasonId:(id)arg1;
- (id)setDisplay:(id)arg1;
- (id)setIdentityCellIndex:(id)arg1;
- (id)setIdentityProfilePage:(id)arg1;
- (id)setAddedBy:(id)arg1;
- (id)setFriendId:(id)arg1;
- (id)setFriends:(id)arg1;
- (id)setFriend:(id)arg1;
- (id)setAction:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setReqToken:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)build;

@end

