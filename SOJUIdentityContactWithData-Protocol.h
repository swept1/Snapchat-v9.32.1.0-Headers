//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSNumber, NSString;

@protocol SOJUIdentityContactWithData <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *photoUri;
@property(readonly, copy, nonatomic) NSString *photoId;
@property(readonly, copy, nonatomic) NSString *customRingtone;
@property(readonly, copy, nonatomic) NSNumber *starred;
@property(readonly, copy, nonatomic) NSNumber *lastTimeContacted;
@property(readonly, copy, nonatomic) NSNumber *timesContacted;
@property(readonly, copy, nonatomic) NSNumber *lastUpdatedTimestamp;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *number;
@end

