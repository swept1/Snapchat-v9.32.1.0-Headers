//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, SOJUMedia, SOJUSnapchatter, SOJUSticker;

@interface SOJUMessageBodyBuilder : NSObject
{
    SOJUMedia *_media;
    NSArray *_medias;
    SOJUSticker *_sticker;
    SOJUSnapchatter *_snapchatter;
    NSString *_type;
    NSString *_text;
    NSArray *_attributes;
    NSArray *_mediaCardAttributes;
    NSString *_storyTitle;
    NSNumber *_obfuscation;
}

+ (id)withJUMessageBody:(id)arg1;
- (void).cxx_destruct;
- (id)setObfuscation:(id)arg1;
- (id)setStoryTitle:(id)arg1;
- (id)setMediaCardAttributes:(id)arg1;
- (id)setAttributes:(id)arg1;
- (id)setText:(id)arg1;
- (id)setType:(id)arg1;
- (id)setSnapchatter:(id)arg1;
- (id)setSticker:(id)arg1;
- (id)setMedias:(id)arg1;
- (id)setMedia:(id)arg1;
- (id)build;

@end

