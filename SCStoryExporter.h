//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetExportSession, NSArray, NSMutableArray, NSString, NSTimer;

@interface SCStoryExporter : NSObject
{
    id <SCPerforming> _performer;
    _Bool _processingStarted;
    id <SCStoryExporterDelegate> _delegate;
    NSString *_exporterTag;
    unsigned long long _backgroundTaskId;
    NSArray *_stories;
    NSMutableArray *_urls;
    NSTimer *_exportProgressTimer;
    AVAssetExportSession *_exportSession;
}

@property(nonatomic) _Bool processingStarted; // @synthesize processingStarted=_processingStarted;
@property(retain, nonatomic) AVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
@property(retain, nonatomic) NSTimer *exportProgressTimer; // @synthesize exportProgressTimer=_exportProgressTimer;
@property(retain, nonatomic) NSMutableArray *urls; // @synthesize urls=_urls;
@property(copy, nonatomic) NSArray *stories; // @synthesize stories=_stories;
@property(nonatomic) unsigned long long backgroundTaskId; // @synthesize backgroundTaskId=_backgroundTaskId;
@property(copy, nonatomic) NSString *exporterTag; // @synthesize exporterTag=_exporterTag;
@property(nonatomic) __weak id <SCStoryExporterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)storyDuration;
- (long long)storyCount;
- (id)durationInMillisecondsOfStory:(id)arg1;
- (id)ssegMetadata;
- (id)generateURLWithCustomMetadataFromURL:(id)arg1;
- (void)pollExporterProgress:(id)arg1;
- (void)didFinishExportingToURL:(id)arg1 withError:(id)arg2;
- (void)didProceedToProgress:(double)arg1;
- (void)compositeVideos;
- (void)exportStoryAtIndex:(long long)arg1;
- (id)generateOutputMovieURL;
- (void)startExporting;
- (id)init;
- (id)initWithStories:(id)arg1;

@end
