/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIGestureRecognizerDelegate>, NSMutableArray, NSMutableSet, UIEvent, UIView;

@interface UIGestureRecognizer : NSObject {
    struct { 
        unsigned int delegateShouldBegin : 1; 
        unsigned int delegateCanPrevent : 1; 
        unsigned int delegateCanBePrevented : 1; 
        unsigned int delegateShouldRecognizeSimultaneously : 1; 
        unsigned int delegateShouldReceiveTouch : 1; 
        unsigned int delegateFailed : 1; 
        unsigned int cancelsTouchesInView : 1; 
        unsigned int delaysTouchesBegan : 1; 
        unsigned int delaysTouchesEnded : 1; 
        unsigned int notExclusive : 1; 
        unsigned int disabled : 1; 
        unsigned int dirty : 1; 
        unsigned int delivered : 1; 
        unsigned int continuous : 1; 
        unsigned int requiresDelayedBegan : 1; 
    NSMutableArray *_delayedTouches;
    <UIGestureRecognizerDelegate> *_delegate;
    NSMutableSet *_failureDependents;
    NSMutableSet *_failureRequirements;
    NSMutableSet *_friends;
    } _gestureFlags;
    NSInteger _state;
    NSMutableArray *_targets;
    NSMutableSet *_unfailedGestures;
    NSMutableSet *_unfailedGesturesForReset;
    UIEvent *_updateEvent;
    UIView *_view;
}

@property <UIGestureRecognizerDelegate> *delegate;
@property(readonly) UIView *view;
@property BOOL cancelsTouchesInView;
@property BOOL delaysTouchesBegan;
@property BOOL delaysTouchesEnded;
@property(getter=isEnabled) BOOL enabled;
@property(readonly) NSInteger state;

- (id)_activeTouchesForEvent:(id)arg1;
- (void)_addFailureDependent:(id)arg1;
- (void)_addFriendGesture:(id)arg1;
- (void)_addUnfailedGestureForReset:(id)arg1;
- (BOOL)_affectedByGesture:(id)arg1;
- (void)_appendDescription:(id)arg1 forDependencies:(id)arg2 toString:(id)arg3 atLevel:(NSInteger)arg4;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(NSInteger)arg2 includingDependencies:(BOOL)arg3;
- (void)_appendSubclassDescription:(id)arg1;
- (id)_briefDescription;
- (BOOL)_canFinishDelayedTouch:(id)arg1;
- (struct CGPoint { float x1; float x2; })_centroidOfTouches:(id)arg1 excludingEnded:(BOOL)arg2;
- (void)_checkExclusivity;
- (void)_clearDelayedTouches;
- (void)_clearUpdateTimer;
- (void)_delayTouch:(id)arg1 forEvent:(id)arg2;
- (id)_delayedTouchForTouch:(id)arg1;
- (void)_delayedUpdateGesture;
- (BOOL)_delegateCanPreventGestureRecognizer:(id)arg1;
- (BOOL)_delegateShouldReceiveTouch:(id)arg1;
- (NSInteger)_depthFirstViewCompare:(id)arg1;
- (void)_enqueueDelayedTouchToSend:(id)arg1;
- (void)_enqueueDelayedTouchesToSend;
- (void)_invalidate;
- (BOOL)_isDelayingTouch:(id)arg1;
- (BOOL)_isDirty;
- (BOOL)_isExcludedFromGestures:(id)arg1;
- (BOOL)_isFriendWithGesture:(id)arg1;
- (BOOL)_isRecognized;
- (BOOL)_isWaitingForGesturesToFail;
- (void)_queueForResetIfFinished;
- (void)_relatedGestureFinished:(id)arg1 withEvent:(id)arg2;
- (void)_relatedGestureRecognizer:(id)arg1 wasEnabled:(BOOL)arg2;
- (void)_relatedGestureReleased:(id)arg1;
- (void)_removeFailureDependent:(id)arg1;
- (void)_resetGestureRecognizer;
- (void)_resetIfFinished;
- (void)_setDirty;
- (void)_touchWasCancelled:(id)arg1;
- (void)_updateGestureStateWithEvent:(id)arg1 afterDelay:(BOOL)arg2;
- (void)_updateGestureWithEvent:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (BOOL)cancelsTouchesInView;
- (void)dealloc;
- (BOOL)delaysTouchesBegan;
- (BOOL)delaysTouchesEnded;
- (id)delegate;
- (id)description;
- (void)ignoreTouch:(id)arg1 forEvent:(id)arg2;
- (id)init;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)isEnabled;
- (BOOL)isExclusive;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (struct CGPoint { float x1; float x2; })locationOfTouch:(NSUInteger)arg1 inView:(id)arg2;
- (NSUInteger)numberOfTouches;
- (void)removeFailureRequirement:(id)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (void)requireOtherGestureToFail:(id)arg1;
- (void)reset;
- (void)setCancelsTouchesInView:(BOOL)arg1;
- (void)setDelaysTouchesBegan:(BOOL)arg1;
- (void)setDelaysTouchesEnded:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setExclusive:(BOOL)arg1;
- (void)setState:(NSInteger)arg1;
- (void)setView:(id)arg1;
- (NSInteger)state;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)view;

@end
