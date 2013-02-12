/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILongPressGestureRecognizer, UITapAndAHalfRecognizer, UIWebDocumentView, UIWebSelectionView;

@interface UIWebSelectionAssistant : NSObject <UILongPressGestureRecognizerDelegate> {
    BOOL _enabled;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapAndAHalfRecognizer *_tapAndAHalfGestureRecognizer;
    UIWebSelectionView *_tintView;
    UIWebDocumentView *_webView;
}

@property(readonly) UIWebSelection *selection;
@property BOOL enabled;
@property(readonly) CGRect selectionFrame;

- (void)clearSelection;
- (void)dealloc;
- (void)didRotate:(id)arg1;
- (void)doneDragging;
- (BOOL)enabled;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)hideCallout;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2 fromView:(id)arg3;
- (id)initWithWebView:(id)arg1;
- (BOOL)isSelectionGestureRecognizer:(id)arg1;
- (void)layoutChanged;
- (void)makeWebSelection:(id)arg1;
- (void)resignedFirstResponder;
- (void)scaleChanged;
- (id)selection;
- (void)selectionChanged;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionFrame;
- (void)setEnabled:(BOOL)arg1;
- (void)setGestureRecognizers;
- (void)tap:(id)arg1;
- (void)willDrag;
- (void)willRotate:(id)arg1;

@end
