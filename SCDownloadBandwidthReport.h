//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCDownloadBandwidthReport : NSObject
{
    double _elapsedTime;
    unsigned long long _bytesDownloaded;
    unsigned long long _numberOfRequests;
    unsigned long long _estimatedBitrate;
}

@property(nonatomic) unsigned long long estimatedBitrate; // @synthesize estimatedBitrate=_estimatedBitrate;
@property(nonatomic) unsigned long long numberOfRequests; // @synthesize numberOfRequests=_numberOfRequests;
@property(nonatomic) unsigned long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property(nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2 bytesDownloaded:(unsigned long long)arg3 numberOfRequests:(unsigned long long)arg4;

@end
