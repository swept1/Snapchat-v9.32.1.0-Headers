//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatViewLifeCycleListener.h"
#import "SCChatViewModelListener.h"

@class FBKVOController, NSMutableSet, NSString, SCChat, SCChatViewModelForChat, SCChatViewModelReducer;

@interface SCChatMessageUpdater : NSObject <SCChatViewLifeCycleListener, SCChatViewModelListener>
{
    SCChat *_chat;
    SCChatViewModelForChat *_chatViewModel;
    SCChatViewModelReducer *_chatViewModelReducer;
    FBKVOController *_kvoController;
    NSMutableSet *_messagesUnderObservation;
}

- (void).cxx_destruct;
- (void)mediaDidChange:(id)arg1 forMedia:(id)arg2 inStoryMediaMessage:(id)arg3;
- (void)mediaDidChange:(id)arg1 forMedia:(id)arg2 inMessage:(id)arg3;
- (void)messageDidChange:(id)arg1 forBaseNoteMessage:(id)arg2;
- (void)messageDidChange:(id)arg1 forMessage:(id)arg2;
- (void)messageDidChange:(id)arg1 forSnap:(id)arg2;
- (void)_addObserversForBaseNoteMediaMessage:(id)arg1;
- (void)_addObserversForStoryMediaMessage:(id)arg1;
- (void)_addObserversForBatchedMediaMessage:(id)arg1;
- (void)addObserversForMessage:(id)arg1;
- (void)resetMessagesObservers;
- (void)addObserverIfNeededForMessageAtIndexPath:(id)arg1;
- (void)addObserverIfNeededForIndexPaths:(id)arg1;
- (void)didViewModelsChange;
- (void)didMessagesDeleteAtIndexPaths:(id)arg1;
- (void)didMessagesAddAtIndexPaths:(id)arg1;
- (void)didMessagesChangeAtIndexPaths:(id)arg1;
- (void)willViewModelsChange;
- (void)setChatViewModel:(id)arg1;
- (id)initWithChatViewModelReducer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
