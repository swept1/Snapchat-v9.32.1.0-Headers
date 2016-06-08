//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCScanCardTableViewCell.h"

@class CLLocation, NSString, NSURL, SCGeoFilter, SCScanCardButton, UIImage, UIImageView, UILabel, UIView;

@interface SCScanCardUnlockFilter : SCScanCardTableViewCell
{
    NSString *_data;
    UIImageView *_imageView;
    _Bool _filterPictureLoaded;
    NSURL *_url;
    struct CGSize _imageCroppedSize;
    SCScanCardButton *_addButton;
    UIImageView *_thumbnailImageView;
    UIImage *_filterImage;
    UILabel *_fullNameLabel;
    _Bool _addedFilter;
    CLLocation *_location;
    NSString *_filterId;
    NSString *_filterCardTitle;
    SCGeoFilter *_filter;
    SCScanCardButton *_unlockFilterButton;
    NSString *_scanData;
    SCScanCardButton *_cancelButton;
    UIView *_secondaryTitle;
    double _cardHeightAfterFilterLoad;
}

- (void).cxx_destruct;
- (void)_dismissCardView;
- (void)_didTapActionButton:(id)arg1;
- (void)_stopLoading;
- (void)_startLoading;
- (void)_setupFilterImageWithCropping:(_Bool)arg1 imageData:(id)arg2;
- (id)_copyImage:(id)arg1;
- (void)updateStyle;
- (void)transitionToContentAnimated:(_Bool)arg1;
- (id)initWithTitle:(id)arg1 geofilter:(id)arg2 scanData:(id)arg3;

@end

