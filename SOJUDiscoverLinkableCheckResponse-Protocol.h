//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSNumber, NSString, SOJUDiscoverChannelListResponse, SOJUDiscoverEditionChunkResponse;

@protocol SOJUDiscoverLinkableCheckResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *adType;
@property(readonly, copy, nonatomic) SOJUDiscoverEditionChunkResponse *chunk;
@property(readonly, copy, nonatomic) SOJUDiscoverChannelListResponse *channelList;
@property(readonly, copy, nonatomic) NSString *linkableState;
@property(readonly, copy, nonatomic) NSNumber *publishTs;
@property(readonly, copy, nonatomic) NSString *reason;
@property(readonly, copy, nonatomic) NSString *hashValue;
@property(readonly, copy, nonatomic) NSString *dsnapId;
@end

