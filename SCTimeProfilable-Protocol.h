//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@protocol SCTimeProfilable <NSObject>
+ (long long)context;
+ (NSArray *)profiledSelectorNames;

@optional
- (NSDictionary *)exceptionalMethodsContexts;
- (NSArray *)preferredProfiledSelectorNames;
- (NSArray *)excludedProfiledSelectorNames;
@end

