//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError;

@protocol SCCPSessionDelegate <NSObject>
- (void)didEndSessionWithError:(NSError *)arg1;
- (void)didStartSession;
- (void)didFailToStartSessionWithError:(NSError *)arg1 updatedServerInfo:(NSDictionary *)arg2 gatewayReachable:(_Bool)arg3;
- (void)didReceiveJSONDictionary:(NSDictionary *)arg1;
@end

