//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface SOJUGeofilterLayoutParametersBuilder : NSObject
{
    NSNumber *_xOffset;
    NSNumber *_yOffset;
    NSNumber *_xSize;
    NSNumber *_ySize;
    NSNumber *_rotation;
}

+ (id)withJUGeofilterLayoutParameters:(id)arg1;
- (void).cxx_destruct;
- (id)setRotation:(id)arg1;
- (id)setYSize:(id)arg1;
- (id)setXSize:(id)arg1;
- (id)setYOffset:(id)arg1;
- (id)setXOffset:(id)arg1;
- (id)build;

@end
