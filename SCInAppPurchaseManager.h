//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPaymentTransactionObserver.h"
#import "SKProductsRequestDelegate.h"

@class NSDictionary, NSLocale, NSMutableDictionary, NSString, SKReceiptRefreshRequest;

@interface SCInAppPurchaseManager : NSObject <SKProductsRequestDelegate, SKPaymentTransactionObserver>
{
    NSDictionary *_productsIdentifiersDictionary;
    NSMutableDictionary *_productsInventory;
    NSLocale *_storeLocale;
    NSString *_currencyCode;
    SKReceiptRefreshRequest *_refreshReceiptRequest;
    CDUnknownBlockType _refreshReceiptCompletion;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)refreshReceiptWithCompletion:(CDUnknownBlockType)arg1;
- (void)failedTransaction:(id)arg1;
- (void)restoreTransaction:(id)arg1;
- (void)completeTransaction:(id)arg1;
- (void)processingTransaction:(id)arg1 deferred:(_Bool)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (id)hashedValueForAccountName:(id)arg1;
- (void)restoreCompletedTransactions;
- (id)priceStringForProduct:(id)arg1;
- (_Bool)hasPendingTransactionForProduct:(id)arg1;
- (void)buyProduct:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)initProductsInventory;
- (_Bool)shouldShowNewTermsAndConditions;
- (_Bool)isEligibleToPurchase:(id)arg1;
- (void)requestProducts:(id)arg1;
- (id)getProducts:(id)arg1;
- (id)getProduct:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
