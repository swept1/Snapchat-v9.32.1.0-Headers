//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink;

@interface FBAnimationPerformanceTracker : NSObject
{
    struct FBAnimationPerformanceTrackerConfig _config;
    _Bool _tracking;
    _Bool _firstUpdate;
    double _previousFrameTimestamp;
    CADisplayLink *_displayLink;
    _Bool _prepared;
    double _durationTotal;
    double _maxFrameTime;
    double _smallDrops;
    double _largeDrops;
    id <FBAnimationPerformanceTrackerDelegate> _delegate;
}

+ (void)_trackerLoop;
+ (struct FBAnimationPerformanceTrackerConfig)standardConfig;
@property(nonatomic) __weak id <FBAnimationPerformanceTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_reportStackTrace:(id)arg1 frameDropped:(long long)arg2;
- (void)_update;
- (void)_addFrameTime:(double)arg1 singleFrameTime:(double)arg2;
- (void)_reset;
- (void)_tearDownCADisplayLink;
- (void)_setUpCADisplayLink;
- (_Bool)prepare;
- (void)stop;
- (void)start;
- (void)dealloc;
- (void)_setupSymbolication;
- (void)_setupSignal;
- (id)initWithConfig:(struct FBAnimationPerformanceTrackerConfig)arg1;

@end
