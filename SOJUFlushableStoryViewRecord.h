//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUFlushableStoryViewRecord.h"

@class NSNumber, NSString;

@interface SOJUFlushableStoryViewRecord : NSObject <SOJUFlushableStoryViewRecord>
{
    NSString *_flushableStoryId;
    NSNumber *_timestamp;
    NSNumber *_screenshotCount;
}

@property(readonly, copy, nonatomic) NSNumber *screenshotCount; // @synthesize screenshotCount=_screenshotCount;
@property(readonly, copy, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *flushableStoryId; // @synthesize flushableStoryId=_flushableStoryId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlushableStoryId:(id)arg1 timestamp:(id)arg2 screenshotCount:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

