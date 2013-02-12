/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIImage, UIView;

@interface UIScrubberControl : UIOldSliderControl {
    union { 
        UIImage *image; 
        id view; 
        /* Warning: Unrecognized filer type: ')' using 'void*' */ void*UIView; 
    struct CGPoint { 
        float x; 
        float y; 
    unsigned int _didDrag : 1;
    unsigned int _sentScrubbingStart : 1;
    unsigned int _autoSizesToFitDuration : 1;
    unsigned int _remainingIsDuration : 1;
    unsigned int _delegateDidEnterScrubbingState : 1;
    unsigned int _delegateDidChangeScrubValue : 1;
    unsigned int _delegateShouldBeginScrubbing : 1;
    unsigned int _endingTracking : 1;
    unsigned int _showKnob : 1;
    unsigned int _largeKnob : 1;
    unsigned int _rightCapIsDownloadCap : 1;
    unsigned int _requireMomentaryDelay : 1;
    unsigned int _showFullWidthComponents : 1;
    unsigned int _alwaysShowAllComponentsForDuration : 1;
    unsigned int _timeLayoutSkippedLayout : 1;
    unsigned int _timeLayoutSkippedForcedLayout : 1;
    unsigned int _showTimeCentered : 1;
    unsigned int _leftCapIsDownloadCap : 1;
    unsigned int _allowsAnyValue : 1;
    unsigned int _layoutTimeParts : 2;
    unsigned int _unused : 3;
    unsigned int _timeLayoutDisabledCount : 7;
    id _delegate;
    double _duration;
    UIView *_elapsedTimeView;
    float _lastDisplayedWidth;
    } _lastUpdatedPoint;
    float _maxTrackWidth;
    UIView *_remainingTimeView;
    } _sliderAvailableFill;
    double _trackingStartTime;
    float _valueAvailable;
}

+ (void)_initializeSafeCategory;
+ (BOOL)allowLayeredFillForKnob;

- (BOOL)_notAllValueAvailable;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectOfTrack;
- (void)_resetTimeFrames;
- (void)_sendDelegateDidEnterScrubbingState:(BOOL)arg1;
- (void)_setValue:(float)arg1 andSendAction:(BOOL)arg2;
- (void)_updateAvailableFill;
- (void)_updateTimes:(BOOL)arg1;
- (unsigned long long)accessibilityTraits;
- (BOOL)beginTrackingAt:(struct CGPoint { float x1; float x2; })arg1 withEvent:(struct __GSEvent { }*)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingAt:(struct CGPoint { float x1; float x2; })arg1 previous:(struct CGPoint { float x1; float x2; })arg2 withEvent:(struct __GSEvent { }*)arg3;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createSliderKnobView;
- (void)dealloc;
- (void)disableTimesLayout;
- (void)drawSliderPiece:(NSInteger)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (double)duration;
- (void)enableTimesLayout;
- (void)endTrackingAt:(struct CGPoint { float x1; float x2; })arg1 previous:(struct CGPoint { float x1; float x2; })arg2 withEvent:(struct __GSEvent { }*)arg3;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fillBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)imageForSliderPiece:(NSInteger)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 maxTrackWidth:(float)arg2 showTimes:(BOOL)arg3 knobStyle:(NSInteger)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 maxTrackWidth:(float)arg2 showTimes:(BOOL)arg3 showKnob:(BOOL)arg4;
- (const struct { float x1; float x2; float x3; }*)metrics;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)pointInsideKnob:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInsideKnob:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (double)requiredAutoUpdateDurationForDuration:(double)arg1;
- (float)scrubValue;
- (void)setAllowsAnyValue:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setPinTimeToOutsideEdges:(BOOL)arg1;
- (void)setScrubbingRequiresMomentaryDelay:(BOOL)arg1;
- (void)setShowDuration:(BOOL)arg1;
- (void)setShowFullWidthComponents:(BOOL)arg1;
- (void)setShowTimeCenteredInAvailableArea:(BOOL)arg1;
- (void)setTimeColor:(id)arg1;
- (void)setTimeShadowColor:(id)arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2 animationCurve:(NSInteger)arg3;
- (void)setValueAvailable:(float)arg1;
- (void)sizeToFit;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sliderBounds;

@end
