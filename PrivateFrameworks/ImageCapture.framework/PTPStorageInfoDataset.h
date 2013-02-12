/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSMutableData, NSString;

@interface PTPStorageInfoDataset : NSObject {
    unsigned short _accessCapability;
    NSMutableData *_content;
    BOOL _dirty;
    unsigned short _filesystemType;
    unsigned long long _freeSpaceInBytes;
    NSUInteger _freeSpaceInImages;
    unsigned long long _maxCapacity;
    BOOL _readOnlyObject;
    NSString *_storageDescription;
    unsigned short _storageType;
    NSString *_volumeLabel;
}

- (unsigned short)accessCapability;
- (id)content;
- (unsigned long)contentSize;
- (void)copyContent:(char *)arg1 ofSize:(unsigned long)arg2;
- (void)dealloc;
- (id)description;
- (unsigned short)filesystemType;
- (unsigned long long)freeSpaceInBytes;
- (unsigned long)freeSpaceInImages;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithMutableData:(id)arg1;
- (unsigned long long)maxCapacity;
- (void)setAccessCapability:(unsigned short)arg1;
- (void)setContent:(id)arg1;
- (void)setFilesystemType:(unsigned short)arg1;
- (void)setFreeSpaceInBytes:(unsigned long long)arg1;
- (void)setFreeSpaceInImages:(unsigned long)arg1;
- (void)setMaxCapacity:(unsigned long long)arg1;
- (void)setStorageDescription:(id)arg1;
- (void)setStorageType:(unsigned short)arg1;
- (void)setVolumeLabel:(id)arg1;
- (id)storageDescription;
- (unsigned short)storageType;
- (void)updateContent;
- (id)volumeLabel;

@end
