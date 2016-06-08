//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCPresentationAnimationHandlerProtocol.h"

@class CAShapeLayer, NSString, UIImageView, UIView;

@interface SCCirclePresentationAnimationHandler : NSObject <SCPresentationAnimationHandlerProtocol>
{
    UIImageView *_iconCircle;
    UIView *_blackOverlay;
    CAShapeLayer *_shadowLayer;
}

@property(retain, nonatomic) CAShapeLayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(retain, nonatomic) UIView *blackOverlay; // @synthesize blackOverlay=_blackOverlay;
@property(retain, nonatomic) UIImageView *iconCircle; // @synthesize iconCircle=_iconCircle;
- (void).cxx_destruct;
- (void)animateFadeEffectForOpenAnimationAboveView:(id)arg1 withColor:(id)arg2;
- (void)animateToPresent:(id)arg1;
- (void)animateForStart:(_Bool)arg1 aboveView:(id)arg2 animationCircle:(id)arg3 iconImage:(id)arg4 initialBorderWidth:(double)arg5 endFinalBounds:(struct CGRect)arg6 dismissRegion:(unsigned long long)arg7 selectedCellToHideLayer:(id)arg8 showFadeInFadeOutIconEffect:(_Bool)arg9 completion:(CDUnknownBlockType)arg10;
- (void)animateCircleForStart:(_Bool)arg1 aboveView:(id)arg2 animationCircle:(id)arg3 iconImage:(id)arg4 initialBorderWidth:(double)arg5 endFinalBounds:(struct CGRect)arg6 dismissRegion:(unsigned long long)arg7 selectedCellToHideLayer:(id)arg8 showFadeInFadeOutIconEffect:(_Bool)arg9 completion:(CDUnknownBlockType)arg10;
- (void)animateFadeInFadeOutEffectAboveView:(id)arg1 animationCircle:(id)arg2 iconImage:(id)arg3 endFinalBounds:(struct CGRect)arg4 fadingDuration:(double)arg5 completion:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

