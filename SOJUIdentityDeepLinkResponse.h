//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUIdentityDeepLinkResponse.h"

@class NSNumber, NSString, SOJUFriend, SOJUReceivedSnap;

@interface SOJUIdentityDeepLinkResponse : NSObject <SOJUIdentityDeepLinkResponse>
{
    NSString *_deepLinkAction;
    NSNumber *_friendExists;
    SOJUFriend *_friend;
    SOJUReceivedSnap *_snap;
}

@property(readonly, copy, nonatomic) SOJUReceivedSnap *snap; // @synthesize snap=_snap;
@property(readonly, copy, nonatomic) SOJUFriend *friend; // @synthesize friend=_friend;
@property(readonly, copy, nonatomic) NSNumber *friendExists; // @synthesize friendExists=_friendExists;
@property(readonly, copy, nonatomic) NSString *deepLinkAction; // @synthesize deepLinkAction=_deepLinkAction;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDeepLinkAction:(id)arg1 friendExists:(id)arg2 friend:(id)arg3 snap:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

