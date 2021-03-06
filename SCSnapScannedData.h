//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface SCSnapScannedData : NSObject
{
    _Bool _hasScannedData;
    int _codeType;
    int _codeTypeMeta;
    NSString *_data;
    NSData *_rawData;
}

+ (long long)sojuFromBarcodeType:(int)arg1;
+ (id)stringFromBarcodeType:(int)arg1;
+ (id)stringFromCodeType:(int)arg1;
@property(retain, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(nonatomic) int codeTypeMeta; // @synthesize codeTypeMeta=_codeTypeMeta;
@property(nonatomic) int codeType; // @synthesize codeType=_codeType;
@property(nonatomic) _Bool hasScannedData; // @synthesize hasScannedData=_hasScannedData;
- (void).cxx_destruct;

@end

