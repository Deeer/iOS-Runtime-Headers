/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSIndexSet, NSObject;

@interface NSKeyValueChangeDictionary : NSDictionary {
    struct { 
        NSUInteger kind; 
        NSObject *oldValue; 
        NSObject *newValue; 
        NSIndexSet *indexes; 
    } _details;
    BOOL _isPriorNotification;
    BOOL _isRetainingObjects;
    NSObject *_originalObservable;
    NSInteger _retainCountMinusOne;
}

- (NSUInteger)count;
- (void)dealloc;
- (id)initWithDetailsNoCopy:(struct { NSUInteger x1; id x2; id x3; id x4; })arg1 originalObservable:(id)arg2 isPriorNotification:(BOOL)arg3;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (oneway void)release;
- (id)retain;
- (NSUInteger)retainCount;
- (void)retainObjects;
- (void)setDetailsNoCopy:(struct { NSUInteger x1; id x2; id x3; id x4; })arg1 originalObservable:(id)arg2;
- (void)setOriginalObservable:(id)arg1;

@end
