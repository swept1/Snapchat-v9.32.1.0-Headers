//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaLayer.h"

@class NSDictionary, NSString, SCOperaPage;

@interface SCOperaStoreLayer : NSObject <SCOperaLayer>
{
    _Bool _includesVideo;
    SCOperaPage *_page;
    NSDictionary *_storeParams;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, nonatomic) _Bool includesVideo; // @synthesize includesVideo=_includesVideo;
@property(readonly, copy, nonatomic) NSDictionary *storeParams; // @synthesize storeParams=_storeParams;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
