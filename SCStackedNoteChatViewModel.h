//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCStackedChatViewModel.h"

@interface SCStackedNoteChatViewModel : SCStackedChatViewModel
{
}

- (double)sideLength;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;
- (unsigned long long)maxItemCapacityForCollectionView;
- (struct UIEdgeInsets)insetsForCollectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 stackedCollectionCellActionDelegate:(id)arg3;
- (double)insetForCollectionViewCell;
- (id)collectionViewCellReuseIdentifier;
- (Class)collectionViewCellClass;
- (id)collectionViewCellDictionary;
- (_Bool)canDisplayMessage:(id)arg1;
- (double)bodyContentWidth;
- (double)payloadHeight;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)reusableCellIdentifier;

@end
