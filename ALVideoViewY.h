//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ALDirectRenderRequest, ALService, EAGLContext, NSNumber, NSObject<OS_dispatch_queue>, NSString;

@interface ALVideoViewY : UIView
{
    NSString *_sinkId;
    NSNumber *_rendererId;
    NSObject<OS_dispatch_queue> *_queue;
    ALService *_service;
    ALDirectRenderRequest *_request;
    EAGLContext *_glContext;
    struct __CVPixelBufferPool *_pixelBufferPool;
    struct opaqueCMFormatDescription *_pixelBufferFmtDesc;
    CDStruct_bed3c653 _renderCtx;
}

+ (Class)layerClass;
@property(nonatomic) struct opaqueCMFormatDescription *pixelBufferFmtDesc; // @synthesize pixelBufferFmtDesc=_pixelBufferFmtDesc;
@property(nonatomic) struct __CVPixelBufferPool *pixelBufferPool; // @synthesize pixelBufferPool=_pixelBufferPool;
@property(nonatomic) CDStruct_bed3c653 renderCtx; // @synthesize renderCtx=_renderCtx;
@property(retain, nonatomic) EAGLContext *glContext; // @synthesize glContext=_glContext;
@property(retain, nonatomic) ALDirectRenderRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak ALService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSNumber *rendererId; // @synthesize rendererId=_rendererId;
@property(retain) NSString *sinkId; // @synthesize sinkId=_sinkId;
- (void).cxx_destruct;
- (void)renderInContext:(struct CGContext *)arg1;
- (void)resolutionChanged:(int)arg1 height:(int)arg2;
- (struct __CVBuffer *)allocPixelBuffer:(struct ALVideoFrameYuv *)arg1;
- (void)convertAndDisplay:(struct ALVideoFrameYuv *)arg1;
- (void)displaySampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)stop:(id)arg1;
- (void)start:(id)arg1;
- (id)setupWithService:(id)arg1 withSink:(id)arg2;
- (void)dispose;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initSelf;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;

@end
