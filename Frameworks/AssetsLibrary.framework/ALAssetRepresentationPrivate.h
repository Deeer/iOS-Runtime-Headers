/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class ALAssetsLibrary, MLPhoto, NSString;

@interface ALAssetRepresentationPrivate : NSObject <ALAssetsLibraryAsset> {
    NSString *_extension;
    BOOL _isValid;
    ALAssetsLibrary *_library;
    MLPhoto *_photo;
}

@property(copy) NSString *extension;
@property ALAssetsLibrary *library;
@property(retain) MLPhoto *photo;
@property BOOL isValid;

+ (void)_clearFileDescriptorQueue;
+ (NSInteger)_fileDescriptorForPersistentURL:(id)arg1;
+ (void)_setFileDescriptor:(NSInteger)arg1 forPersistentURL:(id)arg2;
+ (void)_setupFileDescriptorQueue;

- (BOOL)_isImage;
- (BOOL)_isVideo;
- (void)dealloc;
- (id)extension;
- (id)initWithMLPhoto:(id)arg1 extension:(id)arg2 library:(id)arg3;
- (BOOL)isValid;
- (id)library;
- (void)libraryDidChange;
- (void)libraryWillDisappear;
- (id)photo;
- (void)setExtension:(id)arg1;
- (void)setIsValid:(BOOL)arg1;
- (void)setLibrary:(id)arg1;
- (void)setPhoto:(id)arg1;

@end
