//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@class NSDictionary;

@interface SCTilesDynamicLayout : UICollectionViewFlowLayout
{
    NSDictionary *_layoutInformation;
    double _sectionHeight;
}

- (void).cxx_destruct;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)setLayoutInformation:(id)arg1 sectionHeight:(double)arg2;

@end

