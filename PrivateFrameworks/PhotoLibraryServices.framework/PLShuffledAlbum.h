/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class <NSObject><NSCopying>, NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSNumber, NSObject<PLAlbumProtocol>, NSOrderedSet, NSString, NSURL, PLManagedAsset, UIImage;

@interface PLShuffledAlbum : NSObject <PLIndexMappingCache, PLAlbumProtocol> {
    NSMutableOrderedSet *_assets;
    struct NSObject { Class x1; } *_backingAlbum;
    struct __CFArray { } *_fromBackingMap;
    PLManagedAsset *_startingAsset;
    struct __CFArray { } *_toBackingMap;
}

@property(retain) NSMutableOrderedSet * _assets;
@property(readonly) unsigned int approximateCount;
@property(retain,readonly) NSOrderedSet * assets;
@property(readonly) unsigned int assetsCount;
@property(retain,readonly) NSObject<PLAlbumProtocol> * backingAlbum;
@property unsigned int batchSize;
@property(copy,readonly) <NSObject><NSCopying> * cachedIndexMapState;
@property(readonly) BOOL canContributeToCloudSharedAlbum;
@property(readonly) BOOL canShowAvalancheStacks;
@property(readonly) BOOL canShowComments;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * description;
@property(retain,readonly) NSDate * endDate;
@property(retain,readonly) NSURL * groupURL;
@property BOOL hasUnseenContentBoolValue;
@property(readonly) unsigned int hash;
@property(readonly) unsigned int hash;
@property(retain) NSString * importSessionID;
@property(readonly) BOOL isCameraAlbum;
@property(readonly) BOOL isCloudSharedAlbum;
@property(readonly) BOOL isEmpty;
@property(readonly) BOOL isFamilyCloudSharedAlbum;
@property(readonly) BOOL isFolder;
@property(readonly) BOOL isInTrash;
@property(readonly) BOOL isLibrary;
@property(readonly) BOOL isMultipleContributorCloudSharedAlbum;
@property(readonly) BOOL isOwnedCloudSharedAlbum;
@property(readonly) BOOL isPanoramasAlbum;
@property(readonly) BOOL isPendingPhotoStreamAlbum;
@property(readonly) BOOL isPhotoStreamAlbum;
@property(readonly) BOOL isRecentlyAddedAlbum;
@property(readonly) BOOL isStandInAlbum;
@property(readonly) BOOL isUserLibraryAlbum;
@property(readonly) BOOL isWallpaperAlbum;
@property(retain) PLManagedAsset * keyAsset;
@property(retain,readonly) NSNumber * kind;
@property(readonly) int kindValue;
@property(copy,readonly) NSArray * localizedLocationNames;
@property(copy,readonly) NSString * localizedTitle;
@property(retain,readonly) NSMutableOrderedSet * mutableAssets;
@property(copy,readonly) NSString * name;
@property int pendingItemsCount;
@property int pendingItemsType;
@property(readonly) unsigned int photosCount;
@property(retain,readonly) UIImage * posterImage;
@property(retain) PLManagedAsset * secondaryKeyAsset;
@property(readonly) BOOL shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(copy,readonly) id sortingComparator;
@property(retain,readonly) NSDate * startDate;
@property(retain,readonly) PLManagedAsset * startingAsset;
@property(readonly) Class superclass;
@property(readonly) Class superclass;
@property(retain) PLManagedAsset * tertiaryKeyAsset;
@property(retain,readonly) NSString * title;
@property(retain,readonly) NSString * uuid;
@property(readonly) unsigned int videosCount;

+ (struct NSObject { Class x1; }*)shuffledAlbum:(struct NSObject { Class x1; }*)arg1 startingAsset:(id)arg2;
+ (struct NSObject { Class x1; }*)unshuffledAlbum:(struct NSObject { Class x1; }*)arg1;

- (id)_assets;
- (unsigned int)approximateCount;
- (id)assets;
- (unsigned int)assetsCount;
- (struct NSObject { Class x1; }*)backingAlbum;
- (void)batchFetchAssets:(id)arg1;
- (id)cachedIndexMapState;
- (BOOL)canContributeToCloudSharedAlbum;
- (BOOL)canPerformEditOperation:(unsigned int)arg1;
- (BOOL)canShowAvalancheStacks;
- (BOOL)canShowComments;
- (unsigned int)count;
- (unsigned int)countOfShuffledAssets;
- (void)createShuffledIndexesMaps;
- (void)createShuffledIndexesMapsIfNeeded;
- (void)dealloc;
- (Class)derivedChangeNotificationClass;
- (id)description;
- (struct __CFArray { }*)fromBackingMap;
- (id)groupURL;
- (BOOL)hasUnseenContentBoolValue;
- (id)importSessionID;
- (unsigned int)indexInShuffledAssetsOfObject:(id)arg1;
- (id)init;
- (id)initWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 startingAsset:(id)arg2;
- (void)insertObject:(id)arg1 inShuffledAssetsAtIndex:(unsigned int)arg2;
- (BOOL)isCameraAlbum;
- (BOOL)isCloudSharedAlbum;
- (BOOL)isEmpty;
- (BOOL)isFamilyCloudSharedAlbum;
- (BOOL)isFolder;
- (BOOL)isInTrash;
- (BOOL)isLibrary;
- (BOOL)isMultipleContributorCloudSharedAlbum;
- (BOOL)isOwnedCloudSharedAlbum;
- (BOOL)isPanoramasAlbum;
- (BOOL)isPendingPhotoStreamAlbum;
- (BOOL)isPhotoStreamAlbum;
- (BOOL)isRecentlyAddedAlbum;
- (BOOL)isStandInAlbum;
- (BOOL)isUserLibraryAlbum;
- (BOOL)isWallpaperAlbum;
- (id)keyAsset;
- (id)kind;
- (int)kindValue;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (id)mutableAssets;
- (id)name;
- (id)objectInShuffledAssetsAtIndex:(unsigned int)arg1;
- (int)pendingItemsCount;
- (int)pendingItemsType;
- (unsigned int)photosCount;
- (id)posterImage;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
- (void)removeObjectFromShuffledAssetsAtIndex:(unsigned int)arg1;
- (void)replaceObjectInShuffledAssetsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (id)secondaryKeyAsset;
- (void)setHasUnseenContentBoolValue:(BOOL)arg1;
- (void)setImportSessionID:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setPendingItemsCount:(int)arg1;
- (void)setPendingItemsType:(int)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setSlideshowSettings:(id)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (void)set_assets:(id)arg1;
- (BOOL)shouldDeleteWhenEmpty;
- (id)slideshowSettings;
- (id)sortingComparator;
- (id)startingAsset;
- (id)tertiaryKeyAsset;
- (id)title;
- (id)uuid;
- (unsigned int)videosCount;

@end