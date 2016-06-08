//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBTweakViewControllerDelegate.h"
#import "SCSplashScreenViewDelegate.h"

@class NSString, SCSplashScreenView, SCTweaks;

@interface SCSplashScreenViewController : UIViewController <SCSplashScreenViewDelegate, FBTweakViewControllerDelegate>
{
    SCTweaks *_tweaks;
    SCSplashScreenView *_splashScreenView;
}

@property(retain, nonatomic) SCSplashScreenView *splashScreenView; // @synthesize splashScreenView=_splashScreenView;
- (void).cxx_destruct;
- (void)tweakViewControllerPressedDone:(id)arg1;
- (void)_tripleDoubleTap:(id)arg1;
- (void)_addTweaksGestures;
- (void)willEnterForeground:(id)arg1;
- (void)_removeObservers;
- (void)_addObservers;
- (void)registerButtonClicked;
- (void)loginButtonClicked;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

