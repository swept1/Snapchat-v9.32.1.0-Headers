//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, SCAlertViewConfig, SCAlertViewFlow, UILabel;

@interface SCAlertView : UIView
{
    UIView *_contentView;
    UIView *_separatorView;
    SCAlertViewConfig *_configuration;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    NSArray *_actions;
    UIView *_accessoryView;
    UIView *_rightAccessoryView;
    SCAlertViewFlow *_alertViewFlow;
    CDUnknownBlockType _dismissHandler;
}

+ (id)alertViewWithTitle:(id)arg1 description:(id)arg2 actions:(id)arg3 configuration:(CDUnknownBlockType)arg4 dismissHandler:(CDUnknownBlockType)arg5;
@property(readonly, copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(nonatomic) __weak SCAlertViewFlow *alertViewFlow; // @synthesize alertViewFlow=_alertViewFlow;
@property(readonly, nonatomic) SCAlertViewConfig *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) UIView *rightAccessoryView; // @synthesize rightAccessoryView=_rightAccessoryView;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (_Bool)_hasDescriptionText;
- (_Bool)_hasTitleText;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, copy, nonatomic) NSArray *actionViews;
- (void)becomeFirstResponder;
- (id)initWithTitle:(id)arg1 description:(id)arg2 actions:(id)arg3 configuration:(CDUnknownBlockType)arg4 dismissHandler:(CDUnknownBlockType)arg5;

@end

