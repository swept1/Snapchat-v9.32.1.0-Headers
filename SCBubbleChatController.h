//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBubbleDataSourceManagerDelegate.h"
#import "SCBubbleGestureHandlerDelegate.h"
#import "SCChatCashControllerDelegate.h"

@class NSMutableArray, NSString, SCActionSheetCoordinator, SCBubbleContainerGradientView, SCBubbleDataSourceManager, SCBubbleGestureManager, SCChat, SCChatCashController, SCChatInputController, SCChatMessageUpdater, SCChatViewModelForChat, SCChatViewModelReducer, UIView;

@interface SCBubbleChatController : NSObject <SCBubbleDataSourceManagerDelegate, SCBubbleGestureHandlerDelegate, SCChatCashControllerDelegate>
{
    SCChat *_chat;
    SCChatViewModelForChat *_bubbleChatViewModel;
    SCChatViewModelReducer *_chatViewModelReducer;
    SCChatMessageUpdater *_chatMessageUpdater;
    SCChatInputController *_chatInputController;
    SCActionSheetCoordinator *_actionSheetCoordinator;
    SCBubbleGestureManager *_bubbleGestureManager;
    SCBubbleDataSourceManager *_bubbleDataSourceManager;
    SCBubbleContainerGradientView *_containerView;
    SCChatCashController *_bubbleCashController;
    NSMutableArray *_bubbleViews;
    double _presenceBarHeight;
    UIView *_bubbleChatView;
}

@property(readonly, nonatomic) UIView *bubbleChatView; // @synthesize bubbleChatView=_bubbleChatView;
- (void).cxx_destruct;
- (struct CGRect)mediaBoundingFrame;
- (double)yOffsetForPaymentView;
- (void)didDetectSwipeToSendGesture;
- (void)didSendPayment;
- (void)didFinishSwipeToSend;
- (void)didFinishSwipeDown;
- (void)didUpdatePaymentMessage:(id)arg1;
- (void)deleteFailedPaymentMessage:(id)arg1;
- (void)flowSuccessfullyCompleted;
- (void)cardLinkingSuccessful;
- (_Bool)shouldPreviewRecognizeTapGestureRecognizer:(id)arg1;
- (_Bool)isTouchInsideChatBubble:(id)arg1;
- (void)didDismissFullScreenWithGestureHandler:(id)arg1;
- (id)nextChatNoteMessageAfterChatNoteMessage:(id)arg1;
- (void)unpreserveMediaMessage:(id)arg1;
- (void)preserveMediaMessage:(id)arg1;
- (void)loadSnap:(id)arg1 userInitiated:(_Bool)arg2;
- (void)handleLongPressForCellWithPaymentMessage:(id)arg1;
- (void)resolveBlockersForPaymentMessage:(id)arg1;
- (_Bool)shouldResolveBlockersForPaymentMessage:(id)arg1;
- (void)onPaymentTapped:(id)arg1;
- (void)attemptRetryBlockForMessage:(id)arg1;
- (void)deleteFailedMessage:(id)arg1;
- (void)saveOrUnsaveMessage:(id)arg1 inStackedGroup:(_Bool)arg2;
- (void)shiftBubbleViewsUpByYOffset:(double)arg1;
- (id)_bubbleViewForDataSource:(id)arg1;
- (void)didBeginExpiringBubbleWithDataSource:(id)arg1;
- (void)didUpdateBubbleWithDataSource:(id)arg1 indexPath:(id)arg2;
- (void)didAddMessageToBubbleWithDataSource:(id)arg1;
- (void)didCreateNewBubbleWithDataSource:(id)arg1;
- (void)inputTextHeightDidChangeAnimated:(_Bool)arg1;
- (void)presenceBarHeightChangedToHeight:(double)arg1 animated:(_Bool)arg2;
- (void)_initContainerView;
- (void)_initBubbleChatView;
- (void)stopUpdatingBubbles;
- (void)startUpdatingBubbles;
- (void)setChatViewModel:(id)arg1;
- (id)initWithParentViewController:(id)arg1 chatInputController:(id)arg2 navigationDelegate:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
