//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUSnapStoryDoublePostResponse.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUJsonStoryResponse, SOJUServerInfoResponse;

@interface SOJUSnapStoryDoublePostResponse : NSObject <SOJUSnapStoryDoublePostResponse>
{
    SOJUServerInfoResponse *_serverInfo;
    SOJUJsonStoryResponse *_json;
    NSArray *_groupStories;
    NSArray *_verifiedStories;
    NSArray *_verifiedStoriesWithCollabs;
    NSNumber *_success;
    NSDictionary *_snaps;
    NSDictionary *_inviteSnaps;
    NSDictionary *_snapstreakData;
}

@property(readonly, copy, nonatomic) NSDictionary *snapstreakData; // @synthesize snapstreakData=_snapstreakData;
@property(readonly, copy, nonatomic) NSDictionary *inviteSnaps; // @synthesize inviteSnaps=_inviteSnaps;
@property(readonly, copy, nonatomic) NSDictionary *snaps; // @synthesize snaps=_snaps;
@property(readonly, copy, nonatomic) NSNumber *success; // @synthesize success=_success;
@property(readonly, copy, nonatomic) NSArray *verifiedStoriesWithCollabs; // @synthesize verifiedStoriesWithCollabs=_verifiedStoriesWithCollabs;
@property(readonly, copy, nonatomic) NSArray *verifiedStories; // @synthesize verifiedStories=_verifiedStories;
@property(readonly, copy, nonatomic) NSArray *groupStories; // @synthesize groupStories=_groupStories;
@property(readonly, copy, nonatomic) SOJUJsonStoryResponse *json; // @synthesize json=_json;
@property(readonly, copy, nonatomic) SOJUServerInfoResponse *serverInfo; // @synthesize serverInfo=_serverInfo;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithServerInfo:(id)arg1 json:(id)arg2 groupStories:(id)arg3 verifiedStories:(id)arg4 verifiedStoriesWithCollabs:(id)arg5 success:(id)arg6 snaps:(id)arg7 inviteSnaps:(id)arg8 snapstreakData:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

