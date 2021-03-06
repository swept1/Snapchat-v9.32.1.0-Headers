//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface SCProfileImages : NSObject <NSCoding>
{
    _Bool _profileImagesIsDirty;
    _Bool _didFetchProfileImages;
    _Bool _hasProfileImages;
    NSString *_username;
    NSString *_userId;
    long long _lastTakenTimestamp;
    long long _lastDeletedTimestamp;
    long long _lastCachedTimestamp;
    unsigned long long _sharingCount;
}

@property(nonatomic) _Bool hasProfileImages; // @synthesize hasProfileImages=_hasProfileImages;
@property(nonatomic) _Bool didFetchProfileImages; // @synthesize didFetchProfileImages=_didFetchProfileImages;
@property(nonatomic) _Bool profileImagesIsDirty; // @synthesize profileImagesIsDirty=_profileImagesIsDirty;
@property(nonatomic) unsigned long long sharingCount; // @synthesize sharingCount=_sharingCount;
@property(nonatomic) long long lastCachedTimestamp; // @synthesize lastCachedTimestamp=_lastCachedTimestamp;
@property(nonatomic) long long lastDeletedTimestamp; // @synthesize lastDeletedTimestamp=_lastDeletedTimestamp;
@property(nonatomic) long long lastTakenTimestamp; // @synthesize lastTakenTimestamp=_lastTakenTimestamp;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)imageJpgFilenameForProfileImageType:(long long)arg1;
- (void)removeCachedProfileImageData:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cacheProfileImageData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteProfileImagesAt:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)uploadProfileImages:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchProfileImagesInContext:(id)arg1;
- (void)resetStatus;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1 userId:(id)arg2;

@end

