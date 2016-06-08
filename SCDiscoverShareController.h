//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SendSnapNavigationControllerDelegate.h"

@class NSString, PreviewViewController, SCDiscoverMediaBlob, SCExpandingPreviewAnimator, SCUserSession, SnapTrophyMetrics;

@interface SCDiscoverShareController : NSObject <SendSnapNavigationControllerDelegate>
{
    SCUserSession *_userSession;
    SCExpandingPreviewAnimator *_previewAnimator;
    id <SCDiscoverShareControllerDelegate> _delegate;
    SCDiscoverMediaBlob *_blob;
    SnapTrophyMetrics *_snapTrophyMetrics;
    PreviewViewController *_previewViewController;
}

@property(retain, nonatomic) PreviewViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
@property(retain, nonatomic) SnapTrophyMetrics *snapTrophyMetrics; // @synthesize snapTrophyMetrics=_snapTrophyMetrics;
@property(retain, nonatomic) SCDiscoverMediaBlob *blob; // @synthesize blob=_blob;
@property(nonatomic) __weak id <SCDiscoverShareControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissPreviewViewController;
- (void)presentPreviewViewController:(id)arg1 fromViewController:(id)arg2 touchOrigin:(struct CGPoint)arg3;
- (void)didSaveSnapWithParameters:(id)arg1;
- (void)didSendDiscoverSharedMessageWithParameters:(id)arg1;
- (void)didCancelFromPreview:(id)arg1;
- (void)shareWithVideo:(id)arg1 overlayImages:(id)arg2 firstFrame:(id)arg3 shareFrameMedia:(id)arg4 fromViewController:(id)arg5 touchOrigin:(struct CGPoint)arg6;
- (void)shareWithImage:(id)arg1 overlayImages:(id)arg2 fromViewController:(id)arg3 touchOrigin:(struct CGPoint)arg4 rotationEnabled:(_Bool)arg5 snapSaverImageProvider:(CDUnknownBlockType)arg6 savingDisabled:(_Bool)arg7;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

