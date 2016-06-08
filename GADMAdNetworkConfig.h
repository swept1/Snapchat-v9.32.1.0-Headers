//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface GADMAdNetworkConfig : NSObject
{
    NSString *_networkID;
    NSDictionary *_credentials;
    NSDictionary *_extras;
    NSDictionary *_ad;
    NSArray *_adapterList;
    Class _adapterClass;
    NSString *_allocationID;
    NSArray *_impressionURLs;
    NSArray *_clickURLs;
}

@property(readonly, copy, nonatomic) NSArray *clickURLs; // @synthesize clickURLs=_clickURLs;
@property(readonly, copy, nonatomic) NSArray *impressionURLs; // @synthesize impressionURLs=_impressionURLs;
@property(readonly, copy, nonatomic) NSString *allocationID; // @synthesize allocationID=_allocationID;
@property(readonly, nonatomic) Class adapterClass; // @synthesize adapterClass=_adapterClass;
@property(readonly, copy, nonatomic) NSArray *adapterList; // @synthesize adapterList=_adapterList;
@property(readonly, copy, nonatomic) NSDictionary *ad; // @synthesize ad=_ad;
@property(readonly, copy, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
@property(readonly, copy, nonatomic) NSDictionary *credentials; // @synthesize credentials=_credentials;
@property(readonly, copy, nonatomic) NSString *networkID; // @synthesize networkID=_networkID;
- (void).cxx_destruct;
- (id)description;
@property(readonly, copy, nonatomic) NSString *publisherID;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

