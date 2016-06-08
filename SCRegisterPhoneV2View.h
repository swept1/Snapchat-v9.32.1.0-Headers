//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCRegisterV2BaseView.h"

#import "UITextFieldDelegate.h"

@class NSString, TTTAttributedLabel, UIButton, UILabel, UIScrollView, UITextField, UIView;

@interface SCRegisterPhoneV2View : SCRegisterV2BaseView <UITextFieldDelegate>
{
    struct UIEdgeInsets _horizontalInsets;
    UIButton *_emailInsteadButton;
    UIButton *_countryPickerButton;
    UILabel *_titleLabel;
    UILabel *_phoneLabel;
    UIView *_phoneNumberView;
    UITextField *_phoneField;
    TTTAttributedLabel *_errorLabel;
    UIScrollView *_scrollView;
    UIView *_keyboardSeparator;
    NSString *_countryCode;
    _Bool _isPasswordReset;
    id <SCRegisterPhoneV2ViewDelegate> _phoneViewDelegate;
}

@property(nonatomic) __weak id <SCRegisterPhoneV2ViewDelegate> phoneViewDelegate; // @synthesize phoneViewDelegate=_phoneViewDelegate;
- (void).cxx_destruct;
- (void)setFieldsEnabled:(_Bool)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)setError:(id)arg1;
- (void)updateCountryCode:(id)arg1;
- (void)setEmailLinkHidden:(_Bool)arg1;
- (void)showInput;
- (void)hideInput;
- (id)getPhoneNumber;
- (void)_changeContinueButtonHighlightState;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)initKeyboardSeparator;
- (void)initErrorLabel;
- (void)initCountryPickerAndPhoneField;
- (void)initPhoneLabel;
- (void)initEmailAlternativeButton;
- (void)initTitle;
- (void)initScrollView;
- (id)initWithFrame:(struct CGRect)arg1 countryCode:(id)arg2 delegate:(id)arg3 isPasswordReset:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
