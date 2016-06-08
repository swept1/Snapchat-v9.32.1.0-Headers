//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray;

@interface SCTwoFAManager : NSObject <NSCoding>
{
    _Bool _isTwoFASmsEnabled;
    _Bool _isTwoFAOtpEnabled;
    NSMutableArray *_twoFAVerifiedDevices;
}

+ (id)extractErrorMessage:(id)arg1;
+ (id)path;
+ (id)shared;
@property(retain, nonatomic) NSMutableArray *twoFAVerifiedDevices; // @synthesize twoFAVerifiedDevices=_twoFAVerifiedDevices;
@property(nonatomic) _Bool isTwoFAOtpEnabled; // @synthesize isTwoFAOtpEnabled=_isTwoFAOtpEnabled;
@property(nonatomic) _Bool isTwoFASmsEnabled; // @synthesize isTwoFASmsEnabled=_isTwoFASmsEnabled;
- (void).cxx_destruct;
- (void)enableTwoFAWithAction:(long long)arg1 params:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)sendSMSTwoFACode:(CDUnknownBlockType)arg1;
- (void)generateRecoveryCode:(CDUnknownBlockType)arg1;
- (void)disableTwoFAWithAction:(long long)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)forgetOneDevice:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)forgetDevice:(CDUnknownBlockType)arg1;
- (void)updateUserTwoFAStatusForPhoneVerify:(id)arg1;
- (_Bool)isTwoFADisabled;
- (_Bool)isTwoFAEnabled;
- (void)clear;
- (_Bool)saveState;
- (void)setFieldsFromDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
