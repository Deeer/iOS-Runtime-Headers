/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class QLDelayedScrollView, UICheckeredPatternView, UITapGestureRecognizer, UIWebBrowserView;

@interface QLWebViewDisplayBundle : QLDisplayBundle <UIWebViewDelegate, UIScrollViewDelegate, QLDelayedScrollViewDelegate, UIGestureRecognizerDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    unsigned int _isHTMLContent : 1;
    unsigned int _isPDFContent : 1;
    unsigned int _isSpreadsheetContent : 1;
    unsigned int _isPlainText : 1;
    unsigned int _isRTFContent : 1;
    unsigned int _isCSVContent : 1;
    unsigned int _loadStarted : 1;
    UICheckeredPatternView *_checkeredView;
    NSInteger _lastOrientation;
    } _savedOffset;
    QLDelayedScrollView *_scrollView;
    UITapGestureRecognizer *_tapRecognizer;
    UIWebBrowserView *_webView;
}

+ (BOOL)isSpreadsheetType:(id)arg1;

- (void)_finishLoading;
- (void)_viewWasTapped:(id)arg1;
- (id)_webView;
- (void)cancelLoad;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)loadView;
- (void)loadWithHints:(id)arg1;
- (struct CGSize { float x1; float x2; })minimumSizeOfWebLayerControlledByScroller:(id)arg1;
- (void)presenterWillFadeIn;
- (void)reloadUI;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)tearDownUI;
- (void)view:(id)arg1 didSetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 oldFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 asResultOfZoom:(BOOL)arg4;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)webLayerControlledByScroller:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end
