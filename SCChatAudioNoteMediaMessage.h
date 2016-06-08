//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCChatBaseNoteMediaMessage.h"

@class SCAudioNoteWaveformAnimation;

@interface SCChatAudioNoteMediaMessage : SCChatBaseNoteMediaMessage
{
    SCAudioNoteWaveformAnimation *_waveformAnimation;
    long long _waveformAnimationState;
}

@property(nonatomic) long long waveformAnimationState; // @synthesize waveformAnimationState=_waveformAnimationState;
@property(retain, nonatomic) SCAudioNoteWaveformAnimation *waveformAnimation; // @synthesize waveformAnimation=_waveformAnimation;
- (void).cxx_destruct;
- (id)cacheId;
- (long long)scaMediaType;
- (long long)scaMessageType;
- (void)_generateAudioNoteWaveformAnimationWithAnimationData:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)generateAudioNoteMediaSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (long long)mediaType;
- (void)updateWithMessage:(id)arg1;
- (_Bool)isWaveformAnimationLoaded;
- (_Bool)isReadyForDisplay;
- (id)sendJSON;
- (id)initWithLastChatAction:(id)arg1 write:(_Bool)arg2 username:(id)arg3 recipientUsername:(id)arg4;

@end

