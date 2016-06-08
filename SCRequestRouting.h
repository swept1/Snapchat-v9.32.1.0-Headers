//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSSet, NSString;

@interface SCRequestRouting : NSObject
{
    NSMutableDictionary *_urlRulesMap;
    NSSet *_validHosts;
    NSString *_urlRulesCachedConfigString;
}

+ (id)shared;
@property(retain, nonatomic) NSString *urlRulesCachedConfigString; // @synthesize urlRulesCachedConfigString=_urlRulesCachedConfigString;
@property(retain, nonatomic) NSSet *validHosts; // @synthesize validHosts=_validHosts;
@property(retain, nonatomic) NSMutableDictionary *urlRulesMap; // @synthesize urlRulesMap=_urlRulesMap;
- (void).cxx_destruct;
- (id)updateHostnameIfNeccessary:(id)arg1;
- (void)updateToLatestRoutingRules;

@end

