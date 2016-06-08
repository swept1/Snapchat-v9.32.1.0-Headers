//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, SCStoryMediaMessage;

@interface SCStoryMediaMessageViewModel : NSObject
{
    SCStoryMediaMessage *_storyMediaMessage;
    long long _indexOfMediaForStoryThumbnail;
    NSMutableArray *_cachedStoryThumbnail;
    NSMutableArray *_storyThumbnailFetchingActions;
}

- (void).cxx_destruct;
- (_Bool)shouldDisplayActivityIndicator;
- (_Bool)shouldDisplaySendingOverlay;
- (void)_resetCachedStoryThumbnail;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_fetchNextCachedImage:(CDUnknownBlockType)arg1;
- (void)fetchNextImageToDisplay:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)readyForDisplay;
- (_Bool)anyMediaUploaded;
- (_Bool)isProcessingOrUploadingMedia;
- (_Bool)isLoadingFirstMedia;
- (_Bool)_requiredMediaLoaded:(long long)arg1;
- (_Bool)allMediaLoaded;
- (_Bool)normallyRequiredMediaLoaded;
- (_Bool)minimumRequiredMediaLoaded;
- (id)mediaList;
- (void)dealloc;
- (id)initWithStoryMediaMessage:(id)arg1;

@end

