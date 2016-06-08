//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GenericSettingsViewController.h"

#import "TTTAttributedLabelDelegate.h"

@class NSString, SCButton;

@interface SCCashTOSViewController : GenericSettingsViewController <TTTAttributedLabelDelegate>
{
    id <SCCashTOSDelegate> _delegate;
    SCButton *_agreeButton;
}

@property(retain, nonatomic) SCButton *agreeButton; // @synthesize agreeButton=_agreeButton;
@property(nonatomic) __weak id <SCCashTOSDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)disableLeftSwipe;
- (void)expandLineHeight:(id)arg1 multiple:(float)arg2 includeURL:(_Bool)arg3;
- (void)agreeButtonPressed;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)leftButtonPressed;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (void)initAgreeButton;
- (void)initPolicyLabel;
- (void)initSquareGhost;
- (void)initInfoLabel;
- (void)initBackground;
- (void)loadView;
- (id)getPageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
