//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView;

@protocol GADMRAIDEventHandling <NSObject>
- (void)handleError:(NSString *)arg1 action:(NSString *)arg2;
- (void)updatePositionFromView:(UIView *)arg1;
- (void)updateVisibility:(_Bool)arg1;
- (void)MRAIDAdDidUnload;
- (void)MRAIDAdDidLoad;
@end

