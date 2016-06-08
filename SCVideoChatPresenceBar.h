//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCVideoChatPresenceLabelDelegate.h"

@class NSString, SCVideoChatPresenceBubble, SCVideoChatPresenceLabel;

@interface SCVideoChatPresenceBar : NSObject <SCVideoChatPresenceLabelDelegate>
{
    SCVideoChatPresenceBubble *_presenceBubble;
    unsigned long long _currentBubbleState;
    unsigned long long _previousBubbleState;
    SCVideoChatPresenceLabel *_labelState;
    id <SCVideoChatPresenceBarDelegate> _delegate;
}

@property(nonatomic) __weak id <SCVideoChatPresenceBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCVideoChatPresenceLabel *labelState; // @synthesize labelState=_labelState;
@property(nonatomic) unsigned long long previousBubbleState; // @synthesize previousBubbleState=_previousBubbleState;
@property(nonatomic) unsigned long long currentBubbleState; // @synthesize currentBubbleState=_currentBubbleState;
@property(retain, nonatomic) SCVideoChatPresenceBubble *presenceBubble; // @synthesize presenceBubble=_presenceBubble;
- (void).cxx_destruct;
- (void)updateState:(unsigned long long)arg1;
- (void)updateLabelMaybe:(unsigned long long)arg1;
- (void)updateLabelToInitialStateMaybe:(unsigned long long)arg1;
- (id)remoteUsername;
- (void)animateBubbleOffCallPromptWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateBubbleOntoCallPromptWithCompletion:(CDUnknownBlockType)arg1;
- (id)tableBottomSpacingForState:(unsigned long long)arg1;
- (void)updateTableBottomSpacingMaybe:(unsigned long long)arg1;
- (void)hidePresenceBubbleWithCompletion:(CDUnknownBlockType)arg1;
- (void)showPresenceBubbleConstrainedToBottomView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isBubbleInNonConsumingMediaState;
- (void)updateBubbleState:(unsigned long long)arg1 withView:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;
- (void)updateBubbleState:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)disableUserInteractions:(unsigned long long)arg1;
- (void)updateWidgetsColorMaybe:(unsigned long long)arg1;
- (void)updateBubbleConstraintsToInputView;
- (void)updateBubbleConstraintsToPromptView:(id)arg1;
- (void)labelConstraints;
- (void)initLabelState;
- (void)presenceBubbleConstraints;
- (void)initPresenceBubble;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

