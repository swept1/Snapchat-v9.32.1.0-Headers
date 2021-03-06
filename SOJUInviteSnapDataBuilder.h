//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SOJUInviteSnapDataBuilder : NSObject
{
    NSString *_idValue;
    NSNumber *_timestamp;
    NSNumber *_pending;
    NSString *_invitedRecipientId;
    NSString *_deepLinkUrl;
}

+ (id)withJUInviteSnapData:(id)arg1;
- (void).cxx_destruct;
- (id)setDeepLinkUrl:(id)arg1;
- (id)setInvitedRecipientId:(id)arg1;
- (id)setPending:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)setIdValue:(id)arg1;
- (id)build;

@end

