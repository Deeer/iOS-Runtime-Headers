/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class SFUCryptoKey;

@interface SFUCommonCryptoCryptor : SFUCryptor {
    NSUInteger mBlockSize;
    struct _CCCryptor { } *mCryptor;
    char *mDecryptionInputBuffer;
    BOOL mFinished;
    SFUCryptoKey *mKey;
    NSInteger mOperation;
    char *mOutputBuffer;
    NSUInteger mOutputBufferAvailable;
    char *mOutputBufferPos;
}

- (BOOL)cryptDataFromBuffer:(const char *)arg1 length:(unsigned long)arg2 toStream:(id)arg3 finished:(BOOL)arg4 crc32:(NSUInteger*)arg5 error:(id*)arg6;
- (BOOL)cryptDataFromBuffer:(const char *)arg1 length:(unsigned long)arg2 toStream:(id)arg3 finished:(BOOL)arg4 error:(id*)arg5;
- (BOOL)cryptDataFromStream:(id)arg1 toBuffer:(char *)arg2 length:(unsigned long)arg3 bytesRead:(NSUInteger*)arg4 error:(id*)arg5;
- (void)dealloc;
- (id)initWithKey:(id)arg1 operation:(NSInteger)arg2 iv:(const char *)arg3 ivLength:(unsigned long)arg4;

@end
