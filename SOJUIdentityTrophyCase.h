//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUIdentityTrophyCase.h"

@class NSArray, NSNumber, NSString;

@interface SOJUIdentityTrophyCase : NSObject <SOJUIdentityTrophyCase>
{
    NSArray *_response;
    NSNumber *_score;
    NSNumber *_sentSnaps;
    NSNumber *_receivedSnaps;
}

@property(readonly, copy, nonatomic) NSNumber *receivedSnaps; // @synthesize receivedSnaps=_receivedSnaps;
@property(readonly, copy, nonatomic) NSNumber *sentSnaps; // @synthesize sentSnaps=_sentSnaps;
@property(readonly, copy, nonatomic) NSNumber *score; // @synthesize score=_score;
@property(readonly, copy, nonatomic) NSArray *response; // @synthesize response=_response;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponse:(id)arg1 score:(id)arg2 sentSnaps:(id)arg3 receivedSnaps:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
