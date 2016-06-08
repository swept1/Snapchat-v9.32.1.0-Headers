//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatBrowseItemController.h"
#import "SCChatBrowseItemPlayback.h"
#import "SCChatBrowseMediaBlockingViewDelegate.h"

@class NSArray, NSString, NSTimer, SCBaseChatMedia, SCChatBrowseImageView, SCChatBrowseMediaBlockingView, UIView;

@interface SCChatBrowseImageController : NSObject <SCChatBrowseMediaBlockingViewDelegate, SCChatBrowseItemController, SCChatBrowseItemPlayback>
{
    SCBaseChatMedia *_media;
    UIView *_accessoryView;
    SCChatBrowseMediaBlockingView *_blockingView;
    SCChatBrowseImageView *_browsePhotoView;
    _Bool _shouldLoop;
    _Bool _isRunning;
    NSTimer *_scheduleTimer;
    double _startTime;
    _Bool _adjustViewForTimer;
    id <SCChatBrowseItemPlaybackTimeObserver> _timeObserver;
}

@property(nonatomic) _Bool adjustViewForTimer; // @synthesize adjustViewForTimer=_adjustViewForTimer;
@property(readonly, nonatomic) __weak id <SCChatBrowseItemPlaybackTimeObserver> timeObserver; // @synthesize timeObserver=_timeObserver;
- (void).cxx_destruct;
- (void)didClickRetryInMediaBlockingView;
- (void)_timerFired:(id)arg1;
- (void)stop;
- (void)resume;
- (void)startFromBeginning;
@property(readonly, nonatomic) NSArray *items;
- (id)accessoryView;
- (id)contentView;
- (void)_initContentAndAccessoryView;
- (void)_setupImageView;
- (void)_stopLoadingAnimation;
- (void)_startLoadingAnimation;
- (void)setVolume:(float)arg1;
- (void)setShouldLoop:(_Bool)arg1;
@property(readonly, nonatomic) _Bool shouldLoop;
- (void)setTimeObserver:(id)arg1;
- (id)initWithMedia:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

