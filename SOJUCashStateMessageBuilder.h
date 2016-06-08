//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, SOJUHeader;

@interface SOJUCashStateMessageBuilder : NSObject
{
    SOJUHeader *_header;
    NSNumber *_retried;
    NSString *_type;
    NSString *_idValue;
    NSNumber *_createdAt;
    NSString *_paymentId;
    NSNumber *_amount;
    NSString *_currencyCode;
    NSString *_message;
}

+ (id)withJUCashStateMessage:(id)arg1;
- (void).cxx_destruct;
- (id)setMessage:(id)arg1;
- (id)setCurrencyCode:(id)arg1;
- (id)setAmount:(id)arg1;
- (id)setPaymentId:(id)arg1;
- (id)setCreatedAt:(id)arg1;
- (id)setIdValue:(id)arg1;
- (id)setType:(id)arg1;
- (id)setRetried:(id)arg1;
- (id)setHeader:(id)arg1;
- (id)build;

@end
