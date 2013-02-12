/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVLogging : NSObject {
    struct __CFDictionary { } *_logDelegates;
}

+ (id)sharedLogging;

- (struct __CFSet { }*)_delegatesToLogForProvider:(id)arg1;
- (BOOL)_shouldOutputAtLevel:(NSInteger)arg1 forAccountInfoProvider:(id)arg2;
- (void)addLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2;
- (void)dealloc;
- (struct __CFSet { }*)delegatesToLogTransmittedDataForAccountInfoProvider:(id)arg1;
- (id)init;
- (void)logDiagnosticForProvider:(id)arg1 withLevel:(NSInteger)arg2 format:(id)arg3 args:(void*)arg4;
- (void)removeLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2;
- (BOOL)shouldLogAtLevel:(NSInteger)arg1 forAccountInfoProvider:(id)arg2;

@end
