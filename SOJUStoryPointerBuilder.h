//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SOJUStoryPointerBuilder : NSObject
{
    NSString *_mKey;
    NSString *_mField;
    NSString *_mId;
}

+ (id)withJUStoryPointer:(id)arg1;
- (void).cxx_destruct;
- (id)setMId:(id)arg1;
- (id)setMField:(id)arg1;
- (id)setMKey:(id)arg1;
- (id)build;

@end
