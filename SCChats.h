//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "SCTimeProfilable.h"

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString, SCArchivedChats, SCChat, SCMediaCardCache;

@interface SCChats : NSObject <SCTimeProfilable, NSCoding>
{
    _Bool _clearing;
    _Bool _failedToLoadMoreChats;
    _Bool _loadingMoreChats;
    NSString *_activeChatRecipientBeforeBackgrounded;
    NSString *_lastChatIdWhenActiveChatEntered;
    NSMutableDictionary *_chats;
    SCMediaCardCache *_mediaCardCache;
    NSString *_username;
    SCChat *_visibleChatInChatView;
    NSArray *_clearableChatsCache;
    NSString *_iterToken;
    NSDate *_lastCleanClearedMessagesDate;
    double _lastFullUpdateTime;
    SCArchivedChats *_archivedInitialChats;
    SCArchivedChats *_archivedPaginatedChats;
    NSMutableArray *_unstartedChats;
    NSMutableDictionary *_unstartedChatsDictionary;
    unsigned long long _unstartedChatsMutationVersion;
}

+ (long long)context;
+ (id)profiledSelectorNames;
+ (_Bool)hasUnviewedChats:(id)arg1;
+ (_Bool)hasUnviewedCash:(id)arg1;
+ (_Bool)hasUnviewedSnaps:(id)arg1;
+ (id)filterOrphanedChats:(id)arg1;
+ (long long)unreadCountForChats:(id)arg1 logChats:(_Bool)arg2;
+ (long long)unreadCountForChats:(id)arg1;
+ (id)archivedPaginatedChatsPath;
+ (id)archivedInitialChatsPath;
+ (id)singleChatWithUsername:(id)arg1 fromResponse:(id)arg2;
+ (id)chatsWithUsername:(id)arg1 fromResponse:(id)arg2;
@property(nonatomic) unsigned long long unstartedChatsMutationVersion; // @synthesize unstartedChatsMutationVersion=_unstartedChatsMutationVersion;
@property(retain, nonatomic) NSMutableDictionary *unstartedChatsDictionary; // @synthesize unstartedChatsDictionary=_unstartedChatsDictionary;
@property(retain, nonatomic) NSMutableArray *unstartedChats; // @synthesize unstartedChats=_unstartedChats;
@property(retain, nonatomic) SCArchivedChats *archivedPaginatedChats; // @synthesize archivedPaginatedChats=_archivedPaginatedChats;
@property(retain, nonatomic) SCArchivedChats *archivedInitialChats; // @synthesize archivedInitialChats=_archivedInitialChats;
@property(nonatomic) double lastFullUpdateTime; // @synthesize lastFullUpdateTime=_lastFullUpdateTime;
@property(retain, nonatomic) NSDate *lastCleanClearedMessagesDate; // @synthesize lastCleanClearedMessagesDate=_lastCleanClearedMessagesDate;
@property(copy, nonatomic) NSString *iterToken; // @synthesize iterToken=_iterToken;
@property(retain, nonatomic) NSArray *clearableChatsCache; // @synthesize clearableChatsCache=_clearableChatsCache;
@property(retain, nonatomic) SCChat *visibleChatInChatView; // @synthesize visibleChatInChatView=_visibleChatInChatView;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) SCMediaCardCache *mediaCardCache; // @synthesize mediaCardCache=_mediaCardCache;
@property(nonatomic, getter=isLoadingMoreChats) _Bool loadingMoreChats; // @synthesize loadingMoreChats=_loadingMoreChats;
@property(nonatomic) _Bool failedToLoadMoreChats; // @synthesize failedToLoadMoreChats=_failedToLoadMoreChats;
@property(nonatomic, getter=isClearing) _Bool clearing; // @synthesize clearing=_clearing;
@property(retain, nonatomic) NSMutableDictionary *chats; // @synthesize chats=_chats;
@property(retain, nonatomic) NSString *lastChatIdWhenActiveChatEntered; // @synthesize lastChatIdWhenActiveChatEntered=_lastChatIdWhenActiveChatEntered;
@property(retain, nonatomic) NSString *activeChatRecipientBeforeBackgrounded; // @synthesize activeChatRecipientBeforeBackgrounded=_activeChatRecipientBeforeBackgrounded;
- (void).cxx_destruct;
- (void)updateWithContentInviteSOJUReceivedSnap:(id)arg1;
- (id)excludedProfiledSelectorNames;
- (id)preferredProfiledSelectorNames;
- (id)_mediaCardIds;
- (void)_removeExpiredMediaCardImages;
- (void)_clearCache;
- (id)chatsAndUnstartedChats;
- (void)changedUnstartedChats;
- (void)resetAllUnstartedChatsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resetAllUnstartedChats;
- (void)removeUnstartedChatForRecipient:(id)arg1;
- (void)addUnstartedChatForRecipient:(id)arg1;
- (id)chatRecipientToRemoveFromUnstartedChats:(id)arg1;
- (id)chatRecipientToAddToUnstartedChats:(id)arg1;
- (void)updateUnstartedChatsIfNecessaryWithInfo:(id)arg1;
- (id)unstartedChatForRecipient:(id)arg1;
- (_Bool)isRecipientInUnstartedChats:(id)arg1;
- (void)clearChatForDeletedFriend:(id)arg1;
- (void)clearChatForBlockedFriend:(id)arg1;
- (void)removeAllChats;
- (void)removeChat:(id)arg1;
- (void)clearChat:(id)arg1;
- (void)clearAll;
- (void)cleanUpClearedMessages;
- (void)releaseLeftoverMessages;
- (_Bool)moreChatsToLoad;
- (void)loadMoreChatsFromServer;
- (void)loadMoreChats;
- (id)oldestChat;
- (void)resetOldestChatIterToken;
- (id)getIterToken;
- (void)removeOldChats;
- (void)removeSentGroupedDiscoverSharedMessages:(id)arg1;
- (void)removeSentGroupSnaps;
- (_Bool)removeInvalidChats;
- (void)removeExpiredMessages;
- (void)retryFailedSilentMessages;
- (void)sendSnapState:(id)arg1;
- (void)removeMedia:(id)arg1;
- (void)sendMedia:(id)arg1;
- (void)discoverMessageDidSentWithSuccess:(_Bool)arg1 discoverMessage:(id)arg2;
- (void)insertSendingMedia:(id)arg1;
- (id)chatForBaseMediaMessage:(id)arg1;
- (id)allChats;
- (id)clearableChats;
- (id)orderedChats;
- (id)uniqueChats;
- (id)findOrCreateChatForUsername:(id)arg1;
- (id)chatForUsername:(id)arg1;
- (_Bool)firstChatHasLoadedSnap;
- (_Bool)activeChatBeforeBackgroundedHasUnreadMessages;
- (_Bool)hasUnviewedChats;
- (_Bool)hasUnviewedCash;
- (_Bool)hasUnviewedSnaps;
- (long long)unreadCount;
- (long long)count;
- (void)updateSnap:(id)arg1 oldSnap:(id)arg2;
- (void)removeSnap:(id)arg1;
- (void)addSnap:(id)arg1 contentInviteRecipient:(id)arg2;
- (void)addSnap:(id)arg1;
- (id)startNewChatWithRecipient:(id)arg1;
- (id)makeNewChatWithConversation:(id)arg1;
- (id)startNewChatWithRecipient:(id)arg1 triggeredByNotification:(_Bool)arg2;
- (_Bool)fetchUpdatesToUpdateReadsIfNecessaryForChat:(id)arg1;
- (_Bool)shouldAcceptMessageFromSender:(id)arg1;
- (void)updateWithSCCPJSONResponse:(id)arg1;
- (void)logReceivedMessagesForNewChat:(id)arg1;
- (void)appendChats:(id)arg1 shouldUpdate:(_Bool)arg2;
- (void)appendChats:(id)arg1 shouldUpdate:(_Bool)arg2 fromServer:(_Bool)arg3;
- (void)updateWithChat:(id)arg1;
- (void)updateWithChats:(id)arg1;
- (void)sccpConnected;
- (void)sccpDisconnected:(id)arg1;
- (void)chatsDidChange;
- (void)blockCurrentThreadUntilInitialChatsLoaded;
- (void)unarchiveAdditionalChats;
- (void)ensureNonNilObjects;
- (CDUnknownBlockType)appendArchivedChatsBlock;
- (id)initWithCoder:(id)arg1;
- (void)archiveChatsWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithUsername:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

