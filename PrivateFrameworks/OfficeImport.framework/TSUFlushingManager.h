/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <TSUFlushable>, NSCondition, NSThread, TSUMemoryWatcher, TSUPointerKeyDictionary, TSURetainedPointerKeyDictionary;

@interface TSUFlushingManager : NSObject {
    struct set<TSUFlushableObjectInfo*,TSUFlushableObjectInfoPointerFlushingOrderLess,std::allocator<TSUFlushableObjectInfo*> > { struct _Rb_tree<TSUFlushableObjectInfo*,TSUFlushableObjectInfo*,std::_Identity<TSUFlushableObjectInfo*>,TSUFlushableObjectInfoPointerFlushingOrderLess,std::allocator<TSUFlushableObjectInfo*> > { 
            struct _Rb_tree_impl<TSUFlushableObjectInfoPointerFlushingOrderLess,false> { 
                struct TSUFlushableObjectInfoPointerFlushingOrderLess { } _M_key_compare; 
                struct _Rb_tree_node_base { 
                    NSInteger _M_color; 
                    struct _Rb_tree_node_base {} *_M_parent; 
                    struct _Rb_tree_node_base {} *_M_left; 
                    struct _Rb_tree_node_base {} *_M_right; 
                } _M_header; 
                NSUInteger _M_node_count; 
            } _M_impl; 
    struct set<TSUFlushableObjectInfo*,TSUFlushableObjectInfoPointerTimeStampLess,std::allocator<TSUFlushableObjectInfo*> > { struct _Rb_tree<TSUFlushableObjectInfo*,TSUFlushableObjectInfo*,std::_Identity<TSUFlushableObjectInfo*>,TSUFlushableObjectInfoPointerTimeStampLess,std::allocator<TSUFlushableObjectInfo*> > { 
            struct _Rb_tree_impl<TSUFlushableObjectInfoPointerTimeStampLess,false> { 
                struct TSUFlushableObjectInfoPointerTimeStampLess { } _M_key_compare; 
                struct _Rb_tree_node_base { 
                    NSInteger _M_color; 
                    struct _Rb_tree_node_base {} *_M_parent; 
                    struct _Rb_tree_node_base {} *_M_left; 
                    struct _Rb_tree_node_base {} *_M_right; 
                } _M_header; 
                NSUInteger _M_node_count; 
            } _M_impl; 
    BOOL _alwaysFlushing;
    NSThread *_bgThread;
    NSUInteger _clock;
    NSCondition *_cond;
    <TSUFlushable> *_flushingObject;
    TSUPointerKeyDictionary *_inactiveObjects;
    BOOL _isFlushing;
    NSCondition *_isFlushingCond;
    BOOL _isWaitingForFlush;
    TSUMemoryWatcher *_memoryWatcher;
    TSURetainedPointerKeyDictionary *_objects;
        } x1; } *_sortedNewObjects;
        } x1; } *_sortedObjects;
    BOOL _stopFlushing;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedManager;

- (void)_backgroundThread:(id)arg1;
- (void)_didUseObject:(id)arg1;
- (void)_startFlushingObjects;
- (void)_stopFlushingObjects;
- (void)addObject:(id)arg1;
- (void)advanceClock;
- (id)autorelease;
- (BOOL)controlsActiveObject:(id)arg1;
- (BOOL)controlsInactiveObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)doneWithObject:(id)arg1;
- (struct TSUFlushableObjectInfo { id x1; NSInteger x2; NSInteger x3; NSInteger x4; NSUInteger x5[2]; }*)eraseInfoForObject:(id)arg1;
- (id)init;
- (void)insertObjectInfo:(struct TSUFlushableObjectInfo { id x1; NSInteger x2; NSInteger x3; NSInteger x4; NSUInteger x5[2]; }*)arg1;
- (BOOL)isNewObject:(struct TSUFlushableObjectInfo { id x1; NSInteger x2; NSInteger x3; NSInteger x4; NSUInteger x5[2]; }*)arg1;
- (void)memoryLevelDecreased:(NSInteger)arg1 was:(NSInteger)arg2;
- (void)memoryLevelIncreased:(NSInteger)arg1 was:(NSInteger)arg2;
- (void)protectObject:(id)arg1;
- (void)release;
- (void)removeObject:(id)arg1;
- (id)retain;
- (NSUInteger)retainCount;
- (void)safeToFlush:(id)arg1 wasAccessed:(BOOL)arg2;
- (void)stopProtectingObject:(id)arg1;
- (void)transferNewObjects;
- (void)unsafeToFlush:(id)arg1;

@end
