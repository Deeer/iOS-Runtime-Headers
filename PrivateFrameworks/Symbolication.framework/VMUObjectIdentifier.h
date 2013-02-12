/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSHashTable, NSMapTable, NSMutableSet, VMURangeArray, VMUSymbolicator;

@interface VMUObjectIdentifier : NSObject {
    NSUInteger _cPlusPlusClassCount;
    NSUInteger _cfTypeCount;
    NSMapTable *_cfTypeIDtoClassInfo;
    NSHashTable *_classAddresses;
    NSHashTable *_invalidPointers;
    NSMapTable *_isaToClassInfo;
    NSUInteger _objcClassCount;
    NSMutableSet *_objcRuntimeMallocBlocks;
    NSHashTable *_objcRuntimeMallocBlocksHash;
    VMUSymbolicator *_symbolicator;
    VMURangeArray *_targetProcessVMranges;
    NSUInteger _task;
    NSInteger peeksAtRemoteObjectIsa;
}

- (NSUInteger)CFTypeCount;
- (NSUInteger)CPlusPlusClassCount;
- (NSUInteger)ObjCclassCount;
- (id)classInfoForObject:(NSUInteger)arg1;
- (void)dealloc;
- (void)findCFTypes;
- (void)findObjCclasses;
- (void)findTargetProcessVMranges;
- (id)initWithTask:(NSUInteger)arg1 symbolicator:(id)arg2;
- (id)initWithTask:(NSUInteger)arg1;
- (id)objcRuntimeMallocBlocks;
- (id)objcRuntimeMallocBlocksHash;
- (id)readClassNameString:(NSUInteger)arg1;
- (id)typeInfoForObject:(NSUInteger)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })vmRegionRangeForAddress:(unsigned long long)arg1;

@end
