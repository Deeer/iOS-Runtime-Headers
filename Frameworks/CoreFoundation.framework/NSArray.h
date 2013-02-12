/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface NSArray : NSObject <NSCopying, NSMutableCopying, NSCoding, NSFastEnumeration> {
     /* Encoded args for previous method: @24@0:4@8@12@16r^{ValueInterpolator=dddddddddB}20 */
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)array;
+ (id)arrayWithArray:(id)arg1 copyItems:(BOOL)arg2;
+ (id)arrayWithArray:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 copyItems:(BOOL)arg3;
+ (id)arrayWithArray:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
+ (id)arrayWithArray:(id)arg1;
+ (id)arrayWithContentsOfFile:(id)arg1;
+ (id)arrayWithContentsOfURL:(id)arg1;
+ (id)arrayWithObject:(id)arg1;
+ (id)arrayWithObjects:(const id*)arg1 count:(NSUInteger)arg2;
+ (id)arrayWithObjects:(id)arg1;
+ (id)arrayWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)arrayWithOrderedSet:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 copyItems:(BOOL)arg3;
+ (id)arrayWithOrderedSet:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
+ (id)arrayWithOrderedSet:(id)arg1;
+ (id)arrayWithSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)arrayWithSet:(id)arg1;
+ (id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2;

- (id)CA_addValue:(id)arg1 multipliedBy:(NSInteger)arg2;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x10; }*)arg4;
- (BOOL)ICSContainsArray:(id)arg1;
- (void)_ICSParametersAppendingToString:(id)arg1;
- (void)_ICSStringWithOptions:(NSUInteger)arg1 appendingToString:(id)arg2;
- (id)_avgForKeyPath:(id)arg1;
- (unsigned long)_cfTypeID;
- (BOOL)_containsSubArray:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;
- (struct CGSize { float x1; float x2; })_drawComponentsJoinedByString:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; }*)arg2 forWidth:(float)arg3 withFont:(id)arg4 lineBreakMode:(NSInteger)arg5;
- (id)_initWithObjectsFromArray:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)_kb_firstObject;
- (BOOL)_kb_firstObjectsEqual:(NSUInteger)arg1;
- (BOOL)_kb_firstTwoObjectsEqual;
- (void)_makeObjectsPerformSelector:(SEL)arg1 object:(id)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (id)_mapkit_annotationViewsWithoutClass:(Class)arg1;
- (id)_mapkit_arrayByRemovingObject:(id)arg1;
- (NSUInteger)_mapkit_indexForObject:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3;
- (id)_mapkit_initWithObjectsFromArray:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)_mapkit_orientableAnnotationViewsFixed:(id*)arg1 notFixed:(id*)arg2;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(NSUInteger)arg2;
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(NSUInteger)arg2;
- (id)_newPasteboardDictionaryForMediaFileAtPath:(id)arg1;
- (id)_nextKeywordUsingCursors:(struct __CFDictionary { }*)arg1;
- (id)_nextToLastObject;
- (id)_scrambledKeywordsAndAddToSet:(id)arg1;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(NSUInteger)arg3;
- (id)_spliceAt:(NSInteger)arg1 amount:(NSInteger)arg2 andInsert:(id)arg3;
- (id)_spliceAt:(NSInteger)arg1 amount:(NSInteger)arg2 andOverlay:(id)arg3;
- (id)_stringToWrite;
- (id)_subsequenceFrom:(NSInteger)arg1 to:(NSInteger)arg2;
- (id)_subsequenceFromIndex:(NSInteger)arg1;
- (id)_subsequenceToIndex:(NSInteger)arg1;
- (id)_sumForKeyPath:(id)arg1;
- (id)_unionOfArraysForKeyPath:(id)arg1;
- (id)_unionOfObjectsForKeyPath:(id)arg1;
- (id)_unionOfSetsForKeyPath:(id)arg1;
- (BOOL)_validateValue:(id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(NSUInteger)arg3 error:(id*)arg4;
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(NSUInteger)arg2;
- (id)_web_lowercaseStrings;
- (id)_webkit_numberAtIndex:(NSUInteger)arg1;
- (id)_webkit_stringAtIndex:(NSUInteger)arg1;
- (id)_withoutEmptyStrings;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(NSUInteger)arg3 context:(void*)arg4;
- (void)addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(NSUInteger)arg4 context:(void*)arg5;
- (id)allObjects;
- (id)arrayByAddingObject:(id)arg1;
- (id)arrayByAddingObjects:(const id*)arg1 count:(NSUInteger)arg2;
- (id)arrayByAddingObjectsFromArray:(id)arg1;
- (id)arrayByAddingObjectsFromOrderedSet:(id)arg1;
- (id)arrayByAddingObjectsFromSet:(id)arg1;
- (id)arrayByApplyingSelector:(SEL)arg1;
- (id)arrayByApplyingSelectorWithValues:(SEL)arg1 toObject:(id)arg2;
- (id)arrayByExcludingObjectsInArray:(id)arg1;
- (id)arrayByExcludingToObjectsInArray:(id)arg1;
- (id)arrayByFilteringOutBySelector:(SEL)arg1 withObject:(id)arg2;
- (Class)classForCoder;
- (id)componentsJoinedByString:(id)arg1;
- (id)componentsJoinedIntoListWithMaxItems:(NSInteger)arg1;
- (id)composeRecipientAddresses;
- (id)composeRecipientAddresses;
- (BOOL)containsObject:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (BOOL)containsObject:(id)arg1 matchingComparison:(SEL)arg2;
- (BOOL)containsObject:(id)arg1;
- (BOOL)containsObjectIdenticalTo:(id)arg1;
- (BOOL)containsObjectIdenticalTo:(id)arg1;
- (void)copyPhotosToPasteboard;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)count;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (NSUInteger)countForObject:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithLocale:(id)arg1 indent:(NSUInteger)arg2;
- (id)descriptionWithLocale:(id)arg1;
- (struct CGSize { float x1; float x2; })drawComponentsJoinedByString:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 forWidth:(float)arg3 withFont:(id)arg4 lineBreakMode:(NSInteger)arg5;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3;
- (void)enumerateObjectsUsingBlock:(id)arg1;
- (void)enumerateObjectsWithOptions:(NSUInteger)arg1 usingBlock:(id)arg2;
- (id)filteredArrayUsingPredicate:(id)arg1;
- (id)firstObject;
- (id)firstObjectCommonWithArray:(id)arg1;
- (BOOL)getObject:(id*)arg1 atIndex:(NSUInteger)arg2;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)getObjects:(id*)arg1;
- (NSUInteger)hash;
- (NSInteger)indexForInsertingAttendeeDisplayString:(id)arg1;
- (NSInteger)indexForInsertingCalendarAttendeeIntoList:(id)arg1;
- (NSInteger)indexForInsertingCalendarAttendeeListAttendee:(id)arg1;
- (NSUInteger)indexOf:(id)arg1 :(NSUInteger)arg2 :(BOOL)arg3;
- (NSUInteger)indexOfAttributeBySelector:(SEL)arg1 equalToObject:(id)arg2;
- (NSUInteger)indexOfObject:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (NSUInteger)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 options:(NSUInteger)arg3 usingComparator:(id)arg4;
- (NSInteger)indexOfObject:(id)arg1 matchingComparison:(SEL)arg2;
- (NSUInteger)indexOfObject:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 identical:(BOOL)arg3;
- (NSUInteger)indexOfObject:(id)arg1;
- (NSUInteger)indexOfObjectAtIndexes:(id)arg1 options:(NSUInteger)arg2 passingTest:(id)arg3;
- (NSUInteger)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (NSUInteger)indexOfObjectIdenticalTo:(id)arg1;
- (NSUInteger)indexOfObjectPassingTest:(id)arg1;
- (NSUInteger)indexOfObjectWithOptions:(NSUInteger)arg1 passingTest:(id)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(NSUInteger)arg2 passingTest:(id)arg3;
- (id)indexesOfObjectsPassingTest:(id)arg1;
- (id)indexesOfObjectsWithOptions:(NSUInteger)arg1 passingTest:(id)arg2;
- (id)initWithArray:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 copyItems:(BOOL)arg3;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)initWithArray:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (id)initWithObjects:(id*)arg1 count:(NSUInteger)arg2;
- (id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 copyItems:(BOOL)arg3;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)initWithOrderedSet:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithSet:(id)arg1;
- (id)intersectionWithArray:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToArray:(id)arg1;
- (BOOL)isNSArray__;
- (id)lastObject;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (id)mediaObjects;
- (id)mf_commaSeparatedRecipientListWithWidth:(float)arg1 forFont:(id)arg2 usingSelector:(SEL)arg3;
- (id)mf_commaSeparatedRecipientListWithWidth:(float)arg1 forFont:(id)arg2;
- (id)mf_dictionaryWithMessagesSortedByStore;
- (NSUInteger)mf_indexOfMailboxDictionaryWithName:(id)arg1;
- (NSUInteger)mf_indexOfObject:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3;
- (NSUInteger)mf_indexWhereObjectWouldBeInserted:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3;
- (id)mf_indicesOfStringsWithPrefix:(id)arg1;
- (id)mf_objectEquivalentTo:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3;
- (id)mf_uncommentedAddressList;
- (id)mutableCopyOfComponentsJoinedByString:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(NSUInteger)arg1;
- (id)objectEnumerator;
- (id)objectsAtIndexes:(id)arg1;
- (id)pathsMatchingExtensions:(id)arg1;
- (id)pickableRouteWithUID:(id)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeWithStartIndex:(NSInteger)arg1 endIndex:(NSInteger)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3;
- (id)repeatedNTimes:(NSInteger)arg1;
- (id)reverseObjectEnumerator;
- (id)reversedArray;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeOfComponentsJoinedByString:(id)arg1 withFont:(id)arg2 forWidth:(float)arg3 lineBreakMode:(NSInteger)arg4;
- (id)smilString;
- (id)smsAddresses;
- (id)sortedArrayHint;
- (id)sortedArrayUsingComparator:(id)arg1;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)sortedArrayUsingFunction:(int (*)())arg1 context:(void*)arg2 hint:(id)arg3;
- (id)sortedArrayUsingFunction:(int (*)())arg1 context:(void*)arg2;
- (id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2;
- (id)sortedArrayUsingSelector:(SEL)arg1;
- (id)sortedArrayWithOptions:(NSUInteger)arg1 usingComparator:(id)arg2;
- (id)sortedAttendeeDisplayStringsIgnoringNonHumans;
- (id)sortedPartsFromSMIL;
- (id)specifierForID:(id)arg1;
- (id)stringsByAppendingPathComponent:(id)arg1;
- (id)subarrayWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;

@end
