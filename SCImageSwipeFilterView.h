//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSwipeFilterView.h"

@class UIImage;

@interface SCImageSwipeFilterView : SCSwipeFilterView
{
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)reloadData;
- (id)newMediaFilterViewForName:(id)arg1;
- (id)filteredImage;
- (id)mediaFilterScrollView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

