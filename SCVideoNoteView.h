//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FLAnimatedImageView, SCChatVideoNoteMediaMessage, UIImageView;

@interface SCVideoNoteView : UIView
{
    SCChatVideoNoteMediaMessage *_message;
    FLAnimatedImageView *_coverAnimationView;
    UIImageView *_muteIconView;
    UIView *_muteIconContainerView;
    UIView *_videoView;
    double _frameTimeInterval;
    _Bool _isSender;
    unsigned long long _status;
}

+ (double)toDeviceLength:(double)arg1 percentageOfScreen:(double)arg2;
+ (id)defaultBorderColor;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) _Bool isSender; // @synthesize isSender=_isSender;
- (void).cxx_destruct;
- (id)videoViewBorderColor;
- (void)stopAnimation;
- (void)startAnimation;
- (void)clearContents;
- (void)displayVideoView;
- (void)displayCoverAnimationView;
- (void)setPlayerLayer:(id)arg1;
- (void)setMessage:(id)arg1;
- (id)muteIconContainerView;
- (id)muteIconView;
- (id)videoView;
- (id)coverAnimationView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

