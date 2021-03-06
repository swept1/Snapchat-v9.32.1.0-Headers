//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUScannableActionBarcodeOffer.h"

@class NSNumber, NSString;

@interface SOJUScannableActionBarcodeOffer : NSObject <SOJUScannableActionBarcodeOffer>
{
    NSString *_merchantIcon;
    NSString *_productTitle;
    NSString *_productImageurl;
    NSString *_offerPriceLocalized;
    NSString *_viewOnUrl;
    NSNumber *_customerRating;
    NSString *_actionHint;
}

@property(readonly, copy, nonatomic) NSString *actionHint; // @synthesize actionHint=_actionHint;
@property(readonly, copy, nonatomic) NSNumber *customerRating; // @synthesize customerRating=_customerRating;
@property(readonly, copy, nonatomic) NSString *viewOnUrl; // @synthesize viewOnUrl=_viewOnUrl;
@property(readonly, copy, nonatomic) NSString *offerPriceLocalized; // @synthesize offerPriceLocalized=_offerPriceLocalized;
@property(readonly, copy, nonatomic) NSString *productImageurl; // @synthesize productImageurl=_productImageurl;
@property(readonly, copy, nonatomic) NSString *productTitle; // @synthesize productTitle=_productTitle;
@property(readonly, copy, nonatomic) NSString *merchantIcon; // @synthesize merchantIcon=_merchantIcon;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMerchantIcon:(id)arg1 productTitle:(id)arg2 productImageurl:(id)arg3 offerPriceLocalized:(id)arg4 viewOnUrl:(id)arg5 customerRating:(id)arg6 actionHint:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

