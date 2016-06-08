//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJULoginResponse.h"

@class NSArray, NSNumber, NSString, SOJUConversationsResponseInfo, SOJUDiscoverResponse, SOJUFriendsResponse, SOJUIdentityIdentityCheckResponse, SOJUIdentityVerificationNeeded, SOJUMessagingGatewayInfo, SOJUServerInfoResponse, SOJUSponsoredSlug, SOJUStoriesResponse, SOJUSupportToolsSupportToolsResponse, SOJUUpdatesResponse;

@interface SOJULoginResponse : NSObject <SOJULoginResponse>
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
    NSString *_errorField;
    NSString *_message;
    NSNumber *_status;
    NSString *_dtoken1i;
    NSString *_dtoken1v;
    NSNumber *_twoFaNeeded;
    NSString *_username;
    NSString *_messageFormat;
    NSString *_phoneNumber;
    NSString *_preAuthToken;
    NSNumber *_recoveryCodeUsed;
    NSNumber *_isSmsTwoFaEnabled;
    NSNumber *_isOtpTwoFaEnabled;
    SOJUIdentityVerificationNeeded *_verificationNeeded;
    NSString *_latestOutAlpha;
    NSString *_latestBackupOutBeta;
    NSString *_reactivationStatus;
}

@property(readonly, copy, nonatomic) NSString *reactivationStatus; // @synthesize reactivationStatus=_reactivationStatus;
@property(readonly, copy, nonatomic) NSString *latestBackupOutBeta; // @synthesize latestBackupOutBeta=_latestBackupOutBeta;
@property(readonly, copy, nonatomic) NSString *latestOutAlpha; // @synthesize latestOutAlpha=_latestOutAlpha;
@property(readonly, copy, nonatomic) SOJUIdentityVerificationNeeded *verificationNeeded; // @synthesize verificationNeeded=_verificationNeeded;
@property(readonly, copy, nonatomic) NSNumber *isOtpTwoFaEnabled; // @synthesize isOtpTwoFaEnabled=_isOtpTwoFaEnabled;
@property(readonly, copy, nonatomic) NSNumber *isSmsTwoFaEnabled; // @synthesize isSmsTwoFaEnabled=_isSmsTwoFaEnabled;
@property(readonly, copy, nonatomic) NSNumber *recoveryCodeUsed; // @synthesize recoveryCodeUsed=_recoveryCodeUsed;
@property(readonly, copy, nonatomic) NSString *preAuthToken; // @synthesize preAuthToken=_preAuthToken;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, copy, nonatomic) NSString *messageFormat; // @synthesize messageFormat=_messageFormat;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSNumber *twoFaNeeded; // @synthesize twoFaNeeded=_twoFaNeeded;
@property(readonly, copy, nonatomic) NSString *dtoken1v; // @synthesize dtoken1v=_dtoken1v;
@property(readonly, copy, nonatomic) NSString *dtoken1i; // @synthesize dtoken1i=_dtoken1i;
@property(readonly, copy, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *errorField; // @synthesize errorField=_errorField;
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
- (id)initWithServerInfo:(id)arg1 messagingGatewayInfo:(id)arg2 updatesResponse:(id)arg3 friendsResponse:(id)arg4 storiesResponse:(id)arg5 conversationsResponse:(id)arg6 conversationsResponseInfo:(id)arg7 discover:(id)arg8 identityCheckResponse:(id)arg9 sponsored:(id)arg10 supportToolsResponse:(id)arg11 errorField:(id)arg12 message:(id)arg13 status:(id)arg14 dtoken1i:(id)arg15 dtoken1v:(id)arg16 twoFaNeeded:(id)arg17 username:(id)arg18 messageFormat:(id)arg19 phoneNumber:(id)arg20 preAuthToken:(id)arg21 recoveryCodeUsed:(id)arg22 isSmsTwoFaEnabled:(id)arg23 isOtpTwoFaEnabled:(id)arg24 verificationNeeded:(id)arg25 latestOutAlpha:(id)arg26 latestBackupOutBeta:(id)arg27 reactivationStatus:(id)arg28;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

