//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TwoFAGenericCodeVerificationView;

@protocol TwoFAGenericCodeVerificationDelegate <NSObject>
- (void)verifySucceed:(TwoFAGenericCodeVerificationView *)arg1;
- (void)verifyPressed:(TwoFAGenericCodeVerificationView *)arg1 withCompletion:(void (^)(_Bool, NSString *))arg2;
- (void)leftButtonPressed:(TwoFAGenericCodeVerificationView *)arg1;

@optional
- (void)resendPressed:(TwoFAGenericCodeVerificationView *)arg1 withCompletion:(void (^)(_Bool, NSString *))arg2;
@end

