/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSLock, NSMutableDictionary;

@interface SSLockdown : NSObject {
    NSMutableDictionary *_dictionary;
    NSLock *_lock;
}

@property(readonly) long long availableDiskSpace;
@property(readonly) long long totalDiskCapacity;

+ (id)sharedInstance;

- (void*)_copyLocalValueForKey:(struct __CFString { }*)arg1 domain:(struct __CFString { }*)arg2;
- (id)_localDictionaryDirectory;
- (id)_ntsLocalDictionary;
- (BOOL)_ntsSaveLocalDictionary;
- (void)_setLocalValue:(void*)arg1 forKey:(struct __CFString { }*)arg2 domain:(struct __CFString { }*)arg3;
- (long long)availableDiskSpace;
- (id)copyAccountDictionaryForDomain:(struct __CFString { }*)arg1;
- (struct __CFString { }*)copyDeviceGUID;
- (void*)copyITunesValueForKey:(struct __CFString { }*)arg1 usedDomain:(const struct __CFString {}**)arg2;
- (void*)copyValueForKey:(struct __CFString { }*)arg1 domain:(struct __CFString { }*)arg2;
- (void)dealloc;
- (id)init;
- (void)removeAccountFromDomain:(struct __CFString { }*)arg1;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2 domain:(struct __CFString { }*)arg3;
- (long long)totalDiskCapacity;

@end
