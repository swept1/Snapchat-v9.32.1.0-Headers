//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADAdView;

@interface GADAdViewRenderedChecker : NSObject
{
    GADAdView *_adView;
    id <GADAdViewRenderedCheckerDelegate> _delegate;
}

@property(nonatomic) __weak id <GADAdViewRenderedCheckerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GADAdView *adView; // @synthesize adView=_adView;
- (void).cxx_destruct;
- (double)percentOfImage:(id)arg1 ofColor:(id)arg2;
- (void)checkIsContentRenderedInAdView;

@end

