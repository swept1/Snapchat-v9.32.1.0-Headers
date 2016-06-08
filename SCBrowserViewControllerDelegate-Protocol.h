//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, UIImage, UIViewController;

@protocol SCBrowserViewControllerDelegate <NSObject>
- (void)browserViewIsClosing;

@optional
- (void)didUpdatePageTitle:(NSString *)arg1;
- (void)didUpdateURL:(NSURL *)arg1;
- (void)didUpdateFavicon:(UIImage *)arg1;
- (void)safeBrowsingRequestsPresent;
- (void)safeBrowsingRequestsDismiss;
- (void)shouldPresentSafeBrowsingAlert:(UIViewController *)arg1;
@end
