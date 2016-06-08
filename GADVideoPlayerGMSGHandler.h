//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADGMSGHandler.h"

@class GADAdViewDelegate;

@interface GADVideoPlayerGMSGHandler : GADGMSGHandler
{
    GADAdViewDelegate *_adViewDelegate;
}

+ (id)subActionBlockDictionary;
+ (id)actionBlockDictionary;
@property(nonatomic) __weak GADAdViewDelegate *adViewDelegate; // @synthesize adViewDelegate=_adViewDelegate;
- (void).cxx_destruct;
- (void)didReceiveSeekToCurrentTimeAction:(id)arg1;
- (void)didReceivePauseVideoAction:(id)arg1;
- (void)didReceivePlayVideoAction:(id)arg1;
- (void)didReceiveLoadVideoAction:(id)arg1;
- (void)didReceiveSetVolumeAction:(id)arg1;
- (void)didReceiveMutedVideoAction:(id)arg1;
- (void)didReceiveShowVideoAction:(id)arg1;
- (void)didReceiveHideVideoAction:(id)arg1;
- (void)didReceiveSetVideoSourceAction:(id)arg1;
- (void)didReceiveNewVideoAction:(id)arg1;
- (void)didReceivePositionVideoAction:(id)arg1;
- (void)didReceiveVideoAction:(id)arg1;

@end

