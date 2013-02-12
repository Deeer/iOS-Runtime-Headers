/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCache : NSObject {
    id _imp;
}

@property(readonly) NSArray *allObjects;
@property float compactionFactor;
@property(readonly) NSUInteger count;
@property(readonly) NSUInteger maxCapacity;

+ (id)impWithCapacity:(NSUInteger)arg1 maxCapacity:(NSUInteger)arg2 delegate:(id)arg3;

- (id)allObjects;
- (void)compact;
- (float)compactionFactor;
- (NSUInteger)count;
- (void)dealloc;
- (id)description;
- (NSUInteger)getKeys:(const void**)arg1 values:(const void**)arg2;
- (id)init;
- (id)initWithCapacity:(NSUInteger)arg1 maxCapacity:(NSUInteger)arg2;
- (id)initWithCapacity:(NSUInteger)arg1;
- (NSUInteger)maxCapacity;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setCompactionFactor:(float)arg1;
- (void)setMaxCapacity:(NSUInteger)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
