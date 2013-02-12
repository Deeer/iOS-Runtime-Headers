/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSMutableDictionary, NSMutableSet, NSString, RunLoopContinuation;

@interface MLPurchasedContentFolder : NSObject {
    NSString *_basePath;
    id _delegate;
    double _lastPurchaseNotificationTime;
    RunLoopContinuation *_loadPurchasesContinuation;
    NSMutableDictionary *_purchasedContentInfo;
    NSMutableSet *_purchasedContentXMLFilesLoaded;
}

@property(readonly) NSString *basePath;

+ (void)_createParentFolderIfNecessary:(id)arg1;
+ (void)setShouldImportPurchasesSynchronously:(BOOL)arg1;

- (BOOL)_continueUpdatingPurchasedContent:(id)arg1;
- (void)_finishUpdatingPurchasedContent:(id)arg1;
- (void)_loadSavedPurchaseDB;
- (id)_mobileDBTrackInfoPath;
- (BOOL)_reloadPurchasedContentData;
- (void)_removeXMLFilenameFromPurchasedConent:(id)arg1;
- (void)_savePurchaseDBInfo;
- (id)_storePurchasesInfoFilePath;
- (BOOL)_updatePurchasedContentInfoWithXMLFilename:(id)arg1 itemInserted:(BOOL*)arg2;
- (id)basePath;
- (void)clearWeakReference:(id)arg1;
- (NSUInteger)countOfPurchasedContent;
- (void)dealloc;
- (id)description;
- (id)initWithBasePath:(id)arg1 delegate:(id)arg2;
- (id)purchasedContentXMLFilenames;
- (BOOL)reloadPurchasedContentData;
- (void)removeReferencesToAssetFilename:(id)arg1;

@end
