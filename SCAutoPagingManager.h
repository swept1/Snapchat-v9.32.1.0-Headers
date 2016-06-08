//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer, UIScrollView;

@interface SCAutoPagingManager : NSObject
{
    UIScrollView *_scrollView;
    NSTimer *_timer;
    double _tilePeekedWidth;
    double _tileInteritemSpacing;
}

- (void).cxx_destruct;
- (void)pageHorizontally;
- (void)stopPaging;
- (void)reset;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1 tilePeekedWidth:(double)arg2 tileInteritemSpacing:(double)arg3;

@end
