//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADLStringListResponder.h"

@interface StringListResponder : NSObject <ADLStringListResponder>
{
    CDUnknownBlockType _cb;
    CDUnknownBlockType _err;
}

+ (id)onCompletion:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)onError:(int)arg1 message:(id)arg2;
- (void)onCompletion:(id)arg1;
- (id)initWithOnCompletion:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;

@end

