//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCStackedNoteCollectionViewCell.h"

#import "SCChatAudioNotePlayerDelegate.h"

@class NSString, SCAudioNoteView, SCChatAudioNoteMediaMessage, SCLoadingIndicatorView;

@interface SCStackedAudioNoteCollectionViewCell : SCStackedNoteCollectionViewCell <SCChatAudioNotePlayerDelegate>
{
    id <SCStackedCollectionViewCellActionDelegate> _delegate;
    SCAudioNoteView *_audioNoteView;
    SCLoadingIndicatorView *_activityIndicatorView;
    SCChatAudioNoteMediaMessage *_message;
}

+ (id)cellReuseIdentifier;
- (void).cxx_destruct;
- (void)audioNotePlayerDidFinishPlayingWithMessage:(id)arg1;
- (void)audioNotePlayerStateChangeWithMessage:(id)arg1;
- (void)_updateAudioNoteView;
- (void)play;
- (void)_showSpinner:(_Bool)arg1;
- (void)_didShowPendingDisplay;
- (void)_didShowCompleteDisplay;
- (void)_setAudioNoteViewCellIsReadyForDisplay:(_Bool)arg1;
- (void)_setIsSender:(_Bool)arg1;
- (void)setMessage:(id)arg1;
- (_Bool)representsMessage:(id)arg1;
- (void)setAudioNoteViewCellActionDelegate:(id)arg1;
- (void)prepareForReuse;
- (void)clearContents;
- (id)activityIndicatorView;
- (void)_initAudioNoteView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

