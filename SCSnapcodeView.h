//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class Friend, SVGDocumentView, UIActivityIndicatorView, UIImageView;

@interface SCSnapcodeView : UIView
{
    double _snapcodeWidth;
    int _session;
    UIImageView *_snapcodePlaceholder;
    _Bool _snapcodeLoaded;
    _Bool _profilePictureLoaded;
    Friend *_friend;
    SVGDocumentView *_snapcodeSVGView;
    UIImageView *_profilePictureView;
    UIActivityIndicatorView *_loadingIndicator;
}

+ (id)snapcodeViewForFriend:(id)arg1 contexts:(id)arg2 width:(double)arg3 borderWidth:(double)arg4;
+ (id)snapcodeViewForFriend:(id)arg1 contexts:(id)arg2 width:(double)arg3;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIImageView *profilePictureView; // @synthesize profilePictureView=_profilePictureView;
@property(retain, nonatomic) SVGDocumentView *snapcodeSVGView; // @synthesize snapcodeSVGView=_snapcodeSVGView;
- (void).cxx_destruct;
- (id)friendPictureStatus;
- (void)_stopLoading;
- (void)_startLoading;
- (void)_hideProfilePicture:(_Bool)arg1;
- (void)_hideSnapcode:(_Bool)arg1;
- (_Bool)_drawSnapcode:(id)arg1;
- (void)_drawProfileImages:(id)arg1;
- (void)_resetSnapcodeView;
- (id)initWithFrame:(struct CGRect)arg1 borderWidth:(double)arg2;
- (void)updateWidth:(double)arg1 borderWidth:(double)arg2;
- (void)updateWithFriend:(id)arg1 contexts:(id)arg2;

@end

