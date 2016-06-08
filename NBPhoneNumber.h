//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, NSString;

@interface NBPhoneNumber : NSObject <NSCopying>
{
    _Bool italianLeadingZero;
    unsigned int countryCode;
    unsigned long long nationalNumber;
    NSString *extension;
    NSString *rawInput;
    NSNumber *countryCodeSource;
    NSString *preferredDomesticCarrierCode;
}

@property(retain, nonatomic) NSString *preferredDomesticCarrierCode; // @synthesize preferredDomesticCarrierCode;
@property(retain, nonatomic) NSNumber *countryCodeSource; // @synthesize countryCodeSource;
@property(retain, nonatomic) NSString *rawInput; // @synthesize rawInput;
@property(nonatomic) _Bool italianLeadingZero; // @synthesize italianLeadingZero;
@property(retain, nonatomic) NSString *extension; // @synthesize extension;
@property(nonatomic) unsigned long long nationalNumber; // @synthesize nationalNumber;
@property(nonatomic) unsigned int countryCode; // @synthesize countryCode;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToObject:(id)arg1;
- (int)getCountryCodeSourceOrDefault;
- (void)clearCountryCodeSource;
- (id)init;

@end

