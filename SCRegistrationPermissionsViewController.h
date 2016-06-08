//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCRegistrationPermissionsViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface SCRegistrationPermissionsViewController : UIViewController <SCRegistrationPermissionsViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    long long _permissionsToDisplay;
    NSArray *_permissionKeys;
    NSMutableDictionary *_permissionToggleEnabledDict;
    NSDictionary *_permissionTitleDict;
    NSMutableDictionary *_studyConfiguration;
}

- (void).cxx_destruct;
- (long long)_numberOfPermissionsNeeded;
- (_Bool)needPermission:(id)arg1;
- (void)leftButtonPressed;
- (void)continueButtonPressed;
- (void)confirmToggleOff:(id)arg1;
- (void)toggleChanged:(id)arg1;
- (_Bool)isSwitchOnForPermissions:(long long)arg1;
- (id)newSwitchViewForSettingTag:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)createArrayAndDictionaries;
- (void)loadView;
- (id)initWithConfiguration:(id)arg1;
- (id)getPageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
