//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCImageProcessRequest.h"

@class NSArray, NSString, SCImageProcessPlaybackRenderer;

@interface SCImageProcessVideoPlaybackRequest : NSObject <SCImageProcessRequest>
{
    struct __CVBuffer *_pixelBuffer;
    SCImageProcessPlaybackRenderer *_renderer;
    long long _orientation;
    float _offset;
    _Bool _isOffsetLandscape;
    NSArray *_intermediateCommands;
    NSArray *_outputCommands;
    CDUnknownBlockType _completionHandler;
    struct __CVBuffer *_luminanceTextureRef;
    struct __CVBuffer *_chrominanceTextureRef;
    unsigned long long _status;
}

@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)cancel;
- (void)runProgramsWithContext:(id)arg1 GPUAvailable:(_Bool)arg2;
@property(readonly, nonatomic) _Bool GPURequired;
- (void)cleanupTextures;
- (void)setupInputTextureWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 renderer:(id)arg2 orientation:(long long)arg3 offset:(float)arg4 isOffsetLandscape:(_Bool)arg5 intermediateCommands:(id)arg6 outputCommands:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

