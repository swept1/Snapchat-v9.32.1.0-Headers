//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCAlertViewConfig : NSObject
{
    _Bool _dismissOnBackgroundTap;
    _Bool _dismissOnApplicationBackground;
    _Bool _dismissOnPan;
    _Bool _dismissOnAction;
    _Bool _dismissKeyboardOnShow;
    _Bool _becomeFirstResponderOnShow;
}

@property(nonatomic) _Bool becomeFirstResponderOnShow; // @synthesize becomeFirstResponderOnShow=_becomeFirstResponderOnShow;
@property(nonatomic) _Bool dismissKeyboardOnShow; // @synthesize dismissKeyboardOnShow=_dismissKeyboardOnShow;
@property(nonatomic) _Bool dismissOnAction; // @synthesize dismissOnAction=_dismissOnAction;
@property(nonatomic) _Bool dismissOnPan; // @synthesize dismissOnPan=_dismissOnPan;
@property(nonatomic) _Bool dismissOnApplicationBackground; // @synthesize dismissOnApplicationBackground=_dismissOnApplicationBackground;
@property(nonatomic) _Bool dismissOnBackgroundTap; // @synthesize dismissOnBackgroundTap=_dismissOnBackgroundTap;
- (id)init;

@end

