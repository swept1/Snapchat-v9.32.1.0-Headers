//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, Story, UITableView, UITableViewCell;

@protocol MyProfileStoryCellDelegate <NSObject>
- (UITableViewCell *)tableView:(UITableView *)arg1 cellForRowAtIndexPath:(NSIndexPath *)arg2 forStory:(Story *)arg3;
- (long long)tableView:(UITableView *)arg1 numberOfRowsInSection:(long long)arg2 forStory:(Story *)arg3;
- (void)viewersPressedForMyStory:(Story *)arg1;
- (void)deletePressedForStory:(Story *)arg1;
- (void)savePressedForStory:(Story *)arg1;
@end

