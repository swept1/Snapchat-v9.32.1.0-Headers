//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SOJUSignedPayloadBuilder : NSObject
{
    NSString *_payload;
    NSString *_mac;
    NSString *_type;
}

+ (id)withJUSignedPayload:(id)arg1;
- (void).cxx_destruct;
- (id)setType:(id)arg1;
- (id)setMac:(id)arg1;
- (id)setPayload:(id)arg1;
- (id)build;

@end
