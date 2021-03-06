//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCTimeProfilable.h"

@class NSString, NSTimer, UILabel;

@interface SCFriendmojiView : UIView <SCTimeProfilable>
{
    double _currentWidth;
    double _currentHeight;
    UILabel *_label;
    NSString *_currentlyDisplayedEmoji;
    NSTimer *_timer;
}

+ (long long)context;
+ (id)profiledSelectorNames;
+ (id)createFriendmojiViewWithFriend:(id)arg1 andViewType:(long long)arg2;
+ (id)createFriendmojiViewWithFriend:(id)arg1;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSString *currentlyDisplayedEmoji; // @synthesize currentlyDisplayedEmoji=_currentlyDisplayedEmoji;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) double currentHeight; // @synthesize currentHeight=_currentHeight;
@property(nonatomic) double currentWidth; // @synthesize currentWidth=_currentWidth;
- (void).cxx_destruct;
- (_Bool)setLabelToText:(id)arg1;
- (void)layoutSubviews;
- (id)getFriendmojiForFriend:(id)arg1 andViewType:(long long)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)animateStreakIndicator;
- (_Bool)updateWithFriend:(id)arg1 andLineHeight:(unsigned long long)arg2 andViewType:(long long)arg3;
- (_Bool)updateWithFriend:(id)arg1 andViewType:(long long)arg2;
- (id)initWithFriend:(id)arg1 andLineHeight:(unsigned long long)arg2 andViewType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

