//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALPrivateAPI.h"

@class ADLService, ALInitOptions, ALInitResult, ALRenderSupport, ALResponder, NSNumber, NSString;

@interface ALService : NSObject <ALPrivateAPI>
{
    id <ALServiceStub> _stub;
    ADLService *_svc;
    ALRenderSupport *_renderSupport;
    _Bool _serviceReady;
    _Bool _audioToSpeaker;
    NSNumber *_appId;
    NSString *_apiKey;
    ALResponder *_initResponder;
    ALInitOptions *_initOptions;
    CDUnknownBlockType _camsConverter;
    CDUnknownBlockType _audioDevsConverter;
    ALInitResult *_initResult;
    int _methodIdGenerator;
    _Bool _ready;
}

+ (id)getAGCModes;
+ (id)getNSModes;
+ (id)getAECModes;
+ (void)initPlatform:(id)arg1 responder:(id)arg2;
+ (id)sharedInstance;
@property(nonatomic) _Bool ready; // @synthesize ready=_ready;
- (void).cxx_destruct;
- (id)getRenderSupport;
- (_Bool)validateOSX:(id)arg1;
- (_Bool)validateServiceReady:(id)arg1 reportError:(_Bool)arg2;
- (_Bool)validateServiceReady:(id)arg1;
- (_Bool)validateInputNotNil:(id)arg1 withResponder:(id)arg2 withParamName:(id)arg3;
- (void)flushEvents:(id)arg1 expiryTimestamp:(id)arg2 responder:(id)arg3;
- (void)startEventsTracking:(id)arg1 responder:(id)arg2;
- (void)injectFrame:(id)arg1;
- (void)draw:(id)arg1;
- (void)stopRender:(id)arg1 responder:(id)arg2;
- (void)directRenderSink:(id)arg1 responder:(id)arg2;
- (void)renderSink:(id)arg1 responder:(id)arg2;
- (void)getProperty:(id)arg1 responder:(id)arg2;
- (void)setProperty:(id)arg1 value:(id)arg2 responder:(id)arg3;
- (void)networkTest:(id)arg1 authDetails:(id)arg2 responder:(id)arg3;
- (void)stopMeasuringStats:(id)arg1 responder:(id)arg2;
- (void)startMeasuringStats:(id)arg1 interval:(id)arg2 responder:(id)arg3;
- (void)startMeasuringStatsistics:(id)arg1 interval:(id)arg2 responder:(id)arg3;
- (void)setAllowedSenders:(id)arg1 mediaType:(id)arg2 userIds:(id)arg3 responder:(id)arg4;
- (void)setProxyCredentials:(id)arg1 password:(id)arg2 responder:(id)arg3;
- (void)setProxyServer:(id)arg1 host:(id)arg2 port:(id)arg3 responder:(id)arg4;
- (void)sendMessage:(id)arg1 message:(id)arg2 recipientId:(id)arg3 responder:(id)arg4;
- (void)reconfigureVideo:(id)arg1 videoStream:(id)arg2 responder:(id)arg3;
- (void)unpublish:(id)arg1 what:(id)arg2 responder:(id)arg3;
- (void)publish:(id)arg1 what:(id)arg2 options:(id)arg3 responder:(id)arg4;
- (void)invokeDisconnectionWithScope:(id)arg1 responder:(id)arg2 timeoutMs:(id)arg3 resultLogger:(CDUnknownBlockType)arg4 errorLogger:(CDUnknownBlockType)arg5;
- (void)disconnect:(id)arg1 deferredMs:(id)arg2 responder:(id)arg3;
- (void)disconnect:(id)arg1 responder:(id)arg2;
- (void)connect:(id)arg1 responder:(id)arg2;
- (void)stopLocalVideo:(id)arg1;
- (void)startLocalVideo:(id)arg1;
- (void)setAudioProperty:(long long)arg1 enable:(id)arg2 mode:(id)arg3 responder:(id)arg4;
- (void)setNSMode:(long long)arg1 responder:(id)arg2;
- (void)playTestSound:(id)arg1;
- (void)getHostCpuDetails:(id)arg1;
- (void)monitorSpeechActivity:(id)arg1 enable:(_Bool)arg2 responder:(id)arg3;
- (void)monitorMicActivity:(_Bool)arg1 responder:(id)arg2;
- (void)setMicrophoneVolume:(id)arg1 responder:(id)arg2;
- (void)getMicrophoneVolume:(id)arg1;
- (void)setSpeakersVolume:(id)arg1 responder:(id)arg2;
- (void)getSpeakersVolume:(id)arg1;
- (void)getScreenCaptureSources:(id)arg1 responder:(id)arg2;
- (void)enableSpeaker:(_Bool)arg1 responder:(id)arg2;
- (void)getAudioOutputDevice:(id)arg1;
- (void)setAudioOutputDevice:(id)arg1 responder:(id)arg2;
- (void)getAudioOutputDeviceNames:(id)arg1;
- (void)getAudioCaptureDevice:(id)arg1;
- (void)setAudioCaptureDevice:(id)arg1 responder:(id)arg2;
- (void)getAudioCaptureDeviceNames:(id)arg1;
- (void)getVideoCaptureDevice:(id)arg1;
- (void)setVideoCaptureDevice:(id)arg1 responder:(id)arg2;
- (void)getVideoCaptureDeviceNames:(id)arg1;
- (void)addServiceListenerResuldDispatcher:(id)arg1;
- (void)removeServiceListener:(id)arg1 responder:(id)arg2;
- (void)addServiceListener:(id)arg1 responder:(id)arg2;
- (void)getLogFileTag:(id)arg1;
- (void)getVersion:(id)arg1;
- (id)getConnectionByScope:(id)arg1;
- (void)dealloc;
- (void)releasePlatform;
- (void)dispatchInitComplete;
- (void)onVideoDevicesList:(id)arg1 devs:(id)arg2;
- (void)setupVideoCaptureDevice;
- (void)setStreamerEndpointResolvers;
- (void)setApplicationId;
- (void)initPlatformInternal;
- (void)initPlatform:(id)arg1 responder:(id)arg2;
- (id)initWithAppId:(id)arg1 appKey:(id)arg2;
- (id)initWithAppId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

