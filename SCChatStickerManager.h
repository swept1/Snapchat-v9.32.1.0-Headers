//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, SCChatStickerPackage;

@interface SCChatStickerManager : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id <SCPerforming> _performer;
    SCChatStickerPackage *_favoritePackage;
    SCChatStickerPackage *_searchPackage;
    SCChatStickerPackage *_bundlePackage;
    id <SCChatStickerManagerDelegate> _delegate;
    NSMutableArray *_stickerPackages;
    double _stickerThumbnailLength;
    double _stickerThumbnailMargin;
}

+ (void)listDirectory:(id)arg1;
+ (void)listRootPath;
+ (_Bool)unzipData:(id)arg1 destination:(id)arg2;
+ (_Bool)saveData:(id)arg1 destination:(id)arg2;
+ (_Bool)removeFile:(id)arg1;
+ (_Bool)createFolder:(id)arg1;
+ (id)absolutePathForPath:(id)arg1;
+ (_Bool)_deviceDoesSupportEmoji:(id)arg1;
+ (id)emojiFromHexString:(id)arg1;
+ (id)shared;
+ (id)rootPath;
@property(readonly, nonatomic) double stickerThumbnailMargin; // @synthesize stickerThumbnailMargin=_stickerThumbnailMargin;
@property(readonly, nonatomic) double stickerThumbnailLength; // @synthesize stickerThumbnailLength=_stickerThumbnailLength;
@property(readonly, copy, nonatomic) NSMutableArray *stickerPackages; // @synthesize stickerPackages=_stickerPackages;
@property(nonatomic) __weak id <SCChatStickerManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_retryDownloadFileWithUrl:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_downloadFileWithUrl:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_generateThumbnailWithStickerImage:(id)arg1 thumbnailPath:(id)arg2;
- (void)_generateThumbnailsIfNecessaryWithPackage:(id)arg1;
- (void)fetchThumbnailImageWithSticker:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)fetchStickerImageWithSticker:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)fetchStickerBannerWithPackId:(id)arg1 url:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)fetchStickerIconWithPackId:(id)arg1 iconName:(id)arg2 iconUrl:(id)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)fetchMetadataWithPackId:(id)arg1 url:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)metadataWithPackId:(id)arg1;
- (void)fetchIconMetadataWithPackId:(id)arg1 iconUrl:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_removeLocalStickerPackageIfOutdated:(id)arg1;
- (_Bool)_haveAtLeastOneVisibleStickerWithMetadata:(id)arg1;
- (long long)_indexToInsertForPack:(id)arg1 stickerPacks:(id)arg2;
- (void)_removeBundlePackageIfNeededWithPackId:(id)arg1;
- (void)_loadStickerPackagesWithStickerPacks:(id)arg1;
- (id)_stickerPacksFromLocalDisk;
- (id)_stickerPacksFromResponseDictionary:(id)arg1;
- (void)_fetchStickerPackageMetadataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_fetchStickerPackageMetadata;
- (void)loadStickerPackages;
- (void)updateSearchPackageBecauseAutoCorrectionUpdatedSearchResult;
- (void)updateSpecialPackages;
- (id)init;

@end
