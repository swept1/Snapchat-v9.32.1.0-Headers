//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"

@class NSMutableArray, NSString, NSTimer, SCMessageViewModelFactory, UIViewController<SCChatCellGestureDelegate>;

@interface SCBubbleDataSource : NSObject <UITableViewDataSource>
{
    id <SCBubbleDataSourceDelegate> _delegate;
    SCMessageViewModelFactory *_messageViewModelFactory;
    UIViewController<SCChatCellGestureDelegate> *_parentVC;
    NSMutableArray *_messageViewModels;
    NSTimer *_expirationTimer;
    _Bool _expiring;
    id <SCChatExpandableMediaChatTableCellDelegate><SCChatCellStackGestureDelegate> _cellDelegate;
}

@property(nonatomic) __weak id <SCChatExpandableMediaChatTableCellDelegate><SCChatCellStackGestureDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
- (void)setExpirationCompleted;
- (_Bool)isExpiring;
- (void)expirationTimerDidFire:(id)arg1;
- (void)resetExpirationTimerForViewModel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)indexPathForViewModel:(id)arg1;
- (id)viewModelAtIndex:(long long)arg1;
- (long long)viewModelCount;
- (id)lastViewModel;
- (id)updateViewModel:(id)arg1;
- (void)addViewModel:(id)arg1;
- (id)initWithDelegate:(id)arg1 parentVC:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
