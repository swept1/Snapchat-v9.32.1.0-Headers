//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCOperaFloatingViewController.h"
#import "SCOperaLayerViewController.h"

@class NSString, SCOperaConfiguration, SCOperaTextLayer, SCOperaTextLayerView;

@interface SCOperaTextLayerViewController : UIViewController <SCOperaLayerViewController, SCOperaFloatingViewController>
{
    SCOperaTextLayerView *_layerView;
    SCOperaConfiguration *_configuration;
    id <SCOperaPageableViewControllerDelegate> _pageableViewControllerDelegate;
    SCOperaTextLayer *_layer;
}

+ (id)layerViewControllerWithLayer:(id)arg1 configuration:(id)arg2 eventAnnouncer:(id)arg3;
@property(retain, nonatomic) SCOperaTextLayer *layer; // @synthesize layer=_layer;
@property(nonatomic) __weak id <SCOperaPageableViewControllerDelegate> pageableViewControllerDelegate; // @synthesize pageableViewControllerDelegate=_pageableViewControllerDelegate;
- (void).cxx_destruct;
- (id)image;
- (void)rotateBasedOnOrientation;
- (double)horizontalMargin;
- (double)verticalMargin;
- (unsigned long long)horizontalAlignment;
- (unsigned long long)verticalAlignment;
- (void)loadView;
- (_Bool)disablePaging;
- (void)teardown;
- (id)shareableMedia;
- (id)currentViewParameters;
- (void)setVolume:(double)arg1;
- (void)resume;
- (void)pause;
- (void)viewDidFullyDisappear;
- (void)viewDidPartiallyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (void)viewDidFullyAppear;
- (id)layerView;
- (id)initWithLayer:(id)arg1 configuration:(id)arg2 eventAnnouncer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
