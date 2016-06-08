//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPopoverBackgroundView.h"

@class UIImageView;

@interface FUIPopoverBackgroundView : UIPopoverBackgroundView
{
    UIImageView *_borderImageView;
    UIImageView *_arrowView;
    double _arrowOffset;
    unsigned long long _arrowDirection;
}

+ (double)arrowBase;
+ (double)arrowHeight;
+ (struct UIEdgeInsets)contentViewInsets;
+ (_Bool)wantsDefaultContentAppearance;
+ (void)setCornerRadius:(double)arg1;
+ (void)setBackgroundColor:(id)arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setArrowDirection:(unsigned long long)arg1;
- (unsigned long long)arrowDirection;
- (void)setArrowOffset:(double)arg1;
- (double)arrowOffset;
- (id)arrowImage;
- (id)borderImage;
- (void)setupImages;
- (id)initWithFrame:(struct CGRect)arg1;

@end

