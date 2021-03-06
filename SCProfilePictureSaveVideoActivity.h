//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivity.h"

#import "SCProfilePictureSaveVideoViewControllerDelegate.h"

@class SCProfilePictureSaveVideoViewController, SCProfilePictureVideoSource;

@interface SCProfilePictureSaveVideoActivity : UIActivity <SCProfilePictureSaveVideoViewControllerDelegate>
{
    SCProfilePictureVideoSource *_videoSource;
    SCProfilePictureSaveVideoViewController *_saveVideoViewController;
}

+ (long long)activityCategory;
+ (id)activity;
@property(retain, nonatomic) SCProfilePictureSaveVideoViewController *saveVideoViewController; // @synthesize saveVideoViewController=_saveVideoViewController;
@property(retain, nonatomic) SCProfilePictureVideoSource *videoSource; // @synthesize videoSource=_videoSource;
- (void).cxx_destruct;
- (void)saveVideoDidFinish:(_Bool)arg1;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;

@end

