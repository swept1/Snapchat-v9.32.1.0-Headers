//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCFailedUserEventNotificationController : NSObject
{
    _Bool _sentChatOrSnapNotification;
    _Bool _sentStoryNotification;
}

+ (void)displayLocalErrorNotificationWithPushType:(unsigned long long)arg1;
@property(nonatomic) _Bool sentStoryNotification; // @synthesize sentStoryNotification=_sentStoryNotification;
@property(nonatomic) _Bool sentChatOrSnapNotification; // @synthesize sentChatOrSnapNotification=_sentChatOrSnapNotification;
- (void)handleFailedChatSend:(id)arg1;
- (void)handleFailedStorySend:(id)arg1;
- (void)handleFailedSnapSend:(id)arg1;
- (void)clearAllNotifications;
- (void)dealloc;
- (id)init;

@end

