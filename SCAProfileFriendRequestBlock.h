//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "NamedEvent.h"

@class NSNumber;

@interface SCAProfileFriendRequestBlock : SCAUserTrackedEvent <NamedEvent>
{
    NSNumber *hasDisplayName;
    NSNumber *withDisplayPic;
    long long method;
    long long source;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getMethod;
- (void)setMethod:(long long)arg1;
- (_Bool)getWithDisplayPic;
- (void)setWithDisplayPic:(_Bool)arg1;
- (_Bool)getHasDisplayName;
- (void)setHasDisplayName:(_Bool)arg1;
- (id)getEventName;
- (id)init;

@end

