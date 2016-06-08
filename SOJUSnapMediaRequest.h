//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUSnapMediaRequest.h"

@class NSNumber, NSString;

@interface SOJUSnapMediaRequest : NSObject <SOJUSnapMediaRequest>
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_mediaId;
    NSNumber *_orientation;
    NSString *_zipped;
    NSString *_encGeoData;
    NSString *_filterId;
    NSString *_lensId;
    NSString *_cameraFrontFacing;
    NSNumber *_time;
}

@property(readonly, copy, nonatomic) NSNumber *time; // @synthesize time=_time;
@property(readonly, copy, nonatomic) NSString *cameraFrontFacing; // @synthesize cameraFrontFacing=_cameraFrontFacing;
@property(readonly, copy, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
@property(readonly, copy, nonatomic) NSString *filterId; // @synthesize filterId=_filterId;
@property(readonly, copy, nonatomic) NSString *encGeoData; // @synthesize encGeoData=_encGeoData;
@property(readonly, copy, nonatomic) NSString *zipped; // @synthesize zipped=_zipped;
@property(readonly, copy, nonatomic) NSNumber *orientation; // @synthesize orientation=_orientation;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *reqToken; // @synthesize reqToken=_reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 mediaId:(id)arg4 orientation:(id)arg5 zipped:(id)arg6 encGeoData:(id)arg7 filterId:(id)arg8 lensId:(id)arg9 cameraFrontFacing:(id)arg10 time:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

