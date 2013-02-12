/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface SFUCryptoKey : NSObject {
    NSUInteger mIterationCount;
}

- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(NSUInteger)arg2 iterationCount:(NSUInteger)arg3;
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(NSUInteger)arg2;
- (NSUInteger)iterationCount;
- (NSInteger)keyType;

@end
