//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"

@class LSAQueuePerformer, NSMutableDictionary, NSString;

@interface LSAAudioPlayer : NSObject <AVAudioPlayerDelegate>
{
    NSMutableDictionary *_audioPlayers;
    LSAQueuePerformer *_performer;
    _Bool _isPaused;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)stopAuidoPlayer:(id)arg1;
- (_Bool)isKeyValid:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)doVolumeFade:(id)arg1;
- (void)resumeAllSounds;
- (void)pauseAllSounds;
- (void)stopAllSounds;
- (_Bool)isPlaying:(id)arg1;
- (void)stopSoundWithKey:(id)arg1 fade:(_Bool)arg2;
- (void)playSoundWithKey:(id)arg1 loops:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

