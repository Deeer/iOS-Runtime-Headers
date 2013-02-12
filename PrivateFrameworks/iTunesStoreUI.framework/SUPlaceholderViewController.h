/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUGradient, SULoadingView;

@interface SUPlaceholderViewController : SUViewController {
    SUGradient *_backgroundGradient;
    SUGradient *_defaultBackgroundGradient;
    SULoadingView *_loadingView;
}

@property(copy) SUGradient *backgroundGradient;
@property(copy) SUGradient *defaultBackgroundGradient;
@property(readonly) SULoadingView *loadingView;

- (void)_bagDidLoadNotification:(id)arg1;
- (id)_newURLBagBackgroundGradient;
- (void)_reloadBackgroundGradient;
- (id)backgroundGradient;
- (id)copyArchivableContext;
- (void)dealloc;
- (id)defaultBackgroundGradient;
- (id)init;
- (void)loadView;
- (id)loadingView;
- (void)parentViewControllerHierarchyDidChange;
- (void)setBackgroundGradient:(id)arg1;
- (void)setDefaultBackgroundGradient:(id)arg1;
- (void)setLoading:(BOOL)arg1;

@end
