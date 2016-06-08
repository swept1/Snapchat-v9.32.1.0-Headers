//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocation, CLLocationManager, NSString;

@interface SCLocationController : NSObject <CLLocationManagerDelegate>
{
    CDUnknownBlockType _permissionCompletionBlock;
    NSString *_locationUpdateSessionId;
    double _startLocationUpdateTimestamp;
    _Bool _requestingLocationPermission;
    id <SCLocationControllerDelegate> _delegate;
    CLLocation *_lastLocation;
    CLLocationManager *_locationManager;
}

+ (_Bool)locationAuthorizedWhenInUseWithAuthorizationStatus:(int)arg1;
+ (_Bool)isRecentAccurateLocation:(id)arg1;
+ (_Bool)shouldUseNewLocation:(id)arg1 comparedToOldLocation:(id)arg2;
+ (int)locationAuthorizationStatus;
+ (void)updateLocationAuthorizationStatus:(int)arg1;
+ (void)clearLocationAuthorizationStatus;
+ (_Bool)locationAuthorizationDenied;
+ (_Bool)locationAuthorizationNotDetermined;
+ (_Bool)locationAuthorized;
+ (void)sendToSettingsForLocationPermissionsWithUsername:(id)arg1 actionHandler:(CDUnknownBlockType)arg2 source:(id)arg3;
@property(nonatomic) _Bool requestingLocationPermission; // @synthesize requestingLocationPermission=_requestingLocationPermission;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) CLLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(nonatomic) __weak id <SCLocationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldUpdateLocation:(id)arg1;
- (void)_resetLocationUpdateSessionIfNecessary;
- (void)_logLocationAccuracyUpdateWithLocation:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)stopUpdatingLocation;
- (_Bool)hasRecentAccurateLocation;
- (void)startUpdatingLocation;
- (void)requestLocationPermissionWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
