//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMessageComposeViewControllerDelegate.h"

@class MFMessageComposeViewController, NSString;

@interface GADMessageComposeDelegateProxy : NSObject <MFMessageComposeViewControllerDelegate>
{
    GADMessageComposeDelegateProxy *_strongSelf;
    id <MFMessageComposeViewControllerDelegate> _messageComposeDelegate;
    MFMessageComposeViewController *_messageComposeViewController;
}

+ (id)associatedDelegateProxyForController:(id)arg1;
@property(retain, nonatomic) MFMessageComposeViewController *messageComposeViewController; // @synthesize messageComposeViewController=_messageComposeViewController;
@property(nonatomic) __weak id <MFMessageComposeViewControllerDelegate> messageComposeDelegate; // @synthesize messageComposeDelegate=_messageComposeDelegate;
- (void).cxx_destruct;
- (void)stopProxying;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (id)initInternal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

