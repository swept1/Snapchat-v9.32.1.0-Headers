//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ALMediaPublishOptions : NSObject
{
    int _nativeWidth;
    NSString *_windowId;
}

@property(nonatomic) int nativeWidth; // @synthesize nativeWidth=_nativeWidth;
@property(copy, nonatomic) NSString *windowId; // @synthesize windowId=_windowId;
- (void).cxx_destruct;
- (id)toDict;
- (id)init;

@end

