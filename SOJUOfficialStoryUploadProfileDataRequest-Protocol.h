//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "SOJUUploadProfileDataRequest.h"

@class NSData, NSString;

@protocol SOJUOfficialStoryUploadProfileDataRequest <NSObject, NSCoding, NSCopying, SOJUUploadProfileDataRequest>
@property(readonly, copy, nonatomic) NSString *officialStoryUserId;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp;
@property(readonly, copy, nonatomic) NSData *data;
@end

