//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Snap;

@protocol SCSnapPlayDelegate <NSObject>
- (void)didFinishSnapPlaying:(Snap *)arg1;
- (void)didFailSetUpSnapPlaying:(Snap *)arg1;
- (void)didSucceedSetUpSnapPlaying:(Snap *)arg1;
@end
