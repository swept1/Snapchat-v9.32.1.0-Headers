//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayer, FBKVOController;

@interface SCOperaSharedResourceManager : NSObject
{
    FBKVOController *_kvoController;
    AVPlayer *_player;
}

+ (id)shared;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_playerStatusDidChange;
- (void)_setupPlayer;
- (id)initWithKVOController:(id)arg1;
- (id)init;

@end

