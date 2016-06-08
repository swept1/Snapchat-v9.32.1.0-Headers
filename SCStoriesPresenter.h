//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaEventListener.h"

@class FriendStories, NSString, SCOperaViewController, SCStoriesOperaDataSource, UIViewController;

@interface SCStoriesPresenter : NSObject <SCOperaEventListener>
{
    UIViewController *_presentingViewController;
    SCOperaViewController *_operaVC;
    FriendStories *_friendStories;
    SCStoriesOperaDataSource *_storiesDataSource;
    id <SCStoriesPresenterDelegate> _delegate;
}

@property(nonatomic) __weak id <SCStoriesPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)presentFromBaseView:(id)arg1 isCircleTransition:(_Bool)arg2;
- (id)initWithPresentingViewController:(id)arg1 friendStories:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
