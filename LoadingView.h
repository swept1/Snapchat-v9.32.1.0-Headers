//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UILabel;

@interface LoadingView : UIView
{
    _Bool _isLoading;
    UILabel *_loadingLabel;
    UIActivityIndicatorView *_loadingIndicator;
    UIView *_loadingSubview;
    UILabel *_successLabel;
    UILabel *_errorLabel;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UILabel *successLabel; // @synthesize successLabel=_successLabel;
@property(retain, nonatomic) UIView *loadingSubview; // @synthesize loadingSubview=_loadingSubview;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
- (void).cxx_destruct;
- (void)hide;
- (void)showError;
- (void)showSuccess;
- (void)showLoading;
- (void)failedLoading;
- (void)finishedLoadingWithAnimation:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)finishedLoadingWithAnimation:(_Bool)arg1;
- (void)startLoading;
- (id)initWithScreenHeight:(double)arg1 loadingText:(id)arg2 successText:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 loadingText:(id)arg2 successText:(id)arg3;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1 textColor:(id)arg2 textFont:(id)arg3 backgroundColor:(id)arg4 loadingIndicatorStyle:(long long)arg5 loadingText:(id)arg6 successText:(id)arg7;
- (id)initWithFrame:(struct CGRect)arg1;

@end

