//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FLAnimatedImage, UIImage;

@interface SCBaseMediaViewModel : NSObject
{
    _Bool _alphaSetForDisplay;
    UIImage *_image;
    FLAnimatedImage *_gif;
    UIImage *_videoOverlayThumbnailImage;
}

+ (double)cornerRadius;
+ (id)backgroundSendingColor;
+ (double)backgroundSendingAlpha;
+ (id)backgroundLoadingColor;
+ (double)backgroundLoadingAlpha;
@property(retain, nonatomic) UIImage *videoOverlayThumbnailImage; // @synthesize videoOverlayThumbnailImage=_videoOverlayThumbnailImage;
@property(retain, nonatomic) FLAnimatedImage *gif; // @synthesize gif=_gif;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool alphaSetForDisplay; // @synthesize alphaSetForDisplay=_alphaSetForDisplay;
- (void).cxx_destruct;
- (id)videoURL;
- (id)videoOverlayThumbnailImageToDisplay;
- (void)fetchVideoOverlayThumbnailWithSize:(struct CGSize)arg1 WithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchVideoOverlayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)containsVideo;
- (id)gifToDisplay;
- (_Bool)containsGif;
- (void)fetchGifToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)imageToDisplay;
- (void)fetchImagesToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1 scaledToSize:(struct CGSize)arg2 userSession:(id)arg3;
- (void)fetchOriginalImageToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchImageToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1 scaledToSize:(struct CGSize)arg2;
- (_Bool)shouldDisplayAnimatedImages;
- (_Bool)shouldDisplayRetry;
- (_Bool)shouldDisplayFailedToSend;
- (_Bool)shouldDisplaySendingOverlay;
- (_Bool)shouldDisplayActivityIndicator;
- (_Bool)readyForDisplay;
- (_Bool)mediaLoaded;
- (double)width;
- (double)height;
- (id)mediaIdentifier;
- (void)setMediaToDisplay:(id)arg1;
- (_Bool)representsMedia:(id)arg1;
- (id)displayedMedia;
- (void)clearOldData;

@end

