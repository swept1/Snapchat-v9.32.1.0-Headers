//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCAlertViewAnimationPerformer : NSObject
{
}

+ (void)performFlowDismissalForAlertView:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)performFlowPresentationForAlertView:(id)arg1 inView:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (void)performNoAnimationDismissalForAlertView:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)performNoAnimationPresentationForAlertView:(id)arg1 inView:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (void)performDefaultDismissalForAlertView:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)performDefaultPresentationForAlertView:(id)arg1 inView:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (void)dismissView:(id)arg1 withDismissalType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)presentView:(id)arg1 inView:(id)arg2 withPresentationType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;

@end

