//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SOJUProtocolErrorMessageBuilder : NSObject
{
    NSString *_type;
    NSString *_idValue;
    NSString *_message;
}

+ (id)withJUProtocolErrorMessage:(id)arg1;
- (void).cxx_destruct;
- (id)setMessage:(id)arg1;
- (id)setIdValue:(id)arg1;
- (id)setType:(id)arg1;
- (id)build;

@end

