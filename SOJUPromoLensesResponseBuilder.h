//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface SOJUPromoLensesResponseBuilder : NSObject
{
    NSArray *_storeLenses;
    NSNumber *_displayCount;
    NSString *_lensListSignature;
}

+ (id)withJUPromoLensesResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setLensListSignature:(id)arg1;
- (id)setDisplayCount:(id)arg1;
- (id)setStoreLenses:(id)arg1;
- (id)build;

@end
