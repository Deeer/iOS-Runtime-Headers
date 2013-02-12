/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSDictionary, NSMutableArray, UICalloutBarOverlay;

@interface UICalloutBar : UIView {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    NSInteger m_arrowDirection;
    NSMutableArray *m_buttons;
    } m_controlFrame;
    id m_delegate;
    NSArray *m_extraItems;
    BOOL m_fadeAfterCommand;
    double m_fadedTime;
    UICalloutBarOverlay *m_overlay;
    } m_pointAboveControls;
    } m_pointBelowControls;
    NSMutableArray *m_rectsToEvade;
    NSDictionary *m_replacementDictionary;
    NSArray *m_replacements;
    id m_responderTarget;
    BOOL m_shouldAppear;
    BOOL m_showExtras;
    NSInteger m_targetDirection;
    } m_targetPoint;
    } m_targetRect;
    BOOL m_updateVisibleItems;
}

@property(copy) NSArray *extraItems;
@property(readonly) NSArray *rectsToEvade;
@property(copy) NSDictionary *replacementDictionary;
@property(copy) NSArray *replacements;
@property UIResponder *responderTarget;
@property NSInteger arrowDirection;
@property CGRect controlFrame;
@property id delegate;
@property CGPoint pointAboveControls;
@property CGPoint pointBelowControls;
@property NSInteger targetDirection;
@property CGPoint targetPoint;
@property CGRect targetRect;
@property(readonly) BOOL visible;

+ (void)_initializeSafeCategory;
+ (void)_releaseSharedInstance;
+ (id)activeCalloutBar;
+ (void)fadeSharedCalloutBar;
+ (void)hideSharedCalloutBar;
+ (id)sharedCalloutBar;
+ (BOOL)sharedCalloutBarIsVisible;

- (void)_showMoreItems:(id)arg1;
- (BOOL)_updateVisibleItems;
- (void)addRectToEvade:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)appear;
- (void)appearAnimationDidStop:(id)arg1 finished:(id)arg2;
- (NSInteger)arrowDirection;
- (void)buttonHighlighted:(id)arg1 highlighted:(BOOL)arg2;
- (void)buttonPressed:(id)arg1;
- (BOOL)calculateControlFrameForPointAboveControls:(float)arg1;
- (BOOL)calculateControlFrameForPointBelowControls:(float)arg1;
- (BOOL)calculateControlFrameInsideTargetRect:(float)arg1;
- (void)clearEvadeRects;
- (void)clearReplacements;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })controlFrame;
- (void)dealloc;
- (id)delegate;
- (void)expandAfterAlertOrBecomeActive:(id)arg1;
- (id)extraItems;
- (void)fade;
- (void)flattenForAlertOrResignActive:(id)arg1;
- (BOOL)hasReplacements;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })pointAboveControls;
- (struct CGPoint { float x1; float x2; })pointBelowControls;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)positionIsValid;
- (BOOL)recentlyFaded;
- (BOOL)rectClear:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)rectsToEvade;
- (void)removeFromSuperview;
- (id)replacementDictionary;
- (id)replacements;
- (id)responderTarget;
- (void)setArrowDirection:(NSInteger)arg1;
- (void)setControlFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtraItems:(id)arg1;
- (void)setPointAboveControls:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPointBelowControls:(struct CGPoint { float x1; float x2; })arg1;
- (void)setReplacementDictionary:(id)arg1;
- (void)setReplacements:(id)arg1;
- (void)setResponderTarget:(id)arg1;
- (void)setTargetDirection:(NSInteger)arg1;
- (void)setTargetPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 arrowDirection:(NSInteger)arg2;
- (void)setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 pointBelowControls:(struct CGPoint { float x1; float x2; })arg2 pointAboveControls:(struct CGPoint { float x1; float x2; })arg3;
- (void)setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)targetDirection;
- (id)targetForAction:(SEL)arg1;
- (struct CGPoint { float x1; float x2; })targetPoint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })targetRect;
- (NSInteger)textEffectsVisibilityLevel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textEffectsWindowBoundsWithoutStatusBar;
- (BOOL)visible;
- (id)visibleButtons;
- (void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2;

@end
