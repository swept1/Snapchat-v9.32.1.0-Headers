//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, SOJUDiscoverChannelResponse;

@interface SOJUDiscoverEditionResponseBuilder : NSObject
{
    SOJUDiscoverChannelResponse *_channel;
    NSString *_validity;
    NSNumber *_generationTs;
}

+ (id)withJUDiscoverEditionResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setGenerationTs:(id)arg1;
- (id)setValidity:(id)arg1;
- (id)setChannel:(id)arg1;
- (id)build;

@end

