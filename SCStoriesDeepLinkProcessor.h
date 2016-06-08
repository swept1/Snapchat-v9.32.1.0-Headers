//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDeepLinkProcessor.h"

@class FriendStoriesCollection, NSString;

@interface SCStoriesDeepLinkProcessor : NSObject <SCDeepLinkProcessor>
{
    id <NavigationDelegate> _navigationDelegate;
    FriendStoriesCollection *_friendStoriesCollection;
}

+ (void)resolveStoriesURL:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) FriendStoriesCollection *friendStoriesCollection; // @synthesize friendStoriesCollection=_friendStoriesCollection;
- (void).cxx_destruct;
- (void)_handleOpenURLForLiveFeature:(id)arg1 additionalInfo:(id)arg2;
- (void)handleOpenURL:(id)arg1 additionalInfo:(id)arg2;
- (id)initWithNavigationDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

