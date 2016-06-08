//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAdRequestError.h"

#import "SCAdRequestErrorProtocol.h"

@interface SCAdRequestClientError : SCAdRequestError <SCAdRequestErrorProtocol>
{
    long long _error;
}

@property long long error; // @synthesize error=_error;
- (_Bool)isContentNoFill;
- (_Bool)isNoFill;
- (_Bool)isClientError;
- (_Bool)isServerError;
- (int)getCode;
- (id)initWithType:(long long)arg1 message:(id)arg2;
- (id)initWithType:(long long)arg1;

@end
