//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "SOJUStoryLogbook.h"

@class NSArray, SOJUStory, SOJUStoryCollaborator, SOJUStoryExtra;

@protocol SOJUCollabStoryLogbook <NSObject, NSCoding, NSCopying, SOJUStoryLogbook>
@property(readonly, copy, nonatomic) SOJUStoryCollaborator *collaborator;
@property(readonly, copy, nonatomic) SOJUStoryExtra *storyExtras;
@property(readonly, copy, nonatomic) SOJUStory *story;
@property(readonly, copy, nonatomic) NSArray *storyNotes;
@end

