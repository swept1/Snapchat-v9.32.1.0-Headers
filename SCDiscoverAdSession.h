//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaSession.h"

@class NSArray, NSString, SCAdManager, SCDiscoverLogger, SCOperaViewController;

@interface SCDiscoverAdSession : NSObject <SCOperaSession>
{
    SCAdManager *_adManager;
    SCDiscoverLogger *_logger;
    NSArray *_adChunks;
    SCOperaViewController *_operaViewController;
}

- (void).cxx_destruct;
- (double)millisToTimeInterval:(id)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (_Bool)shouldHandleEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)initWithChunks:(id)arg1 operaViewController:(id)arg2 adManager:(id)arg3 logger:(id)arg4;
- (id)initWithChunks:(id)arg1 operaViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

