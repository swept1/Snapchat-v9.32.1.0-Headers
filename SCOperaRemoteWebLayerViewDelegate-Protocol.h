//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSURLRequest, SCOperaRemoteWebLayerView;

@protocol SCOperaRemoteWebLayerViewDelegate <NSObject>
- (void)remoteWebLayerView:(SCOperaRemoteWebLayerView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)remoteWebLayerViewDidFinishLoad:(SCOperaRemoteWebLayerView *)arg1;
- (_Bool)remoteWebLayerView:(SCOperaRemoteWebLayerView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2;
- (void)didShareWepage:(SCOperaRemoteWebLayerView *)arg1 withTouchOrigin:(struct CGPoint)arg2;
- (void)remoteWebLayerViewDidPressExitButton:(SCOperaRemoteWebLayerView *)arg1;
@end
