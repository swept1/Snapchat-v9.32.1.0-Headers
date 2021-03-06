//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCTabBarItemView;

@interface SCTabBarItem : NSObject
{
    _Bool _hidden;
    _Bool _selected;
    _Bool _darkModeEnabled;
    long long _itemType;
    double _percentVisible;
    double _alpha;
    long long _badgeCount;
    SCTabBarItemView *_view;
    double _percentDarkMode;
}

@property(nonatomic) double percentDarkMode; // @synthesize percentDarkMode=_percentDarkMode;
@property(nonatomic, getter=isDarkModeEnabled) _Bool darkModeEnabled; // @synthesize darkModeEnabled=_darkModeEnabled;
@property(retain, nonatomic) SCTabBarItemView *view; // @synthesize view=_view;
@property(nonatomic) long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) double percentVisible; // @synthesize percentVisible=_percentVisible;
@property(readonly, nonatomic) long long itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isBadged) _Bool badged;
- (_Bool)shouldUpdateSelectedView;
@property(readonly, getter=shouldApplyDarkModeIcon) _Bool applyDarkModeIcon;
- (void)animateBadgeCount;
- (void)toggleDarkModeIcons;
- (void)updateWithPercentDarkMode:(double)arg1;
- (void)updateInteractiveTransition:(double)arg1;
- (void)updateViewVisibilityAndScale;
- (void)updateViewScale;
- (void)updateViewVisibility;
- (id)initWithItemType:(long long)arg1;

@end

