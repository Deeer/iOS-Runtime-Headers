/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, WebScriptObject;

@interface SUScriptEventListener : NSObject {
    WebScriptObject *_callback;
    NSString *_name;
    BOOL _useCapture;
}

@property(retain) WebScriptObject *callback;
@property(retain) NSString *name;
@property BOOL shouldUseCapture;

- (id)callback;
- (void)dealloc;
- (id)name;
- (void)setCallback:(id)arg1;
- (void)setName:(id)arg1;
- (void)setShouldUseCapture:(BOOL)arg1;
- (BOOL)shouldUseCapture;

@end
