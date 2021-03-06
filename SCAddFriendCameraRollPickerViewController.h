//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLeftSwipableViewController.h"

#import "SCAddFriendCameraRollPickerViewDelegate.h"
#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "SCScanResultViewControllerDelegate.h"

@class NSString, SCAddFriendCameraRollPickerView, SCHeader, SCUserSession;

@interface SCAddFriendCameraRollPickerViewController : SCLeftSwipableViewController <SCHeaderDataSource, SCHeaderDelegate, SCScanResultViewControllerDelegate, SCAddFriendCameraRollPickerViewDelegate>
{
    SCUserSession *_userSession;
    SCHeader *_header;
    SCAddFriendCameraRollPickerView *_assetListView;
}

@property(retain, nonatomic) SCAddFriendCameraRollPickerView *assetListView; // @synthesize assetListView=_assetListView;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (id)_pagenameForPageView;
- (void)scanResultViewControllerDidDismiss:(id)arg1 dismissType:(unsigned long long)arg2;
- (id)scanResultViewController:(id)arg1 cardToReplaceScanCard:(id)arg2;
- (_Bool)scanResultViewController:(id)arg1 shouldShowCard:(id)arg2;
- (void)addFriendCameraRollPickerView:(id)arg1 didScanImageWithScannedData:(id)arg2;
- (void)leftButtonPressed;
- (id)textColorForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)titleForHeader:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithUserSession:(id)arg1;
- (id)getPageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

