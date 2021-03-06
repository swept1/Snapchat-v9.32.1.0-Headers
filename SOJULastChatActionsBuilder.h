//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SOJULastChatActionsBuilder : NSObject
{
    NSString *_lastReader;
    NSNumber *_lastReadTimestamp;
    NSString *_lastWriter;
    NSNumber *_lastWriteTimestamp;
    NSString *_lastWriteType;
}

+ (id)withJULastChatActions:(id)arg1;
- (void).cxx_destruct;
- (id)setLastWriteType:(id)arg1;
- (id)setLastWriteTimestamp:(id)arg1;
- (id)setLastWriter:(id)arg1;
- (id)setLastReadTimestamp:(id)arg1;
- (id)setLastReader:(id)arg1;
- (id)build;

@end

