//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCPaymentSendErrorHandler : NSObject
{
    _Bool _swipeToResolve;
}

@property(nonatomic) _Bool swipeToResolve; // @synthesize swipeToResolve=_swipeToResolve;
- (void)handleError:(id)arg1 sendingPaymentMessage:(id)arg2;
- (id)initWithSwipeToResolve:(_Bool)arg1;

@end
