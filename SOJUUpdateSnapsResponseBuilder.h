//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber;

@interface SOJUUpdateSnapsResponseBuilder : NSObject
{
    NSNumber *_credits;
    NSArray *_esIds;
}

+ (id)withJUUpdateSnapsResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setEsIds:(id)arg1;
- (id)setCredits:(id)arg1;
- (id)build;

@end

