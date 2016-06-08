//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GenericSettingsViewController.h"

#import "SCDatePickerDelegate.h"
#import "SCLayoutAccessoryTableViewCellDelegate.h"
#import "SCTextViewDelegate.h"

@class NSString, SCButton, SCDatePicker, SCLayoutAccessoryTableViewCell, SCTextView, UILabel, UISwitch;

@interface BirthdaySettingsViewController : GenericSettingsViewController <SCTextViewDelegate, SCDatePickerDelegate, SCLayoutAccessoryTableViewCellDelegate>
{
    SCTextView *_birthdayTextView;
    SCDatePicker *_birthdayPickerView;
    SCButton *_continueButton;
    UILabel *_upperInfo;
    SCLayoutAccessoryTableViewCell *_partyView;
    UISwitch *_partySwitch;
    _Bool _shouldFlipSwitchOnDateChange;
}

- (void).cxx_destruct;
- (void)presentManyUpdatesAlert;
- (id)getDefaultBirthday;
- (void)handleOverThirteen;
- (void)sendToAccountsWithToken:(id)arg1;
- (void)handleUnderThirteen;
- (id)getReportUnderThirteenUrl;
- (_Bool)isSameBirthday;
- (_Bool)isBirthdayPreviouslyExists;
- (void)setIsWorking:(_Bool)arg1;
- (void)continueButtonTapped;
- (id)birthdayPickerDate;
- (void)dateDidChange;
- (void)dateWheelIsSpinning;
- (void)updateBirthday;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (id)getTitle;
- (void)setContinueButtonTitle:(id)arg1;
- (void)initContinueButton;
- (void)initBirthdayPicker;
- (void)layoutAccessoryTableViewCell:(id)arg1 textLabel:(id)arg2 attributionLabel:(id)arg3;
- (struct CGRect)layoutAccessoryTableViewCell:(id)arg1 frameForAccessoryView:(id)arg2;
- (void)switchChanged:(id)arg1;
- (void)initParty;
- (void)initBirthdayTextView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadView;
- (id)getPageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

