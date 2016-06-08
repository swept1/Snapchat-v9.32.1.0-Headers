//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUDiscoverDsnapMetaData.h"

@class NSNumber, NSString;

@interface SOJUDiscoverDsnapMetaData : NSObject <SOJUDiscoverDsnapMetaData>
{
    NSNumber *_type;
    NSString *_publisherName;
    NSString *_publisherFormalName;
    NSString *_publisherInternationalName;
    NSString *_editionId;
    NSString *_dsId;
    NSString *_adId;
    NSString *_mediaPath;
    NSString *_overlayPath;
    NSString *_thumbnailPath;
    NSNumber *_x;
    NSNumber *_y;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_videoWidth;
    NSNumber *_videoHeight;
    NSNumber *_linkToLongform;
    NSNumber *_caption;
    NSNumber *_drawing;
    NSString *_filterInfo;
    NSString *_filterVisual;
    NSNumber *_version;
    NSString *_remoteUrl;
}

@property(readonly, copy, nonatomic) NSString *remoteUrl; // @synthesize remoteUrl=_remoteUrl;
@property(readonly, copy, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *filterVisual; // @synthesize filterVisual=_filterVisual;
@property(readonly, copy, nonatomic) NSString *filterInfo; // @synthesize filterInfo=_filterInfo;
@property(readonly, copy, nonatomic) NSNumber *drawing; // @synthesize drawing=_drawing;
@property(readonly, copy, nonatomic) NSNumber *caption; // @synthesize caption=_caption;
@property(readonly, copy, nonatomic) NSNumber *linkToLongform; // @synthesize linkToLongform=_linkToLongform;
@property(readonly, copy, nonatomic) NSNumber *videoHeight; // @synthesize videoHeight=_videoHeight;
@property(readonly, copy, nonatomic) NSNumber *videoWidth; // @synthesize videoWidth=_videoWidth;
@property(readonly, copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(readonly, copy, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) NSNumber *y; // @synthesize y=_y;
@property(readonly, copy, nonatomic) NSNumber *x; // @synthesize x=_x;
@property(readonly, copy, nonatomic) NSString *thumbnailPath; // @synthesize thumbnailPath=_thumbnailPath;
@property(readonly, copy, nonatomic) NSString *overlayPath; // @synthesize overlayPath=_overlayPath;
@property(readonly, copy, nonatomic) NSString *mediaPath; // @synthesize mediaPath=_mediaPath;
@property(readonly, copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(readonly, copy, nonatomic) NSString *dsId; // @synthesize dsId=_dsId;
@property(readonly, copy, nonatomic) NSString *editionId; // @synthesize editionId=_editionId;
@property(readonly, copy, nonatomic) NSString *publisherInternationalName; // @synthesize publisherInternationalName=_publisherInternationalName;
@property(readonly, copy, nonatomic) NSString *publisherFormalName; // @synthesize publisherFormalName=_publisherFormalName;
@property(readonly, copy, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(readonly, copy, nonatomic) NSNumber *type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(id)arg1 publisherName:(id)arg2 publisherFormalName:(id)arg3 publisherInternationalName:(id)arg4 editionId:(id)arg5 dsId:(id)arg6 adId:(id)arg7 mediaPath:(id)arg8 overlayPath:(id)arg9 thumbnailPath:(id)arg10 x:(id)arg11 y:(id)arg12 width:(id)arg13 height:(id)arg14 videoWidth:(id)arg15 videoHeight:(id)arg16 linkToLongform:(id)arg17 caption:(id)arg18 drawing:(id)arg19 filterInfo:(id)arg20 filterVisual:(id)arg21 version:(id)arg22 remoteUrl:(id)arg23;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

