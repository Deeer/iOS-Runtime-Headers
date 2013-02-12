/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaQuery, NSMutableArray, NSSet;

@interface MPMediaEntityArray : NSArray {
    NSUInteger _count;
    NSMutableArray *_entities;
    NSInteger _entityType;
    NSUInteger _limit;
    NSMutableArray *_loadedRanges;
    NSSet *_propertiesToFetch;
    MPMediaQuery *_query;
    struct dispatch_queue_s { } *_queue;
}

@property(copy) NSSet *propertiesToFetch;

- (NSUInteger)_countOfEntities;
- (id)_entities;
- (id)_entitiesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)count;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuery:(id)arg1 entityType:(NSInteger)arg2;
- (id)objectAtIndex:(NSUInteger)arg1;
- (id)propertiesToFetch;
- (void)setPropertiesToFetch:(id)arg1;

@end
