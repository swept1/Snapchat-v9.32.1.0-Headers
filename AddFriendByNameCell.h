//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "SCAddFriendButtonV2Delegate.h"

@class NSString, SCAddFriendButtonV2, UIActivityIndicatorView, UIButton, UIFont, UILabel, UIView;

@interface AddFriendByNameCell : UITableViewCell <SCAddFriendButtonV2Delegate>
{
    UILabel *_mainLabel;
    UILabel *_subLabel;
    SCAddFriendButtonV2 *_addFriendButtonV2;
    _Bool _needsBottomBorder;
    _Bool _isLongText;
    id <AddFriendByNameCellDelegate> _delegate;
    NSString *_username;
    UIButton *_addFriendButton;
    UIFont *_oldFont;
    UIActivityIndicatorView *_loadingIndicator;
    UIView *_bottomBorder;
}

@property(retain, nonatomic) UIView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIFont *oldFont; // @synthesize oldFont=_oldFont;
@property(nonatomic) _Bool isLongText; // @synthesize isLongText=_isLongText;
@property(retain, nonatomic) UIButton *addFriendButton; // @synthesize addFriendButton=_addFriendButton;
@property(nonatomic) _Bool needsBottomBorder; // @synthesize needsBottomBorder=_needsBottomBorder;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) __weak id <AddFriendByNameCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)pointInsideAddFriendButton:(struct CGPoint)arg1;
- (void)buttonV2Pressed:(id)arg1 friend:(id)arg2;
- (void)addFriendPressed;
- (void)setBlockedForUsername:(id)arg1;
- (void)setInvalidUsername:(id)arg1;
- (void)_setMainLabel:(id)arg1 subLabel:(id)arg2 isLoading:(_Bool)arg3 usernameExists:(_Bool)arg4 alreadyAdded:(_Bool)arg5 inPage:(id)arg6;
- (void)updateButtonV2WithFriend:(id)arg1 buttonState:(long long)arg2;
- (void)setNameText:(id)arg1 isLoading:(_Bool)arg2 usernameExists:(_Bool)arg3 alreadyAdded:(_Bool)arg4 inPage:(id)arg5;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 key:(id)arg3 page:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

