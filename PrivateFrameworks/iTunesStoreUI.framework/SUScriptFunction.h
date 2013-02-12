/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSLock, NSMutableSet, SUScriptObject, WebScriptObject;

@interface SUScriptFunction : NSObject {
    NSMutableSet *_delegates;
    WebScriptObject *_function;
    NSLock *_lock;
    SUScriptObject *_thisObject;
}

@property(retain) WebScriptObject *scriptObject;
@property SUScriptObject *thisObject;

- (void)_callFunction:(id)arg1 withArguments:(id)arg2 delegate:(id)arg3;
- (id)_copyAdjustedArgumentsForArguments:(id)arg1;
- (void)_sendResult:(id)arg1 toDelegate:(id)arg2;
- (id)callSynchronouslyWithArguments:(id)arg1;
- (BOOL)callWithArguments:(id)arg1 delegate:(id)arg2 didFinishSelector:(SEL)arg3;
- (BOOL)callWithArguments:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithScriptObject:(id)arg1;
- (void)lock;
- (id)scriptObject;
- (void)setScriptObject:(id)arg1;
- (void)setThisObject:(id)arg1;
- (id)thisObject;
- (void)unlock;

@end
