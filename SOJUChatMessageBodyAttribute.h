//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUChatMessageBodyAttribute.h"

@class NSString;

@interface SOJUChatMessageBodyAttribute : NSObject <SOJUChatMessageBodyAttribute>
{
    NSString *_type;
    NSString *_iosHref;
    NSString *_itunesId;
    NSString *_androidHref;
    NSString *_href;
    NSString *_formatType;
}

@property(readonly, copy, nonatomic) NSString *formatType; // @synthesize formatType=_formatType;
@property(readonly, copy, nonatomic) NSString *href; // @synthesize href=_href;
@property(readonly, copy, nonatomic) NSString *androidHref; // @synthesize androidHref=_androidHref;
@property(readonly, copy, nonatomic) NSString *itunesId; // @synthesize itunesId=_itunesId;
@property(readonly, copy, nonatomic) NSString *iosHref; // @synthesize iosHref=_iosHref;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(id)arg1 iosHref:(id)arg2 itunesId:(id)arg3 androidHref:(id)arg4 href:(id)arg5 formatType:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

