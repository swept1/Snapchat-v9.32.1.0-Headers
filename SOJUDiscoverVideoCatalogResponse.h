//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUDiscoverVideoCatalogResponse.h"

@class NSArray, NSString;

@interface SOJUDiscoverVideoCatalogResponse : NSObject <SOJUDiscoverVideoCatalogResponse>
{
    NSString *_videoId;
    NSString *_accountId;
    NSString *_name;
    NSArray *_videoSequence;
}

@property(readonly, copy, nonatomic) NSArray *videoSequence; // @synthesize videoSequence=_videoSequence;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(readonly, copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVideoId:(id)arg1 accountId:(id)arg2 name:(id)arg3 videoSequence:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

