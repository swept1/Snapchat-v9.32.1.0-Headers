//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRPreferences, CRReachability, CritterImpl, NSMutableSet, NSOperationQueue, NSString;

@interface CRCrashArchive : NSObject
{
    NSString *_crashDirectory;
    NSOperationQueue *_sendQueue;
    NSMutableSet *_reportsInSendQueue;
    CRReachability *_reachability;
    unsigned long long _maxSavedCrashReports;
    CRPreferences *_storedState;
    NSString *_baseCritterURL;
    CritterImpl *_critterImpl;
}

+ (id)crashReportDirectory;
@property CritterImpl *critterImpl; // @synthesize critterImpl=_critterImpl;
@property(retain) NSString *baseCritterURL; // @synthesize baseCritterURL=_baseCritterURL;
@property(retain) CRPreferences *storedState; // @synthesize storedState=_storedState;
@property(nonatomic) unsigned long long maxOfflineCrashReports; // @synthesize maxOfflineCrashReports=_maxSavedCrashReports;
@property(retain) CRReachability *reachability; // @synthesize reachability=_reachability;
@property(retain) NSMutableSet *reportsInSendQueue; // @synthesize reportsInSendQueue=_reportsInSendQueue;
@property(retain) NSOperationQueue *sendQueue; // @synthesize sendQueue=_sendQueue;
@property(retain) NSString *crashDirectory; // @synthesize crashDirectory=_crashDirectory;
- (void)deleteAllCrashReports;
- (void)deleteCrashReport:(id)arg1;
- (void)notifySendReportFailed:(id)arg1;
- (void)sendCrashReports;
- (_Bool)sendCrashReport:(id)arg1 withError:(id *)arg2;
- (_Bool)loadCrashInfoFromPath:(id)arg1 crashInfo:(id *)arg2 rawCrashData:(id *)arg3;
- (id)saveCrashInfo:(id)arg1 andRawCrashData:(id)arg2;
- (id)makeCrashReportName;
- (id)pendingCrashReports;
- (void)dealloc;
- (void)registerForOnlineCallbacks;
- (void)reachabilityChanged:(id)arg1;
- (id)init;
- (id)initWithCritterImpl:(id)arg1 andStoredState:(id)arg2 andBaseURL:(id)arg3;

@end

