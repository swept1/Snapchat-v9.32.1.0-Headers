//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUSignupRequest.h"

@class NSNumber, NSString;

@interface SOJUSignupRequest : NSObject <SOJUSignupRequest>
{
    NSString *_preAuthToken;
    NSString *_password;
    NSString *_ptoken;
    NSNumber *_rememberDevice;
    NSNumber *_fromDeeplink;
    NSString *_dtoken1i;
    NSString *_dsig;
    NSString *_nt;
    NSNumber *_height;
    NSNumber *_width;
    NSNumber *_maxVideoHeight;
    NSNumber *_maxVideoWidth;
    NSString *_applicationId;
    NSString *_attestation;
    NSString *_sflag;
    NSNumber *_screenWidthIn;
    NSNumber *_screenHeightIn;
    NSNumber *_screenWidthPx;
    NSNumber *_screenHeightPx;
    NSString *_twoFaMechanismUsed;
    NSNumber *_reactivationConfirmed;
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_email;
    NSString *_age;
    NSString *_birthday;
    NSString *_studySettings;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_timeZone;
}

@property(readonly, copy, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, copy, nonatomic) NSString *studySettings; // @synthesize studySettings=_studySettings;
@property(readonly, copy, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(readonly, copy, nonatomic) NSString *age; // @synthesize age=_age;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *reqToken; // @synthesize reqToken=_reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSNumber *reactivationConfirmed; // @synthesize reactivationConfirmed=_reactivationConfirmed;
@property(readonly, copy, nonatomic) NSString *twoFaMechanismUsed; // @synthesize twoFaMechanismUsed=_twoFaMechanismUsed;
@property(readonly, copy, nonatomic) NSNumber *screenHeightPx; // @synthesize screenHeightPx=_screenHeightPx;
@property(readonly, copy, nonatomic) NSNumber *screenWidthPx; // @synthesize screenWidthPx=_screenWidthPx;
@property(readonly, copy, nonatomic) NSNumber *screenHeightIn; // @synthesize screenHeightIn=_screenHeightIn;
@property(readonly, copy, nonatomic) NSNumber *screenWidthIn; // @synthesize screenWidthIn=_screenWidthIn;
@property(readonly, copy, nonatomic) NSString *sflag; // @synthesize sflag=_sflag;
@property(readonly, copy, nonatomic) NSString *attestation; // @synthesize attestation=_attestation;
@property(readonly, copy, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
@property(readonly, copy, nonatomic) NSNumber *maxVideoWidth; // @synthesize maxVideoWidth=_maxVideoWidth;
@property(readonly, copy, nonatomic) NSNumber *maxVideoHeight; // @synthesize maxVideoHeight=_maxVideoHeight;
@property(readonly, copy, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(readonly, copy, nonatomic) NSString *nt; // @synthesize nt=_nt;
@property(readonly, copy, nonatomic) NSString *dsig; // @synthesize dsig=_dsig;
@property(readonly, copy, nonatomic) NSString *dtoken1i; // @synthesize dtoken1i=_dtoken1i;
@property(readonly, copy, nonatomic) NSNumber *fromDeeplink; // @synthesize fromDeeplink=_fromDeeplink;
@property(readonly, copy, nonatomic) NSNumber *rememberDevice; // @synthesize rememberDevice=_rememberDevice;
@property(readonly, copy, nonatomic) NSString *ptoken; // @synthesize ptoken=_ptoken;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, copy, nonatomic) NSString *preAuthToken; // @synthesize preAuthToken=_preAuthToken;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPreAuthToken:(id)arg1 password:(id)arg2 ptoken:(id)arg3 rememberDevice:(id)arg4 fromDeeplink:(id)arg5 dtoken1i:(id)arg6 dsig:(id)arg7 nt:(id)arg8 height:(id)arg9 width:(id)arg10 maxVideoHeight:(id)arg11 maxVideoWidth:(id)arg12 applicationId:(id)arg13 attestation:(id)arg14 sflag:(id)arg15 screenWidthIn:(id)arg16 screenHeightIn:(id)arg17 screenWidthPx:(id)arg18 screenHeightPx:(id)arg19 twoFaMechanismUsed:(id)arg20 reactivationConfirmed:(id)arg21 timestamp:(id)arg22 reqToken:(id)arg23 username:(id)arg24 email:(id)arg25 age:(id)arg26 birthday:(id)arg27 studySettings:(id)arg28 firstName:(id)arg29 lastName:(id)arg30 timeZone:(id)arg31;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
