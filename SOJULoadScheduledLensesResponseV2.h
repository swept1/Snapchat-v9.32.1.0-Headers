//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJULoadScheduledLensesResponseV2.h"

@class NSArray, NSNumber, NSString;

@interface SOJULoadScheduledLensesResponseV2 : NSObject <SOJULoadScheduledLensesResponseV2>
{
    NSArray *_activeLenses;
    NSArray *_precachedLenses;
    NSNumber *_cacheTtlMillis;
    NSString *_lensListSignature;
    NSString *_preselectedLensId;
}

@property(readonly, copy, nonatomic) NSString *preselectedLensId; // @synthesize preselectedLensId=_preselectedLensId;
@property(readonly, copy, nonatomic) NSString *lensListSignature; // @synthesize lensListSignature=_lensListSignature;
@property(readonly, copy, nonatomic) NSNumber *cacheTtlMillis; // @synthesize cacheTtlMillis=_cacheTtlMillis;
@property(readonly, copy, nonatomic) NSArray *precachedLenses; // @synthesize precachedLenses=_precachedLenses;
@property(readonly, copy, nonatomic) NSArray *activeLenses; // @synthesize activeLenses=_activeLenses;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithActiveLenses:(id)arg1 precachedLenses:(id)arg2 cacheTtlMillis:(id)arg3 lensListSignature:(id)arg4 preselectedLensId:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

