//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SnapAdsArchiveUtilsAbstraction <NSObject>
- (_Bool)saveObject:(id)arg1 toPath:(NSString *)arg2;
- (NSString *)pathWithFileName:(NSString *)arg1;
- (id)loadObjectOfType:(NSString *)arg1 fromPath:(NSString *)arg2;
@end
