//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BCOV_RACSequence.h"

@class NSArray;

@interface BCOV_RACTupleSequence : BCOV_RACSequence
{
    NSArray *_tupleBackingArray;
    unsigned long long _offset;
}

+ (id)sequenceWithTupleBackingArray:(id)arg1 offset:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSArray *tupleBackingArray; // @synthesize tupleBackingArray=_tupleBackingArray;
- (void).cxx_destruct;
- (id)description;
- (id)array;
- (id)tail;
- (id)head;

@end

