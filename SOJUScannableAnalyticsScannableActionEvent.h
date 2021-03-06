//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUScannableAnalyticsScannableActionEvent.h"

@class NSNumber, NSString, SOJUScannableAnalyticsScannableDeviceInfo, SOJUScannableAnalyticsScannableLocationInfo;

@interface SOJUScannableAnalyticsScannableActionEvent : NSObject <SOJUScannableAnalyticsScannableActionEvent>
{
    NSString *_actionId;
    NSString *_data;
    NSNumber *_timeCreated;
    SOJUScannableAnalyticsScannableLocationInfo *_locationInfo;
    SOJUScannableAnalyticsScannableDeviceInfo *_deviceInfo;
}

@property(readonly, copy, nonatomic) SOJUScannableAnalyticsScannableDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly, copy, nonatomic) SOJUScannableAnalyticsScannableLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(readonly, copy, nonatomic) NSNumber *timeCreated; // @synthesize timeCreated=_timeCreated;
@property(readonly, copy, nonatomic) NSString *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSString *actionId; // @synthesize actionId=_actionId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithActionId:(id)arg1 data:(id)arg2 timeCreated:(id)arg3 locationInfo:(id)arg4 deviceInfo:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

