//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUAllUpdatesResponse.h"

@class NSArray, NSString, SOJUConversationsResponseInfo, SOJUDiscoverResponse, SOJUFriendsResponse, SOJUIdentityIdentityCheckResponse, SOJUMessagingGatewayInfo, SOJUServerInfoResponse, SOJUSponsoredSlug, SOJUStoriesResponse, SOJUSupportToolsSupportToolsResponse, SOJUUpdatesResponse;

@interface SOJUAllUpdatesResponse : NSObject <SOJUAllUpdatesResponse>
{
    SOJUServerInfoResponse *_serverInfo;
    SOJUMessagingGatewayInfo *_messagingGatewayInfo;
    SOJUUpdatesResponse *_updatesResponse;
    SOJUFriendsResponse *_friendsResponse;
    SOJUStoriesResponse *_storiesResponse;
    NSArray *_conversationsResponse;
    SOJUConversationsResponseInfo *_conversationsResponseInfo;
    SOJUDiscoverResponse *_discover;
    SOJUIdentityIdentityCheckResponse *_identityCheckResponse;
    SOJUSponsoredSlug *_sponsored;
    SOJUSupportToolsSupportToolsResponse *_supportToolsResponse;
}

@property(readonly, copy, nonatomic) SOJUSupportToolsSupportToolsResponse *supportToolsResponse; // @synthesize supportToolsResponse=_supportToolsResponse;
@property(readonly, copy, nonatomic) SOJUSponsoredSlug *sponsored; // @synthesize sponsored=_sponsored;
@property(readonly, copy, nonatomic) SOJUIdentityIdentityCheckResponse *identityCheckResponse; // @synthesize identityCheckResponse=_identityCheckResponse;
@property(readonly, copy, nonatomic) SOJUDiscoverResponse *discover; // @synthesize discover=_discover;
@property(readonly, copy, nonatomic) SOJUConversationsResponseInfo *conversationsResponseInfo; // @synthesize conversationsResponseInfo=_conversationsResponseInfo;
@property(readonly, copy, nonatomic) NSArray *conversationsResponse; // @synthesize conversationsResponse=_conversationsResponse;
@property(readonly, copy, nonatomic) SOJUStoriesResponse *storiesResponse; // @synthesize storiesResponse=_storiesResponse;
@property(readonly, copy, nonatomic) SOJUFriendsResponse *friendsResponse; // @synthesize friendsResponse=_friendsResponse;
@property(readonly, copy, nonatomic) SOJUUpdatesResponse *updatesResponse; // @synthesize updatesResponse=_updatesResponse;
@property(readonly, copy, nonatomic) SOJUMessagingGatewayInfo *messagingGatewayInfo; // @synthesize messagingGatewayInfo=_messagingGatewayInfo;
@property(readonly, copy, nonatomic) SOJUServerInfoResponse *serverInfo; // @synthesize serverInfo=_serverInfo;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithServerInfo:(id)arg1 messagingGatewayInfo:(id)arg2 updatesResponse:(id)arg3 friendsResponse:(id)arg4 storiesResponse:(id)arg5 conversationsResponse:(id)arg6 conversationsResponseInfo:(id)arg7 discover:(id)arg8 identityCheckResponse:(id)arg9 sponsored:(id)arg10 supportToolsResponse:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

