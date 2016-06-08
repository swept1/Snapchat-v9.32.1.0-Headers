//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUUploadLensReceiptResponse.h"

@class NSArray, NSString;

@interface SOJUUploadLensReceiptResponse : NSObject <SOJUUploadLensReceiptResponse>
{
    NSArray *_purchased;
    NSArray *_restored;
    NSArray *_failed;
}

@property(readonly, copy, nonatomic) NSArray *failed; // @synthesize failed=_failed;
@property(readonly, copy, nonatomic) NSArray *restored; // @synthesize restored=_restored;
@property(readonly, copy, nonatomic) NSArray *purchased; // @synthesize purchased=_purchased;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPurchased:(id)arg1 restored:(id)arg2 failed:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
