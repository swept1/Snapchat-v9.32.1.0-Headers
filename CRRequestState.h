//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface CRRequestState : NSObject
{
    _Bool _onWifi;
    NSDate *_timestamp;
    NSString *_url;
    NSString *_method;
    NSString *_errorString;
    double _latency;
    long long _errorType;
    long long _responseCode;
    unsigned long long _bytesSent;
    unsigned long long _bytesRead;
    double _latitude;
    double _longitude;
}

@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) unsigned long long bytesRead; // @synthesize bytesRead=_bytesRead;
@property(nonatomic) unsigned long long bytesSent; // @synthesize bytesSent=_bytesSent;
@property(nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
@property(nonatomic) long long errorType; // @synthesize errorType=_errorType;
@property(nonatomic) double latency; // @synthesize latency=_latency;
@property(nonatomic) _Bool onWifi; // @synthesize onWifi=_onWifi;
@property(retain, nonatomic) NSString *errorString; // @synthesize errorString=_errorString;
@property(retain, nonatomic) NSString *method; // @synthesize method=_method;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)makeArrayUsingDefault:(id)arg1;
- (id)plistSafeArray;
- (id)jsonArray;
- (void)connectionFailedWithError:(id)arg1;
- (void)onReceivedData:(unsigned long long)arg1;
- (void)initialResponseReceivedAt:(id)arg1;
- (void)sentRequestAt:(id)arg1;
- (void)dealloc;
- (id)init;

@end

