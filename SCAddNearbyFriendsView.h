//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCHeaderDataSource.h"

@class FBKVOController, NSString, SCAnimatedPlayerView, SCHeader, UIButton, UILabel, UITableView;

@interface SCAddNearbyFriendsView : UIView <SCHeaderDataSource>
{
    SCHeader *_header;
    UIButton *_tableFooterButton;
    UILabel *_tableFooterText;
    UILabel *_tableFooterSubtext;
    UITableView *_nearbySnapchattersTableView;
    SCAnimatedPlayerView *_bgView;
    UIView *_backgroundTint;
    FBKVOController *_observeController;
}

@property(retain, nonatomic) FBKVOController *observeController; // @synthesize observeController=_observeController;
@property(retain, nonatomic) UIView *backgroundTint; // @synthesize backgroundTint=_backgroundTint;
@property(retain, nonatomic) SCAnimatedPlayerView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UITableView *nearbySnapchattersTableView; // @synthesize nearbySnapchattersTableView=_nearbySnapchattersTableView;
@property(retain, nonatomic) UILabel *tableFooterSubtext; // @synthesize tableFooterSubtext=_tableFooterSubtext;
@property(retain, nonatomic) UILabel *tableFooterText; // @synthesize tableFooterText=_tableFooterText;
@property(retain, nonatomic) UIButton *tableFooterButton; // @synthesize tableFooterButton=_tableFooterButton;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (id)textColorForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)titleForHeader:(id)arg1;
- (void)adjustBackgroundTint;
- (void)scrollViewDidScroll:(id)arg1;
- (void)createTableFooterButton;
- (void)createNearbySnapchattersTableView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
