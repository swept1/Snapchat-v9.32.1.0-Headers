//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUSponsoredSlugPosAndText.h"

@class NSNumber, NSString, SOJUStrRect;

@interface SOJUSponsoredSlugPosAndText : NSObject <SOJUSponsoredSlugPosAndText>
{
    SOJUStrRect *_viewRect;
    NSString *_alignment;
    NSString *_position;
    NSString *_hmargin;
    NSString *_vmargin;
    NSString *_text;
    NSString *_sponsoredText;
    NSString *_sponsoredChannelText;
    NSNumber *_timeBeforeFadeout;
    NSString *_longformText;
    NSNumber *_longformTimeBeforeFadeout;
}

@property(readonly, copy, nonatomic) NSNumber *longformTimeBeforeFadeout; // @synthesize longformTimeBeforeFadeout=_longformTimeBeforeFadeout;
@property(readonly, copy, nonatomic) NSString *longformText; // @synthesize longformText=_longformText;
@property(readonly, copy, nonatomic) NSNumber *timeBeforeFadeout; // @synthesize timeBeforeFadeout=_timeBeforeFadeout;
@property(readonly, copy, nonatomic) NSString *sponsoredChannelText; // @synthesize sponsoredChannelText=_sponsoredChannelText;
@property(readonly, copy, nonatomic) NSString *sponsoredText; // @synthesize sponsoredText=_sponsoredText;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *vmargin; // @synthesize vmargin=_vmargin;
@property(readonly, copy, nonatomic) NSString *hmargin; // @synthesize hmargin=_hmargin;
@property(readonly, copy, nonatomic) NSString *position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) NSString *alignment; // @synthesize alignment=_alignment;
@property(readonly, copy, nonatomic) SOJUStrRect *viewRect; // @synthesize viewRect=_viewRect;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewRect:(id)arg1 alignment:(id)arg2 position:(id)arg3 hmargin:(id)arg4 vmargin:(id)arg5 text:(id)arg6 sponsoredText:(id)arg7 sponsoredChannelText:(id)arg8 timeBeforeFadeout:(id)arg9 longformText:(id)arg10 longformTimeBeforeFadeout:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

