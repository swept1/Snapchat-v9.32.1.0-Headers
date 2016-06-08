//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCFeatureSettings.h"

@class NSString;

@interface SCFeatureSettings : NSObject <SCFeatureSettings>
{
    _Bool _smartFiltersEnabled;
    _Bool _visualFiltersEnabled;
    _Bool _travelModeEnabled;
    _Bool _payToReplayEnabled;
    _Bool _barCodeScanEnabled;
    _Bool _qrCodeScanEnabled;
    _Bool _birthdayPartyEnabled;
    _Bool _pendingUpdateToServer;
    _Bool _permissionsEnabled;
    _Bool _galleryEnabled;
    _Bool _galleryInvited;
    _Bool _eSnapMedia;
}

@property(readonly, nonatomic) _Bool eSnapMedia; // @synthesize eSnapMedia=_eSnapMedia;
@property(readonly, nonatomic) _Bool galleryInvited; // @synthesize galleryInvited=_galleryInvited;
@property(readonly, nonatomic) _Bool galleryEnabled; // @synthesize galleryEnabled=_galleryEnabled;
@property(readonly, nonatomic) _Bool permissionsEnabled; // @synthesize permissionsEnabled=_permissionsEnabled;
@property(readonly, nonatomic) _Bool pendingUpdateToServer; // @synthesize pendingUpdateToServer=_pendingUpdateToServer;
@property(readonly, nonatomic) _Bool birthdayPartyEnabled; // @synthesize birthdayPartyEnabled=_birthdayPartyEnabled;
@property(readonly, nonatomic) _Bool qrCodeScanEnabled; // @synthesize qrCodeScanEnabled=_qrCodeScanEnabled;
@property(readonly, nonatomic) _Bool barCodeScanEnabled; // @synthesize barCodeScanEnabled=_barCodeScanEnabled;
@property(readonly, nonatomic) _Bool payToReplayEnabled; // @synthesize payToReplayEnabled=_payToReplayEnabled;
@property(readonly, nonatomic) _Bool travelModeEnabled; // @synthesize travelModeEnabled=_travelModeEnabled;
@property(readonly, nonatomic) _Bool visualFiltersEnabled; // @synthesize visualFiltersEnabled=_visualFiltersEnabled;
@property(readonly, nonatomic) _Bool smartFiltersEnabled; // @synthesize smartFiltersEnabled=_smartFiltersEnabled;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSmartFiltersEnabled:(_Bool)arg1 visualFiltersEnabled:(_Bool)arg2 travelModeEnabled:(_Bool)arg3 payToReplayEnabled:(_Bool)arg4 barCodeScanEnabled:(_Bool)arg5 qrCodeScanEnabled:(_Bool)arg6 birthdayPartyEnabled:(_Bool)arg7 pendingUpdateToServer:(_Bool)arg8 permissionsEnabled:(_Bool)arg9 galleryEnabled:(_Bool)arg10 galleryInvited:(_Bool)arg11 eSnapMedia:(_Bool)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

