//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSError;

@protocol SCStillImageCaptureMethodDelegate <NSObject>
- (void)stillImageCaptureMethod:(id <SCStillImageCaptureMethod>)arg1 didFailWithError:(NSError *)arg2;
- (void)stillImageCaptureMethod:(id <SCStillImageCaptureMethod>)arg1 requestsRetryWithError:(NSError *)arg2;
- (void)stillImageCaptureMethod:(id <SCStillImageCaptureMethod>)arg1 didCaptureStillImage:(NSData *)arg2 cameraInfo:(NSDictionary *)arg3 error:(NSError *)arg4;
@end

