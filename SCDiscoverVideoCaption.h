//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCDiscoverVideoCaption : NSObject
{
    NSString *_language;
    NSString *_url;
    NSString *_type;
}

@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
- (void).cxx_destruct;
- (id)initWithUrl:(id)arg1 language:(id)arg2 type:(id)arg3;

@end

