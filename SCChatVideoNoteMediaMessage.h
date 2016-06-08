//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCChatBaseNoteMediaMessage.h"

@class NSArray;

@interface SCChatVideoNoteMediaMessage : SCChatBaseNoteMediaMessage
{
    long long _coverAnimationState;
    NSArray *_coverAnimationImages;
}

@property(retain, nonatomic) NSArray *coverAnimationImages; // @synthesize coverAnimationImages=_coverAnimationImages;
@property(nonatomic) long long coverAnimationState; // @synthesize coverAnimationState=_coverAnimationState;
- (void).cxx_destruct;
- (id)cacheId;
- (long long)scaMediaType;
- (id)_coverImagesWithData:(id)arg1;
- (void)_generateVideoNoteCoverAnimationWithAnimationData:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)generateVideoNoteMediaSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (long long)mediaType;
- (void)updateWithMessage:(id)arg1;
- (_Bool)isCoverAnimationLoaded;
- (_Bool)isReadyForDisplay;
- (id)sendJSON;
- (id)initWithLastChatAction:(id)arg1 write:(_Bool)arg2 username:(id)arg3 recipientUsername:(id)arg4;

@end

