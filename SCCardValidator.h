//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCCardValidator : NSObject
{
}

+ (_Bool)passesLuhnCheck:(id)arg1;
+ (_Bool)isPartiallyValidZipCode:(id)arg1;
+ (_Bool)isValidZipCode:(id)arg1;
+ (_Bool)isPartiallyValidCVV:(id)arg1;
+ (_Bool)isValidCVV:(id)arg1;
+ (id)unformatCardExpiryString:(id)arg1;
+ (id)formatCardExpiryDate:(id)arg1 withTrailingSlash:(_Bool)arg2;
+ (id)unformatCardNumberString:(id)arg1;
+ (id)formatCardNumberString:(id)arg1 changedAt:(struct _NSRange)arg2 withString:(id)arg3 updateCursor:(unsigned long long *)arg4;
+ (_Bool)isValidCardExpiryDate:(unsigned long long)arg1 year:(unsigned long long)arg2 maybeIncomplete:(_Bool)arg3;
+ (_Bool)isValidCardExpiryDate:(id)arg1;
+ (_Bool)isValidCardNumber:(id)arg1;
+ (void)initialize;

@end

