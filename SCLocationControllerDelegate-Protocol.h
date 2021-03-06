//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSError, SCLocationController, SCSpeed;

@protocol SCLocationControllerDelegate <NSObject>
- (void)locationController:(SCLocationController *)arg1 didFailWithError:(NSError *)arg2;
- (void)locationController:(SCLocationController *)arg1 didUpdateLocation:(CLLocation *)arg2;

@optional
- (void)locationController:(SCLocationController *)arg1 didUpdateSpeed:(SCSpeed *)arg2;
@end

