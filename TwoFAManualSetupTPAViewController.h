//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GenericSettingsViewController.h"

@class NSString, SCButton, UIButton, UIImageView, UILabel, UIView;

@interface TwoFAManualSetupTPAViewController : GenericSettingsViewController
{
    _Bool _leftSwipeEnabled;
    NSString *_pageViewName;
    NSString *_infoText;
    NSString *_otpSecret;
    UILabel *_infoTextLabel;
    UIView *_qrCodeView;
    UILabel *_qrCodeTextView;
    UIImageView *_qrCodeImageView;
    UIView *_codeView;
    UILabel *_codeInfoView;
    UIButton *_codeButtonView;
    SCButton *_continueButton;
}

@property(retain, nonatomic) SCButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) UIButton *codeButtonView; // @synthesize codeButtonView=_codeButtonView;
@property(retain, nonatomic) UILabel *codeInfoView; // @synthesize codeInfoView=_codeInfoView;
@property(retain, nonatomic) UIView *codeView; // @synthesize codeView=_codeView;
@property(retain, nonatomic) UIImageView *qrCodeImageView; // @synthesize qrCodeImageView=_qrCodeImageView;
@property(retain, nonatomic) UILabel *qrCodeTextView; // @synthesize qrCodeTextView=_qrCodeTextView;
@property(retain, nonatomic) UIView *qrCodeView; // @synthesize qrCodeView=_qrCodeView;
@property(retain, nonatomic) UILabel *infoTextLabel; // @synthesize infoTextLabel=_infoTextLabel;
@property(retain, nonatomic) NSString *otpSecret; // @synthesize otpSecret=_otpSecret;
@property(retain, nonatomic) NSString *infoText; // @synthesize infoText=_infoText;
@property(nonatomic) _Bool leftSwipeEnabled; // @synthesize leftSwipeEnabled=_leftSwipeEnabled;
@property(retain, nonatomic) NSString *pageViewName; // @synthesize pageViewName=_pageViewName;
- (void).cxx_destruct;
- (double)scaleHeight:(double)arg1;
- (double)scaleWidth:(double)arg1;
- (void)leftButtonPressed;
- (void)continueButtonPressed;
- (id)formatCode:(id)arg1;
- (id)generateQRCodeImage:(id)arg1 withImageWidth:(double)arg2;
- (void)setupContinueButton;
- (void)setupPlainCodeView;
- (void)setupQRCodeView;
- (void)loadView;
- (id)getPageViewName;
- (id)getTitle;
- (id)initWithPageViewName:(id)arg1 title:(id)arg2 leftSwipeEnabled:(_Bool)arg3;

@end

