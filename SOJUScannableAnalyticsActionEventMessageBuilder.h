//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SOJUScannableAnalyticsActionEventMessageBuilder : NSObject
{
    NSString *_actionId;
    NSNumber *_timeCreated;
}

+ (id)withJUScannableAnalyticsActionEventMessage:(id)arg1;
- (void).cxx_destruct;
- (id)setTimeCreated:(id)arg1;
- (id)setActionId:(id)arg1;
- (id)build;

@end

