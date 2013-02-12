/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class NSTimer, UIScrollView;

@interface UIPDFAccessoryView : UIView {
    NSInteger _currentPageIndex;
    id _delegate;
    NSTimer *_fadeOutTimer;
    NSInteger _numberOfPages;
    UIScrollView *scrollView;
}

- (void)computeFrameSize;
- (void)dealloc;
- (void)documentChanged:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)fadeTimerElapsed:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDelegate:(id)arg1;

@end
