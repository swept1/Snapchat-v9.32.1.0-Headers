//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCSingleIconConfigurer : NSObject
{
    long long _mediaLoadState;
}

@property(nonatomic) long long mediaLoadState; // @synthesize mediaLoadState=_mediaLoadState;
- (void)_updateIconView:(id)arg1 withLoadState:(long long)arg2;
- (void)_loadThumbnailForIconView:(id)arg1 story:(id)arg2 ID:(long long)arg3;
- (void)_loadIconMediaForIconView:(id)arg1 friendStories:(id)arg2 fullyViewed:(_Bool)arg3 ID:(long long)arg4;
- (void)_loadIconMediaForIconView:(id)arg1 discoverChannel:(id)arg2 ID:(long long)arg3;
- (void)configureSingleIconView:(id)arg1 withDiscoverChannel:(id)arg2;
- (void)configureSingleIconView:(id)arg1 withFriendStories:(id)arg2 viewingType:(long long)arg3;
- (void)configureSingleIconView:(id)arg1 withMyStory:(id)arg2;
- (void)_preConfigureWithSingleIconView:(id)arg1 dataModel:(id)arg2 ID:(unsigned long long)arg3;
- (long long)_loadStateWithDiscoverChannel:(id)arg1;
- (long long)_loadStateWithMyStory:(id)arg1;
- (long long)_loadStateWithFriendStories:(id)arg1 viewingType:(long long)arg2;

@end

