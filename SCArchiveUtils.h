//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCArchiveUtils : NSObject
{
    id <SCArchiveLoggerProtocol> _logger;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)pathWithFileName:(id)arg1;
- (id)decodeWithNSCoding:(id)arg1;
- (_Bool)encodeWithNSCoding:(id)arg1 toPath:(id)arg2 type:(id)arg3;
- (id)loadObjectOfType:(id)arg1 fromPath:(id)arg2;
- (_Bool)saveObject:(id)arg1 toPath:(id)arg2 type:(id)arg3;
- (_Bool)saveObject:(id)arg1 toPath:(id)arg2;
- (void)startServicesWithLogger:(id)arg1;

@end

