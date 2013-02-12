/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSDate, NSSet, NSString;

@interface MLPhotoMemoryStorage : MLPhoto {
    unsigned int _writeIsPending : 1;
    double _captureTime;
    NSDate *_date;
    NSUInteger _durationInMilliseconds;
    NSSet *_extensions;
    NSString *_fileExtension;
    NSString *_filenameWithoutExtension;
    NSInteger _imageID;
    double _latitude;
    double _longitude;
    NSString *_metadataPath;
    NSInteger _type;
    NSString *_videoPath;
}

+ (void)_initializeSafeCategory;

- (id)_metadataPath;
- (void)_setFilenameFromFullSizeVideoPath:(id)arg1;
- (void)_setMetadataPathFromFullSizeVideoPath:(id)arg1;
- (void)addExtension:(id)arg1;
- (double)captureTime;
- (void)dealloc;
- (id)description;
- (double)durationInMilliseconds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceRectangles:(id)arg1;
- (id)filenameWithoutExtension;
- (id)fullSizeImagePath;
- (BOOL)hasFullSizeImageData;
- (NSInteger)imageID;
- (id)initWithImageID:(NSInteger)arg1;
- (BOOL)isWritePending;
- (double)latitude;
- (double)longitude;
- (id)pathForImageFormat:(NSInteger)arg1;
- (id)pathForVideoFile;
- (NSInteger)photoType;
- (void)setCaptureTime:(double)arg1;
- (void)setDate:(id)arg1;
- (void)setDurationInMilliseconds:(double)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setPathForVideoFile:(id)arg1;
- (void)setType:(NSInteger)arg1;
- (void)setWriteIsPending:(BOOL)arg1;

@end
