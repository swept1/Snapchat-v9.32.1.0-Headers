//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatCallPromptAccessory.h"

@class NSString, UIButton, UILabel, UIView;

@interface SCChatCallPromptConsumeAccessory : NSObject <SCChatCallPromptAccessory>
{
    id <SCChatCallPromptConsumeAccessoryDelegate> _delegate;
    UIView *_containerView;
    UIButton *_button;
    UILabel *_label;
}

- (void).cxx_destruct;
- (void)accessoryPressed;
- (id)view;
- (void)initContainerView;
- (void)updateAccessoryToAudioCall;
- (void)updateAccesoryToVideoCall;
- (double)getButtonSize;
- (double)getButtonCenterY;
- (double)getLabelBottomMargin;
- (id)initForMediaType:(_Bool)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

