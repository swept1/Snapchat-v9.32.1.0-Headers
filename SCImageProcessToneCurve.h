//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCImageProcessToneCurve : NSObject
{
    char *_toneCurve;
}

+ (id)_secondDerivative:(id)arg1;
+ (id)_splineCurve:(id)arg1;
+ (id)_generatePreparedSplineCurve:(id)arg1;
@property(readonly, nonatomic) char *toneCurve; // @synthesize toneCurve=_toneCurve;
- (void)dealloc;
- (id)initWithDefaultCurve:(id)arg1 RGBCompositeCurve:(id)arg2;

@end

