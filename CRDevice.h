//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CRDevice : NSObject
{
    NSMutableDictionary *_deviceInfo;
}

+ (id)deviceWithDummyInfo;
+ (id)deviceFromPersistentState:(id)arg1;
+ (id)deviceFromCurrentDevice;
@property(copy, nonatomic) NSMutableDictionary *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
- (void)updateOrientation;
- (_Bool)isEqual:(id)arg1;
- (void)flushToPersistentState:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)asDictionary;
- (id)carrier;
- (id)systemVersion;
- (id)systemName;
- (id)platform;
- (id)initFromPersistentState:(id)arg1;
- (id)initFromCurrentDevice;
- (id)initFromDeviceInfoDictionary:(id)arg1;

@end

