//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, SCCounters, SCEventUploader;

@interface SCLogger : NSObject
{
    SCCounters *_counters;
    SCEventUploader *_eventUploader;
    NSMutableSet *_uniqueEvents;
    NSMutableDictionary *_timers;
    NSMutableDictionary *_timedEvents;
    CDUnknownBlockType _userProvider;
    CDUnknownBlockType _sendEventsBlock;
    CDUnknownBlockType _didLogBlizzardEventCallback;
    CDUnknownBlockType _didEndPerfEventCallback;
    CDUnknownBlockType _didCancelTimerEventsCallback;
    id <SCLoggerAmplitudeProtocol> _blizzardLogger;
    CDUnknownBlockType _reachabilityProvider;
    CDUnknownBlockType _isLowPowerModeEnabledCallback;
    CDUnknownBlockType _isTravelModeEnabledCallback;
    CDUnknownBlockType _isProtectedDataAvailable;
    CDUnknownBlockType _mainThreadDelaysProvider;
    CDUnknownBlockType _currentHostProvider;
    CDUnknownBlockType _frameRatesProvider;
    NSArray *_performanceEvents;
    NSMutableArray *_savedEvents;
    id <SCPerforming> _performer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSMutableArray *savedEvents; // @synthesize savedEvents=_savedEvents;
@property(retain, nonatomic) NSArray *performanceEvents; // @synthesize performanceEvents=_performanceEvents;
@property(copy, nonatomic) CDUnknownBlockType frameRatesProvider; // @synthesize frameRatesProvider=_frameRatesProvider;
@property(copy, nonatomic) CDUnknownBlockType currentHostProvider; // @synthesize currentHostProvider=_currentHostProvider;
@property(copy, nonatomic) CDUnknownBlockType mainThreadDelaysProvider; // @synthesize mainThreadDelaysProvider=_mainThreadDelaysProvider;
@property(copy, nonatomic) CDUnknownBlockType isProtectedDataAvailable; // @synthesize isProtectedDataAvailable=_isProtectedDataAvailable;
@property(copy, nonatomic) CDUnknownBlockType isTravelModeEnabledCallback; // @synthesize isTravelModeEnabledCallback=_isTravelModeEnabledCallback;
@property(copy, nonatomic) CDUnknownBlockType isLowPowerModeEnabledCallback; // @synthesize isLowPowerModeEnabledCallback=_isLowPowerModeEnabledCallback;
@property(copy, nonatomic) CDUnknownBlockType reachabilityProvider; // @synthesize reachabilityProvider=_reachabilityProvider;
@property(retain, nonatomic) id <SCLoggerAmplitudeProtocol> blizzardLogger; // @synthesize blizzardLogger=_blizzardLogger;
@property(copy, nonatomic) CDUnknownBlockType didCancelTimerEventsCallback; // @synthesize didCancelTimerEventsCallback=_didCancelTimerEventsCallback;
@property(copy, nonatomic) CDUnknownBlockType didEndPerfEventCallback; // @synthesize didEndPerfEventCallback=_didEndPerfEventCallback;
@property(copy, nonatomic) CDUnknownBlockType didLogBlizzardEventCallback; // @synthesize didLogBlizzardEventCallback=_didLogBlizzardEventCallback;
@property(copy, nonatomic) CDUnknownBlockType sendEventsBlock; // @synthesize sendEventsBlock=_sendEventsBlock;
@property(copy, nonatomic) CDUnknownBlockType userProvider; // @synthesize userProvider=_userProvider;
@property(retain, nonatomic) NSMutableDictionary *timedEvents; // @synthesize timedEvents=_timedEvents;
@property(retain, nonatomic) NSMutableDictionary *timers; // @synthesize timers=_timers;
@property(retain, nonatomic) NSMutableSet *uniqueEvents; // @synthesize uniqueEvents=_uniqueEvents;
@property(retain, nonatomic) SCEventUploader *eventUploader; // @synthesize eventUploader=_eventUploader;
@property(readonly, nonatomic) SCCounters *counters; // @synthesize counters=_counters;
- (void).cxx_destruct;
- (id)markEndSessionForType:(id)arg1;
- (_Bool)markStartSessionForType:(id)arg1 withStartTime:(double)arg2;
- (void)syncLogEventToEventLogger:(id)arg1 parameters:(id)arg2 secretParameters:(id)arg3 metrics:(id)arg4;
- (void)synchronouslyLogEvent:(id)arg1 parameters:(id)arg2 secretParameters:(id)arg3 metrics:(id)arg4;
- (void)logEndSessionForType:(id)arg1;
- (id)histogramBucketForTimeLapsed:(double)arg1 bucketSize:(double)arg2 numberBuckets:(int)arg3;
- (void)logStartSessionForType:(id)arg1;
- (void)updateBlizzardValidationServerUrl:(id)arg1;
- (void)logUserNotTrackedEvent:(id)arg1;
- (void)logUserTrackedEvent:(id)arg1;
- (void)getAndClearEventsWithBlock:(CDUnknownBlockType)arg1;
- (void)logJSONSerializationError:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
- (void)logEventToEventLogger:(id)arg1 parameters:(id)arg2 secretParameters:(id)arg3 metrics:(id)arg4;
- (void)logEventToEventLogger:(id)arg1 parameters:(id)arg2 secretParameters:(id)arg3;
- (void)logEvent:(id)arg1 parameters:(id)arg2 secretParameters:(id)arg3 metrics:(id)arg4;
- (void)logEvent:(id)arg1 parameters:(id)arg2 secretParameters:(id)arg3;
- (void)logEvent:(id)arg1 parameters:(id)arg2;
- (void)logEvent:(id)arg1;
- (void)forceUploadEvents;
- (void)logSavedEvents;
- (void)attemptResumeBlizzardSession;
- (void)startServicesWithBlizzardLogger:(id)arg1 userProvider:(CDUnknownBlockType)arg2 sendEventsBlock:(CDUnknownBlockType)arg3 didLogBlizzardEventCallback:(CDUnknownBlockType)arg4 didEndPerfEventCallback:(CDUnknownBlockType)arg5 didCancelTimerEventsCallback:(CDUnknownBlockType)arg6 reachabilityProvider:(CDUnknownBlockType)arg7 isLowPowerModeEnabledCallBack:(CDUnknownBlockType)arg8 isTravelModeEnabledCallBack:(CDUnknownBlockType)arg9 isProtectedDataAvailable:(CDUnknownBlockType)arg10 mainThreadDelaysProvider:(CDUnknownBlockType)arg11 currentHostProvider:(CDUnknownBlockType)arg12 frameRateProvider:(CDUnknownBlockType)arg13;
- (id)init;

@end

