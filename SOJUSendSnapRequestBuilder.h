//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSNumber, NSString;

@interface SOJUSendSnapRequestBuilder : NSObject
{
    NSString *_mediaId;
    NSNumber *_orientation;
    NSString *_zipped;
    NSString *_encGeoData;
    NSString *_filterId;
    NSString *_lensId;
    NSString *_cameraFrontFacing;
    NSNumber *_time;
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSArray *_recipients;
    NSArray *_recipientIds;
    NSArray *_invitedRecipients;
    NSNumber *_type;
    NSData *_data;
    NSString *_uploadUrl;
    NSString *_key;
    NSString *_iv;
}

+ (id)withJUSendSnapRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setIv:(id)arg1;
- (id)setKey:(id)arg1;
- (id)setUploadUrl:(id)arg1;
- (id)setData:(id)arg1;
- (id)setType:(id)arg1;
- (id)setInvitedRecipients:(id)arg1;
- (id)setRecipientIds:(id)arg1;
- (id)setRecipients:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setReqToken:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)setTime:(id)arg1;
- (id)setCameraFrontFacing:(id)arg1;
- (id)setLensId:(id)arg1;
- (id)setFilterId:(id)arg1;
- (id)setEncGeoData:(id)arg1;
- (id)setZipped:(id)arg1;
- (id)setOrientation:(id)arg1;
- (id)setMediaId:(id)arg1;
- (id)build;

@end

