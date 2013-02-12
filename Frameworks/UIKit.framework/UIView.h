/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CALayer, NSArray, NSMutableArray, UIViewController;

@interface UIView : UIResponder <UITextEffectsOrdering, NSCoding> {
    struct { 
        unsigned int userInteractionDisabled : 1; 
        unsigned int implementsDrawRect : 1; 
        unsigned int implementsDidScroll : 1; 
        unsigned int implementsMouseTracking : 1; 
        unsigned int hasBackgroundColor : 1; 
        unsigned int isOpaque : 1; 
        unsigned int becomeFirstResponderWhenCapable : 1; 
        unsigned int interceptMouseEvent : 1; 
        unsigned int deallocating : 1; 
        unsigned int debugFlash : 1; 
        unsigned int debugSkippedSetNeedsDisplay : 1; 
        unsigned int debugScheduledDisplayIsRequired : 1; 
        unsigned int isInAWindow : 1; 
        unsigned int isAncestorOfFirstResponder : 1; 
        unsigned int dontAutoresizeSubviews : 1; 
        unsigned int autoresizeMask : 6; 
        unsigned int patternBackground : 1; 
        unsigned int fixedBackgroundPattern : 1; 
        unsigned int dontAnimate : 1; 
        unsigned int superLayerIsView : 1; 
        unsigned int layerKitPatternDrawing : 1; 
        unsigned int multipleTouchEnabled : 1; 
        unsigned int exclusiveTouch : 1; 
        unsigned int hasViewController : 1; 
        unsigned int needsDidAppearOrDisappear : 1; 
        unsigned int gesturesEnabled : 1; 
        unsigned int deliversTouchesForGesturesToSuperview : 1; 
        unsigned int chargeEnabled : 1; 
        unsigned int skipsSubviewEnumeration : 1; 
        unsigned int needsDisplayOnBoundsChange : 1; 
        unsigned int hasTiledLayer : 1; 
        unsigned int hasLargeContent : 1; 
        unsigned int alwaysScaleContent : 1; 
    float _charge;
    id _gestureInfo;
    NSMutableArray *_gestureRecognizers;
    CALayer *_layer;
    NSArray *_subviewCache;
    NSInteger _tag;
    id _tapInfo;
    UIViewController *_viewDelegate;
    } _viewFlags;
}

@property(getter=_viewDelegate) UIViewController *viewDelegate; /* unknown property attribute: S_setViewDelegate: */
@property(retain,readonly) CALayer *layer;
@property BOOL deliversTouchesForGesturesToSuperview;
@property BOOL gesturesEnabled;
@property float height;
@property BOOL skipsSubviewEnumeration;
@property NSInteger tag;
@property(getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property CGPoint viewFrameOrigin;
@property float width;
@property float x;
@property float y;

+ (id)_accessibilityTitleForSystemTag:(NSInteger)arg1;
+ (void)_animateWithDuration:(double)arg1 delay:(double)arg2 options:(NSUInteger)arg3 animations:(id)arg4 start:(id)arg5 completion:(id)arg6;
+ (void)_beginDisablingPromoteDescendantToFirstResponder;
+ (float)_currentAnimationDuration;
+ (void)_endDisablingPromoteDescendantToFirstResponder;
+ (void)_inheritAnimationParameters;
+ (BOOL)_invalidatesViewUponCreation;
+ (BOOL)_isInAnimationBlock;
+ (id)_mapkit_viewNamed:(id)arg1;
+ (void)_performWithoutAnimation:(id)arg1;
+ (void)_setAnimationAttributes:(id)arg1;
+ (void)_setAnimationFilter:(NSInteger)arg1 forView:(id)arg2;
+ (void)_setAnimationFilterValue:(float)arg1;
+ (void)_setInvalidatesViewUponCreation:(BOOL)arg1;
+ (void)_setIsResponderAncestorOfFirstResponder:(BOOL)arg1 startingAtFirstResponder:(id)arg2;
+ (void)_setupAnimationWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(NSUInteger)arg4 animations:(id)arg5 start:(id)arg6 completion:(id)arg7;
+ (id)_tintColorForStyle:(NSInteger)arg1;
+ (id)_topMostView:(id)arg1;
+ (void)animateWithDuration:(double)arg1 animations:(id)arg2 completion:(id)arg3;
+ (void)animateWithDuration:(double)arg1 animations:(id)arg2;
+ (void)animateWithDuration:(double)arg1 delay:(double)arg2 options:(NSUInteger)arg3 animations:(id)arg4 completion:(id)arg5;
+ (BOOL)areAnimationsEnabled;
+ (void)beginAnimations:(id)arg1 context:(void*)arg2;
+ (void)beginAnimations:(id)arg1;
+ (void)commitAnimations;
+ (void)disableAnimation;
+ (void)enableAnimation;
+ (void)endAnimations;
+ (void)flush;
+ (Class)layerClass;
+ (void)setAnimationAutoreverses:(BOOL)arg1;
+ (void)setAnimationBeginsFromCurrentState:(BOOL)arg1;
+ (void)setAnimationCurve:(NSInteger)arg1;
+ (void)setAnimationDelay:(double)arg1;
+ (void)setAnimationDelegate:(id)arg1;
+ (void)setAnimationDidStopSelector:(SEL)arg1;
+ (void)setAnimationDuration:(double)arg1;
+ (void)setAnimationFrameInterval:(double)arg1;
+ (void)setAnimationFromCurrentState:(BOOL)arg1;
+ (void)setAnimationPosition:(struct CGPoint { float x1; float x2; })arg1;
+ (void)setAnimationRepeatAutoreverses:(BOOL)arg1;
+ (void)setAnimationRepeatCount:(float)arg1;
+ (void)setAnimationRoundsToInteger:(BOOL)arg1;
+ (void)setAnimationStartDate:(id)arg1;
+ (void)setAnimationStartTime:(double)arg1;
+ (void)setAnimationTransition:(NSInteger)arg1 forView:(id)arg2 cache:(BOOL)arg3;
+ (void)setAnimationTransition:(NSInteger)arg1 forView:(id)arg2;
+ (void)setAnimationWillStartSelector:(SEL)arg1;
+ (void)setAnimationsEnabled:(BOOL)arg1;
+ (void)throttledFlush;
+ (void)transitionFromView:(id)arg1 toView:(id)arg2 duration:(double)arg3 options:(NSUInteger)arg4 completion:(id)arg5;
+ (void)transitionWithView:(id)arg1 duration:(double)arg2 options:(NSUInteger)arg3 animations:(id)arg4 completion:(id)arg5;

- (id)__accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)_accessibilityAccessibleElementsInView:(id)arg1;
- (BOOL)_accessibilityAllowsSiblingsWhenOvergrown;
- (BOOL)_accessibilityAlwaysOrderedFirst;
- (id)_accessibilityChildVendingParent;
- (id)_accessibilityChildrenInDirection:(BOOL)arg1;
- (id)_accessibilityContainerInDirection:(BOOL)arg1 originalElement:(id)arg2;
- (id)_accessibilityContainingParentForOrdering;
- (id)_accessibilityElementsInContainerIncludingContainers:(BOOL)arg1 topLevel:(id)arg2;
- (id)_accessibilityElementsInContainerIncludingContainers:(BOOL)arg1;
- (id)_accessibilityElementsInDirection:(BOOL)arg1 withCount:(unsigned long)arg2 originalElement:(id)arg3;
- (void)_accessibilityFinalize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_accessibilityFrameForView:(id)arg1;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)_accessibilityIgnoresMouseEvents;
- (id)_accessibilityNextElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityObscuredScreenAllowedViews;
- (BOOL)_accessibilityObscuresScreen;
- (void)_accessibilityPostNotification:(id)arg1;
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityRetrieveIvarText;
- (id)_accessibilityRetrieveLabelFromTableViewCell;
- (id)_accessibilitySecureTextForString:(id)arg1;
- (BOOL)_accessibilityShouldHitTestLayers;
- (unsigned long long)_accessibilityTextAreaTraits;
- (id)_accessibilityUserTestingChildren;
- (BOOL)_accessibilityUserTestingIsBackNavButton;
- (BOOL)_accessibilityUserTestingIsCancelButton;
- (BOOL)_accessibilityUserTestingIsDefaultButton;
- (BOOL)_accessibilityUserTestingIsRightNavButton;
- (BOOL)_accessibilityUserTestingIsTypeOfButton:(id)arg1;
- (BOOL)_accessibilityUsesScrollParentForOrdering;
- (id)_accessibleSubviews;
- (void)_addSubview:(id)arg1 positioned:(NSInteger)arg2 relativeTo:(id)arg3;
- (BOOL)_alwaysHandleInteractionEvents;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)_animateToScrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_animateZoomFailureToWindowPoint:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 duration:(float)arg3;
- (BOOL)_animationIsPaused;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(NSInteger)arg2;
- (void)_appendWindowsForAccessibilityElements:(id)arg1;
- (id)_autoresizingDescription;
- (void)_axPrintSubviews:(NSInteger)arg1 string:(id)arg2;
- (id)_axSubviews;
- (struct CGColor { }*)_backgroundCGColor;
- (id)_backgroundColor;
- (BOOL)_becomeFirstResponderWhenPossible;
- (BOOL)_canDrawContent;
- (BOOL)_canHandleStatusBarMouseEvents:(struct __GSEvent { }*)arg1;
- (BOOL)_canStartRotationFromEvent:(struct __GSEvent { }*)arg1;
- (BOOL)_canStartZoomFromEvent:(struct __GSEvent { }*)arg1;
- (BOOL)_cancelTapDelegateTracking;
- (void)_clearAnimationFilters;
- (void)_clearBecomeFirstResponderWhenCapable;
- (void)_clearBecomeFirstResponderWhenCapableOnSubtree;
- (void)_collectKeyViews:(id)arg1;
- (struct CGPoint { float x1; float x2; })_constrainedScrollPoint:(struct CGPoint { float x1; float x2; })arg1 contentSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)_containedInAbsoluteResponderChain;
- (NSInteger)_containerStyle;
- (id)_containingScrollView;
- (struct CGPoint { float x1; float x2; })_convertOffset:(struct CGPoint { float x1; float x2; })arg1 fromView:(id)arg2;
- (struct CGPoint { float x1; float x2; })_convertOffset:(struct CGPoint { float x1; float x2; })arg1 toView:(id)arg2;
- (void*)_createIOSurfaceWithPadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_createLayerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)_depthFirstCompare:(id)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_didRemoveSubview:(id)arg1;
- (void)_didScroll;
- (BOOL)_doesViewControllerExistForAncestorOfView:(id)arg1;
- (void)_enableLayerKitPatternDrawing:(BOOL)arg1;
- (id)_enclosingScrollableScrollerIncludingSelf;
- (id)_enclosingScrollerIncludingSelf;
- (id)_findFirstSubviewWantingToBecomeFirstResponder;
- (id)_firstDescendantOfKind:(Class)arg1;
- (void)_gestureChanged:(NSInteger)arg1 event:(struct __GSEvent { }*)arg2;
- (void)_gestureEnded:(struct __GSEvent { }*)arg1;
- (id)_gestureInfo;
- (id)_gestureRecognizers;
- (id)_gestureTargetHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)_interceptEvent:(id)arg1;
- (id)_interceptMouseEvent:(struct __GSEvent { }*)arg1;
- (float)_internalScaleForScale:(float)arg1;
- (void)_invalidateLayerContents;
- (void)_invalidateSubviewCache;
- (BOOL)_isAncestorOfFirstResponder;
- (BOOL)_isChargeEnabled;
- (BOOL)_isInAWindow;
- (BOOL)_isRootForKeyResponderCycle;
- (BOOL)_isRubberBanding;
- (BOOL)_isScrollingEnabled;
- (id)_layer;
- (void)_layoutSublayersOfLayer:(id)arg1;
- (struct CGSize { float x1; float x2; })_mainScreenSizeForCurrentOrientation;
- (void)_makeSubtreePerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 copySublayers:(BOOL)arg4;
- (void)_makeSubtreePerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)_mapKit_mapView;
- (NSUInteger)_mapkit_countOfSet:(id)arg1 minusSubset:(id)arg2;
- (id)_mapkit_currentLayer;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })_mapkit_doubleFrame;
- (float)_minimumZoomScaleDelta;
- (void)_mouseDown:(struct __GSEvent { }*)arg1;
- (void)_mouseDragged:(struct __GSEvent { }*)arg1;
- (void)_mouseUp:(struct __GSEvent { }*)arg1;
- (void)_movedToFront;
- (NSInteger)_navBarCompareGeometry:(id)arg1;
- (id)_nextKeyResponder;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_postMovedFromSuperview:(id)arg1;
- (id)_previousKeyResponder;
- (void)_promoteDescendantToFirstResponderIfNecessary;
- (void)_removeAllAnimations:(BOOL)arg1;
- (void)_removeFirstResponderFromSubtree;
- (void)_renderSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)_resetZoomingWithEvent:(struct __GSEvent { }*)arg1;
- (id)_rootForKeyResponderCycle;
- (void)_rotateFromEvent:(struct __GSEvent { }*)arg1;
- (void)_rotateToDegrees:(float)arg1 duration:(float)arg2 event:(struct __GSEvent { }*)arg3;
- (float)_rubberBandScaleForScale:(float)arg1;
- (void)_rubberbandZoomToEvent:(struct __GSEvent { }*)arg1 scale:(float)arg2;
- (float)_scaleForInternalScale:(float)arg1;
- (id)_scriptingInfo;
- (struct CGPoint { float x1; float x2; })_scrollPointForPoint:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 constrain:(BOOL)arg3 snapToEdge:(BOOL)arg4;
- (id)_scroller;
- (struct CGSize { float x1; float x2; })_scrollerContentSize;
- (void)_setAlwaysScaleContent:(BOOL)arg1;
- (void)_setBackgroundCGColor:(struct CGColor { }*)arg1;
- (void)_setBackgroundColor:(id)arg1;
- (void)_setChargeEnabled:(BOOL)arg1;
- (void)_setContentImage:(id)arg1;
- (void)_setContentsTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)_setForwardedByExpandableView:(BOOL)arg1;
- (void)_setGestureInfoZoomScale:(float)arg1;
- (void)_setInterceptMouseEvent:(BOOL)arg1;
- (void)_setIsAncestorOfFirstResponder:(BOOL)arg1;
- (void)_setRotationAnimationProgress:(id)arg1;
- (void)_setShouldRasterize:(BOOL)arg1;
- (void)_setViewDelegate:(id)arg1;
- (void)_setZoomAnimationProgress:(id)arg1;
- (void)_setZoomScale:(float)arg1 duration:(double)arg2;
- (void)_shiftFrameXOriginBy:(float)arg1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (BOOL)_shouldResignFirstResponderWithInteractionDisabled;
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;
- (void)_startGesture:(NSInteger)arg1 event:(struct __GSEvent { }*)arg2;
- (BOOL)_startRotationFromEvent:(struct __GSEvent { }*)arg1;
- (BOOL)_startZoomFromEvent:(struct __GSEvent { }*)arg1;
- (void)_stopGesture:(NSInteger)arg1 event:(struct __GSEvent { }*)arg2;
- (void)_stopRotationFromEvent:(struct __GSEvent { }*)arg1;
- (void)_stopZoomFromEvent:(struct __GSEvent { }*)arg1;
- (NSInteger)_style;
- (BOOL)_subclassImplementsDrawRect;
- (void)_subscribeToScrollNotificationsIfNecessary:(id)arg1;
- (id)_syntheticTouch;
- (id)_syntheticUIEventWithGSEvent:(struct __GSEvent { }*)arg1 touchPhase:(NSInteger)arg2;
- (NSInteger)_topToBottomLeftToRightViewCompare:(id)arg1;
- (void)_unsubscribeToScrollNotificationsIfNecessary:(id)arg1;
- (void)_updateNeedsDisplayOnBoundsChange;
- (BOOL)_usesDifferentHitTestForGestures;
- (id)_viewDelegate;
- (id)_viewIndexPath;
- (void)_willMoveToWindow:(id)arg1 withAncestorView:(id)arg2;
- (void)_willMoveToWindow:(id)arg1;
- (id)_window;
- (float)_zoomAnimationDurationForScale:(float)arg1;
- (float)_zoomAnimationProgress;
- (float)_zoomScale;
- (void)_zoomToEvent:(struct __GSEvent { }*)arg1 scale:(float)arg2 animate:(BOOL)arg3 constrainScrollPoint:(BOOL)arg4;
- (void)_zoomToScale:(float)arg1 event:(struct __GSEvent { }*)arg2;
- (void)_zoomToScrollPoint:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 duration:(float)arg3 event:(struct __GSEvent { }*)arg4;
- (void)_zoomToWindowPoint:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 duration:(float)arg3 constrainScrollPoint:(BOOL)arg4 event:(struct __GSEvent { }*)arg5;
- (BOOL)_zoomWithEvent:(struct __GSEvent { }*)arg1;
- (id)abColorForProperty:(id)arg1 variety:(id)arg2 orientation:(NSInteger)arg3;
- (id)abColorForProperty:(id)arg1 variety:(id)arg2;
- (float)abFloatForProperty:(id)arg1 variety:(id)arg2 orientation:(NSInteger)arg3;
- (float)abFloatForProperty:(id)arg1 variety:(id)arg2;
- (id)abFontForProperty:(id)arg1 variety:(id)arg2 orientation:(NSInteger)arg3;
- (id)abFontForProperty:(id)arg1 variety:(id)arg2;
- (id)abIndexPathOfSubview:(id)arg1;
- (struct CGSize { float x1; float x2; })abSizeForProperty:(id)arg1 variety:(id)arg2 orientation:(NSInteger)arg3;
- (struct CGSize { float x1; float x2; })abSizeForProperty:(id)arg1 variety:(id)arg2;
- (id)abSubviewAtIndexPath:(id)arg1;
- (NSInteger)accessibilityCompareGeometry:(id)arg1;
- (id)accessibilityContainer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (BOOL)accessibilityIsWindow;
- (unsigned long long)accessibilityTraits;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addGestureRecognizer:(id)arg1;
- (void)addSubview:(id)arg1;
- (float)alpha;
- (void)animator:(id)arg1 startAnimation:(id)arg2;
- (void)animator:(id)arg1 stopAnimation:(id)arg2;
- (BOOL)autoresizesSubviews;
- (NSUInteger)autoresizingMask;
- (id)backgroundColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)bringSubviewToFront:(id)arg1;
- (BOOL)canHandleGestures;
- (BOOL)canHandleSwipes;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (struct CGPoint { float x1; float x2; })center;
- (void)centerSubviewInBounds:(id)arg1;
- (float)charge;
- (BOOL)clearsContextBeforeDrawing;
- (BOOL)clipsToBounds;
- (NSInteger)compareTextEffectsOrdering:(id)arg1;
- (BOOL)containsView:(id)arg1;
- (NSInteger)contentMode;
- (float)contentScaleFactor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentStretch;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromView:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (struct CGSize { float x1; float x2; })convertSize:(struct CGSize { float x1; float x2; })arg1 fromView:(id)arg2;
- (struct CGSize { float x1; float x2; })convertSize:(struct CGSize { float x1; float x2; })arg1 toView:(id)arg2;
- (struct CGImage { }*)createSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)deferredBecomeFirstResponder;
- (BOOL)deliversTouchesForGesturesToSuperview;
- (id)description;
- (void)didAddSubview:(id)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)enabledGestures;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)endEditing:(BOOL)arg1;
- (void)exchangeSubviewAtIndex:(NSInteger)arg1 withSubviewAtIndex:(NSInteger)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })extent;
- (void)fadeToAlpha:(float)arg1 withDuration:(float)arg2;
- (id)findSubviewWithClass:(Class)arg1;
- (id)firstLabelSubview;
- (id)firstScrollViewDescendant;
- (void)forceDisplayIfNeeded;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (struct CGPoint { float x1; float x2; })frameOrigin;
- (void)gestureChanged:(struct __GSEvent { }*)arg1;
- (id)gestureDelegate;
- (void)gestureEnded:(struct __GSEvent { }*)arg1;
- (id)gestureRecognizers;
- (void)gestureStarted:(struct __GSEvent { }*)arg1;
- (BOOL)gesturesEnabled;
- (float)height;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)ignoresMouseEvents;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1;
- (void)insertSubview:(id)arg1 above:(id)arg2;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)insertSubview:(id)arg1 atIndex:(NSInteger)arg2;
- (void)insertSubview:(id)arg1 below:(id)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (BOOL)isAccessibilityElement;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isDescendantOfView:(id)arg1;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isEnabled;
- (BOOL)isExclusiveTouch;
- (BOOL)isHidden;
- (BOOL)isHiddenOrHasHiddenAncestor;
- (BOOL)isMultipleTouchEnabled;
- (BOOL)isOpaque;
- (BOOL)isUserInteractionEnabled;
- (id)layer;
- (void)layoutBelowIfNeeded;
- (void)layoutIfNeeded;
- (void)layoutSubviews;
- (void)movedFromSuperview:(id)arg1;
- (void)movedFromWindow:(id)arg1;
- (void)movedToSuperview:(id)arg1;
- (void)movedToWindow:(id)arg1;
- (BOOL)needsDisplay;
- (BOOL)needsDisplayOnBoundsChange;
- (BOOL)needsWebDocumentViewEventsDirectly;
- (struct CGImage { }*)newSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)nextResponder;
- (struct CGPoint { float x1; float x2; })origin;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (struct CGPoint { float x1; float x2; })position;
- (id)recursiveDescription;
- (void)recursivelyForceDisplayIfNeeded;
- (void)reduceWidth:(float)arg1;
- (void)removeAllGestureRecognizers;
- (void)removeFromSuperview;
- (void)removeGestureRecognizer:(id)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize { float x1; float x2; })arg1;
- (void)resizeWithOldSuperviewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)rotateToDegrees:(float)arg1;
- (float)rotationDegrees;
- (id)scriptingInfoWithChildren;
- (void)sendSubviewToBack:(id)arg1;
- (void)setAlpha:(float)arg1;
- (void)setAutoresizesSubviews:(BOOL)arg1;
- (void)setAutoresizingMask:(NSUInteger)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCharge:(float)arg1;
- (void)setClearsContext:(BOOL)arg1;
- (void)setClearsContextBeforeDrawing:(BOOL)arg1;
- (void)setClipsSubviews:(BOOL)arg1;
- (void)setClipsToBounds:(BOOL)arg1;
- (void)setContentMode:(NSInteger)arg1;
- (void)setContentScaleFactor:(float)arg1;
- (void)setContentStretch:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentsPosition:(NSInteger)arg1;
- (void)setDeliversTouchesForGesturesToSuperview:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setEnabledGestures:(NSInteger)arg1;
- (void)setExclusiveTouch:(BOOL)arg1;
- (void)setFixedBackgroundPattern:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forFields:(NSInteger)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrameOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)setGestureDelegate:(id)arg1;
- (void)setGestureRecognizers:(id)arg1;
- (void)setGesturesEnabled:(BOOL)arg1;
- (void)setHeight:(float)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setMultipleTouchEnabled:(BOOL)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplayOnBoundsChange:(BOOL)arg1;
- (void)setNeedsLayout;
- (void)setOpaque:(BOOL)arg1;
- (void)setOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setRotationBy:(float)arg1;
- (void)setRotationDegrees:(float)arg1 duration:(double)arg2;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSkipsSubviewEnumeration:(BOOL)arg1;
- (void)setTag:(NSInteger)arg1;
- (void)setTapDelegate:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)setValue:(id)arg1 forGestureAttribute:(NSInteger)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setViewFrameOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)setWidth:(float)arg1;
- (void)setX:(float)arg1;
- (void)setY:(float)arg1;
- (struct CGSize { float x1; float x2; })size;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)sizeToFit;
- (BOOL)skipsSubviewEnumeration;
- (void)startHeartbeat:(SEL)arg1 inRunLoopMode:(id)arg2;
- (NSInteger)stateForGestureType:(NSInteger)arg1;
- (void)stopHeartbeat:(SEL)arg1;
- (id)subviews;
- (id)superview;
- (id)superviewOfClass:(Class)arg1;
- (NSInteger)swipe:(NSInteger)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (NSInteger)tag;
- (id)tapDelegate;
- (NSInteger)textEffectsVisibilityLevel;
- (NSInteger)textEffectsVisibilityLevelWhenKey;
- (id)textInputView;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (BOOL)useBlockyMagnificationInClassic;
- (id)valueForGestureAttribute:(NSInteger)arg1;
- (void)viewDidMoveToSuperview;
- (struct CGPoint { float x1; float x2; })viewFrameOrigin;
- (void)viewWillMoveToSuperview:(id)arg1;
- (id)viewWithTag:(NSInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleBounds;
- (float)width;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (id)window;
- (float)x;
- (float)y;
- (void)zoomToScale:(float)arg1;

@end
