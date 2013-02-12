/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CPImportTracing : CPTracing {
    long mImportingOpstat;
    long mProcessorOpstat;
    long mReadingOpstat;
}

- (void)dealloc;
- (id)initWithFilename:(id)arg1;
- (void)startImporting;
- (void)startProcessors;
- (void)startReading;
- (void)stopImporting;
- (void)stopProcessors;
- (void)stopReading;

@end
