//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCStoriesSelectableCell.h"

@class FriendStories, SCExpandedButton, SCFriendmojiView, SCLoadingIndicatorView, SCMyStories, SCPieSliceView, SCProgressSaveButton, SCSingleIconConfigurer, SCSingleIconViewBase, UIButton, UIImageView, UILabel, UIView;

@interface StoriesCell : SCStoriesSelectableCell
{
    _Bool _needsTopBorder;
    _Bool _needsBottomBorder;
    _Bool _needsRightEdgeInset;
    _Bool _animatingShowSubView;
    _Bool _animatingHideSubView;
    _Bool _myStoriesExpanded;
    id <StoriesCellDelegate> _delegate;
    SCSingleIconViewBase *_singleIconView;
    SCLoadingIndicatorView *_loadingIndicator;
    long long _cellType;
    long long _previousCellType;
    SCMyStories *_myStories;
    FriendStories *_friendStories;
    FriendStories *_previousStories;
    UILabel *_nameLabel;
    SCExpandedButton *_expandMyStoryButton;
    UIButton *_replySnapButton;
    SCFriendmojiView *_friendMojiView;
    SCProgressSaveButton *_saveButton;
    UIButton *_mySharedStoryInfoButton;
    UILabel *_subLabel;
    UIView *_topBorder;
    UIView *_bottomBorder;
    SCSingleIconConfigurer *_singleIconConfigurer;
    SCPieSliceView *_pieSliceView;
    UIView *_subView;
    UIImageView *_cameraReplyIcon;
}

+ (void)updateLabel:(id)arg1 withStatusText:(id)arg2 date:(id)arg3 showTimestamp:(_Bool)arg4 timestampBeforeStatusText:(_Bool)arg5 isRefresh:(_Bool)arg6;
@property(retain, nonatomic) UIImageView *cameraReplyIcon; // @synthesize cameraReplyIcon=_cameraReplyIcon;
@property(retain, nonatomic) UIView *subView; // @synthesize subView=_subView;
@property(retain, nonatomic) SCPieSliceView *pieSliceView; // @synthesize pieSliceView=_pieSliceView;
@property(retain, nonatomic) SCSingleIconConfigurer *singleIconConfigurer; // @synthesize singleIconConfigurer=_singleIconConfigurer;
@property(retain, nonatomic) UIView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain, nonatomic) UIView *topBorder; // @synthesize topBorder=_topBorder;
@property(nonatomic) _Bool myStoriesExpanded; // @synthesize myStoriesExpanded=_myStoriesExpanded;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UIButton *mySharedStoryInfoButton; // @synthesize mySharedStoryInfoButton=_mySharedStoryInfoButton;
@property(retain, nonatomic) SCProgressSaveButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) SCFriendmojiView *friendMojiView; // @synthesize friendMojiView=_friendMojiView;
@property(retain, nonatomic) UIButton *replySnapButton; // @synthesize replySnapButton=_replySnapButton;
@property(retain, nonatomic) SCExpandedButton *expandMyStoryButton; // @synthesize expandMyStoryButton=_expandMyStoryButton;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) FriendStories *previousStories; // @synthesize previousStories=_previousStories;
@property(retain, nonatomic) FriendStories *friendStories; // @synthesize friendStories=_friendStories;
@property(retain, nonatomic) SCMyStories *myStories; // @synthesize myStories=_myStories;
@property(nonatomic) long long previousCellType; // @synthesize previousCellType=_previousCellType;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) _Bool animatingHideSubView; // @synthesize animatingHideSubView=_animatingHideSubView;
@property(nonatomic) _Bool animatingShowSubView; // @synthesize animatingShowSubView=_animatingShowSubView;
@property(retain, nonatomic) SCLoadingIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) SCSingleIconViewBase *singleIconView; // @synthesize singleIconView=_singleIconView;
@property(nonatomic) _Bool needsRightEdgeInset; // @synthesize needsRightEdgeInset=_needsRightEdgeInset;
@property(nonatomic) _Bool needsBottomBorder; // @synthesize needsBottomBorder=_needsBottomBorder;
@property(nonatomic) _Bool needsTopBorder; // @synthesize needsTopBorder=_needsTopBorder;
@property(nonatomic) __weak id <StoriesCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)loadStateForFriendStories:(id)arg1 cellType:(long long)arg2;
- (id)thumbnailLayer;
- (id)thumbnailIcon;
- (void)mySharedStoryInfoPressed;
- (void)savePressed;
- (void)expandMyStoryButtonPressed;
- (void)replySnapButtonPressed;
- (void)saveStorySucceeded:(_Bool)arg1;
- (_Bool)shouldShowTapToReplyForFriendStories:(id)arg1 cellType:(long long)arg2;
- (void)updateSaveStoryProgress:(double)arg1;
- (void)updateStatusTextForFriendStoriesCellWithFriendStories:(id)arg1 forViewingType:(long long)arg2;
- (void)layoutRowsWithHasThumbnail:(_Bool)arg1 hasRightButton:(_Bool)arg2;
- (id)timestampForDate:(id)arg1;
- (void)toggleRightOffset:(_Bool)arg1;
- (void)updateWithFriend:(id)arg1;
- (void)updateSubLabelWithStatusText:(id)arg1 date:(id)arg2 showTimestamp:(_Bool)arg3 timestampBeforeStatusText:(_Bool)arg4;
- (void)updateSubLabelWithStatusText:(id)arg1 date:(id)arg2 showTimestamp:(_Bool)arg3;
- (_Bool)cellIsBeingRefreshed;
- (void)updateSubLabelWithMyStories:(id)arg1;
- (void)updateWithMyStories:(id)arg1 expanded:(_Bool)arg2 isContributionStory:(_Bool)arg3;
- (void)hideSaveButtonHelper:(_Bool)arg1;
- (void)setFriendmojiViewForFriend:(id)arg1;
- (void)addFriendmojiViewForFriend:(id)arg1;
- (void)showPieSliceView:(_Bool)arg1 forFriendStories:(id)arg2;
- (void)updateWithCellType:(long long)arg1 friendStories:(id)arg2;
- (void)updateWithFriendStories:(id)arg1;
- (void)updateWithUnviewedFriendStories:(id)arg1;
- (void)updateWithDiscoverChannel:(id)arg1;
- (void)showTapToReply:(_Bool)arg1;
- (void)hideSubViewWithoutAnimation;
- (void)hideSubViewIfNecessaryAnimated:(_Bool)arg1 duration:(double)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)hideSubViewIfNecessaryAnimated:(_Bool)arg1 duration:(double)arg2;
- (void)hideSubViewIfNecessaryAnimated:(_Bool)arg1;
- (void)showSubViewWithoutAnimation;
- (void)showSubViewIfNecessaryAnimated:(_Bool)arg1;
- (void)setDisplayNameForDiscoverChannel:(id)arg1;
- (void)setDisplayNameForFriendStories:(id)arg1;
- (void)layoutSubviewsForFriend;
- (void)layoutSubviewsForStoryOrDiscover;
- (CDUnknownBlockType)leftButtonConstraintMakerWithView:(id)arg1 referenceView:(id)arg2 resizable:(_Bool)arg3;
- (CDUnknownBlockType)rightButtonConstraintMakerWithView:(id)arg1 resizable:(_Bool)arg2;
- (struct CGRect)thumbnailRect;
- (id)defaultBackgroundColor;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

