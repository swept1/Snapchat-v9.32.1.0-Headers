//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "NamedEvent.h"

@class NSNumber, NSString;

@interface SCACameraScanQuickAdd : SCAUserTrackedEvent <NamedEvent>
{
    NSNumber *quickAddPosition;
    NSNumber *quickAddSize;
    NSString *scanData;
    NSString *userQuickAdd;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)getUserQuickAdd;
- (void)setUserQuickAdd:(id)arg1;
- (id)getScanData;
- (void)setScanData:(id)arg1;
- (long long)getQuickAddSize;
- (void)setQuickAddSize:(long long)arg1;
- (long long)getQuickAddPosition;
- (void)setQuickAddPosition:(long long)arg1;
- (id)getEventName;
- (id)init;

@end

