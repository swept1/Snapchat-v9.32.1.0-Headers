//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "NamedEvent.h"

@interface SCAChatChatUnsave : SCAUserTrackedEvent <NamedEvent>
{
    long long mediaType;
    long long source;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (id)asDictionary;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (id)getEventName;
- (id)init;

@end

