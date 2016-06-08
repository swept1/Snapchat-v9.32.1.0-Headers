//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SOJUMessagingConversationShareBatchedMediaRequestBuilder : NSObject
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_recipients;
    NSArray *_mediaList;
    NSString *_bodyType;
    NSString *_storyTitle;
    NSString *_seqNums;
}

+ (id)withJUMessagingConversationShareBatchedMediaRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setSeqNums:(id)arg1;
- (id)setStoryTitle:(id)arg1;
- (id)setBodyType:(id)arg1;
- (id)setMediaList:(id)arg1;
- (id)setRecipients:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setReqToken:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)build;

@end

