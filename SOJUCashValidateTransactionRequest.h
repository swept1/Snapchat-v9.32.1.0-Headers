//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUCashValidateTransactionRequest.h"

@class NSArray, NSNumber, NSString;

@interface SOJUCashValidateTransactionRequest : NSObject <SOJUCashValidateTransactionRequest>
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_recipient;
    NSNumber *_amount;
    NSString *_currencyCode;
    NSString *_message;
    NSArray *_textAttributes;
    NSArray *_mediaCardAttributes;
    NSArray *_cashTags;
    NSNumber *_rain;
}

@property(readonly, copy, nonatomic) NSNumber *rain; // @synthesize rain=_rain;
@property(readonly, copy, nonatomic) NSArray *cashTags; // @synthesize cashTags=_cashTags;
@property(readonly, copy, nonatomic) NSArray *mediaCardAttributes; // @synthesize mediaCardAttributes=_mediaCardAttributes;
@property(readonly, copy, nonatomic) NSArray *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(readonly, copy, nonatomic) NSNumber *amount; // @synthesize amount=_amount;
@property(readonly, copy, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *reqToken; // @synthesize reqToken=_reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 recipient:(id)arg4 amount:(id)arg5 currencyCode:(id)arg6 message:(id)arg7 textAttributes:(id)arg8 mediaCardAttributes:(id)arg9 cashTags:(id)arg10 rain:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

