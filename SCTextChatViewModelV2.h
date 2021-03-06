//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSavableItemChatViewModel.h"

#import "SCSavableTextChatCellViewConfig.h"

@class NSArray;

@interface SCTextChatViewModelV2 : SCSavableItemChatViewModel <SCSavableTextChatCellViewConfig>
{
    NSArray *_mediaCardViewModels;
}

- (void).cxx_destruct;
- (void)trackAsRendered;
- (void)trackPhoneNumberSelection:(id)arg1;
- (void)trackAddressSelection:(id)arg1;
- (void)trackUrlSelection:(id)arg1;
- (_Bool)shouldActOnLinkGesture;
- (long long)_numberOfMediaCards;
- (double)_heightOfMediaCards;
- (id)phoneCardViewModelForAttribute:(id)arg1;
- (id)addressMediaCardViewModelForAttribute:(id)arg1;
- (id)urlMediaCardViewModelForAttribute:(id)arg1;
- (id)mediaCardViewModels;
- (id)mediaCardAttributes;
- (void)fetchMediaCardsFromServerIfNecessary;
- (_Bool)shouldShowChatLabel;
- (id)productToDisplayLinkAttribute;
- (id)linkAttributes;
- (id)attributedStringWithMediaCardLinks:(id)arg1;
- (id)attributedText;
- (id)rawText;
- (long long)textLineCount;
- (id)colorForLinkUnderline;
- (id)colorForLink;
- (id)colorForChatLabel;
- (id)fontForChatLabel;
- (double)bubbleChatLifespan;
- (double)bodyContentWidth;
- (double)payloadVerticalMargin;
- (double)payloadHeight;
- (id)text;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)reusableCellIdentifier;

@end

