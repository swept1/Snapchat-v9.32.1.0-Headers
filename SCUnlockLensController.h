//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray;

@interface SCUnlockLensController : NSObject <NSCoding>
{
    id <SCUnlockLensControllerDelegate> _delegate;
    NSMutableArray *_unlockedLenses;
    id <SCPerforming> _performer;
}

@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSMutableArray *unlockedLenses; // @synthesize unlockedLenses=_unlockedLenses;
@property(nonatomic) __weak id <SCUnlockLensControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clearCache;
- (void)updateCache;
- (void)processUnlockedLensesResponse:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_ensureNonNilObjects;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

