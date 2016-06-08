//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCDeviceName : NSObject
{
}

+ (_Bool)didSystemReboot;
+ (void)saveSystemBootTime;
+ (long long)systemBootTime;
+ (void)saveCurrentOSVersion;
+ (_Bool)didUpdatedOS;
+ (id)deviceVersionStringForDeviceName:(id)arg1;
+ (_Bool)currentDeviceMeetsMinimumDeviceRequirement:(id)arg1;
+ (_Bool)isIpad:(id)arg1;
+ (_Bool)isIphone:(id)arg1;
+ (_Bool)isIpod:(id)arg1;
+ (_Bool)isSimulator:(id)arg1;
+ (id)platformString;
+ (_Bool)isSimilarToIphone6SorNewer;
+ (_Bool)isSimilarToIphone6orNewer;
+ (_Bool)isSimilarToIphone5SorNewer;
+ (_Bool)isSimilarToIphone5orNewer;
+ (_Bool)isSimilarToIphone4SorNewer;
+ (_Bool)isIpad;
+ (_Bool)isIphone;
+ (_Bool)isIpod;
+ (_Bool)isSimulator;

@end

