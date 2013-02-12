/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, UIKeyboardZoomGesture, UITouch;

@interface UIKeyboardLayout : UIView <UIKeyboardLayoutProtocol> {
    UITouch *m_activeTouch;
    UITouch *m_shiftKeyTouch;
    UITouch *m_swipeTouch;
    NSMutableArray *m_uncommittedTouches;
    UIKeyboardZoomGesture *m_zoomGesture;
}

@property(retain) UITouch *activeTouch;
@property(retain) UITouch *shiftKeyTouch;
@property(retain) UITouch *swipeTouch;

- (id)activationIndicatorView;
- (id)activeTouch;
- (void)addSwipeRecognizer;
- (void)addZoomRecognizer;
- (BOOL)canProduceString:(id)arg1;
- (id)candidateList;
- (void)commitTouchesBeforeTouch:(id)arg1;
- (void)deactivateActiveKeys;
- (void)dealloc;
- (void)didClearInput;
- (BOOL)doesKeyCharging;
- (float)flickDistance;
- (float)hitBuffer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isShiftKeyBeingHeld;
- (BOOL)isShiftKeyPlaneChooser;
- (void)longPressAction;
- (BOOL)performReturnAction;
- (void)phraseBoundaryDidChange;
- (void)restoreDefaultsForAllKeys;
- (void)restoreDefaultsForKey:(id)arg1;
- (void)setAction:(SEL)arg1 forKey:(id)arg2;
- (void)setActiveTouch:(id)arg1;
- (void)setAutoshift:(BOOL)arg1;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;
- (void)setShift:(BOOL)arg1;
- (void)setShiftKeyTouch:(id)arg1;
- (void)setSwipeTouch:(id)arg1;
- (void)setTarget:(id)arg1 forKey:(id)arg2;
- (BOOL)shiftKeyRequiresImmediateUpdate;
- (id)shiftKeyTouch;
- (BOOL)shouldShowIndicator;
- (void)showKeyboardType:(NSInteger)arg1 withAppearance:(NSInteger)arg2;
- (void)superLongPress:(id)arg1;
- (void)swipeGestureRecognized:(id)arg1;
- (id)swipeTouch;
- (void)touchCancelled:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)touchDragged:(id)arg1;
- (void)touchUp:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateLocalizedKeys;
- (void)updateReturnKey;
- (BOOL)usesAutoShift;
- (void)zoomGestureRecognized:(id)arg1;

@end
