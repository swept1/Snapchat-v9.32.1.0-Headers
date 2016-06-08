//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSString;

@interface SCSecurityProxyCredentials : NSObject <NSCoding>
{
    NSString *_proxyToken;
    NSDate *_expiration;
}

@property(readonly, copy, nonatomic) NSString *proxyToken; // @synthesize proxyToken=_proxyToken;
- (void).cxx_destruct;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProxyToken:(id)arg1 expiration:(id)arg2;

@end

