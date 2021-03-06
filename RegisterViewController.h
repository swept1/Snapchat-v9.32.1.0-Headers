//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCHeaderDelegate.h"
#import "SCRegisterViewDelegate.h"

@class NSDate, NSString, SCRegisterView;

@interface RegisterViewController : UIViewController <SCHeaderDelegate, SCRegisterViewDelegate>
{
    _Bool _fieldIsFirstResponder;
    _Bool _isRegistering;
    _Bool _agePickerJustShowed;
    _Bool _agePickerVisible;
    _Bool _enterButtonVisible;
    _Bool _keyboardVisible;
    SCRegisterView *_registerView;
    NSDate *_initialBirthday;
    unsigned long long _registerAttemptCount;
}

@property(nonatomic) unsigned long long registerAttemptCount; // @synthesize registerAttemptCount=_registerAttemptCount;
@property(nonatomic) _Bool keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property(nonatomic) _Bool enterButtonVisible; // @synthesize enterButtonVisible=_enterButtonVisible;
@property(nonatomic) _Bool agePickerVisible; // @synthesize agePickerVisible=_agePickerVisible;
@property(nonatomic) _Bool agePickerJustShowed; // @synthesize agePickerJustShowed=_agePickerJustShowed;
@property(nonatomic) NSDate *initialBirthday; // @synthesize initialBirthday=_initialBirthday;
@property(retain, nonatomic) SCRegisterView *registerView; // @synthesize registerView=_registerView;
@property(nonatomic) _Bool isRegistering; // @synthesize isRegistering=_isRegistering;
@property(nonatomic) _Bool fieldIsFirstResponder; // @synthesize fieldIsFirstResponder=_fieldIsFirstResponder;
- (void).cxx_destruct;
- (id)_pageNameForPageView;
- (void)hideEnterButton;
- (void)handleUnderThirteen;
- (void)enterButtonTapped;
- (void)kidRegisterDidFail:(id)arg1;
- (void)registerDidFail:(id)arg1;
- (void)registerDidWarn:(id)arg1;
- (void)registerDidSucceed:(id)arg1;
- (void)setRegistering:(_Bool)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)birthdayDidChange;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)keyboardWillShow:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidBecomeActive:(id)arg1;
- (void)textViewDidChange;
- (_Bool)shouldBeginEditingForInputType:(unsigned long long)arg1;
- (void)leftButtonPressed;
- (void)presentWebViewWithUrl:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (_Bool)shouldPopToRootViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)getPageViewName;
- (id)initWithBirthday:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

