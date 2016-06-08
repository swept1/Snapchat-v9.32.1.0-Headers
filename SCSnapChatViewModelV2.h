//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMessageChatViewModel.h"

#import "SCSnapChatCellViewConfig.h"

@class NSString;

@interface SCSnapChatViewModelV2 : SCMessageChatViewModel <SCSnapChatCellViewConfig>
{
    long long _status;
    long long _state;
}

@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (_Bool)isGrayScaleMediaCard;
- (id)replayIconImage;
- (id)viewedIconImage;
- (long long)viewType;
- (void)setSnapReplayAnimationState:(long long)arg1;
- (_Bool)shouldDisplayReplayAnimation;
- (id)textForTimer;
- (_Bool)shouldShowTimer;
- (id)_friendDisplayName;
- (id)_textForReplayNotificationLabel;
- (id)attributedTextForReplayNotificationLabel;
- (_Bool)shouldShowReplayNotificationLabel;
- (id)_textForScreenshotNotificationLabel;
- (id)attributedTextForScreenshotNotificationLabel;
- (_Bool)shouldShowScreenshotNotificationLabel;
- (_Bool)shouldShowActivity;
- (_Bool)shouldHideActionTextAfterDelay;
- (_Bool)shouldHideActionText;
- (_Bool)shouldDisplayBirthdaySnap;
- (id)statusIconImage;
- (id)actionText;
- (id)attributedActionText;
- (double)bodyContentWidth;
- (double)payloadVerticalMargin;
- (double)payloadHeight;
- (id)snap;
- (_Bool)isEqual:(id)arg1;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)reusableCellIdentifier;
- (id)initWithMessage:(id)arg1 forSender:(id)arg2 withDateHeader:(_Bool)arg3 withSenderHeader:(_Bool)arg4 withTimestamp:(_Bool)arg5 withIntervalFromPrevious:(double)arg6 withURLMediaCards:(_Bool)arg7 displayInBubbleChat:(_Bool)arg8 userSession:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
