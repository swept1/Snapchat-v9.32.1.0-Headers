//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SOJUAdErrorResponse;

@interface SOJUAdResponseBuilder : NSObject
{
    NSString *_requestId;
    NSString *_rawAdData;
    NSString *_responseJson;
    NSString *_waterfall;
    SOJUAdErrorResponse *_error;
}

+ (id)withJUAdResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setError:(id)arg1;
- (id)setWaterfall:(id)arg1;
- (id)setResponseJson:(id)arg1;
- (id)setRawAdData:(id)arg1;
- (id)setRequestId:(id)arg1;
- (id)build;

@end

