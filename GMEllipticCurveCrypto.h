//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface GMEllipticCurveCrypto : NSObject
{
    int _bytes;
    int _numDigits;
    unsigned long long *_curve_p;
    unsigned long long *_curve_b;
    unsigned long long *_curve_Gx;
    unsigned long long *_curve_Gy;
    unsigned long long *_curve_n;
    NSData *_publicKey;
    _Bool _compressedPublicKey;
    int _bits;
    NSString *_name;
    NSData *_privateKey;
}

+ (id)cryptoForCurve:(int)arg1;
+ (id)cryptoForKeyBase64:(id)arg1;
+ (id)cryptoForKey:(id)arg1;
+ (int)curveForKeyBase64:(id)arg1;
+ (int)curveForKey:(id)arg1;
+ (id)generateKeyPairForCurve:(int)arg1;
@property(retain, nonatomic) NSData *privateKey; // @synthesize privateKey=_privateKey;
@property(nonatomic) _Bool compressedPublicKey; // @synthesize compressedPublicKey=_compressedPublicKey;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) int bits; // @synthesize bits=_bits;
- (void).cxx_destruct;
- (id)description;
@property(retain, nonatomic) NSString *publicKeyBase64;
@property(retain, nonatomic) NSData *publicKey;
@property(retain, nonatomic) NSString *privateKeyBase64;
- (id)decompressPublicKey:(id)arg1;
- (id)compressPublicKey:(id)arg1;
- (id)publicKeyForPrivateKey:(id)arg1;
@property(readonly, nonatomic) int signatureLength;
@property(readonly, nonatomic) int sharedSecretLength;
@property(readonly, nonatomic) int hashLength;
- (_Bool)verifySignature:(id)arg1 forHash:(id)arg2;
- (id)signatureForHash:(id)arg1;
- (id)sharedSecretForPublicKeyBase64:(id)arg1;
- (id)sharedSecretForPublicKey:(id)arg1;
- (_Bool)generateNewKeyPair;
- (id)initWithCurve:(int)arg1;

@end

