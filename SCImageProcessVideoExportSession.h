//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCImageProcessVideoExportHandlerDelegate.h"

@class AVAsset, AVAssetReader, AVAssetReaderTrackOutput, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, FBKVOController, NSArray, NSData, NSError, NSObject<OS_dispatch_queue>, NSString, NSURL, SCImageProcessQueue;

@interface SCImageProcessVideoExportSession : NSObject <SCImageProcessVideoExportHandlerDelegate>
{
    SCImageProcessQueue *_queue;
    NSArray *_GPUCommands;
    NSArray *_CPUCommands;
    AVAsset *_videoAsset;
    NSData *_overridingAudioData;
    double _outputPlaybackRate;
    unsigned long long _maxKeyFrameInterval;
    double _outputBitrate;
    struct CGAffineTransform _transform;
    long long _orientation;
    _Bool _audio;
    AVAssetReader *_assetReader;
    AVAssetWriter *_assetWriter;
    AVAssetReaderTrackOutput *_assetReaderAudioOutput;
    AVAssetWriterInput *_assetWriterAudioInput;
    AVAssetReaderTrackOutput *_assetReaderVideoOutput;
    AVAssetWriterInput *_assetWriterVideoInput;
    AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
    NSObject<OS_dispatch_queue> *_readerWriterQueue;
    CDStruct_1b6d18a9 _endSessionTime;
    NSArray *_handlers;
    CDUnknownBlockType _completionHandler;
    FBKVOController *_KVOController;
    _Bool _shouldLimitFrameRateForCameraRoll;
    unsigned long long _status;
    NSURL *_outputURL;
    NSError *_error;
    struct CGSize _outputSize;
}

@property(readonly, nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)videoExportHandler:(id)arg1 didFinishWithPresentationTime:(CDStruct_1b6d18a9)arg2;
- (void)videoExportHandler:(id)arg1 didProgressWithPresentationTime:(CDStruct_1b6d18a9)arg2;
- (void)stopRunning;
- (void)startRunningWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_assetWriterStatusChanged:(id)arg1;
- (void)_invokeCompletionHandler;
- (_Bool)_setupAssetReaderOutputWriterInput;
- (id)_alteredVideoAssetWithPlaybackRateAndOverridingAudio;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 GPUCommands:(id)arg2 CPUCommands:(id)arg3 videoAsset:(id)arg4 overridingAudioData:(id)arg5 outputURL:(id)arg6 outputSize:(struct CGSize)arg7 outputPlaybackRate:(double)arg8 maxKeyFrameInterval:(unsigned long long)arg9 shouldLimitFrameRateForCameraRoll:(_Bool)arg10 outputBitrate:(double)arg11 transform:(struct CGAffineTransform)arg12 orientation:(long long)arg13 audio:(_Bool)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

